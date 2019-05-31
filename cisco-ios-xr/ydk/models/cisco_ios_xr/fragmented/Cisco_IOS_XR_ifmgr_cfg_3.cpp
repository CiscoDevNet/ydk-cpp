
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

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::OcHour24OcnReports()
    :
    oc_hour24_ocn_report(this, {"ocn_report"})
{

    yang_name = "oc-hour24-ocn-reports"; yang_parent_name = "oc-hour24-ocn"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::~OcHour24OcnReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<oc_hour24_ocn_report.len(); index++)
    {
        if(oc_hour24_ocn_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::has_operation() const
{
    for (std::size_t index=0; index<oc_hour24_ocn_report.len(); index++)
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oc-hour24-ocn-report")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::OcHour24OcnReport>();
        ent_->parent = this;
        oc_hour24_ocn_report.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : oc_hour24_ocn_report.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    if (is_presence_container) return true;
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
    path_buffer << "oc-hour24-ocn-report";
    ADD_KEY_TOKEN(ocn_report, "ocn-report");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::OcHour24OcnReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ocn_report.is_set || is_set(ocn_report.yfilter)) leaf_name_data.push_back(ocn_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::OcHour24OcnReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnReports::OcHour24OcnReport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    :
    oc_hour24_ocn_threshold(this, {"ocn_threshold"})
{

    yang_name = "oc-hour24-ocn-thresholds"; yang_parent_name = "oc-hour24-ocn"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::~OcHour24OcnThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<oc_hour24_ocn_threshold.len(); index++)
    {
        if(oc_hour24_ocn_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::has_operation() const
{
    for (std::size_t index=0; index<oc_hour24_ocn_threshold.len(); index++)
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oc-hour24-ocn-threshold")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::OcHour24OcnThreshold>();
        ent_->parent = this;
        oc_hour24_ocn_threshold.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : oc_hour24_ocn_threshold.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    ocn_threshold_value{YType::uint32, "ocn-threshold-value"}
{

    yang_name = "oc-hour24-ocn-threshold"; yang_parent_name = "oc-hour24-ocn-thresholds"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::OcHour24OcnThreshold::~OcHour24OcnThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::OcHour24OcnThreshold::has_data() const
{
    if (is_presence_container) return true;
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
    path_buffer << "oc-hour24-ocn-threshold";
    ADD_KEY_TOKEN(ocn_threshold, "ocn-threshold");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::OcHour24OcnThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ocn_threshold.is_set || is_set(ocn_threshold.yfilter)) leaf_name_data.push_back(ocn_threshold.get_name_leafdata());
    if (ocn_threshold_value.is_set || is_set(ocn_threshold_value.yfilter)) leaf_name_data.push_back(ocn_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::OcHour24OcnThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcHour24::OcHour24Ocn::OcHour24OcnThresholds::OcHour24OcnThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::EthernetMinute15()
    :
    minute15_ether(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether>())
{
    minute15_ether->parent = this;

    yang_name = "ethernet-minute15"; yang_parent_name = "performance-management"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::~EthernetMinute15()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::has_data() const
{
    if (is_presence_container) return true;
    return (minute15_ether !=  nullptr && minute15_ether->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::has_operation() const
{
    return is_set(yfilter)
	|| (minute15_ether !=  nullptr && minute15_ether->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-minute15";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15-ether")
    {
        if(minute15_ether == nullptr)
        {
            minute15_ether = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether>();
        }
        return minute15_ether;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(minute15_ether != nullptr)
    {
        _children["minute15-ether"] = minute15_ether;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15-ether")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15Ether()
    :
    minute15_ether_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds>())
    , minute15_ether_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports>())
{
    minute15_ether_thresholds->parent = this;
    minute15_ether_reports->parent = this;

    yang_name = "minute15-ether"; yang_parent_name = "ethernet-minute15"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::~Minute15Ether()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::has_data() const
{
    if (is_presence_container) return true;
    return (minute15_ether_thresholds !=  nullptr && minute15_ether_thresholds->has_data())
	|| (minute15_ether_reports !=  nullptr && minute15_ether_reports->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::has_operation() const
{
    return is_set(yfilter)
	|| (minute15_ether_thresholds !=  nullptr && minute15_ether_thresholds->has_operation())
	|| (minute15_ether_reports !=  nullptr && minute15_ether_reports->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-ether";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15-ether-thresholds")
    {
        if(minute15_ether_thresholds == nullptr)
        {
            minute15_ether_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds>();
        }
        return minute15_ether_thresholds;
    }

    if(child_yang_name == "minute15-ether-reports")
    {
        if(minute15_ether_reports == nullptr)
        {
            minute15_ether_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports>();
        }
        return minute15_ether_reports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(minute15_ether_thresholds != nullptr)
    {
        _children["minute15-ether-thresholds"] = minute15_ether_thresholds;
    }

    if(minute15_ether_reports != nullptr)
    {
        _children["minute15-ether-reports"] = minute15_ether_reports;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15-ether-thresholds" || name == "minute15-ether-reports")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::Minute15EtherThresholds()
    :
    minute15_ether_threshold(this, {"ether_threshold"})
{

    yang_name = "minute15-ether-thresholds"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::~Minute15EtherThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<minute15_ether_threshold.len(); index++)
    {
        if(minute15_ether_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::has_operation() const
{
    for (std::size_t index=0; index<minute15_ether_threshold.len(); index++)
    {
        if(minute15_ether_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-ether-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15-ether-threshold")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::Minute15EtherThreshold>();
        ent_->parent = this;
        minute15_ether_threshold.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : minute15_ether_threshold.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15-ether-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::Minute15EtherThreshold::Minute15EtherThreshold()
    :
    ether_threshold{YType::enumeration, "ether-threshold"},
    ether_threshold_value{YType::uint32, "ether-threshold-value"}
{

    yang_name = "minute15-ether-threshold"; yang_parent_name = "minute15-ether-thresholds"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::Minute15EtherThreshold::~Minute15EtherThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::Minute15EtherThreshold::has_data() const
{
    if (is_presence_container) return true;
    return ether_threshold.is_set
	|| ether_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::Minute15EtherThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ether_threshold.yfilter)
	|| ydk::is_set(ether_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::Minute15EtherThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-ether-threshold";
    ADD_KEY_TOKEN(ether_threshold, "ether-threshold");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::Minute15EtherThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ether_threshold.is_set || is_set(ether_threshold.yfilter)) leaf_name_data.push_back(ether_threshold.get_name_leafdata());
    if (ether_threshold_value.is_set || is_set(ether_threshold_value.yfilter)) leaf_name_data.push_back(ether_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::Minute15EtherThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::Minute15EtherThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::Minute15EtherThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::Minute15EtherThreshold::set_filter(const std::string & value_path, YFilter yfilter)
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

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherThresholds::Minute15EtherThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ether-threshold" || name == "ether-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::Minute15EtherReports()
    :
    minute15_ether_report(this, {"ether_report"})
{

    yang_name = "minute15-ether-reports"; yang_parent_name = "minute15-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::~Minute15EtherReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<minute15_ether_report.len(); index++)
    {
        if(minute15_ether_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::has_operation() const
{
    for (std::size_t index=0; index<minute15_ether_report.len(); index++)
    {
        if(minute15_ether_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-ether-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15-ether-report")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::Minute15EtherReport>();
        ent_->parent = this;
        minute15_ether_report.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : minute15_ether_report.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15-ether-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::Minute15EtherReport::Minute15EtherReport()
    :
    ether_report{YType::enumeration, "ether-report"}
{

    yang_name = "minute15-ether-report"; yang_parent_name = "minute15-ether-reports"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::Minute15EtherReport::~Minute15EtherReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::Minute15EtherReport::has_data() const
{
    if (is_presence_container) return true;
    return ether_report.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::Minute15EtherReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ether_report.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::Minute15EtherReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-ether-report";
    ADD_KEY_TOKEN(ether_report, "ether-report");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::Minute15EtherReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ether_report.is_set || is_set(ether_report.yfilter)) leaf_name_data.push_back(ether_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::Minute15EtherReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::Minute15EtherReport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::Minute15EtherReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ether-report")
    {
        ether_report = value;
        ether_report.value_namespace = name_space;
        ether_report.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::Minute15EtherReport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ether-report")
    {
        ether_report.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetMinute15::Minute15Ether::Minute15EtherReports::Minute15EtherReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ether-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24()
    :
    ho_vc_hour24ho_vc(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc>())
{
    ho_vc_hour24ho_vc->parent = this;

    yang_name = "ho-vc-hour24"; yang_parent_name = "performance-management"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::~HoVcHour24()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::has_data() const
{
    if (is_presence_container) return true;
    return (ho_vc_hour24ho_vc !=  nullptr && ho_vc_hour24ho_vc->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::has_operation() const
{
    return is_set(yfilter)
	|| (ho_vc_hour24ho_vc !=  nullptr && ho_vc_hour24ho_vc->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-hour24";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ho-vc-hour24ho-vc")
    {
        if(ho_vc_hour24ho_vc == nullptr)
        {
            ho_vc_hour24ho_vc = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc>();
        }
        return ho_vc_hour24ho_vc;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ho_vc_hour24ho_vc != nullptr)
    {
        _children["ho-vc-hour24ho-vc"] = ho_vc_hour24ho_vc;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ho-vc-hour24ho-vc")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVc()
    :
    ho_vc_hour24ho_vc_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcReports>())
    , ho_vc_hour24ho_vc_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcThresholds>())
{
    ho_vc_hour24ho_vc_reports->parent = this;
    ho_vc_hour24ho_vc_thresholds->parent = this;

    yang_name = "ho-vc-hour24ho-vc"; yang_parent_name = "ho-vc-hour24"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::~HoVcHour24hoVc()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::has_data() const
{
    if (is_presence_container) return true;
    return (ho_vc_hour24ho_vc_reports !=  nullptr && ho_vc_hour24ho_vc_reports->has_data())
	|| (ho_vc_hour24ho_vc_thresholds !=  nullptr && ho_vc_hour24ho_vc_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::has_operation() const
{
    return is_set(yfilter)
	|| (ho_vc_hour24ho_vc_reports !=  nullptr && ho_vc_hour24ho_vc_reports->has_operation())
	|| (ho_vc_hour24ho_vc_thresholds !=  nullptr && ho_vc_hour24ho_vc_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-hour24ho-vc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ho-vc-hour24ho-vc-reports")
    {
        if(ho_vc_hour24ho_vc_reports == nullptr)
        {
            ho_vc_hour24ho_vc_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcReports>();
        }
        return ho_vc_hour24ho_vc_reports;
    }

    if(child_yang_name == "ho-vc-hour24ho-vc-thresholds")
    {
        if(ho_vc_hour24ho_vc_thresholds == nullptr)
        {
            ho_vc_hour24ho_vc_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcThresholds>();
        }
        return ho_vc_hour24ho_vc_thresholds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ho_vc_hour24ho_vc_reports != nullptr)
    {
        _children["ho-vc-hour24ho-vc-reports"] = ho_vc_hour24ho_vc_reports;
    }

    if(ho_vc_hour24ho_vc_thresholds != nullptr)
    {
        _children["ho-vc-hour24ho-vc-thresholds"] = ho_vc_hour24ho_vc_thresholds;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ho-vc-hour24ho-vc-reports" || name == "ho-vc-hour24ho-vc-thresholds")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcReports::HoVcHour24hoVcReports()
    :
    ho_vc_hour24ho_vc_report(this, {"ho_vc_report"})
{

    yang_name = "ho-vc-hour24ho-vc-reports"; yang_parent_name = "ho-vc-hour24ho-vc"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcReports::~HoVcHour24hoVcReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcReports::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ho_vc_hour24ho_vc_report.len(); index++)
    {
        if(ho_vc_hour24ho_vc_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcReports::has_operation() const
{
    for (std::size_t index=0; index<ho_vc_hour24ho_vc_report.len(); index++)
    {
        if(ho_vc_hour24ho_vc_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-hour24ho-vc-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ho-vc-hour24ho-vc-report")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcReports::HoVcHour24hoVcReport>();
        ent_->parent = this;
        ho_vc_hour24ho_vc_report.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcReports::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ho_vc_hour24ho_vc_report.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ho-vc-hour24ho-vc-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcReports::HoVcHour24hoVcReport::HoVcHour24hoVcReport()
    :
    ho_vc_report{YType::enumeration, "ho-vc-report"},
    enable{YType::enumeration, "enable"}
{

    yang_name = "ho-vc-hour24ho-vc-report"; yang_parent_name = "ho-vc-hour24ho-vc-reports"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcReports::HoVcHour24hoVcReport::~HoVcHour24hoVcReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcReports::HoVcHour24hoVcReport::has_data() const
{
    if (is_presence_container) return true;
    return ho_vc_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcReports::HoVcHour24hoVcReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ho_vc_report.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcReports::HoVcHour24hoVcReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-hour24ho-vc-report";
    ADD_KEY_TOKEN(ho_vc_report, "ho-vc-report");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcReports::HoVcHour24hoVcReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ho_vc_report.is_set || is_set(ho_vc_report.yfilter)) leaf_name_data.push_back(ho_vc_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcReports::HoVcHour24hoVcReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcReports::HoVcHour24hoVcReport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcReports::HoVcHour24hoVcReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcReports::HoVcHour24hoVcReport::set_filter(const std::string & value_path, YFilter yfilter)
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

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcReports::HoVcHour24hoVcReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ho-vc-report" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcThresholds::HoVcHour24hoVcThresholds()
    :
    ho_vc_hour24ho_vc_threshold(this, {"ho_vc_threshold"})
{

    yang_name = "ho-vc-hour24ho-vc-thresholds"; yang_parent_name = "ho-vc-hour24ho-vc"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcThresholds::~HoVcHour24hoVcThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcThresholds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ho_vc_hour24ho_vc_threshold.len(); index++)
    {
        if(ho_vc_hour24ho_vc_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcThresholds::has_operation() const
{
    for (std::size_t index=0; index<ho_vc_hour24ho_vc_threshold.len(); index++)
    {
        if(ho_vc_hour24ho_vc_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-hour24ho-vc-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ho-vc-hour24ho-vc-threshold")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcThresholds::HoVcHour24hoVcThreshold>();
        ent_->parent = this;
        ho_vc_hour24ho_vc_threshold.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ho_vc_hour24ho_vc_threshold.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ho-vc-hour24ho-vc-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcThresholds::HoVcHour24hoVcThreshold::HoVcHour24hoVcThreshold()
    :
    ho_vc_threshold{YType::enumeration, "ho-vc-threshold"},
    ho_vc_threshold_value{YType::uint32, "ho-vc-threshold-value"}
{

    yang_name = "ho-vc-hour24ho-vc-threshold"; yang_parent_name = "ho-vc-hour24ho-vc-thresholds"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcThresholds::HoVcHour24hoVcThreshold::~HoVcHour24hoVcThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcThresholds::HoVcHour24hoVcThreshold::has_data() const
{
    if (is_presence_container) return true;
    return ho_vc_threshold.is_set
	|| ho_vc_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcThresholds::HoVcHour24hoVcThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ho_vc_threshold.yfilter)
	|| ydk::is_set(ho_vc_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcThresholds::HoVcHour24hoVcThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-hour24ho-vc-threshold";
    ADD_KEY_TOKEN(ho_vc_threshold, "ho-vc-threshold");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcThresholds::HoVcHour24hoVcThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ho_vc_threshold.is_set || is_set(ho_vc_threshold.yfilter)) leaf_name_data.push_back(ho_vc_threshold.get_name_leafdata());
    if (ho_vc_threshold_value.is_set || is_set(ho_vc_threshold_value.yfilter)) leaf_name_data.push_back(ho_vc_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcThresholds::HoVcHour24hoVcThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcThresholds::HoVcHour24hoVcThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcThresholds::HoVcHour24hoVcThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcThresholds::HoVcHour24hoVcThreshold::set_filter(const std::string & value_path, YFilter yfilter)
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

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcHour24::HoVcHour24hoVc::HoVcHour24hoVcThresholds::HoVcHour24hoVcThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ho-vc-threshold" || name == "ho-vc-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30()
    :
    second30pcs(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs>())
    , second30fec(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec>())
    , second30_optics(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics>())
    , second30secyif(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif>())
    , second30secyrx(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx>())
    , second30otn(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn>())
    , second30secytx(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx>())
{
    second30pcs->parent = this;
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
    if (is_presence_container) return true;
    return (second30pcs !=  nullptr && second30pcs->has_data())
	|| (second30fec !=  nullptr && second30fec->has_data())
	|| (second30_optics !=  nullptr && second30_optics->has_data())
	|| (second30secyif !=  nullptr && second30secyif->has_data())
	|| (second30secyrx !=  nullptr && second30secyrx->has_data())
	|| (second30otn !=  nullptr && second30otn->has_data())
	|| (second30secytx !=  nullptr && second30secytx->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::has_operation() const
{
    return is_set(yfilter)
	|| (second30pcs !=  nullptr && second30pcs->has_operation())
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "second30pcs")
    {
        if(second30pcs == nullptr)
        {
            second30pcs = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs>();
        }
        return second30pcs;
    }

    if(child_yang_name == "second30fec")
    {
        if(second30fec == nullptr)
        {
            second30fec = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec>();
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
            second30secyif = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif>();
        }
        return second30secyif;
    }

    if(child_yang_name == "second30secyrx")
    {
        if(second30secyrx == nullptr)
        {
            second30secyrx = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx>();
        }
        return second30secyrx;
    }

    if(child_yang_name == "second30otn")
    {
        if(second30otn == nullptr)
        {
            second30otn = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn>();
        }
        return second30otn;
    }

    if(child_yang_name == "second30secytx")
    {
        if(second30secytx == nullptr)
        {
            second30secytx = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx>();
        }
        return second30secytx;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(second30pcs != nullptr)
    {
        _children["second30pcs"] = second30pcs;
    }

    if(second30fec != nullptr)
    {
        _children["second30fec"] = second30fec;
    }

    if(second30_optics != nullptr)
    {
        _children["second30-optics"] = second30_optics;
    }

    if(second30secyif != nullptr)
    {
        _children["second30secyif"] = second30secyif;
    }

    if(second30secyrx != nullptr)
    {
        _children["second30secyrx"] = second30secyrx;
    }

    if(second30otn != nullptr)
    {
        _children["second30otn"] = second30otn;
    }

    if(second30secytx != nullptr)
    {
        _children["second30secytx"] = second30secytx;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second30pcs" || name == "second30fec" || name == "second30-optics" || name == "second30secyif" || name == "second30secyrx" || name == "second30otn" || name == "second30secytx")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcs()
    :
    second30pcs_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsThresholds>())
    , second30pcs_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsReports>())
{
    second30pcs_thresholds->parent = this;
    second30pcs_reports->parent = this;

    yang_name = "second30pcs"; yang_parent_name = "second30"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::~Second30pcs()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::has_data() const
{
    if (is_presence_container) return true;
    return (second30pcs_thresholds !=  nullptr && second30pcs_thresholds->has_data())
	|| (second30pcs_reports !=  nullptr && second30pcs_reports->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::has_operation() const
{
    return is_set(yfilter)
	|| (second30pcs_thresholds !=  nullptr && second30pcs_thresholds->has_operation())
	|| (second30pcs_reports !=  nullptr && second30pcs_reports->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30pcs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "second30pcs-thresholds")
    {
        if(second30pcs_thresholds == nullptr)
        {
            second30pcs_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsThresholds>();
        }
        return second30pcs_thresholds;
    }

    if(child_yang_name == "second30pcs-reports")
    {
        if(second30pcs_reports == nullptr)
        {
            second30pcs_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsReports>();
        }
        return second30pcs_reports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(second30pcs_thresholds != nullptr)
    {
        _children["second30pcs-thresholds"] = second30pcs_thresholds;
    }

    if(second30pcs_reports != nullptr)
    {
        _children["second30pcs-reports"] = second30pcs_reports;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second30pcs-thresholds" || name == "second30pcs-reports")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsThresholds::Second30pcsThresholds()
    :
    second30pcs_threshold(this, {"pcs_threshold"})
{

    yang_name = "second30pcs-thresholds"; yang_parent_name = "second30pcs"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsThresholds::~Second30pcsThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsThresholds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<second30pcs_threshold.len(); index++)
    {
        if(second30pcs_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsThresholds::has_operation() const
{
    for (std::size_t index=0; index<second30pcs_threshold.len(); index++)
    {
        if(second30pcs_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30pcs-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "second30pcs-threshold")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsThresholds::Second30pcsThreshold>();
        ent_->parent = this;
        second30pcs_threshold.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : second30pcs_threshold.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second30pcs-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsThresholds::Second30pcsThreshold::Second30pcsThreshold()
    :
    pcs_threshold{YType::enumeration, "pcs-threshold"},
    pcs_threshold_value{YType::str, "pcs-threshold-value"}
{

    yang_name = "second30pcs-threshold"; yang_parent_name = "second30pcs-thresholds"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsThresholds::Second30pcsThreshold::~Second30pcsThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsThresholds::Second30pcsThreshold::has_data() const
{
    if (is_presence_container) return true;
    return pcs_threshold.is_set
	|| pcs_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsThresholds::Second30pcsThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pcs_threshold.yfilter)
	|| ydk::is_set(pcs_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsThresholds::Second30pcsThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30pcs-threshold";
    ADD_KEY_TOKEN(pcs_threshold, "pcs-threshold");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsThresholds::Second30pcsThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pcs_threshold.is_set || is_set(pcs_threshold.yfilter)) leaf_name_data.push_back(pcs_threshold.get_name_leafdata());
    if (pcs_threshold_value.is_set || is_set(pcs_threshold_value.yfilter)) leaf_name_data.push_back(pcs_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsThresholds::Second30pcsThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsThresholds::Second30pcsThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsThresholds::Second30pcsThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsThresholds::Second30pcsThreshold::set_filter(const std::string & value_path, YFilter yfilter)
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

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsThresholds::Second30pcsThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pcs-threshold" || name == "pcs-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsReports::Second30pcsReports()
    :
    second30pcs_report(this, {"pcs_report"})
{

    yang_name = "second30pcs-reports"; yang_parent_name = "second30pcs"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsReports::~Second30pcsReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsReports::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<second30pcs_report.len(); index++)
    {
        if(second30pcs_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsReports::has_operation() const
{
    for (std::size_t index=0; index<second30pcs_report.len(); index++)
    {
        if(second30pcs_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30pcs-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "second30pcs-report")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsReports::Second30pcsReport>();
        ent_->parent = this;
        second30pcs_report.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsReports::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : second30pcs_report.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second30pcs-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsReports::Second30pcsReport::Second30pcsReport()
    :
    pcs_report{YType::enumeration, "pcs-report"},
    enable{YType::enumeration, "enable"}
{

    yang_name = "second30pcs-report"; yang_parent_name = "second30pcs-reports"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsReports::Second30pcsReport::~Second30pcsReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsReports::Second30pcsReport::has_data() const
{
    if (is_presence_container) return true;
    return pcs_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsReports::Second30pcsReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pcs_report.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsReports::Second30pcsReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30pcs-report";
    ADD_KEY_TOKEN(pcs_report, "pcs-report");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsReports::Second30pcsReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pcs_report.is_set || is_set(pcs_report.yfilter)) leaf_name_data.push_back(pcs_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsReports::Second30pcsReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsReports::Second30pcsReport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsReports::Second30pcsReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsReports::Second30pcsReport::set_filter(const std::string & value_path, YFilter yfilter)
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

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30pcs::Second30pcsReports::Second30pcsReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pcs-report" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fec()
    :
    second30fec_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecThresholds>())
    , second30fec_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecReports>())
{
    second30fec_thresholds->parent = this;
    second30fec_reports->parent = this;

    yang_name = "second30fec"; yang_parent_name = "second30"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::~Second30fec()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::has_data() const
{
    if (is_presence_container) return true;
    return (second30fec_thresholds !=  nullptr && second30fec_thresholds->has_data())
	|| (second30fec_reports !=  nullptr && second30fec_reports->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::has_operation() const
{
    return is_set(yfilter)
	|| (second30fec_thresholds !=  nullptr && second30fec_thresholds->has_operation())
	|| (second30fec_reports !=  nullptr && second30fec_reports->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30fec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "second30fec-thresholds")
    {
        if(second30fec_thresholds == nullptr)
        {
            second30fec_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecThresholds>();
        }
        return second30fec_thresholds;
    }

    if(child_yang_name == "second30fec-reports")
    {
        if(second30fec_reports == nullptr)
        {
            second30fec_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecReports>();
        }
        return second30fec_reports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(second30fec_thresholds != nullptr)
    {
        _children["second30fec-thresholds"] = second30fec_thresholds;
    }

    if(second30fec_reports != nullptr)
    {
        _children["second30fec-reports"] = second30fec_reports;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second30fec-thresholds" || name == "second30fec-reports")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecThresholds::Second30fecThresholds()
    :
    second30fec_threshold(this, {"fec_threshold"})
{

    yang_name = "second30fec-thresholds"; yang_parent_name = "second30fec"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecThresholds::~Second30fecThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecThresholds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<second30fec_threshold.len(); index++)
    {
        if(second30fec_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecThresholds::has_operation() const
{
    for (std::size_t index=0; index<second30fec_threshold.len(); index++)
    {
        if(second30fec_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30fec-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "second30fec-threshold")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecThresholds::Second30fecThreshold>();
        ent_->parent = this;
        second30fec_threshold.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : second30fec_threshold.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second30fec-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecThresholds::Second30fecThreshold::Second30fecThreshold()
    :
    fec_threshold{YType::enumeration, "fec-threshold"},
    fec_threshold_value{YType::str, "fec-threshold-value"}
{

    yang_name = "second30fec-threshold"; yang_parent_name = "second30fec-thresholds"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecThresholds::Second30fecThreshold::~Second30fecThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecThresholds::Second30fecThreshold::has_data() const
{
    if (is_presence_container) return true;
    return fec_threshold.is_set
	|| fec_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecThresholds::Second30fecThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_threshold.yfilter)
	|| ydk::is_set(fec_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecThresholds::Second30fecThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30fec-threshold";
    ADD_KEY_TOKEN(fec_threshold, "fec-threshold");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecThresholds::Second30fecThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_threshold.is_set || is_set(fec_threshold.yfilter)) leaf_name_data.push_back(fec_threshold.get_name_leafdata());
    if (fec_threshold_value.is_set || is_set(fec_threshold_value.yfilter)) leaf_name_data.push_back(fec_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecThresholds::Second30fecThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecThresholds::Second30fecThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecThresholds::Second30fecThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecThresholds::Second30fecThreshold::set_filter(const std::string & value_path, YFilter yfilter)
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

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecThresholds::Second30fecThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-threshold" || name == "fec-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecReports::Second30fecReports()
    :
    second30fec_report(this, {"fec_report"})
{

    yang_name = "second30fec-reports"; yang_parent_name = "second30fec"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecReports::~Second30fecReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecReports::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<second30fec_report.len(); index++)
    {
        if(second30fec_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecReports::has_operation() const
{
    for (std::size_t index=0; index<second30fec_report.len(); index++)
    {
        if(second30fec_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30fec-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "second30fec-report")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecReports::Second30fecReport>();
        ent_->parent = this;
        second30fec_report.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecReports::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : second30fec_report.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second30fec-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecReports::Second30fecReport::Second30fecReport()
    :
    fec_report{YType::enumeration, "fec-report"},
    enable{YType::enumeration, "enable"}
{

    yang_name = "second30fec-report"; yang_parent_name = "second30fec-reports"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecReports::Second30fecReport::~Second30fecReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecReports::Second30fecReport::has_data() const
{
    if (is_presence_container) return true;
    return fec_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecReports::Second30fecReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_report.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecReports::Second30fecReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30fec-report";
    ADD_KEY_TOKEN(fec_report, "fec-report");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecReports::Second30fecReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_report.is_set || is_set(fec_report.yfilter)) leaf_name_data.push_back(fec_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecReports::Second30fecReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecReports::Second30fecReport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecReports::Second30fecReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecReports::Second30fecReport::set_filter(const std::string & value_path, YFilter yfilter)
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

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30fec::Second30fecReports::Second30fecReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-report" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30Optics()
    :
    second30_optics_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports>())
    , second30_optics_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds>())
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(second30_optics_reports != nullptr)
    {
        _children["second30-optics-reports"] = second30_optics_reports;
    }

    if(second30_optics_thresholds != nullptr)
    {
        _children["second30-optics-thresholds"] = second30_optics_thresholds;
    }

    return _children;
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
    :
    second30_optics_report(this, {"optics_report"})
{

    yang_name = "second30-optics-reports"; yang_parent_name = "second30-optics"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports::~Second30OpticsReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<second30_optics_report.len(); index++)
    {
        if(second30_optics_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports::has_operation() const
{
    for (std::size_t index=0; index<second30_optics_report.len(); index++)
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "second30-optics-report")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports::Second30OpticsReport>();
        ent_->parent = this;
        second30_optics_report.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : second30_optics_report.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    if (is_presence_container) return true;
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
    path_buffer << "second30-optics-report";
    ADD_KEY_TOKEN(optics_report, "optics-report");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports::Second30OpticsReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (optics_report.is_set || is_set(optics_report.yfilter)) leaf_name_data.push_back(optics_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports::Second30OpticsReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsReports::Second30OpticsReport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    :
    second30_optics_threshold(this, {"optics_threshold"})
{

    yang_name = "second30-optics-thresholds"; yang_parent_name = "second30-optics"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::~Second30OpticsThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<second30_optics_threshold.len(); index++)
    {
        if(second30_optics_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::has_operation() const
{
    for (std::size_t index=0; index<second30_optics_threshold.len(); index++)
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "second30-optics-threshold")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::Second30OpticsThreshold>();
        ent_->parent = this;
        second30_optics_threshold.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : second30_optics_threshold.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    dbm{YType::uint32, "dbm"}
{

    yang_name = "second30-optics-threshold"; yang_parent_name = "second30-optics-thresholds"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::Second30OpticsThreshold::~Second30OpticsThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::Second30OpticsThreshold::has_data() const
{
    if (is_presence_container) return true;
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
    path_buffer << "second30-optics-threshold";
    ADD_KEY_TOKEN(optics_threshold, "optics-threshold");
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::Second30OpticsThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30Optics::Second30OpticsThresholds::Second30OpticsThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyif()
    :
    second30secyif_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifThresholds>())
    , second30secyif_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifReports>())
{
    second30secyif_thresholds->parent = this;
    second30secyif_reports->parent = this;

    yang_name = "second30secyif"; yang_parent_name = "second30"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::~Second30secyif()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::has_data() const
{
    if (is_presence_container) return true;
    return (second30secyif_thresholds !=  nullptr && second30secyif_thresholds->has_data())
	|| (second30secyif_reports !=  nullptr && second30secyif_reports->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::has_operation() const
{
    return is_set(yfilter)
	|| (second30secyif_thresholds !=  nullptr && second30secyif_thresholds->has_operation())
	|| (second30secyif_reports !=  nullptr && second30secyif_reports->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30secyif";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "second30secyif-thresholds")
    {
        if(second30secyif_thresholds == nullptr)
        {
            second30secyif_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifThresholds>();
        }
        return second30secyif_thresholds;
    }

    if(child_yang_name == "second30secyif-reports")
    {
        if(second30secyif_reports == nullptr)
        {
            second30secyif_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifReports>();
        }
        return second30secyif_reports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(second30secyif_thresholds != nullptr)
    {
        _children["second30secyif-thresholds"] = second30secyif_thresholds;
    }

    if(second30secyif_reports != nullptr)
    {
        _children["second30secyif-reports"] = second30secyif_reports;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second30secyif-thresholds" || name == "second30secyif-reports")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifThresholds::Second30secyifThresholds()
    :
    second30secyif_threshold(this, {"secyif_threshold"})
{

    yang_name = "second30secyif-thresholds"; yang_parent_name = "second30secyif"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifThresholds::~Second30secyifThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifThresholds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<second30secyif_threshold.len(); index++)
    {
        if(second30secyif_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifThresholds::has_operation() const
{
    for (std::size_t index=0; index<second30secyif_threshold.len(); index++)
    {
        if(second30secyif_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30secyif-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "second30secyif-threshold")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifThresholds::Second30secyifThreshold>();
        ent_->parent = this;
        second30secyif_threshold.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : second30secyif_threshold.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second30secyif-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifThresholds::Second30secyifThreshold::Second30secyifThreshold()
    :
    secyif_threshold{YType::enumeration, "secyif-threshold"},
    secyif_threshold_value{YType::uint32, "secyif-threshold-value"}
{

    yang_name = "second30secyif-threshold"; yang_parent_name = "second30secyif-thresholds"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifThresholds::Second30secyifThreshold::~Second30secyifThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifThresholds::Second30secyifThreshold::has_data() const
{
    if (is_presence_container) return true;
    return secyif_threshold.is_set
	|| secyif_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifThresholds::Second30secyifThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(secyif_threshold.yfilter)
	|| ydk::is_set(secyif_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifThresholds::Second30secyifThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30secyif-threshold";
    ADD_KEY_TOKEN(secyif_threshold, "secyif-threshold");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifThresholds::Second30secyifThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (secyif_threshold.is_set || is_set(secyif_threshold.yfilter)) leaf_name_data.push_back(secyif_threshold.get_name_leafdata());
    if (secyif_threshold_value.is_set || is_set(secyif_threshold_value.yfilter)) leaf_name_data.push_back(secyif_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifThresholds::Second30secyifThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifThresholds::Second30secyifThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifThresholds::Second30secyifThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifThresholds::Second30secyifThreshold::set_filter(const std::string & value_path, YFilter yfilter)
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

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifThresholds::Second30secyifThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secyif-threshold" || name == "secyif-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifReports::Second30secyifReports()
    :
    second30secyif_report(this, {"secyif_report"})
{

    yang_name = "second30secyif-reports"; yang_parent_name = "second30secyif"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifReports::~Second30secyifReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifReports::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<second30secyif_report.len(); index++)
    {
        if(second30secyif_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifReports::has_operation() const
{
    for (std::size_t index=0; index<second30secyif_report.len(); index++)
    {
        if(second30secyif_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30secyif-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "second30secyif-report")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifReports::Second30secyifReport>();
        ent_->parent = this;
        second30secyif_report.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifReports::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : second30secyif_report.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second30secyif-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifReports::Second30secyifReport::Second30secyifReport()
    :
    secyif_report{YType::enumeration, "secyif-report"},
    enable{YType::enumeration, "enable"}
{

    yang_name = "second30secyif-report"; yang_parent_name = "second30secyif-reports"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifReports::Second30secyifReport::~Second30secyifReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifReports::Second30secyifReport::has_data() const
{
    if (is_presence_container) return true;
    return secyif_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifReports::Second30secyifReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(secyif_report.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifReports::Second30secyifReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30secyif-report";
    ADD_KEY_TOKEN(secyif_report, "secyif-report");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifReports::Second30secyifReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (secyif_report.is_set || is_set(secyif_report.yfilter)) leaf_name_data.push_back(secyif_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifReports::Second30secyifReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifReports::Second30secyifReport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifReports::Second30secyifReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifReports::Second30secyifReport::set_filter(const std::string & value_path, YFilter yfilter)
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

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyif::Second30secyifReports::Second30secyifReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secyif-report" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrx()
    :
    second30secyrx_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxThresholds>())
    , second30secyrx_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxReports>())
{
    second30secyrx_thresholds->parent = this;
    second30secyrx_reports->parent = this;

    yang_name = "second30secyrx"; yang_parent_name = "second30"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::~Second30secyrx()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::has_data() const
{
    if (is_presence_container) return true;
    return (second30secyrx_thresholds !=  nullptr && second30secyrx_thresholds->has_data())
	|| (second30secyrx_reports !=  nullptr && second30secyrx_reports->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::has_operation() const
{
    return is_set(yfilter)
	|| (second30secyrx_thresholds !=  nullptr && second30secyrx_thresholds->has_operation())
	|| (second30secyrx_reports !=  nullptr && second30secyrx_reports->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30secyrx";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "second30secyrx-thresholds")
    {
        if(second30secyrx_thresholds == nullptr)
        {
            second30secyrx_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxThresholds>();
        }
        return second30secyrx_thresholds;
    }

    if(child_yang_name == "second30secyrx-reports")
    {
        if(second30secyrx_reports == nullptr)
        {
            second30secyrx_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxReports>();
        }
        return second30secyrx_reports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(second30secyrx_thresholds != nullptr)
    {
        _children["second30secyrx-thresholds"] = second30secyrx_thresholds;
    }

    if(second30secyrx_reports != nullptr)
    {
        _children["second30secyrx-reports"] = second30secyrx_reports;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second30secyrx-thresholds" || name == "second30secyrx-reports")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxThresholds::Second30secyrxThresholds()
    :
    second30secyrx_threshold(this, {"secyrx_threshold"})
{

    yang_name = "second30secyrx-thresholds"; yang_parent_name = "second30secyrx"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxThresholds::~Second30secyrxThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxThresholds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<second30secyrx_threshold.len(); index++)
    {
        if(second30secyrx_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxThresholds::has_operation() const
{
    for (std::size_t index=0; index<second30secyrx_threshold.len(); index++)
    {
        if(second30secyrx_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30secyrx-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "second30secyrx-threshold")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxThresholds::Second30secyrxThreshold>();
        ent_->parent = this;
        second30secyrx_threshold.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : second30secyrx_threshold.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second30secyrx-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxThresholds::Second30secyrxThreshold::Second30secyrxThreshold()
    :
    secyrx_threshold{YType::enumeration, "secyrx-threshold"},
    secyrx_threshold_value{YType::uint32, "secyrx-threshold-value"}
{

    yang_name = "second30secyrx-threshold"; yang_parent_name = "second30secyrx-thresholds"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxThresholds::Second30secyrxThreshold::~Second30secyrxThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxThresholds::Second30secyrxThreshold::has_data() const
{
    if (is_presence_container) return true;
    return secyrx_threshold.is_set
	|| secyrx_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxThresholds::Second30secyrxThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(secyrx_threshold.yfilter)
	|| ydk::is_set(secyrx_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxThresholds::Second30secyrxThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30secyrx-threshold";
    ADD_KEY_TOKEN(secyrx_threshold, "secyrx-threshold");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxThresholds::Second30secyrxThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (secyrx_threshold.is_set || is_set(secyrx_threshold.yfilter)) leaf_name_data.push_back(secyrx_threshold.get_name_leafdata());
    if (secyrx_threshold_value.is_set || is_set(secyrx_threshold_value.yfilter)) leaf_name_data.push_back(secyrx_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxThresholds::Second30secyrxThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxThresholds::Second30secyrxThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxThresholds::Second30secyrxThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxThresholds::Second30secyrxThreshold::set_filter(const std::string & value_path, YFilter yfilter)
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

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxThresholds::Second30secyrxThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secyrx-threshold" || name == "secyrx-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxReports::Second30secyrxReports()
    :
    second30secyrx_report(this, {"secyrx_report"})
{

    yang_name = "second30secyrx-reports"; yang_parent_name = "second30secyrx"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxReports::~Second30secyrxReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxReports::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<second30secyrx_report.len(); index++)
    {
        if(second30secyrx_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxReports::has_operation() const
{
    for (std::size_t index=0; index<second30secyrx_report.len(); index++)
    {
        if(second30secyrx_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30secyrx-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "second30secyrx-report")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxReports::Second30secyrxReport>();
        ent_->parent = this;
        second30secyrx_report.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxReports::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : second30secyrx_report.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second30secyrx-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxReports::Second30secyrxReport::Second30secyrxReport()
    :
    secyrx_report{YType::enumeration, "secyrx-report"},
    enable{YType::enumeration, "enable"}
{

    yang_name = "second30secyrx-report"; yang_parent_name = "second30secyrx-reports"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxReports::Second30secyrxReport::~Second30secyrxReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxReports::Second30secyrxReport::has_data() const
{
    if (is_presence_container) return true;
    return secyrx_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxReports::Second30secyrxReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(secyrx_report.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxReports::Second30secyrxReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30secyrx-report";
    ADD_KEY_TOKEN(secyrx_report, "secyrx-report");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxReports::Second30secyrxReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (secyrx_report.is_set || is_set(secyrx_report.yfilter)) leaf_name_data.push_back(secyrx_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxReports::Second30secyrxReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxReports::Second30secyrxReport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxReports::Second30secyrxReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxReports::Second30secyrxReport::set_filter(const std::string & value_path, YFilter yfilter)
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

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secyrx::Second30secyrxReports::Second30secyrxReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secyrx-report" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30otn()
    :
    second30_otn_threshes(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30OtnThreshes>())
    , second30otn_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30otnReports>())
{
    second30_otn_threshes->parent = this;
    second30otn_reports->parent = this;

    yang_name = "second30otn"; yang_parent_name = "second30"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::~Second30otn()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::has_data() const
{
    if (is_presence_container) return true;
    return (second30_otn_threshes !=  nullptr && second30_otn_threshes->has_data())
	|| (second30otn_reports !=  nullptr && second30otn_reports->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::has_operation() const
{
    return is_set(yfilter)
	|| (second30_otn_threshes !=  nullptr && second30_otn_threshes->has_operation())
	|| (second30otn_reports !=  nullptr && second30otn_reports->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30otn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "second30-otn-threshes")
    {
        if(second30_otn_threshes == nullptr)
        {
            second30_otn_threshes = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30OtnThreshes>();
        }
        return second30_otn_threshes;
    }

    if(child_yang_name == "second30otn-reports")
    {
        if(second30otn_reports == nullptr)
        {
            second30otn_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30otnReports>();
        }
        return second30otn_reports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(second30_otn_threshes != nullptr)
    {
        _children["second30-otn-threshes"] = second30_otn_threshes;
    }

    if(second30otn_reports != nullptr)
    {
        _children["second30otn-reports"] = second30otn_reports;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second30-otn-threshes" || name == "second30otn-reports")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30OtnThreshes::Second30OtnThreshes()
    :
    second30_otn_thresh(this, {"otn_threshold"})
{

    yang_name = "second30-otn-threshes"; yang_parent_name = "second30otn"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30OtnThreshes::~Second30OtnThreshes()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30OtnThreshes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<second30_otn_thresh.len(); index++)
    {
        if(second30_otn_thresh[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30OtnThreshes::has_operation() const
{
    for (std::size_t index=0; index<second30_otn_thresh.len(); index++)
    {
        if(second30_otn_thresh[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30OtnThreshes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30-otn-threshes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30OtnThreshes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30OtnThreshes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "second30-otn-thresh")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30OtnThreshes::Second30OtnThresh>();
        ent_->parent = this;
        second30_otn_thresh.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30OtnThreshes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : second30_otn_thresh.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30OtnThreshes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30OtnThreshes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30OtnThreshes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second30-otn-thresh")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30OtnThreshes::Second30OtnThresh::Second30OtnThresh()
    :
    otn_threshold{YType::enumeration, "otn-threshold"},
    otn_threshold_value{YType::uint32, "otn-threshold-value"}
{

    yang_name = "second30-otn-thresh"; yang_parent_name = "second30-otn-threshes"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30OtnThreshes::Second30OtnThresh::~Second30OtnThresh()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30OtnThreshes::Second30OtnThresh::has_data() const
{
    if (is_presence_container) return true;
    return otn_threshold.is_set
	|| otn_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30OtnThreshes::Second30OtnThresh::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(otn_threshold.yfilter)
	|| ydk::is_set(otn_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30OtnThreshes::Second30OtnThresh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30-otn-thresh";
    ADD_KEY_TOKEN(otn_threshold, "otn-threshold");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30OtnThreshes::Second30OtnThresh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (otn_threshold.is_set || is_set(otn_threshold.yfilter)) leaf_name_data.push_back(otn_threshold.get_name_leafdata());
    if (otn_threshold_value.is_set || is_set(otn_threshold_value.yfilter)) leaf_name_data.push_back(otn_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30OtnThreshes::Second30OtnThresh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30OtnThreshes::Second30OtnThresh::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30OtnThreshes::Second30OtnThresh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30OtnThreshes::Second30OtnThresh::set_filter(const std::string & value_path, YFilter yfilter)
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

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30OtnThreshes::Second30OtnThresh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otn-threshold" || name == "otn-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30otnReports::Second30otnReports()
    :
    second30otn_report(this, {"otn_report"})
{

    yang_name = "second30otn-reports"; yang_parent_name = "second30otn"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30otnReports::~Second30otnReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30otnReports::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<second30otn_report.len(); index++)
    {
        if(second30otn_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30otnReports::has_operation() const
{
    for (std::size_t index=0; index<second30otn_report.len(); index++)
    {
        if(second30otn_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30otnReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30otn-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30otnReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30otnReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "second30otn-report")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30otnReports::Second30otnReport>();
        ent_->parent = this;
        second30otn_report.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30otnReports::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : second30otn_report.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30otnReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30otnReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30otnReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second30otn-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30otnReports::Second30otnReport::Second30otnReport()
    :
    otn_report{YType::enumeration, "otn-report"},
    enable{YType::enumeration, "enable"}
{

    yang_name = "second30otn-report"; yang_parent_name = "second30otn-reports"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30otnReports::Second30otnReport::~Second30otnReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30otnReports::Second30otnReport::has_data() const
{
    if (is_presence_container) return true;
    return otn_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30otnReports::Second30otnReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(otn_report.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30otnReports::Second30otnReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30otn-report";
    ADD_KEY_TOKEN(otn_report, "otn-report");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30otnReports::Second30otnReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (otn_report.is_set || is_set(otn_report.yfilter)) leaf_name_data.push_back(otn_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30otnReports::Second30otnReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30otnReports::Second30otnReport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30otnReports::Second30otnReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30otnReports::Second30otnReport::set_filter(const std::string & value_path, YFilter yfilter)
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

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30otn::Second30otnReports::Second30otnReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otn-report" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytx()
    :
    second30secytx_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxThresholds>())
    , second30secytx_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxReports>())
{
    second30secytx_thresholds->parent = this;
    second30secytx_reports->parent = this;

    yang_name = "second30secytx"; yang_parent_name = "second30"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::~Second30secytx()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::has_data() const
{
    if (is_presence_container) return true;
    return (second30secytx_thresholds !=  nullptr && second30secytx_thresholds->has_data())
	|| (second30secytx_reports !=  nullptr && second30secytx_reports->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::has_operation() const
{
    return is_set(yfilter)
	|| (second30secytx_thresholds !=  nullptr && second30secytx_thresholds->has_operation())
	|| (second30secytx_reports !=  nullptr && second30secytx_reports->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30secytx";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "second30secytx-thresholds")
    {
        if(second30secytx_thresholds == nullptr)
        {
            second30secytx_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxThresholds>();
        }
        return second30secytx_thresholds;
    }

    if(child_yang_name == "second30secytx-reports")
    {
        if(second30secytx_reports == nullptr)
        {
            second30secytx_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxReports>();
        }
        return second30secytx_reports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(second30secytx_thresholds != nullptr)
    {
        _children["second30secytx-thresholds"] = second30secytx_thresholds;
    }

    if(second30secytx_reports != nullptr)
    {
        _children["second30secytx-reports"] = second30secytx_reports;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second30secytx-thresholds" || name == "second30secytx-reports")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxThresholds::Second30secytxThresholds()
    :
    second30secytx_threshold(this, {"secytx_threshold"})
{

    yang_name = "second30secytx-thresholds"; yang_parent_name = "second30secytx"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxThresholds::~Second30secytxThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxThresholds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<second30secytx_threshold.len(); index++)
    {
        if(second30secytx_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxThresholds::has_operation() const
{
    for (std::size_t index=0; index<second30secytx_threshold.len(); index++)
    {
        if(second30secytx_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30secytx-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "second30secytx-threshold")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxThresholds::Second30secytxThreshold>();
        ent_->parent = this;
        second30secytx_threshold.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : second30secytx_threshold.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second30secytx-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxThresholds::Second30secytxThreshold::Second30secytxThreshold()
    :
    secytx_threshold{YType::enumeration, "secytx-threshold"},
    secytx_threshold_value{YType::uint32, "secytx-threshold-value"}
{

    yang_name = "second30secytx-threshold"; yang_parent_name = "second30secytx-thresholds"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxThresholds::Second30secytxThreshold::~Second30secytxThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxThresholds::Second30secytxThreshold::has_data() const
{
    if (is_presence_container) return true;
    return secytx_threshold.is_set
	|| secytx_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxThresholds::Second30secytxThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(secytx_threshold.yfilter)
	|| ydk::is_set(secytx_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxThresholds::Second30secytxThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30secytx-threshold";
    ADD_KEY_TOKEN(secytx_threshold, "secytx-threshold");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxThresholds::Second30secytxThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (secytx_threshold.is_set || is_set(secytx_threshold.yfilter)) leaf_name_data.push_back(secytx_threshold.get_name_leafdata());
    if (secytx_threshold_value.is_set || is_set(secytx_threshold_value.yfilter)) leaf_name_data.push_back(secytx_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxThresholds::Second30secytxThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxThresholds::Second30secytxThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxThresholds::Second30secytxThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxThresholds::Second30secytxThreshold::set_filter(const std::string & value_path, YFilter yfilter)
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

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxThresholds::Second30secytxThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secytx-threshold" || name == "secytx-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxReports::Second30secytxReports()
    :
    second30secytx_report(this, {"secytx_report"})
{

    yang_name = "second30secytx-reports"; yang_parent_name = "second30secytx"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxReports::~Second30secytxReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxReports::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<second30secytx_report.len(); index++)
    {
        if(second30secytx_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxReports::has_operation() const
{
    for (std::size_t index=0; index<second30secytx_report.len(); index++)
    {
        if(second30secytx_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30secytx-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "second30secytx-report")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxReports::Second30secytxReport>();
        ent_->parent = this;
        second30secytx_report.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxReports::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : second30secytx_report.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second30secytx-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxReports::Second30secytxReport::Second30secytxReport()
    :
    secytx_report{YType::enumeration, "secytx-report"},
    enable{YType::enumeration, "enable"}
{

    yang_name = "second30secytx-report"; yang_parent_name = "second30secytx-reports"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxReports::Second30secytxReport::~Second30secytxReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxReports::Second30secytxReport::has_data() const
{
    if (is_presence_container) return true;
    return secytx_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxReports::Second30secytxReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(secytx_report.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxReports::Second30secytxReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30secytx-report";
    ADD_KEY_TOKEN(secytx_report, "secytx-report");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxReports::Second30secytxReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (secytx_report.is_set || is_set(secytx_report.yfilter)) leaf_name_data.push_back(secytx_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxReports::Second30secytxReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxReports::Second30secytxReport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxReports::Second30secytxReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxReports::Second30secytxReport::set_filter(const std::string & value_path, YFilter yfilter)
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

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Second30::Second30secytx::Second30secytxReports::Second30secytxReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secytx-report" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcms()
    :
    hour24otn_tcm(this, {"tcm_number"})
{

    yang_name = "hour24otn-tcms"; yang_parent_name = "performance-management"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::~Hour24otnTcms()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hour24otn_tcm.len(); index++)
    {
        if(hour24otn_tcm[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::has_operation() const
{
    for (std::size_t index=0; index<hour24otn_tcm.len(); index++)
    {
        if(hour24otn_tcm[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24otn-tcms";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24otn-tcm")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm>();
        ent_->parent = this;
        hour24otn_tcm.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : hour24otn_tcm.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24otn-tcm")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcm()
    :
    tcm_number{YType::uint32, "tcm-number"}
        ,
    hour24otn_tcm_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmThresholds>())
    , hour24otn_tcm_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmReports>())
{
    hour24otn_tcm_thresholds->parent = this;
    hour24otn_tcm_reports->parent = this;

    yang_name = "hour24otn-tcm"; yang_parent_name = "hour24otn-tcms"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::~Hour24otnTcm()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::has_data() const
{
    if (is_presence_container) return true;
    return tcm_number.is_set
	|| (hour24otn_tcm_thresholds !=  nullptr && hour24otn_tcm_thresholds->has_data())
	|| (hour24otn_tcm_reports !=  nullptr && hour24otn_tcm_reports->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tcm_number.yfilter)
	|| (hour24otn_tcm_thresholds !=  nullptr && hour24otn_tcm_thresholds->has_operation())
	|| (hour24otn_tcm_reports !=  nullptr && hour24otn_tcm_reports->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24otn-tcm";
    ADD_KEY_TOKEN(tcm_number, "tcm-number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tcm_number.is_set || is_set(tcm_number.yfilter)) leaf_name_data.push_back(tcm_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24otn-tcm-thresholds")
    {
        if(hour24otn_tcm_thresholds == nullptr)
        {
            hour24otn_tcm_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmThresholds>();
        }
        return hour24otn_tcm_thresholds;
    }

    if(child_yang_name == "hour24otn-tcm-reports")
    {
        if(hour24otn_tcm_reports == nullptr)
        {
            hour24otn_tcm_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmReports>();
        }
        return hour24otn_tcm_reports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(hour24otn_tcm_thresholds != nullptr)
    {
        _children["hour24otn-tcm-thresholds"] = hour24otn_tcm_thresholds;
    }

    if(hour24otn_tcm_reports != nullptr)
    {
        _children["hour24otn-tcm-reports"] = hour24otn_tcm_reports;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tcm-number")
    {
        tcm_number = value;
        tcm_number.value_namespace = name_space;
        tcm_number.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tcm-number")
    {
        tcm_number.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24otn-tcm-thresholds" || name == "hour24otn-tcm-reports" || name == "tcm-number")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmThresholds::Hour24otnTcmThresholds()
    :
    hour24otn_tcm_threshold(this, {"otn_threshold"})
{

    yang_name = "hour24otn-tcm-thresholds"; yang_parent_name = "hour24otn-tcm"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmThresholds::~Hour24otnTcmThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmThresholds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hour24otn_tcm_threshold.len(); index++)
    {
        if(hour24otn_tcm_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmThresholds::has_operation() const
{
    for (std::size_t index=0; index<hour24otn_tcm_threshold.len(); index++)
    {
        if(hour24otn_tcm_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24otn-tcm-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24otn-tcm-threshold")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmThresholds::Hour24otnTcmThreshold>();
        ent_->parent = this;
        hour24otn_tcm_threshold.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : hour24otn_tcm_threshold.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24otn-tcm-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmThresholds::Hour24otnTcmThreshold::Hour24otnTcmThreshold()
    :
    otn_threshold{YType::enumeration, "otn-threshold"},
    otn_threshold_value{YType::uint32, "otn-threshold-value"}
{

    yang_name = "hour24otn-tcm-threshold"; yang_parent_name = "hour24otn-tcm-thresholds"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmThresholds::Hour24otnTcmThreshold::~Hour24otnTcmThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmThresholds::Hour24otnTcmThreshold::has_data() const
{
    if (is_presence_container) return true;
    return otn_threshold.is_set
	|| otn_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmThresholds::Hour24otnTcmThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(otn_threshold.yfilter)
	|| ydk::is_set(otn_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmThresholds::Hour24otnTcmThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24otn-tcm-threshold";
    ADD_KEY_TOKEN(otn_threshold, "otn-threshold");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmThresholds::Hour24otnTcmThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (otn_threshold.is_set || is_set(otn_threshold.yfilter)) leaf_name_data.push_back(otn_threshold.get_name_leafdata());
    if (otn_threshold_value.is_set || is_set(otn_threshold_value.yfilter)) leaf_name_data.push_back(otn_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmThresholds::Hour24otnTcmThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmThresholds::Hour24otnTcmThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmThresholds::Hour24otnTcmThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmThresholds::Hour24otnTcmThreshold::set_filter(const std::string & value_path, YFilter yfilter)
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

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmThresholds::Hour24otnTcmThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otn-threshold" || name == "otn-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmReports::Hour24otnTcmReports()
    :
    hour24otn_tcm_report(this, {"otn_report"})
{

    yang_name = "hour24otn-tcm-reports"; yang_parent_name = "hour24otn-tcm"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmReports::~Hour24otnTcmReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmReports::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hour24otn_tcm_report.len(); index++)
    {
        if(hour24otn_tcm_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmReports::has_operation() const
{
    for (std::size_t index=0; index<hour24otn_tcm_report.len(); index++)
    {
        if(hour24otn_tcm_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24otn-tcm-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24otn-tcm-report")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmReports::Hour24otnTcmReport>();
        ent_->parent = this;
        hour24otn_tcm_report.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmReports::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : hour24otn_tcm_report.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24otn-tcm-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmReports::Hour24otnTcmReport::Hour24otnTcmReport()
    :
    otn_report{YType::enumeration, "otn-report"},
    enable{YType::enumeration, "enable"}
{

    yang_name = "hour24otn-tcm-report"; yang_parent_name = "hour24otn-tcm-reports"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmReports::Hour24otnTcmReport::~Hour24otnTcmReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmReports::Hour24otnTcmReport::has_data() const
{
    if (is_presence_container) return true;
    return otn_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmReports::Hour24otnTcmReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(otn_report.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmReports::Hour24otnTcmReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24otn-tcm-report";
    ADD_KEY_TOKEN(otn_report, "otn-report");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmReports::Hour24otnTcmReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (otn_report.is_set || is_set(otn_report.yfilter)) leaf_name_data.push_back(otn_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmReports::Hour24otnTcmReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmReports::Hour24otnTcmReport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmReports::Hour24otnTcmReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmReports::Hour24otnTcmReport::set_filter(const std::string & value_path, YFilter yfilter)
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

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24otnTcms::Hour24otnTcm::Hour24otnTcmReports::Hour24otnTcmReport::has_leaf_or_child_of_name(const std::string & name) const
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sts_minute15_path != nullptr)
    {
        _children["sts-minute15-path"] = sts_minute15_path;
    }

    return _children;
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
    , sts_minute15_path_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds>())
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sts_minute15_path_reports != nullptr)
    {
        _children["sts-minute15-path-reports"] = sts_minute15_path_reports;
    }

    if(sts_minute15_path_thresholds != nullptr)
    {
        _children["sts-minute15-path-thresholds"] = sts_minute15_path_thresholds;
    }

    return _children;
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
    :
    sts_minute15_path_report(this, {"path_report"})
{

    yang_name = "sts-minute15-path-reports"; yang_parent_name = "sts-minute15-path"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports::~StsMinute15PathReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sts_minute15_path_report.len(); index++)
    {
        if(sts_minute15_path_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports::has_operation() const
{
    for (std::size_t index=0; index<sts_minute15_path_report.len(); index++)
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sts-minute15-path-report")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports::StsMinute15PathReport>();
        ent_->parent = this;
        sts_minute15_path_report.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sts_minute15_path_report.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    if (is_presence_container) return true;
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
    path_buffer << "sts-minute15-path-report";
    ADD_KEY_TOKEN(path_report, "path-report");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports::StsMinute15PathReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_report.is_set || is_set(path_report.yfilter)) leaf_name_data.push_back(path_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports::StsMinute15PathReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathReports::StsMinute15PathReport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    :
    sts_minute15_path_threshold(this, {"path_threshold"})
{

    yang_name = "sts-minute15-path-thresholds"; yang_parent_name = "sts-minute15-path"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds::~StsMinute15PathThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sts_minute15_path_threshold.len(); index++)
    {
        if(sts_minute15_path_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds::has_operation() const
{
    for (std::size_t index=0; index<sts_minute15_path_threshold.len(); index++)
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sts-minute15-path-threshold")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds::StsMinute15PathThreshold>();
        ent_->parent = this;
        sts_minute15_path_threshold.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sts_minute15_path_threshold.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    path_threshold_value{YType::uint32, "path-threshold-value"}
{

    yang_name = "sts-minute15-path-threshold"; yang_parent_name = "sts-minute15-path-thresholds"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds::StsMinute15PathThreshold::~StsMinute15PathThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds::StsMinute15PathThreshold::has_data() const
{
    if (is_presence_container) return true;
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
    path_buffer << "sts-minute15-path-threshold";
    ADD_KEY_TOKEN(path_threshold, "path-threshold");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds::StsMinute15PathThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_threshold.is_set || is_set(path_threshold.yfilter)) leaf_name_data.push_back(path_threshold.get_name_leafdata());
    if (path_threshold_value.is_set || is_set(path_threshold_value.yfilter)) leaf_name_data.push_back(path_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds::StsMinute15PathThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsMinute15::StsMinute15Path::StsMinute15PathThresholds::StsMinute15PathThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    hour24otn(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn>())
    , hour24_optics(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics>())
    , hour24pcs(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs>())
    , hour24fec(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24fec>())
    , hour24secyif(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyif>())
    , hour24secyrx(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyrx>())
    , hour24secytx(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secytx>())
{
    hour24otn->parent = this;
    hour24_optics->parent = this;
    hour24pcs->parent = this;
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
    if (is_presence_container) return true;
    return (hour24otn !=  nullptr && hour24otn->has_data())
	|| (hour24_optics !=  nullptr && hour24_optics->has_data())
	|| (hour24pcs !=  nullptr && hour24pcs->has_data())
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
	|| (hour24pcs !=  nullptr && hour24pcs->has_operation())
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24otn")
    {
        if(hour24otn == nullptr)
        {
            hour24otn = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn>();
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

    if(child_yang_name == "hour24pcs")
    {
        if(hour24pcs == nullptr)
        {
            hour24pcs = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs>();
        }
        return hour24pcs;
    }

    if(child_yang_name == "hour24fec")
    {
        if(hour24fec == nullptr)
        {
            hour24fec = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24fec>();
        }
        return hour24fec;
    }

    if(child_yang_name == "hour24secyif")
    {
        if(hour24secyif == nullptr)
        {
            hour24secyif = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyif>();
        }
        return hour24secyif;
    }

    if(child_yang_name == "hour24secyrx")
    {
        if(hour24secyrx == nullptr)
        {
            hour24secyrx = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyrx>();
        }
        return hour24secyrx;
    }

    if(child_yang_name == "hour24secytx")
    {
        if(hour24secytx == nullptr)
        {
            hour24secytx = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secytx>();
        }
        return hour24secytx;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(hour24otn != nullptr)
    {
        _children["hour24otn"] = hour24otn;
    }

    if(hour24_optics != nullptr)
    {
        _children["hour24-optics"] = hour24_optics;
    }

    if(hour24pcs != nullptr)
    {
        _children["hour24pcs"] = hour24pcs;
    }

    if(hour24fec != nullptr)
    {
        _children["hour24fec"] = hour24fec;
    }

    if(hour24secyif != nullptr)
    {
        _children["hour24secyif"] = hour24secyif;
    }

    if(hour24secyrx != nullptr)
    {
        _children["hour24secyrx"] = hour24secyrx;
    }

    if(hour24secytx != nullptr)
    {
        _children["hour24secytx"] = hour24secytx;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24otn" || name == "hour24-optics" || name == "hour24pcs" || name == "hour24fec" || name == "hour24secyif" || name == "hour24secyrx" || name == "hour24secytx")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otn()
    :
    hour24otn_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnThresholds>())
    , hour24otn_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnReports>())
{
    hour24otn_thresholds->parent = this;
    hour24otn_reports->parent = this;

    yang_name = "hour24otn"; yang_parent_name = "hour24"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::~Hour24otn()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::has_data() const
{
    if (is_presence_container) return true;
    return (hour24otn_thresholds !=  nullptr && hour24otn_thresholds->has_data())
	|| (hour24otn_reports !=  nullptr && hour24otn_reports->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::has_operation() const
{
    return is_set(yfilter)
	|| (hour24otn_thresholds !=  nullptr && hour24otn_thresholds->has_operation())
	|| (hour24otn_reports !=  nullptr && hour24otn_reports->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24otn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24otn-thresholds")
    {
        if(hour24otn_thresholds == nullptr)
        {
            hour24otn_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnThresholds>();
        }
        return hour24otn_thresholds;
    }

    if(child_yang_name == "hour24otn-reports")
    {
        if(hour24otn_reports == nullptr)
        {
            hour24otn_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnReports>();
        }
        return hour24otn_reports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(hour24otn_thresholds != nullptr)
    {
        _children["hour24otn-thresholds"] = hour24otn_thresholds;
    }

    if(hour24otn_reports != nullptr)
    {
        _children["hour24otn-reports"] = hour24otn_reports;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24otn-thresholds" || name == "hour24otn-reports")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnThresholds::Hour24otnThresholds()
    :
    hour24otn_threshold(this, {"otn_threshold"})
{

    yang_name = "hour24otn-thresholds"; yang_parent_name = "hour24otn"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnThresholds::~Hour24otnThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnThresholds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hour24otn_threshold.len(); index++)
    {
        if(hour24otn_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnThresholds::has_operation() const
{
    for (std::size_t index=0; index<hour24otn_threshold.len(); index++)
    {
        if(hour24otn_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24otn-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24otn-threshold")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnThresholds::Hour24otnThreshold>();
        ent_->parent = this;
        hour24otn_threshold.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : hour24otn_threshold.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24otn-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnThresholds::Hour24otnThreshold::Hour24otnThreshold()
    :
    otn_threshold{YType::enumeration, "otn-threshold"},
    otn_threshold_value{YType::uint32, "otn-threshold-value"}
{

    yang_name = "hour24otn-threshold"; yang_parent_name = "hour24otn-thresholds"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnThresholds::Hour24otnThreshold::~Hour24otnThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnThresholds::Hour24otnThreshold::has_data() const
{
    if (is_presence_container) return true;
    return otn_threshold.is_set
	|| otn_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnThresholds::Hour24otnThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(otn_threshold.yfilter)
	|| ydk::is_set(otn_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnThresholds::Hour24otnThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24otn-threshold";
    ADD_KEY_TOKEN(otn_threshold, "otn-threshold");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnThresholds::Hour24otnThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (otn_threshold.is_set || is_set(otn_threshold.yfilter)) leaf_name_data.push_back(otn_threshold.get_name_leafdata());
    if (otn_threshold_value.is_set || is_set(otn_threshold_value.yfilter)) leaf_name_data.push_back(otn_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnThresholds::Hour24otnThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnThresholds::Hour24otnThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnThresholds::Hour24otnThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnThresholds::Hour24otnThreshold::set_filter(const std::string & value_path, YFilter yfilter)
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

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnThresholds::Hour24otnThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otn-threshold" || name == "otn-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnReports::Hour24otnReports()
    :
    hour24otn_report(this, {"otn_report"})
{

    yang_name = "hour24otn-reports"; yang_parent_name = "hour24otn"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnReports::~Hour24otnReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnReports::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hour24otn_report.len(); index++)
    {
        if(hour24otn_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnReports::has_operation() const
{
    for (std::size_t index=0; index<hour24otn_report.len(); index++)
    {
        if(hour24otn_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24otn-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24otn-report")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnReports::Hour24otnReport>();
        ent_->parent = this;
        hour24otn_report.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnReports::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : hour24otn_report.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24otn-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnReports::Hour24otnReport::Hour24otnReport()
    :
    otn_report{YType::enumeration, "otn-report"},
    enable{YType::enumeration, "enable"}
{

    yang_name = "hour24otn-report"; yang_parent_name = "hour24otn-reports"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnReports::Hour24otnReport::~Hour24otnReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnReports::Hour24otnReport::has_data() const
{
    if (is_presence_container) return true;
    return otn_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnReports::Hour24otnReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(otn_report.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnReports::Hour24otnReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24otn-report";
    ADD_KEY_TOKEN(otn_report, "otn-report");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnReports::Hour24otnReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (otn_report.is_set || is_set(otn_report.yfilter)) leaf_name_data.push_back(otn_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnReports::Hour24otnReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnReports::Hour24otnReport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnReports::Hour24otnReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnReports::Hour24otnReport::set_filter(const std::string & value_path, YFilter yfilter)
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

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24otn::Hour24otnReports::Hour24otnReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otn-report" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24Optics()
    :
    hour24_optics_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds>())
    , hour24_optics_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports>())
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(hour24_optics_thresholds != nullptr)
    {
        _children["hour24-optics-thresholds"] = hour24_optics_thresholds;
    }

    if(hour24_optics_reports != nullptr)
    {
        _children["hour24-optics-reports"] = hour24_optics_reports;
    }

    return _children;
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
    :
    hour24_optics_threshold(this, {"optics_threshold"})
{

    yang_name = "hour24-optics-thresholds"; yang_parent_name = "hour24-optics"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::~Hour24OpticsThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hour24_optics_threshold.len(); index++)
    {
        if(hour24_optics_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::has_operation() const
{
    for (std::size_t index=0; index<hour24_optics_threshold.len(); index++)
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24-optics-threshold")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::Hour24OpticsThreshold>();
        ent_->parent = this;
        hour24_optics_threshold.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : hour24_optics_threshold.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    dbm{YType::uint32, "dbm"}
{

    yang_name = "hour24-optics-threshold"; yang_parent_name = "hour24-optics-thresholds"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::Hour24OpticsThreshold::~Hour24OpticsThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::Hour24OpticsThreshold::has_data() const
{
    if (is_presence_container) return true;
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
    path_buffer << "hour24-optics-threshold";
    ADD_KEY_TOKEN(optics_threshold, "optics-threshold");
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::Hour24OpticsThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsThresholds::Hour24OpticsThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    :
    hour24_optics_report(this, {"optics_report"})
{

    yang_name = "hour24-optics-reports"; yang_parent_name = "hour24-optics"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::~Hour24OpticsReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hour24_optics_report.len(); index++)
    {
        if(hour24_optics_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::has_operation() const
{
    for (std::size_t index=0; index<hour24_optics_report.len(); index++)
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24-optics-report")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::Hour24OpticsReport>();
        ent_->parent = this;
        hour24_optics_report.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : hour24_optics_report.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    if (is_presence_container) return true;
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
    path_buffer << "hour24-optics-report";
    ADD_KEY_TOKEN(optics_report, "optics-report");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::Hour24OpticsReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (optics_report.is_set || is_set(optics_report.yfilter)) leaf_name_data.push_back(optics_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::Hour24OpticsReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24Optics::Hour24OpticsReports::Hour24OpticsReport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcs()
    :
    hour24pcs_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsThresholds>())
    , hour24pcs_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsReports>())
{
    hour24pcs_thresholds->parent = this;
    hour24pcs_reports->parent = this;

    yang_name = "hour24pcs"; yang_parent_name = "hour24"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::~Hour24pcs()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::has_data() const
{
    if (is_presence_container) return true;
    return (hour24pcs_thresholds !=  nullptr && hour24pcs_thresholds->has_data())
	|| (hour24pcs_reports !=  nullptr && hour24pcs_reports->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::has_operation() const
{
    return is_set(yfilter)
	|| (hour24pcs_thresholds !=  nullptr && hour24pcs_thresholds->has_operation())
	|| (hour24pcs_reports !=  nullptr && hour24pcs_reports->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24pcs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24pcs-thresholds")
    {
        if(hour24pcs_thresholds == nullptr)
        {
            hour24pcs_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsThresholds>();
        }
        return hour24pcs_thresholds;
    }

    if(child_yang_name == "hour24pcs-reports")
    {
        if(hour24pcs_reports == nullptr)
        {
            hour24pcs_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsReports>();
        }
        return hour24pcs_reports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(hour24pcs_thresholds != nullptr)
    {
        _children["hour24pcs-thresholds"] = hour24pcs_thresholds;
    }

    if(hour24pcs_reports != nullptr)
    {
        _children["hour24pcs-reports"] = hour24pcs_reports;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24pcs-thresholds" || name == "hour24pcs-reports")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsThresholds::Hour24pcsThresholds()
    :
    hour24pcs_threshold(this, {"pcs_threshold"})
{

    yang_name = "hour24pcs-thresholds"; yang_parent_name = "hour24pcs"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsThresholds::~Hour24pcsThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsThresholds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hour24pcs_threshold.len(); index++)
    {
        if(hour24pcs_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsThresholds::has_operation() const
{
    for (std::size_t index=0; index<hour24pcs_threshold.len(); index++)
    {
        if(hour24pcs_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24pcs-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24pcs-threshold")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsThresholds::Hour24pcsThreshold>();
        ent_->parent = this;
        hour24pcs_threshold.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : hour24pcs_threshold.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24pcs-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsThresholds::Hour24pcsThreshold::Hour24pcsThreshold()
    :
    pcs_threshold{YType::enumeration, "pcs-threshold"},
    pcs_threshold_value{YType::str, "pcs-threshold-value"}
{

    yang_name = "hour24pcs-threshold"; yang_parent_name = "hour24pcs-thresholds"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsThresholds::Hour24pcsThreshold::~Hour24pcsThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsThresholds::Hour24pcsThreshold::has_data() const
{
    if (is_presence_container) return true;
    return pcs_threshold.is_set
	|| pcs_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsThresholds::Hour24pcsThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pcs_threshold.yfilter)
	|| ydk::is_set(pcs_threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsThresholds::Hour24pcsThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24pcs-threshold";
    ADD_KEY_TOKEN(pcs_threshold, "pcs-threshold");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsThresholds::Hour24pcsThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pcs_threshold.is_set || is_set(pcs_threshold.yfilter)) leaf_name_data.push_back(pcs_threshold.get_name_leafdata());
    if (pcs_threshold_value.is_set || is_set(pcs_threshold_value.yfilter)) leaf_name_data.push_back(pcs_threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsThresholds::Hour24pcsThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsThresholds::Hour24pcsThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsThresholds::Hour24pcsThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsThresholds::Hour24pcsThreshold::set_filter(const std::string & value_path, YFilter yfilter)
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

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsThresholds::Hour24pcsThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pcs-threshold" || name == "pcs-threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsReports::Hour24pcsReports()
    :
    hour24pcs_report(this, {"pcs_report"})
{

    yang_name = "hour24pcs-reports"; yang_parent_name = "hour24pcs"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsReports::~Hour24pcsReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsReports::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hour24pcs_report.len(); index++)
    {
        if(hour24pcs_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsReports::has_operation() const
{
    for (std::size_t index=0; index<hour24pcs_report.len(); index++)
    {
        if(hour24pcs_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24pcs-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24pcs-report")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsReports::Hour24pcsReport>();
        ent_->parent = this;
        hour24pcs_report.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsReports::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : hour24pcs_report.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hour24pcs-report")
        return true;
    return false;
}

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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsReports::Hour24pcsReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24pcs::Hour24pcsReports::Hour24pcsReport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24fec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24fec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(hour24fec_thresholds != nullptr)
    {
        _children["hour24fec-thresholds"] = hour24fec_thresholds;
    }

    if(hour24fec_reports != nullptr)
    {
        _children["hour24fec-reports"] = hour24fec_reports;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24fec::Hour24fecThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24fec-threshold")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24fec::Hour24fecThresholds::Hour24fecThreshold>();
        ent_->parent = this;
        hour24fec_threshold.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24fec::Hour24fecThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : hour24fec_threshold.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24fec::Hour24fecThresholds::Hour24fecThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24fec::Hour24fecThresholds::Hour24fecThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24fec::Hour24fecReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24fec-report")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24fec::Hour24fecReports::Hour24fecReport>();
        ent_->parent = this;
        hour24fec_report.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24fec::Hour24fecReports::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : hour24fec_report.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24fec::Hour24fecReports::Hour24fecReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24fec::Hour24fecReports::Hour24fecReport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyif::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyif::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(hour24secyif_reports != nullptr)
    {
        _children["hour24secyif-reports"] = hour24secyif_reports;
    }

    if(hour24secyif_thresholds != nullptr)
    {
        _children["hour24secyif-thresholds"] = hour24secyif_thresholds;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyif::Hour24secyifReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24secyif-report")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyif::Hour24secyifReports::Hour24secyifReport>();
        ent_->parent = this;
        hour24secyif_report.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyif::Hour24secyifReports::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : hour24secyif_report.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyif::Hour24secyifReports::Hour24secyifReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyif::Hour24secyifReports::Hour24secyifReport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyif::Hour24secyifThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24secyif-threshold")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyif::Hour24secyifThresholds::Hour24secyifThreshold>();
        ent_->parent = this;
        hour24secyif_threshold.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyif::Hour24secyifThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : hour24secyif_threshold.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyif::Hour24secyifThresholds::Hour24secyifThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyif::Hour24secyifThresholds::Hour24secyifThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyrx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyrx::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(hour24secyrx_reports != nullptr)
    {
        _children["hour24secyrx-reports"] = hour24secyrx_reports;
    }

    if(hour24secyrx_thresholds != nullptr)
    {
        _children["hour24secyrx-thresholds"] = hour24secyrx_thresholds;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyrx::Hour24secyrxReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24secyrx-report")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyrx::Hour24secyrxReports::Hour24secyrxReport>();
        ent_->parent = this;
        hour24secyrx_report.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyrx::Hour24secyrxReports::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : hour24secyrx_report.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyrx::Hour24secyrxReports::Hour24secyrxReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyrx::Hour24secyrxReports::Hour24secyrxReport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyrx::Hour24secyrxThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24secyrx-threshold")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyrx::Hour24secyrxThresholds::Hour24secyrxThreshold>();
        ent_->parent = this;
        hour24secyrx_threshold.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyrx::Hour24secyrxThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : hour24secyrx_threshold.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyrx::Hour24secyrxThresholds::Hour24secyrxThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secyrx::Hour24secyrxThresholds::Hour24secyrxThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secytx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secytx::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(hour24secytx_thresholds != nullptr)
    {
        _children["hour24secytx-thresholds"] = hour24secytx_thresholds;
    }

    if(hour24secytx_reports != nullptr)
    {
        _children["hour24secytx-reports"] = hour24secytx_reports;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secytx::Hour24secytxThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24secytx-threshold")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secytx::Hour24secytxThresholds::Hour24secytxThreshold>();
        ent_->parent = this;
        hour24secytx_threshold.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secytx::Hour24secytxThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : hour24secytx_threshold.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secytx::Hour24secytxThresholds::Hour24secytxThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secytx::Hour24secytxThresholds::Hour24secytxThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secytx::Hour24secytxReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24secytx-report")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secytx::Hour24secytxReports::Hour24secytxReport>();
        ent_->parent = this;
        hour24secytx_report.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secytx::Hour24secytxReports::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : hour24secytx_report.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secytx::Hour24secytxReports::Hour24secytxReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24::Hour24secytx::Hour24secytxReports::Hour24secytxReport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ho_vc_minute15ho_vc != nullptr)
    {
        _children["ho-vc-minute15ho-vc"] = ho_vc_minute15ho_vc;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15hoVc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15hoVc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ho_vc_minute15ho_vc_reports != nullptr)
    {
        _children["ho-vc-minute15ho-vc-reports"] = ho_vc_minute15ho_vc_reports;
    }

    if(ho_vc_minute15ho_vc_thresholds != nullptr)
    {
        _children["ho-vc-minute15ho-vc-thresholds"] = ho_vc_minute15ho_vc_thresholds;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15hoVc::HoVcMinute15hoVcReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ho-vc-minute15ho-vc-report")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15hoVc::HoVcMinute15hoVcReports::HoVcMinute15hoVcReport>();
        ent_->parent = this;
        ho_vc_minute15ho_vc_report.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15hoVc::HoVcMinute15hoVcReports::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ho_vc_minute15ho_vc_report.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15hoVc::HoVcMinute15hoVcReports::HoVcMinute15hoVcReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15hoVc::HoVcMinute15hoVcReports::HoVcMinute15hoVcReport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15hoVc::HoVcMinute15hoVcThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ho-vc-minute15ho-vc-threshold")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15hoVc::HoVcMinute15hoVcThresholds::HoVcMinute15hoVcThreshold>();
        ent_->parent = this;
        ho_vc_minute15ho_vc_threshold.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15hoVc::HoVcMinute15hoVcThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ho_vc_minute15ho_vc_threshold.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15hoVc::HoVcMinute15hoVcThresholds::HoVcMinute15hoVcThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15hoVc::HoVcMinute15hoVcThresholds::HoVcMinute15hoVcThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sts_hour24_path != nullptr)
    {
        _children["sts-hour24-path"] = sts_hour24_path;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sts_hour24_path_thresholds != nullptr)
    {
        _children["sts-hour24-path-thresholds"] = sts_hour24_path_thresholds;
    }

    if(sts_hour24_path_reports != nullptr)
    {
        _children["sts-hour24-path-reports"] = sts_hour24_path_reports;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sts-hour24-path-threshold")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathThresholds::StsHour24PathThreshold>();
        ent_->parent = this;
        sts_hour24_path_threshold.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sts_hour24_path_threshold.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathThresholds::StsHour24PathThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathThresholds::StsHour24PathThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sts-hour24-path-report")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathReports::StsHour24PathReport>();
        ent_->parent = this;
        sts_hour24_path_report.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathReports::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sts_hour24_path_report.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathReports::StsHour24PathReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathReports::StsHour24PathReport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(stm_minute15_stm != nullptr)
    {
        _children["stm-minute15-stm"] = stm_minute15_stm;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(stm_minute15_stm_reports != nullptr)
    {
        _children["stm-minute15-stm-reports"] = stm_minute15_stm_reports;
    }

    if(stm_minute15_stm_thresholds != nullptr)
    {
        _children["stm-minute15-stm-thresholds"] = stm_minute15_stm_thresholds;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stm-minute15-stm-report")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmReports::StmMinute15StmReport>();
        ent_->parent = this;
        stm_minute15_stm_report.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmReports::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : stm_minute15_stm_report.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmReports::StmMinute15StmReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmReports::StmMinute15StmReport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stm-minute15-stm-threshold")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmThresholds::StmMinute15StmThreshold>();
        ent_->parent = this;
        stm_minute15_stm_threshold.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : stm_minute15_stm_threshold.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmThresholds::StmMinute15StmThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmThresholds::StmMinute15StmThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sonet_hour24_path != nullptr)
    {
        _children["sonet-hour24-path"] = sonet_hour24_path;
    }

    if(sonet_hour24_ocn != nullptr)
    {
        _children["sonet-hour24-ocn"] = sonet_hour24_ocn;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sonet_hour24_path_thresholds != nullptr)
    {
        _children["sonet-hour24-path-thresholds"] = sonet_hour24_path_thresholds;
    }

    if(sonet_hour24_path_reports != nullptr)
    {
        _children["sonet-hour24-path-reports"] = sonet_hour24_path_reports;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-hour24-path-threshold")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathThresholds::SonetHour24PathThreshold>();
        ent_->parent = this;
        sonet_hour24_path_threshold.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sonet_hour24_path_threshold.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathThresholds::SonetHour24PathThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathThresholds::SonetHour24PathThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-hour24-path-report")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathReports::SonetHour24PathReport>();
        ent_->parent = this;
        sonet_hour24_path_report.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathReports::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sonet_hour24_path_report.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathReports::SonetHour24PathReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathReports::SonetHour24PathReport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sonet_hour24_ocn_thresholds != nullptr)
    {
        _children["sonet-hour24-ocn-thresholds"] = sonet_hour24_ocn_thresholds;
    }

    if(sonet_hour24_ocn_reports != nullptr)
    {
        _children["sonet-hour24-ocn-reports"] = sonet_hour24_ocn_reports;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-hour24-ocn-threshold")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnThresholds::SonetHour24OcnThreshold>();
        ent_->parent = this;
        sonet_hour24_ocn_threshold.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sonet_hour24_ocn_threshold.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnThresholds::SonetHour24OcnThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnThresholds::SonetHour24OcnThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-hour24-ocn-report")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnReports::SonetHour24OcnReport>();
        ent_->parent = this;
        sonet_hour24_ocn_report.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnReports::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sonet_hour24_ocn_report.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnReports::SonetHour24OcnReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnReports::SonetHour24OcnReport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(minute15otn_path != nullptr)
    {
        _children["minute15otn-path"] = minute15otn_path;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15otnPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15otnPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(minute15otn_path_reports != nullptr)
    {
        _children["minute15otn-path-reports"] = minute15otn_path_reports;
    }

    if(min15_otn_path_threshes != nullptr)
    {
        _children["min15-otn-path-threshes"] = min15_otn_path_threshes;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15otnPath::Minute15otnPathReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15otn-path-report")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15otnPath::Minute15otnPathReports::Minute15otnPathReport>();
        ent_->parent = this;
        minute15otn_path_report.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15otnPath::Minute15otnPathReports::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : minute15otn_path_report.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15otnPath::Minute15otnPathReports::Minute15otnPathReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15otnPath::Minute15otnPathReports::Minute15otnPathReport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15otnPath::Min15OtnPathThreshes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "min15-otn-path-thresh")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15otnPath::Min15OtnPathThreshes::Min15OtnPathThresh>();
        ent_->parent = this;
        min15_otn_path_thresh.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15otnPath::Min15OtnPathThreshes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : min15_otn_path_thresh.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15otnPath::Min15OtnPathThreshes::Min15OtnPathThresh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15otnPath::Min15OtnPathThreshes::Min15OtnPathThresh::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(oc_minute15_ocn != nullptr)
    {
        _children["oc-minute15-ocn"] = oc_minute15_ocn;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(oc_minute15_ocn_reports != nullptr)
    {
        _children["oc-minute15-ocn-reports"] = oc_minute15_ocn_reports;
    }

    if(oc_minute15_ocn_thresholds != nullptr)
    {
        _children["oc-minute15-ocn-thresholds"] = oc_minute15_ocn_thresholds;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oc-minute15-ocn-report")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnReports::OcMinute15OcnReport>();
        ent_->parent = this;
        oc_minute15_ocn_report.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnReports::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : oc_minute15_ocn_report.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnReports::OcMinute15OcnReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnReports::OcMinute15OcnReport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "oc-minute15-ocn-threshold")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnThresholds::OcMinute15OcnThreshold>();
        ent_->parent = this;
        oc_minute15_ocn_threshold.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : oc_minute15_ocn_threshold.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnThresholds::OcMinute15OcnThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnThresholds::OcMinute15OcnThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(second30_ether != nullptr)
    {
        _children["second30-ether"] = second30_ether;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(second30_ether_thresholds != nullptr)
    {
        _children["second30-ether-thresholds"] = second30_ether_thresholds;
    }

    if(second30_ether_reports != nullptr)
    {
        _children["second30-ether-reports"] = second30_ether_reports;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "second30-ether-threshold")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds::Second30EtherThreshold>();
        ent_->parent = this;
        second30_ether_threshold.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : second30_ether_threshold.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds::Second30EtherThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds::Second30EtherThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "second30-ether-report")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports::Second30EtherReport>();
        ent_->parent = this;
        second30_ether_report.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : second30_ether_report.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports::Second30EtherReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports::Second30EtherReport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(hour24otn_path != nullptr)
    {
        _children["hour24otn-path"] = hour24otn_path;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24otnPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24otnPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(hour24otn_path_reports != nullptr)
    {
        _children["hour24otn-path-reports"] = hour24otn_path_reports;
    }

    if(hour24otn_path_thresholds != nullptr)
    {
        _children["hour24otn-path-thresholds"] = hour24otn_path_thresholds;
    }

    return _children;
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

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24otnPath::Hour24otnPathReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hour24otn-path-report")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24otnPath::Hour24otnPathReports::Hour24otnPathReport>();
        ent_->parent = this;
        hour24otn_path_report.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24otnPath::Hour24otnPathReports::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : hour24otn_path_report.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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


}
}

