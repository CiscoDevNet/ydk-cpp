
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ifmgr_cfg_1.hpp"
#include "Cisco_IOS_XR_ifmgr_cfg_2.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ifmgr_cfg {

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::Odu()
    :
    odu_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports>())
	,odu_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds>())
	,odu_expected_tti(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduExpectedTti>())
	,odu_tx_tti(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduTxTti>())
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

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(odu_reports != nullptr)
    {
        children["odu-reports"] = odu_reports;
    }

    if(odu_thresholds != nullptr)
    {
        children["odu-thresholds"] = odu_thresholds;
    }

    if(odu_expected_tti != nullptr)
    {
        children["odu-expected-tti"] = odu_expected_tti;
    }

    if(odu_tx_tti != nullptr)
    {
        children["odu-tx-tti"] = odu_tx_tti;
    }

    return children;
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
{

    yang_name = "odu-reports"; yang_parent_name = "odu"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::~OduReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::has_data() const
{
    for (std::size_t index=0; index<odu_report.size(); index++)
    {
        if(odu_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::has_operation() const
{
    for (std::size_t index=0; index<odu_report.size(); index++)
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

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "odu-report")
    {
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::OduReport>();
        c->parent = this;
        odu_report.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : odu_report)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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
    path_buffer << "odu-report" <<"[alarm='" <<alarm <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::OduReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm.is_set || is_set(alarm.yfilter)) leaf_name_data.push_back(alarm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::OduReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::OduReport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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
{

    yang_name = "odu-thresholds"; yang_parent_name = "odu"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::~OduThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::has_data() const
{
    for (std::size_t index=0; index<odu_threshold.size(); index++)
    {
        if(odu_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::has_operation() const
{
    for (std::size_t index=0; index<odu_threshold.size(); index++)
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

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "odu-threshold")
    {
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::OduThreshold>();
        c->parent = this;
        odu_threshold.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : odu_threshold)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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
    path_buffer << "odu-threshold" <<"[threshold='" <<threshold <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::OduThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.yfilter)) leaf_name_data.push_back(threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::OduThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::OduThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduExpectedTti::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduExpectedTti::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduTxTti::OduTxTti()
    :
    string_type{YType::enumeration, "string-type"},
    ascii_string{YType::str, "ascii-string"},
    hex_string{YType::str, "hex-string"}
{

    yang_name = "odu-tx-tti"; yang_parent_name = "odu"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduTxTti::~OduTxTti()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduTxTti::has_data() const
{
    return string_type.is_set
	|| ascii_string.is_set
	|| hex_string.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduTxTti::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(string_type.yfilter)
	|| ydk::is_set(ascii_string.yfilter)
	|| ydk::is_set(hex_string.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduTxTti::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-tx-tti";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduTxTti::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (string_type.is_set || is_set(string_type.yfilter)) leaf_name_data.push_back(string_type.get_name_leafdata());
    if (ascii_string.is_set || is_set(ascii_string.yfilter)) leaf_name_data.push_back(ascii_string.get_name_leafdata());
    if (hex_string.is_set || is_set(hex_string.yfilter)) leaf_name_data.push_back(hex_string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduTxTti::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduTxTti::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduTxTti::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduTxTti::set_filter(const std::string & value_path, YFilter yfilter)
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

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduTxTti::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-type" || name == "ascii-string" || name == "hex-string")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Otu()
    :
    otu_expected_tti(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuExpectedTti>())
	,otu_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds>())
	,frr(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr>())
	,otu_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports>())
	,otu_tx_tti(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuTxTti>())
{
    otu_expected_tti->parent = this;
    otu_thresholds->parent = this;
    frr->parent = this;
    otu_reports->parent = this;
    otu_tx_tti->parent = this;

    yang_name = "otu"; yang_parent_name = "g709"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::~Otu()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::has_data() const
{
    return (otu_expected_tti !=  nullptr && otu_expected_tti->has_data())
	|| (otu_thresholds !=  nullptr && otu_thresholds->has_data())
	|| (frr !=  nullptr && frr->has_data())
	|| (otu_reports !=  nullptr && otu_reports->has_data())
	|| (otu_tx_tti !=  nullptr && otu_tx_tti->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::has_operation() const
{
    return is_set(yfilter)
	|| (otu_expected_tti !=  nullptr && otu_expected_tti->has_operation())
	|| (otu_thresholds !=  nullptr && otu_thresholds->has_operation())
	|| (frr !=  nullptr && frr->has_operation())
	|| (otu_reports !=  nullptr && otu_reports->has_operation())
	|| (otu_tx_tti !=  nullptr && otu_tx_tti->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-expected-tti")
    {
        if(otu_expected_tti == nullptr)
        {
            otu_expected_tti = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuExpectedTti>();
        }
        return otu_expected_tti;
    }

    if(child_yang_name == "otu-thresholds")
    {
        if(otu_thresholds == nullptr)
        {
            otu_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds>();
        }
        return otu_thresholds;
    }

    if(child_yang_name == "frr")
    {
        if(frr == nullptr)
        {
            frr = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr>();
        }
        return frr;
    }

    if(child_yang_name == "otu-reports")
    {
        if(otu_reports == nullptr)
        {
            otu_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports>();
        }
        return otu_reports;
    }

    if(child_yang_name == "otu-tx-tti")
    {
        if(otu_tx_tti == nullptr)
        {
            otu_tx_tti = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuTxTti>();
        }
        return otu_tx_tti;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(otu_expected_tti != nullptr)
    {
        children["otu-expected-tti"] = otu_expected_tti;
    }

    if(otu_thresholds != nullptr)
    {
        children["otu-thresholds"] = otu_thresholds;
    }

    if(frr != nullptr)
    {
        children["frr"] = frr;
    }

    if(otu_reports != nullptr)
    {
        children["otu-reports"] = otu_reports;
    }

    if(otu_tx_tti != nullptr)
    {
        children["otu-tx-tti"] = otu_tx_tti;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-expected-tti" || name == "otu-thresholds" || name == "frr" || name == "otu-reports" || name == "otu-tx-tti")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuExpectedTti::OtuExpectedTti()
    :
    string_type{YType::enumeration, "string-type"},
    ascii_string{YType::str, "ascii-string"},
    hex_string{YType::str, "hex-string"}
{

    yang_name = "otu-expected-tti"; yang_parent_name = "otu"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuExpectedTti::~OtuExpectedTti()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuExpectedTti::has_data() const
{
    return string_type.is_set
	|| ascii_string.is_set
	|| hex_string.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuExpectedTti::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(string_type.yfilter)
	|| ydk::is_set(ascii_string.yfilter)
	|| ydk::is_set(hex_string.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuExpectedTti::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-expected-tti";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuExpectedTti::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (string_type.is_set || is_set(string_type.yfilter)) leaf_name_data.push_back(string_type.get_name_leafdata());
    if (ascii_string.is_set || is_set(ascii_string.yfilter)) leaf_name_data.push_back(ascii_string.get_name_leafdata());
    if (hex_string.is_set || is_set(hex_string.yfilter)) leaf_name_data.push_back(hex_string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuExpectedTti::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuExpectedTti::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuExpectedTti::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuExpectedTti::set_filter(const std::string & value_path, YFilter yfilter)
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

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuExpectedTti::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-type" || name == "ascii-string" || name == "hex-string")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::OtuThresholds()
{

    yang_name = "otu-thresholds"; yang_parent_name = "otu"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::~OtuThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::has_data() const
{
    for (std::size_t index=0; index<otu_threshold.size(); index++)
    {
        if(otu_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::has_operation() const
{
    for (std::size_t index=0; index<otu_threshold.size(); index++)
    {
        if(otu_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-threshold")
    {
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::OtuThreshold>();
        c->parent = this;
        otu_threshold.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : otu_threshold)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::OtuThreshold::OtuThreshold()
    :
    threshold{YType::enumeration, "threshold"},
    threshold_value{YType::uint32, "threshold-value"}
{

    yang_name = "otu-threshold"; yang_parent_name = "otu-thresholds"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::OtuThreshold::~OtuThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::OtuThreshold::has_data() const
{
    return threshold.is_set
	|| threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::OtuThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(threshold_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::OtuThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-threshold" <<"[threshold='" <<threshold <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::OtuThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.yfilter)) leaf_name_data.push_back(threshold_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::OtuThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::OtuThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::OtuThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::OtuThreshold::set_filter(const std::string & value_path, YFilter yfilter)
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

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::OtuThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "threshold-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::Frr()
    :
    trigger_window(nullptr) // presence node
	,revert_threshold(nullptr) // presence node
	,trigger_threshold(nullptr) // presence node
	,revert_window(nullptr) // presence node
{

    yang_name = "frr"; yang_parent_name = "otu"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::~Frr()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::has_data() const
{
    return (trigger_window !=  nullptr && trigger_window->has_data())
	|| (revert_threshold !=  nullptr && revert_threshold->has_data())
	|| (trigger_threshold !=  nullptr && trigger_threshold->has_data())
	|| (revert_window !=  nullptr && revert_window->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::has_operation() const
{
    return is_set(yfilter)
	|| (trigger_window !=  nullptr && trigger_window->has_operation())
	|| (revert_threshold !=  nullptr && revert_threshold->has_operation())
	|| (trigger_threshold !=  nullptr && trigger_threshold->has_operation())
	|| (revert_window !=  nullptr && revert_window->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trigger-window")
    {
        if(trigger_window == nullptr)
        {
            trigger_window = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerWindow>();
        }
        return trigger_window;
    }

    if(child_yang_name == "revert-threshold")
    {
        if(revert_threshold == nullptr)
        {
            revert_threshold = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertThreshold>();
        }
        return revert_threshold;
    }

    if(child_yang_name == "trigger-threshold")
    {
        if(trigger_threshold == nullptr)
        {
            trigger_threshold = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerThreshold>();
        }
        return trigger_threshold;
    }

    if(child_yang_name == "revert-window")
    {
        if(revert_window == nullptr)
        {
            revert_window = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertWindow>();
        }
        return revert_window;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(trigger_window != nullptr)
    {
        children["trigger-window"] = trigger_window;
    }

    if(revert_threshold != nullptr)
    {
        children["revert-threshold"] = revert_threshold;
    }

    if(trigger_threshold != nullptr)
    {
        children["trigger-threshold"] = trigger_threshold;
    }

    if(revert_window != nullptr)
    {
        children["revert-window"] = revert_window;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trigger-window" || name == "revert-threshold" || name == "trigger-threshold" || name == "revert-window")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerWindow::TriggerWindow()
    :
    window{YType::uint32, "window"},
    dummy{YType::uint32, "dummy"}
{

    yang_name = "trigger-window"; yang_parent_name = "frr"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerWindow::~TriggerWindow()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerWindow::has_data() const
{
    return window.is_set
	|| dummy.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerWindow::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(window.yfilter)
	|| ydk::is_set(dummy.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerWindow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trigger-window";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerWindow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (window.is_set || is_set(window.yfilter)) leaf_name_data.push_back(window.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.yfilter)) leaf_name_data.push_back(dummy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerWindow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerWindow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerWindow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "window")
    {
        window = value;
        window.value_namespace = name_space;
        window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dummy")
    {
        dummy = value;
        dummy.value_namespace = name_space;
        dummy.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerWindow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "window")
    {
        window.yfilter = yfilter;
    }
    if(value_path == "dummy")
    {
        dummy.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerWindow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "window" || name == "dummy")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertThreshold::RevertThreshold()
    :
    ber_base{YType::uint32, "ber-base"},
    ber_power{YType::uint32, "ber-power"}
{

    yang_name = "revert-threshold"; yang_parent_name = "frr"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertThreshold::~RevertThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertThreshold::has_data() const
{
    return ber_base.is_set
	|| ber_power.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ber_base.yfilter)
	|| ydk::is_set(ber_power.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "revert-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ber_base.is_set || is_set(ber_base.yfilter)) leaf_name_data.push_back(ber_base.get_name_leafdata());
    if (ber_power.is_set || is_set(ber_power.yfilter)) leaf_name_data.push_back(ber_power.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ber-base")
    {
        ber_base = value;
        ber_base.value_namespace = name_space;
        ber_base.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ber-power")
    {
        ber_power = value;
        ber_power.value_namespace = name_space;
        ber_power.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ber-base")
    {
        ber_base.yfilter = yfilter;
    }
    if(value_path == "ber-power")
    {
        ber_power.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ber-base" || name == "ber-power")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerThreshold::TriggerThreshold()
    :
    ber_base{YType::uint32, "ber-base"},
    ber_power{YType::uint32, "ber-power"}
{

    yang_name = "trigger-threshold"; yang_parent_name = "frr"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerThreshold::~TriggerThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerThreshold::has_data() const
{
    return ber_base.is_set
	|| ber_power.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ber_base.yfilter)
	|| ydk::is_set(ber_power.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trigger-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ber_base.is_set || is_set(ber_base.yfilter)) leaf_name_data.push_back(ber_base.get_name_leafdata());
    if (ber_power.is_set || is_set(ber_power.yfilter)) leaf_name_data.push_back(ber_power.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ber-base")
    {
        ber_base = value;
        ber_base.value_namespace = name_space;
        ber_base.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ber-power")
    {
        ber_power = value;
        ber_power.value_namespace = name_space;
        ber_power.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ber-base")
    {
        ber_base.yfilter = yfilter;
    }
    if(value_path == "ber-power")
    {
        ber_power.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ber-base" || name == "ber-power")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertWindow::RevertWindow()
    :
    window{YType::uint32, "window"},
    dummy{YType::uint32, "dummy"}
{

    yang_name = "revert-window"; yang_parent_name = "frr"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertWindow::~RevertWindow()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertWindow::has_data() const
{
    return window.is_set
	|| dummy.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertWindow::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(window.yfilter)
	|| ydk::is_set(dummy.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertWindow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "revert-window";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertWindow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (window.is_set || is_set(window.yfilter)) leaf_name_data.push_back(window.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.yfilter)) leaf_name_data.push_back(dummy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertWindow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertWindow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertWindow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "window")
    {
        window = value;
        window.value_namespace = name_space;
        window.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dummy")
    {
        dummy = value;
        dummy.value_namespace = name_space;
        dummy.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertWindow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "window")
    {
        window.yfilter = yfilter;
    }
    if(value_path == "dummy")
    {
        dummy.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertWindow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "window" || name == "dummy")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::OtuReports()
{

    yang_name = "otu-reports"; yang_parent_name = "otu"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::~OtuReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::has_data() const
{
    for (std::size_t index=0; index<otu_report.size(); index++)
    {
        if(otu_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::has_operation() const
{
    for (std::size_t index=0; index<otu_report.size(); index++)
    {
        if(otu_report[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-reports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otu-report")
    {
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::OtuReport>();
        c->parent = this;
        otu_report.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : otu_report)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otu-report")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::OtuReport::OtuReport()
    :
    alarm{YType::enumeration, "alarm"}
{

    yang_name = "otu-report"; yang_parent_name = "otu-reports"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::OtuReport::~OtuReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::OtuReport::has_data() const
{
    return alarm.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::OtuReport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(alarm.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::OtuReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-report" <<"[alarm='" <<alarm <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::OtuReport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm.is_set || is_set(alarm.yfilter)) leaf_name_data.push_back(alarm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::OtuReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::OtuReport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::OtuReport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alarm")
    {
        alarm = value;
        alarm.value_namespace = name_space;
        alarm.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::OtuReport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alarm")
    {
        alarm.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::OtuReport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alarm")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuTxTti::OtuTxTti()
    :
    string_type{YType::enumeration, "string-type"},
    ascii_string{YType::str, "ascii-string"},
    hex_string{YType::str, "hex-string"}
{

    yang_name = "otu-tx-tti"; yang_parent_name = "otu"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuTxTti::~OtuTxTti()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuTxTti::has_data() const
{
    return string_type.is_set
	|| ascii_string.is_set
	|| hex_string.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuTxTti::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(string_type.yfilter)
	|| ydk::is_set(ascii_string.yfilter)
	|| ydk::is_set(hex_string.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuTxTti::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-tx-tti";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuTxTti::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (string_type.is_set || is_set(string_type.yfilter)) leaf_name_data.push_back(string_type.get_name_leafdata());
    if (ascii_string.is_set || is_set(ascii_string.yfilter)) leaf_name_data.push_back(ascii_string.get_name_leafdata());
    if (hex_string.is_set || is_set(hex_string.yfilter)) leaf_name_data.push_back(hex_string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuTxTti::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuTxTti::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuTxTti::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuTxTti::set_filter(const std::string & value_path, YFilter yfilter)
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

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuTxTti::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-type" || name == "ascii-string" || name == "hex-string")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Prbs::Prbs()
    :
    prbs_mode{YType::enumeration, "prbs-mode"},
    prbs_pattern{YType::enumeration, "prbs-pattern"}
{

    yang_name = "prbs"; yang_parent_name = "g709"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Prbs::~Prbs()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Prbs::has_data() const
{
    return prbs_mode.is_set
	|| prbs_pattern.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Prbs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prbs_mode.yfilter)
	|| ydk::is_set(prbs_pattern.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Prbs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prbs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Prbs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prbs_mode.is_set || is_set(prbs_mode.yfilter)) leaf_name_data.push_back(prbs_mode.get_name_leafdata());
    if (prbs_pattern.is_set || is_set(prbs_pattern.yfilter)) leaf_name_data.push_back(prbs_pattern.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Prbs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Prbs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Prbs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prbs-mode")
    {
        prbs_mode = value;
        prbs_mode.value_namespace = name_space;
        prbs_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prbs-pattern")
    {
        prbs_pattern = value;
        prbs_pattern.value_namespace = name_space;
        prbs_pattern.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Prbs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prbs-mode")
    {
        prbs_mode.yfilter = yfilter;
    }
    if(value_path == "prbs-pattern")
    {
        prbs_pattern.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Prbs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prbs-mode" || name == "prbs-pattern")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Fec::Fec()
    :
    fec_mode{YType::enumeration, "fec-mode"},
    efec_mode{YType::enumeration, "efec-mode"}
{

    yang_name = "fec"; yang_parent_name = "g709"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Fec::~Fec()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Fec::has_data() const
{
    return fec_mode.is_set
	|| efec_mode.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Fec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_mode.yfilter)
	|| ydk::is_set(efec_mode.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Fec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Fec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_mode.is_set || is_set(fec_mode.yfilter)) leaf_name_data.push_back(fec_mode.get_name_leafdata());
    if (efec_mode.is_set || is_set(efec_mode.yfilter)) leaf_name_data.push_back(efec_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Fec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Fec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Fec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fec-mode")
    {
        fec_mode = value;
        fec_mode.value_namespace = name_space;
        fec_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "efec-mode")
    {
        efec_mode = value;
        efec_mode.value_namespace = name_space;
        efec_mode.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Fec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fec-mode")
    {
        fec_mode.yfilter = yfilter;
    }
    if(value_path == "efec-mode")
    {
        efec_mode.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Fec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-mode" || name == "efec-mode")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::Wavelength::Wavelength()
    :
    wave_channel{YType::uint32, "wave-channel"},
    wave_channel_number{YType::enumeration, "wave-channel-number"},
    prog_frequency{YType::str, "prog-frequency"}
{

    yang_name = "wavelength"; yang_parent_name = "dwdm"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Dwdm::Wavelength::~Wavelength()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::Wavelength::has_data() const
{
    return wave_channel.is_set
	|| wave_channel_number.is_set
	|| prog_frequency.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::Wavelength::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(wave_channel.yfilter)
	|| ydk::is_set(wave_channel_number.yfilter)
	|| ydk::is_set(prog_frequency.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dwdm::Wavelength::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wavelength";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dwdm::Wavelength::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (wave_channel.is_set || is_set(wave_channel.yfilter)) leaf_name_data.push_back(wave_channel.get_name_leafdata());
    if (wave_channel_number.is_set || is_set(wave_channel_number.yfilter)) leaf_name_data.push_back(wave_channel_number.get_name_leafdata());
    if (prog_frequency.is_set || is_set(prog_frequency.yfilter)) leaf_name_data.push_back(prog_frequency.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Dwdm::Wavelength::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dwdm::Wavelength::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::Wavelength::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "wave-channel")
    {
        wave_channel = value;
        wave_channel.value_namespace = name_space;
        wave_channel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wave-channel-number")
    {
        wave_channel_number = value;
        wave_channel_number.value_namespace = name_space;
        wave_channel_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prog-frequency")
    {
        prog_frequency = value;
        prog_frequency.value_namespace = name_space;
        prog_frequency.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Dwdm::Wavelength::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "wave-channel")
    {
        wave_channel.yfilter = yfilter;
    }
    if(value_path == "wave-channel-number")
    {
        wave_channel_number.yfilter = yfilter;
    }
    if(value_path == "prog-frequency")
    {
        prog_frequency.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Dwdm::Wavelength::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "wave-channel" || name == "wave-channel-number" || name == "prog-frequency")
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

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(vlan_identifier != nullptr)
    {
        children["vlan-identifier"] = vlan_identifier;
    }

    return children;
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

    yang_name = "vlan-identifier"; yang_parent_name = "vlan-sub-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::VlanIdentifier::~VlanIdentifier()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::VlanIdentifier::has_data() const
{
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

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::VlanIdentifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::VlanIdentifier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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
	,encapsulation(nullptr) // presence node
	,rewrite(nullptr) // presence node
{

    yang_name = "ethernet-service"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetService::~EthernetService()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetService::has_data() const
{
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

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetService::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetService::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(local_traffic_default_encapsulation != nullptr)
    {
        children["local-traffic-default-encapsulation"] = local_traffic_default_encapsulation;
    }

    if(encapsulation != nullptr)
    {
        children["encapsulation"] = encapsulation;
    }

    if(rewrite != nullptr)
    {
        children["rewrite"] = rewrite;
    }

    return children;
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

    yang_name = "local-traffic-default-encapsulation"; yang_parent_name = "ethernet-service"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetService::LocalTrafficDefaultEncapsulation::~LocalTrafficDefaultEncapsulation()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetService::LocalTrafficDefaultEncapsulation::has_data() const
{
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

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetService::LocalTrafficDefaultEncapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetService::LocalTrafficDefaultEncapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

    yang_name = "encapsulation"; yang_parent_name = "ethernet-service"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetService::Encapsulation::~Encapsulation()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetService::Encapsulation::has_data() const
{
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

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetService::Encapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetService::Encapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

    yang_name = "rewrite"; yang_parent_name = "ethernet-service"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetService::Rewrite::~Rewrite()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetService::Rewrite::has_data() const
{
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

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetService::Rewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetService::Rewrite::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetBng::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetBng::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ambiguous_encapsulation != nullptr)
    {
        children["ambiguous-encapsulation"] = ambiguous_encapsulation;
    }

    return children;
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

    yang_name = "ambiguous-encapsulation"; yang_parent_name = "ethernet-bng"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetBng::AmbiguousEncapsulation::~AmbiguousEncapsulation()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetBng::AmbiguousEncapsulation::has_data() const
{
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

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetBng::AmbiguousEncapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetBng::AmbiguousEncapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::MacAccounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::MacAccounting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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
	,ether_link_oam(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam>())
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

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(cfm != nullptr)
    {
        children["Cisco-IOS-XR-ethernet-cfm-cfg:cfm"] = cfm;
    }

    if(ether_link_oam != nullptr)
    {
        children["Cisco-IOS-XR-ethernet-link-oam-cfg:ether-link-oam"] = ether_link_oam;
    }

    return children;
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
	,ais_up(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp>())
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

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(domains != nullptr)
    {
        children["domains"] = domains;
    }

    if(ais_up != nullptr)
    {
        children["ais-up"] = ais_up;
    }

    return children;
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
{

    yang_name = "domains"; yang_parent_name = "cfm"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::~Domains()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::has_data() const
{
    for (std::size_t index=0; index<domain.size(); index++)
    {
        if(domain[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::has_operation() const
{
    for (std::size_t index=0; index<domain.size(); index++)
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

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "domain")
    {
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain>();
        c->parent = this;
        domain.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : domain)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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
    path_buffer << "domain" <<"[domain='" <<domain <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(mep != nullptr)
    {
        children["mep"] = mep;
    }

    return children;
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
	,mep_properties(nullptr) // presence node
	,loss_measurement_counters(nullptr) // presence node
{
    sla_profile_target_mep_ids->parent = this;

    yang_name = "mep"; yang_parent_name = "domain"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::~Mep()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::has_data() const
{
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

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sla_profile_target_mep_ids != nullptr)
    {
        children["sla-profile-target-mep-ids"] = sla_profile_target_mep_ids;
    }

    if(mep_properties != nullptr)
    {
        children["mep-properties"] = mep_properties;
    }

    if(loss_measurement_counters != nullptr)
    {
        children["loss-measurement-counters"] = loss_measurement_counters;
    }

    return children;
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
{

    yang_name = "sla-profile-target-mep-ids"; yang_parent_name = "mep"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::~SlaProfileTargetMepIds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::has_data() const
{
    for (std::size_t index=0; index<sla_profile_target_mep_id.size(); index++)
    {
        if(sla_profile_target_mep_id[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<sla_profile_target_mac_address.size(); index++)
    {
        if(sla_profile_target_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::has_operation() const
{
    for (std::size_t index=0; index<sla_profile_target_mep_id.size(); index++)
    {
        if(sla_profile_target_mep_id[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<sla_profile_target_mac_address.size(); index++)
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

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sla-profile-target-mep-id")
    {
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMepId>();
        c->parent = this;
        sla_profile_target_mep_id.push_back(c);
        return c;
    }

    if(child_yang_name == "sla-profile-target-mac-address")
    {
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMacAddress>();
        c->parent = this;
        sla_profile_target_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : sla_profile_target_mep_id)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : sla_profile_target_mac_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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
    path_buffer << "sla-profile-target-mep-id" <<"[profile='" <<profile <<"']" <<"[target-mep-id='" <<target_mep_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMepId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile.is_set || is_set(profile.yfilter)) leaf_name_data.push_back(profile.get_name_leafdata());
    if (target_mep_id.is_set || is_set(target_mep_id.yfilter)) leaf_name_data.push_back(target_mep_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMepId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMepId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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
    path_buffer << "sla-profile-target-mac-address" <<"[profile='" <<profile <<"']" <<"[target-mac-address='" <<target_mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile.is_set || is_set(profile.yfilter)) leaf_name_data.push_back(profile.get_name_leafdata());
    if (target_mac_address.is_set || is_set(target_mac_address.yfilter)) leaf_name_data.push_back(target_mac_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

    yang_name = "mep-properties"; yang_parent_name = "mep"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::MepProperties::~MepProperties()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::MepProperties::has_data() const
{
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

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::MepProperties::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::MepProperties::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

    yang_name = "loss-measurement-counters"; yang_parent_name = "mep"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::LossMeasurementCounters::~LossMeasurementCounters()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::LossMeasurementCounters::has_data() const
{
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

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::LossMeasurementCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::LossMeasurementCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(transmission != nullptr)
    {
        children["transmission"] = transmission;
    }

    return children;
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

    yang_name = "transmission"; yang_parent_name = "ais-up"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::Transmission::~Transmission()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::Transmission::has_data() const
{
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

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::Transmission::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::Transmission::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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
	,require_remote(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::RequireRemote>())
	,link_monitoring(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring>())
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

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(action != nullptr)
    {
        children["action"] = action;
    }

    if(require_remote != nullptr)
    {
        children["require-remote"] = require_remote;
    }

    if(link_monitoring != nullptr)
    {
        children["link-monitoring"] = link_monitoring;
    }

    return children;
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

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::RequireRemote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::RequireRemote::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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
	,frame_period(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod>())
	,frame_seconds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds>())
	,frame(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame>())
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

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(symbol_period != nullptr)
    {
        children["symbol-period"] = symbol_period;
    }

    if(frame_period != nullptr)
    {
        children["frame-period"] = frame_period;
    }

    if(frame_seconds != nullptr)
    {
        children["frame-seconds"] = frame_seconds;
    }

    if(frame != nullptr)
    {
        children["frame"] = frame;
    }

    return children;
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
	,threshold(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Threshold>())
{
    threshold->parent = this;

    yang_name = "symbol-period"; yang_parent_name = "link-monitoring"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::~SymbolPeriod()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::has_data() const
{
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

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(window != nullptr)
    {
        children["window"] = window;
    }

    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
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

    yang_name = "window"; yang_parent_name = "symbol-period"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Window::~Window()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Window::has_data() const
{
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

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Window::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Window::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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
	,threshold(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Threshold>())
{
    threshold->parent = this;

    yang_name = "frame-period"; yang_parent_name = "link-monitoring"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::~FramePeriod()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::has_data() const
{
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

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(window != nullptr)
    {
        children["window"] = window;
    }

    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
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

    yang_name = "window"; yang_parent_name = "frame-period"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Window::~Window()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Window::has_data() const
{
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

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Window::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Window::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
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

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
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

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::CarrierDelay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::CarrierDelay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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
{

    yang_name = "vlan-trunk-configuration"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::~VlanTrunkConfiguration()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::has_data() const
{
    return tunneling_ethertype.is_set
	|| (native_vlan_identifier !=  nullptr && native_vlan_identifier->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunneling_ethertype.yfilter)
	|| (native_vlan_identifier !=  nullptr && native_vlan_identifier->has_operation());
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

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "native-vlan-identifier")
    {
        if(native_vlan_identifier == nullptr)
        {
            native_vlan_identifier = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::NativeVlanIdentifier>();
        }
        return native_vlan_identifier;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(native_vlan_identifier != nullptr)
    {
        children["native-vlan-identifier"] = native_vlan_identifier;
    }

    return children;
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
    if(name == "native-vlan-identifier" || name == "tunneling-ethertype")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::NativeVlanIdentifier::NativeVlanIdentifier()
    :
    vlan_type{YType::enumeration, "vlan-type"},
    vlan_identifier{YType::uint32, "vlan-identifier"}
{

    yang_name = "native-vlan-identifier"; yang_parent_name = "vlan-trunk-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::NativeVlanIdentifier::~NativeVlanIdentifier()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::NativeVlanIdentifier::has_data() const
{
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

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::NativeVlanIdentifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::NativeVlanIdentifier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::NvSatelliteAccess()
    :
    qos(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos>())
{
    qos->parent = this;

    yang_name = "nv-satellite-access"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::~NvSatelliteAccess()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::has_data() const
{
    return (qos !=  nullptr && qos->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::has_operation() const
{
    return is_set(yfilter)
	|| (qos !=  nullptr && qos->has_operation());
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

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XR-qos-ma-sat-cfg:qos")
    {
        if(qos == nullptr)
        {
            qos = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos>();
        }
        return qos;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(qos != nullptr)
    {
        children["Cisco-IOS-XR-qos-ma-sat-cfg:qos"] = qos;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qos")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Qos()
    :
    output(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output>())
	,input(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input>())
{
    output->parent = this;
    input->parent = this;

    yang_name = "qos"; yang_parent_name = "nv-satellite-access"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::~Qos()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::has_data() const
{
    return (output !=  nullptr && output->has_data())
	|| (input !=  nullptr && input->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::has_operation() const
{
    return is_set(yfilter)
	|| (output !=  nullptr && output->has_operation())
	|| (input !=  nullptr && input->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-qos-ma-sat-cfg:qos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output>();
        }
        return output;
    }

    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "output" || name == "input")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::Output()
{

    yang_name = "output"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::~Output()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::has_data() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::has_operation() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy")
    {
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::ServicePolicy>();
        c->parent = this;
        service_policy.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : service_policy)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::ServicePolicy::ServicePolicy()
    :
    service_policy_name{YType::str, "service-policy-name"}
{

    yang_name = "service-policy"; yang_parent_name = "output"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::ServicePolicy::~ServicePolicy()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::ServicePolicy::has_data() const
{
    return service_policy_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_policy_name.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy" <<"[service-policy-name='" <<service_policy_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_name.is_set || is_set(service_policy_name.yfilter)) leaf_name_data.push_back(service_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name = value;
        service_policy_name.value_namespace = name_space;
        service_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::Input()
{

    yang_name = "input"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::~Input()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::has_data() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::has_operation() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy")
    {
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::ServicePolicy>();
        c->parent = this;
        service_policy.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : service_policy)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::ServicePolicy::ServicePolicy()
    :
    service_policy_name{YType::str, "service-policy-name"}
{

    yang_name = "service-policy"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::ServicePolicy::~ServicePolicy()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::ServicePolicy::has_data() const
{
    return service_policy_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_policy_name.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy" <<"[service-policy-name='" <<service_policy_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_name.is_set || is_set(service_policy_name.yfilter)) leaf_name_data.push_back(service_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name = value;
        service_policy_name.value_namespace = name_space;
        service_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::NvSatelliteFabricLink()
    :
    satellite{YType::uint32, "satellite"},
    minimum_required_links{YType::uint32, "minimum-required-links"}
    	,
    redundancy(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Redundancy>())
	,remote_ports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts>())
	,ethernet_features(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures>())
	,frequency_synchronization(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::FrequencySynchronization>())
	,qos(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos>())
{
    redundancy->parent = this;
    remote_ports->parent = this;
    ethernet_features->parent = this;
    frequency_synchronization->parent = this;
    qos->parent = this;

    yang_name = "nv-satellite-fabric-link"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::~NvSatelliteFabricLink()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::has_data() const
{
    return satellite.is_set
	|| minimum_required_links.is_set
	|| (redundancy !=  nullptr && redundancy->has_data())
	|| (remote_ports !=  nullptr && remote_ports->has_data())
	|| (ethernet_features !=  nullptr && ethernet_features->has_data())
	|| (frequency_synchronization !=  nullptr && frequency_synchronization->has_data())
	|| (qos !=  nullptr && qos->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(satellite.yfilter)
	|| ydk::is_set(minimum_required_links.yfilter)
	|| (redundancy !=  nullptr && redundancy->has_operation())
	|| (remote_ports !=  nullptr && remote_ports->has_operation())
	|| (ethernet_features !=  nullptr && ethernet_features->has_operation())
	|| (frequency_synchronization !=  nullptr && frequency_synchronization->has_operation())
	|| (qos !=  nullptr && qos->has_operation());
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

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

    if(child_yang_name == "Cisco-IOS-XR-freqsync-sat-cfg:frequency-synchronization")
    {
        if(frequency_synchronization == nullptr)
        {
            frequency_synchronization = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::FrequencySynchronization>();
        }
        return frequency_synchronization;
    }

    if(child_yang_name == "Cisco-IOS-XR-qos-ma-sat-cfg:qos")
    {
        if(qos == nullptr)
        {
            qos = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos>();
        }
        return qos;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(redundancy != nullptr)
    {
        children["redundancy"] = redundancy;
    }

    if(remote_ports != nullptr)
    {
        children["remote-ports"] = remote_ports;
    }

    if(ethernet_features != nullptr)
    {
        children["Cisco-IOS-XR-ethernet-cfm-sat-cfg:ethernet-features"] = ethernet_features;
    }

    if(frequency_synchronization != nullptr)
    {
        children["Cisco-IOS-XR-freqsync-sat-cfg:frequency-synchronization"] = frequency_synchronization;
    }

    if(qos != nullptr)
    {
        children["Cisco-IOS-XR-qos-ma-sat-cfg:qos"] = qos;
    }

    return children;
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
    if(name == "redundancy" || name == "remote-ports" || name == "ethernet-features" || name == "frequency-synchronization" || name == "qos" || name == "satellite" || name == "minimum-required-links")
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

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Redundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Redundancy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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
{

    yang_name = "remote-ports"; yang_parent_name = "nv-satellite-fabric-link"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::~RemotePorts()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::has_data() const
{
    for (std::size_t index=0; index<remote_port.size(); index++)
    {
        if(remote_port[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::has_operation() const
{
    for (std::size_t index=0; index<remote_port.size(); index++)
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

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-port")
    {
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::RemotePort>();
        c->parent = this;
        remote_port.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : remote_port)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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
    path_buffer << "remote-port" <<"[port-type='" <<port_type <<"']" <<"[slot='" <<slot <<"']" <<"[sub-slot='" <<sub_slot <<"']";
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

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::RemotePort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::RemotePort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(cfm != nullptr)
    {
        children["cfm"] = cfm;
    }

    return children;
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

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::Cfm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::Cfm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::FrequencySynchronization::FrequencySynchronization()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "frequency-synchronization"; yang_parent_name = "nv-satellite-fabric-link"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::FrequencySynchronization::~FrequencySynchronization()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::FrequencySynchronization::has_data() const
{
    return enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::FrequencySynchronization::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::FrequencySynchronization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-freqsync-sat-cfg:frequency-synchronization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::FrequencySynchronization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::FrequencySynchronization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::FrequencySynchronization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::FrequencySynchronization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::FrequencySynchronization::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::FrequencySynchronization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Qos()
    :
    output(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output>())
	,input(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input>())
{
    output->parent = this;
    input->parent = this;

    yang_name = "qos"; yang_parent_name = "nv-satellite-fabric-link"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::~Qos()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::has_data() const
{
    return (output !=  nullptr && output->has_data())
	|| (input !=  nullptr && input->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::has_operation() const
{
    return is_set(yfilter)
	|| (output !=  nullptr && output->has_operation())
	|| (input !=  nullptr && input->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-qos-ma-sat-cfg:qos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output>();
        }
        return output;
    }

    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "output" || name == "input")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::Output()
{

    yang_name = "output"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::~Output()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::has_data() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::has_operation() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy")
    {
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::ServicePolicy>();
        c->parent = this;
        service_policy.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : service_policy)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::ServicePolicy::ServicePolicy()
    :
    service_policy_name{YType::str, "service-policy-name"}
{

    yang_name = "service-policy"; yang_parent_name = "output"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::ServicePolicy::~ServicePolicy()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::ServicePolicy::has_data() const
{
    return service_policy_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_policy_name.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy" <<"[service-policy-name='" <<service_policy_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_name.is_set || is_set(service_policy_name.yfilter)) leaf_name_data.push_back(service_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name = value;
        service_policy_name.value_namespace = name_space;
        service_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::Input()
{

    yang_name = "input"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::~Input()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::has_data() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::has_operation() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy")
    {
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::ServicePolicy>();
        c->parent = this;
        service_policy.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : service_policy)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::ServicePolicy::ServicePolicy()
    :
    service_policy_name{YType::str, "service-policy-name"}
{

    yang_name = "service-policy"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::ServicePolicy::~ServicePolicy()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::ServicePolicy::has_data() const
{
    return service_policy_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_policy_name.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy" <<"[service-policy-name='" <<service_policy_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_name.is_set || is_set(service_policy_name.yfilter)) leaf_name_data.push_back(service_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name = value;
        service_policy_name.value_namespace = name_space;
        service_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::NvSatelliteFabricNetwork()
    :
    enable{YType::empty, "enable"}
    	,
    satellites(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites>())
	,redundancy(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Redundancy>())
{
    satellites->parent = this;
    redundancy->parent = this;

    yang_name = "nv-satellite-fabric-network"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::~NvSatelliteFabricNetwork()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::has_data() const
{
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

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(satellites != nullptr)
    {
        children["satellites"] = satellites;
    }

    if(redundancy != nullptr)
    {
        children["redundancy"] = redundancy;
    }

    return children;
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
    qos(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos>())
{
    qos->parent = this;

    yang_name = "satellites"; yang_parent_name = "nv-satellite-fabric-network"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::~Satellites()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::has_data() const
{
    for (std::size_t index=0; index<satellite.size(); index++)
    {
        if(satellite[index]->has_data())
            return true;
    }
    return (qos !=  nullptr && qos->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::has_operation() const
{
    for (std::size_t index=0; index<satellite.size(); index++)
    {
        if(satellite[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (qos !=  nullptr && qos->has_operation());
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

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "satellite")
    {
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite>();
        c->parent = this;
        satellite.push_back(c);
        return c;
    }

    if(child_yang_name == "Cisco-IOS-XR-qos-ma-sat-cfg:qos")
    {
        if(qos == nullptr)
        {
            qos = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos>();
        }
        return qos;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : satellite)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(qos != nullptr)
    {
        children["Cisco-IOS-XR-qos-ma-sat-cfg:qos"] = qos;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "satellite" || name == "qos")
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
    path_buffer << "satellite" <<"[satellite-id='" <<satellite_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (satellite_id.is_set || is_set(satellite_id.yfilter)) leaf_name_data.push_back(satellite_id.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(remote_ports != nullptr)
    {
        children["remote-ports"] = remote_ports;
    }

    return children;
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
{

    yang_name = "remote-ports"; yang_parent_name = "satellite"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::~RemotePorts()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::has_data() const
{
    for (std::size_t index=0; index<remote_port.size(); index++)
    {
        if(remote_port[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::has_operation() const
{
    for (std::size_t index=0; index<remote_port.size(); index++)
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

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-port")
    {
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::RemotePort>();
        c->parent = this;
        remote_port.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : remote_port)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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
    path_buffer << "remote-port" <<"[port-type='" <<port_type <<"']" <<"[slot='" <<slot <<"']" <<"[sub-slot='" <<sub_slot <<"']";
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

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::RemotePort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::RemotePort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Qos()
    :
    output(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output>())
	,input(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input>())
{
    output->parent = this;
    input->parent = this;

    yang_name = "qos"; yang_parent_name = "satellites"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::~Qos()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::has_data() const
{
    return (output !=  nullptr && output->has_data())
	|| (input !=  nullptr && input->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::has_operation() const
{
    return is_set(yfilter)
	|| (output !=  nullptr && output->has_operation())
	|| (input !=  nullptr && input->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-qos-ma-sat-cfg:qos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output>();
        }
        return output;
    }

    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "output" || name == "input")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::Output()
{

    yang_name = "output"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::~Output()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::has_data() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::has_operation() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy")
    {
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::ServicePolicy>();
        c->parent = this;
        service_policy.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : service_policy)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::ServicePolicy::ServicePolicy()
    :
    service_policy_name{YType::str, "service-policy-name"}
{

    yang_name = "service-policy"; yang_parent_name = "output"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::ServicePolicy::~ServicePolicy()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::ServicePolicy::has_data() const
{
    return service_policy_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_policy_name.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy" <<"[service-policy-name='" <<service_policy_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_name.is_set || is_set(service_policy_name.yfilter)) leaf_name_data.push_back(service_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name = value;
        service_policy_name.value_namespace = name_space;
        service_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::Input()
{

    yang_name = "input"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::~Input()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::has_data() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::has_operation() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy")
    {
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::ServicePolicy>();
        c->parent = this;
        service_policy.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : service_policy)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::ServicePolicy::ServicePolicy()
    :
    service_policy_name{YType::str, "service-policy-name"}
{

    yang_name = "service-policy"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::ServicePolicy::~ServicePolicy()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::ServicePolicy::has_data() const
{
    return service_policy_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_policy_name.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy" <<"[service-policy-name='" <<service_policy_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_name.is_set || is_set(service_policy_name.yfilter)) leaf_name_data.push_back(service_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name = value;
        service_policy_name.value_namespace = name_space;
        service_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy-name")
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

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Redundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Redundancy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

InterfaceConfigurations::InterfaceConfiguration::Lldp::Lldp()
    :
    lldp_intf_enter{YType::boolean, "lldp-intf-enter"}
    	,
    transmit(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Lldp::Transmit>())
	,receive(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Lldp::Receive>())
{
    transmit->parent = this;
    receive->parent = this;

    yang_name = "lldp"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Lldp::~Lldp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Lldp::has_data() const
{
    return lldp_intf_enter.is_set
	|| (transmit !=  nullptr && transmit->has_data())
	|| (receive !=  nullptr && receive->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Lldp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lldp_intf_enter.yfilter)
	|| (transmit !=  nullptr && transmit->has_operation())
	|| (receive !=  nullptr && receive->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Lldp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ethernet-lldp-cfg:lldp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Lldp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lldp_intf_enter.is_set || is_set(lldp_intf_enter.yfilter)) leaf_name_data.push_back(lldp_intf_enter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Lldp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "transmit")
    {
        if(transmit == nullptr)
        {
            transmit = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Lldp::Transmit>();
        }
        return transmit;
    }

    if(child_yang_name == "receive")
    {
        if(receive == nullptr)
        {
            receive = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Lldp::Receive>();
        }
        return receive;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Lldp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(transmit != nullptr)
    {
        children["transmit"] = transmit;
    }

    if(receive != nullptr)
    {
        children["receive"] = receive;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Lldp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lldp-intf-enter")
    {
        lldp_intf_enter = value;
        lldp_intf_enter.value_namespace = name_space;
        lldp_intf_enter.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Lldp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lldp-intf-enter")
    {
        lldp_intf_enter.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Lldp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transmit" || name == "receive" || name == "lldp-intf-enter")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Lldp::Transmit::Transmit()
    :
    disable{YType::boolean, "disable"}
{

    yang_name = "transmit"; yang_parent_name = "lldp"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Lldp::Transmit::~Transmit()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Lldp::Transmit::has_data() const
{
    return disable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Lldp::Transmit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Lldp::Transmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Lldp::Transmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Lldp::Transmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Lldp::Transmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Lldp::Transmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Lldp::Transmit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Lldp::Transmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Lldp::Receive::Receive()
    :
    disable{YType::boolean, "disable"}
{

    yang_name = "receive"; yang_parent_name = "lldp"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Lldp::Receive::~Receive()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Lldp::Receive::has_data() const
{
    return disable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Lldp::Receive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Lldp::Receive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Lldp::Receive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Lldp::Receive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Lldp::Receive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Lldp::Receive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Lldp::Receive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Lldp::Receive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSessions()
{

    yang_name = "span-monitor-sessions"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::~SpanMonitorSessions()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::has_data() const
{
    for (std::size_t index=0; index<span_monitor_session.size(); index++)
    {
        if(span_monitor_session[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::has_operation() const
{
    for (std::size_t index=0; index<span_monitor_session.size(); index++)
    {
        if(span_monitor_session[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-Ethernet-SPAN-cfg:span-monitor-sessions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "span-monitor-session")
    {
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession>();
        c->parent = this;
        span_monitor_session.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : span_monitor_session)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "span-monitor-session")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::SpanMonitorSession()
    :
    session_class{YType::enumeration, "session-class"},
    mirror_first{YType::uint32, "mirror-first"},
    mirror_interval{YType::enumeration, "mirror-interval"}
    	,
    attachment(nullptr) // presence node
	,acl(nullptr) // presence node
{

    yang_name = "span-monitor-session"; yang_parent_name = "span-monitor-sessions"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::~SpanMonitorSession()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::has_data() const
{
    return session_class.is_set
	|| mirror_first.is_set
	|| mirror_interval.is_set
	|| (attachment !=  nullptr && attachment->has_data())
	|| (acl !=  nullptr && acl->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_class.yfilter)
	|| ydk::is_set(mirror_first.yfilter)
	|| ydk::is_set(mirror_interval.yfilter)
	|| (attachment !=  nullptr && attachment->has_operation())
	|| (acl !=  nullptr && acl->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "span-monitor-session" <<"[session-class='" <<session_class <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_class.is_set || is_set(session_class.yfilter)) leaf_name_data.push_back(session_class.get_name_leafdata());
    if (mirror_first.is_set || is_set(mirror_first.yfilter)) leaf_name_data.push_back(mirror_first.get_name_leafdata());
    if (mirror_interval.is_set || is_set(mirror_interval.yfilter)) leaf_name_data.push_back(mirror_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attachment")
    {
        if(attachment == nullptr)
        {
            attachment = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment>();
        }
        return attachment;
    }

    if(child_yang_name == "acl")
    {
        if(acl == nullptr)
        {
            acl = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Acl>();
        }
        return acl;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(attachment != nullptr)
    {
        children["attachment"] = attachment;
    }

    if(acl != nullptr)
    {
        children["acl"] = acl;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-class")
    {
        session_class = value;
        session_class.value_namespace = name_space;
        session_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mirror-first")
    {
        mirror_first = value;
        mirror_first.value_namespace = name_space;
        mirror_first.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mirror-interval")
    {
        mirror_interval = value;
        mirror_interval.value_namespace = name_space;
        mirror_interval.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-class")
    {
        session_class.yfilter = yfilter;
    }
    if(value_path == "mirror-first")
    {
        mirror_first.yfilter = yfilter;
    }
    if(value_path == "mirror-interval")
    {
        mirror_interval.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attachment" || name == "acl" || name == "session-class" || name == "mirror-first" || name == "mirror-interval")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment::Attachment()
    :
    session_name{YType::str, "session-name"},
    direction{YType::enumeration, "direction"},
    port_level_enable{YType::empty, "port-level-enable"}
{

    yang_name = "attachment"; yang_parent_name = "span-monitor-session"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment::~Attachment()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment::has_data() const
{
    return session_name.is_set
	|| direction.is_set
	|| port_level_enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_name.yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(port_level_enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attachment";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_name.is_set || is_set(session_name.yfilter)) leaf_name_data.push_back(session_name.get_name_leafdata());
    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (port_level_enable.is_set || is_set(port_level_enable.yfilter)) leaf_name_data.push_back(port_level_enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-name")
    {
        session_name = value;
        session_name.value_namespace = name_space;
        session_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-level-enable")
    {
        port_level_enable = value;
        port_level_enable.value_namespace = name_space;
        port_level_enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-name")
    {
        session_name.yfilter = yfilter;
    }
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "port-level-enable")
    {
        port_level_enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-name" || name == "direction" || name == "port-level-enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Acl::Acl()
    :
    acl_enable{YType::empty, "acl-enable"},
    acl_name{YType::str, "acl-name"}
{

    yang_name = "acl"; yang_parent_name = "span-monitor-session"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Acl::~Acl()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Acl::has_data() const
{
    return acl_enable.is_set
	|| acl_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Acl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_enable.yfilter)
	|| ydk::is_set(acl_name.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Acl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_enable.is_set || is_set(acl_enable.yfilter)) leaf_name_data.push_back(acl_enable.get_name_leafdata());
    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Acl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Acl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-enable")
    {
        acl_enable = value;
        acl_enable.value_namespace = name_space;
        acl_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acl-name")
    {
        acl_name = value;
        acl_name.value_namespace = name_space;
        acl_name.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Acl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-enable")
    {
        acl_enable.yfilter = yfilter;
    }
    if(value_path == "acl-name")
    {
        acl_name.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Acl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-enable" || name == "acl-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::FrequencySynchronization::FrequencySynchronization()
    :
    ssm_disable{YType::empty, "ssm-disable"},
    time_of_day_priority{YType::uint32, "time-of-day-priority"},
    selection_input{YType::empty, "selection-input"},
    enable{YType::empty, "enable"},
    priority{YType::uint32, "priority"},
    wait_to_restore_time{YType::uint32, "wait-to-restore-time"}
    	,
    input_quality_level(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::FrequencySynchronization::InputQualityLevel>())
	,output_quality_level(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::FrequencySynchronization::OutputQualityLevel>())
{
    input_quality_level->parent = this;
    output_quality_level->parent = this;

    yang_name = "frequency-synchronization"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::FrequencySynchronization::~FrequencySynchronization()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::FrequencySynchronization::has_data() const
{
    return ssm_disable.is_set
	|| time_of_day_priority.is_set
	|| selection_input.is_set
	|| enable.is_set
	|| priority.is_set
	|| wait_to_restore_time.is_set
	|| (input_quality_level !=  nullptr && input_quality_level->has_data())
	|| (output_quality_level !=  nullptr && output_quality_level->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::FrequencySynchronization::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ssm_disable.yfilter)
	|| ydk::is_set(time_of_day_priority.yfilter)
	|| ydk::is_set(selection_input.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(wait_to_restore_time.yfilter)
	|| (input_quality_level !=  nullptr && input_quality_level->has_operation())
	|| (output_quality_level !=  nullptr && output_quality_level->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::FrequencySynchronization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-freqsync-cfg:frequency-synchronization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::FrequencySynchronization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ssm_disable.is_set || is_set(ssm_disable.yfilter)) leaf_name_data.push_back(ssm_disable.get_name_leafdata());
    if (time_of_day_priority.is_set || is_set(time_of_day_priority.yfilter)) leaf_name_data.push_back(time_of_day_priority.get_name_leafdata());
    if (selection_input.is_set || is_set(selection_input.yfilter)) leaf_name_data.push_back(selection_input.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (wait_to_restore_time.is_set || is_set(wait_to_restore_time.yfilter)) leaf_name_data.push_back(wait_to_restore_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::FrequencySynchronization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input-quality-level")
    {
        if(input_quality_level == nullptr)
        {
            input_quality_level = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::FrequencySynchronization::InputQualityLevel>();
        }
        return input_quality_level;
    }

    if(child_yang_name == "output-quality-level")
    {
        if(output_quality_level == nullptr)
        {
            output_quality_level = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::FrequencySynchronization::OutputQualityLevel>();
        }
        return output_quality_level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::FrequencySynchronization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input_quality_level != nullptr)
    {
        children["input-quality-level"] = input_quality_level;
    }

    if(output_quality_level != nullptr)
    {
        children["output-quality-level"] = output_quality_level;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::FrequencySynchronization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ssm-disable")
    {
        ssm_disable = value;
        ssm_disable.value_namespace = name_space;
        ssm_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-of-day-priority")
    {
        time_of_day_priority = value;
        time_of_day_priority.value_namespace = name_space;
        time_of_day_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selection-input")
    {
        selection_input = value;
        selection_input.value_namespace = name_space;
        selection_input.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-to-restore-time")
    {
        wait_to_restore_time = value;
        wait_to_restore_time.value_namespace = name_space;
        wait_to_restore_time.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::FrequencySynchronization::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ssm-disable")
    {
        ssm_disable.yfilter = yfilter;
    }
    if(value_path == "time-of-day-priority")
    {
        time_of_day_priority.yfilter = yfilter;
    }
    if(value_path == "selection-input")
    {
        selection_input.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "wait-to-restore-time")
    {
        wait_to_restore_time.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::FrequencySynchronization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input-quality-level" || name == "output-quality-level" || name == "ssm-disable" || name == "time-of-day-priority" || name == "selection-input" || name == "enable" || name == "priority" || name == "wait-to-restore-time")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::FrequencySynchronization::InputQualityLevel::InputQualityLevel()
    :
    quality_level_option{YType::enumeration, "quality-level-option"},
    exact_quality_level_value{YType::enumeration, "exact-quality-level-value"},
    min_quality_level_value{YType::enumeration, "min-quality-level-value"},
    max_quality_level_value{YType::enumeration, "max-quality-level-value"}
{

    yang_name = "input-quality-level"; yang_parent_name = "frequency-synchronization"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::FrequencySynchronization::InputQualityLevel::~InputQualityLevel()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::FrequencySynchronization::InputQualityLevel::has_data() const
{
    return quality_level_option.is_set
	|| exact_quality_level_value.is_set
	|| min_quality_level_value.is_set
	|| max_quality_level_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::FrequencySynchronization::InputQualityLevel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(quality_level_option.yfilter)
	|| ydk::is_set(exact_quality_level_value.yfilter)
	|| ydk::is_set(min_quality_level_value.yfilter)
	|| ydk::is_set(max_quality_level_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::FrequencySynchronization::InputQualityLevel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-quality-level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::FrequencySynchronization::InputQualityLevel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (quality_level_option.is_set || is_set(quality_level_option.yfilter)) leaf_name_data.push_back(quality_level_option.get_name_leafdata());
    if (exact_quality_level_value.is_set || is_set(exact_quality_level_value.yfilter)) leaf_name_data.push_back(exact_quality_level_value.get_name_leafdata());
    if (min_quality_level_value.is_set || is_set(min_quality_level_value.yfilter)) leaf_name_data.push_back(min_quality_level_value.get_name_leafdata());
    if (max_quality_level_value.is_set || is_set(max_quality_level_value.yfilter)) leaf_name_data.push_back(max_quality_level_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::FrequencySynchronization::InputQualityLevel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::FrequencySynchronization::InputQualityLevel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::FrequencySynchronization::InputQualityLevel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option = value;
        quality_level_option.value_namespace = name_space;
        quality_level_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exact-quality-level-value")
    {
        exact_quality_level_value = value;
        exact_quality_level_value.value_namespace = name_space;
        exact_quality_level_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-quality-level-value")
    {
        min_quality_level_value = value;
        min_quality_level_value.value_namespace = name_space;
        min_quality_level_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-quality-level-value")
    {
        max_quality_level_value = value;
        max_quality_level_value.value_namespace = name_space;
        max_quality_level_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::FrequencySynchronization::InputQualityLevel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option.yfilter = yfilter;
    }
    if(value_path == "exact-quality-level-value")
    {
        exact_quality_level_value.yfilter = yfilter;
    }
    if(value_path == "min-quality-level-value")
    {
        min_quality_level_value.yfilter = yfilter;
    }
    if(value_path == "max-quality-level-value")
    {
        max_quality_level_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::FrequencySynchronization::InputQualityLevel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "quality-level-option" || name == "exact-quality-level-value" || name == "min-quality-level-value" || name == "max-quality-level-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::FrequencySynchronization::OutputQualityLevel::OutputQualityLevel()
    :
    quality_level_option{YType::enumeration, "quality-level-option"},
    exact_quality_level_value{YType::enumeration, "exact-quality-level-value"},
    min_quality_level_value{YType::enumeration, "min-quality-level-value"},
    max_quality_level_value{YType::enumeration, "max-quality-level-value"}
{

    yang_name = "output-quality-level"; yang_parent_name = "frequency-synchronization"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::FrequencySynchronization::OutputQualityLevel::~OutputQualityLevel()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::FrequencySynchronization::OutputQualityLevel::has_data() const
{
    return quality_level_option.is_set
	|| exact_quality_level_value.is_set
	|| min_quality_level_value.is_set
	|| max_quality_level_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::FrequencySynchronization::OutputQualityLevel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(quality_level_option.yfilter)
	|| ydk::is_set(exact_quality_level_value.yfilter)
	|| ydk::is_set(min_quality_level_value.yfilter)
	|| ydk::is_set(max_quality_level_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::FrequencySynchronization::OutputQualityLevel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-quality-level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::FrequencySynchronization::OutputQualityLevel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (quality_level_option.is_set || is_set(quality_level_option.yfilter)) leaf_name_data.push_back(quality_level_option.get_name_leafdata());
    if (exact_quality_level_value.is_set || is_set(exact_quality_level_value.yfilter)) leaf_name_data.push_back(exact_quality_level_value.get_name_leafdata());
    if (min_quality_level_value.is_set || is_set(min_quality_level_value.yfilter)) leaf_name_data.push_back(min_quality_level_value.get_name_leafdata());
    if (max_quality_level_value.is_set || is_set(max_quality_level_value.yfilter)) leaf_name_data.push_back(max_quality_level_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::FrequencySynchronization::OutputQualityLevel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::FrequencySynchronization::OutputQualityLevel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::FrequencySynchronization::OutputQualityLevel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option = value;
        quality_level_option.value_namespace = name_space;
        quality_level_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exact-quality-level-value")
    {
        exact_quality_level_value = value;
        exact_quality_level_value.value_namespace = name_space;
        exact_quality_level_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-quality-level-value")
    {
        min_quality_level_value = value;
        min_quality_level_value.value_namespace = name_space;
        min_quality_level_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-quality-level-value")
    {
        max_quality_level_value = value;
        max_quality_level_value.value_namespace = name_space;
        max_quality_level_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::FrequencySynchronization::OutputQualityLevel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "quality-level-option")
    {
        quality_level_option.yfilter = yfilter;
    }
    if(value_path == "exact-quality-level-value")
    {
        exact_quality_level_value.yfilter = yfilter;
    }
    if(value_path == "min-quality-level-value")
    {
        min_quality_level_value.yfilter = yfilter;
    }
    if(value_path == "max-quality-level-value")
    {
        max_quality_level_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::FrequencySynchronization::OutputQualityLevel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "quality-level-option" || name == "exact-quality-level-value" || name == "min-quality-level-value" || name == "max-quality-level-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicies()
{

    yang_name = "service-policies"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::~ServicePolicies()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::has_data() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::has_operation() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-iedge4710-cfg:service-policies";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy")
    {
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicy>();
        c->parent = this;
        service_policy.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : service_policy)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicy::ServicePolicy()
    :
    service_policy_name{YType::str, "service-policy-name"}
{

    yang_name = "service-policy"; yang_parent_name = "service-policies"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicy::~ServicePolicy()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicy::has_data() const
{
    return service_policy_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_policy_name.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy" <<"[service-policy-name='" <<service_policy_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_name.is_set || is_set(service_policy_name.yfilter)) leaf_name_data.push_back(service_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name = value;
        service_policy_name.value_namespace = name_space;
        service_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Afs::Afs()
{

    yang_name = "afs"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Afs::~Afs()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Afs::has_data() const
{
    for (std::size_t index=0; index<af.size(); index++)
    {
        if(af[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<af_topology_name.size(); index++)
    {
        if(af_topology_name[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Afs::has_operation() const
{
    for (std::size_t index=0; index<af.size(); index++)
    {
        if(af[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<af_topology_name.size(); index++)
    {
        if(af_topology_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Afs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rsi-cfg:afs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Afs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Afs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "af")
    {
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Afs::Af>();
        c->parent = this;
        af.push_back(c);
        return c;
    }

    if(child_yang_name == "af-topology-name")
    {
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Afs::AfTopologyName>();
        c->parent = this;
        af_topology_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Afs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : af)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : af_topology_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Afs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Afs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Afs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af" || name == "af-topology-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Afs::Af::Af()
    :
    af_name{YType::enumeration, "af-name"},
    saf_name{YType::enumeration, "saf-name"}
{

    yang_name = "af"; yang_parent_name = "afs"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Afs::Af::~Af()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Afs::Af::has_data() const
{
    return af_name.is_set
	|| saf_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Afs::Af::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(saf_name.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Afs::Af::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af" <<"[af-name='" <<af_name <<"']" <<"[saf-name='" <<saf_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Afs::Af::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.yfilter)) leaf_name_data.push_back(saf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Afs::Af::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Afs::Af::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Afs::Af::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
        saf_name.value_namespace = name_space;
        saf_name.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Afs::Af::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "saf-name")
    {
        saf_name.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Afs::Af::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "saf-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Afs::AfTopologyName::AfTopologyName()
    :
    topology_name{YType::str, "topology-name"},
    af_name{YType::enumeration, "af-name"},
    saf_name{YType::enumeration, "saf-name"}
{

    yang_name = "af-topology-name"; yang_parent_name = "afs"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Afs::AfTopologyName::~AfTopologyName()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Afs::AfTopologyName::has_data() const
{
    return topology_name.is_set
	|| af_name.is_set
	|| saf_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Afs::AfTopologyName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(topology_name.yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(saf_name.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Afs::AfTopologyName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af-topology-name" <<"[topology-name='" <<topology_name <<"']" <<"[af-name='" <<af_name <<"']" <<"[saf-name='" <<saf_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Afs::AfTopologyName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (topology_name.is_set || is_set(topology_name.yfilter)) leaf_name_data.push_back(topology_name.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.yfilter)) leaf_name_data.push_back(saf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Afs::AfTopologyName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Afs::AfTopologyName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Afs::AfTopologyName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "topology-name")
    {
        topology_name = value;
        topology_name.value_namespace = name_space;
        topology_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
        saf_name.value_namespace = name_space;
        saf_name.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Afs::AfTopologyName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "topology-name")
    {
        topology_name.yfilter = yfilter;
    }
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "saf-name")
    {
        saf_name.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Afs::AfTopologyName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topology-name" || name == "af-name" || name == "saf-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Statistics::Statistics()
    :
    load_interval{YType::uint32, "load-interval"}
{

    yang_name = "statistics"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Statistics::~Statistics()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Statistics::has_data() const
{
    return load_interval.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(load_interval.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-statsd-cfg:statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (load_interval.is_set || is_set(load_interval.yfilter)) leaf_name_data.push_back(load_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "load-interval")
    {
        load_interval = value;
        load_interval.value_namespace = name_space;
        load_interval.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "load-interval")
    {
        load_interval.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "load-interval")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Ipv6PacketFilter()
    :
    inbound(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Inbound>())
	,outbound(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Outbound>())
{
    inbound->parent = this;
    outbound->parent = this;

    yang_name = "ipv6-packet-filter"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::~Ipv6PacketFilter()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::has_data() const
{
    return (inbound !=  nullptr && inbound->has_data())
	|| (outbound !=  nullptr && outbound->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::has_operation() const
{
    return is_set(yfilter)
	|| (inbound !=  nullptr && inbound->has_operation())
	|| (outbound !=  nullptr && outbound->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-pfilter-cfg:ipv6-packet-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inbound")
    {
        if(inbound == nullptr)
        {
            inbound = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Inbound>();
        }
        return inbound;
    }

    if(child_yang_name == "outbound")
    {
        if(outbound == nullptr)
        {
            outbound = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Outbound>();
        }
        return outbound;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(inbound != nullptr)
    {
        children["inbound"] = inbound;
    }

    if(outbound != nullptr)
    {
        children["outbound"] = outbound;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inbound" || name == "outbound")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Inbound::Inbound()
    :
    common_acl_name{YType::str, "common-acl-name"},
    name{YType::str, "name"},
    interface_statistics{YType::empty, "interface-statistics"},
    compression_level{YType::uint32, "compression-level"},
    acl_name_array{YType::str, "acl-name-array"},
    is_common_array{YType::boolean, "is-common-array"}
{

    yang_name = "inbound"; yang_parent_name = "ipv6-packet-filter"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Inbound::~Inbound()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Inbound::has_data() const
{
    for (auto const & leaf : acl_name_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : is_common_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return common_acl_name.is_set
	|| name.is_set
	|| interface_statistics.is_set
	|| compression_level.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Inbound::has_operation() const
{
    for (auto const & leaf : acl_name_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : is_common_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(common_acl_name.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(interface_statistics.yfilter)
	|| ydk::is_set(compression_level.yfilter)
	|| ydk::is_set(acl_name_array.yfilter)
	|| ydk::is_set(is_common_array.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Inbound::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inbound";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Inbound::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (common_acl_name.is_set || is_set(common_acl_name.yfilter)) leaf_name_data.push_back(common_acl_name.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (interface_statistics.is_set || is_set(interface_statistics.yfilter)) leaf_name_data.push_back(interface_statistics.get_name_leafdata());
    if (compression_level.is_set || is_set(compression_level.yfilter)) leaf_name_data.push_back(compression_level.get_name_leafdata());

    auto acl_name_array_name_datas = acl_name_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), acl_name_array_name_datas.begin(), acl_name_array_name_datas.end());
    auto is_common_array_name_datas = is_common_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), is_common_array_name_datas.begin(), is_common_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Inbound::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Inbound::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Inbound::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "common-acl-name")
    {
        common_acl_name = value;
        common_acl_name.value_namespace = name_space;
        common_acl_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-statistics")
    {
        interface_statistics = value;
        interface_statistics.value_namespace = name_space;
        interface_statistics.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "compression-level")
    {
        compression_level = value;
        compression_level.value_namespace = name_space;
        compression_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acl-name-array")
    {
        acl_name_array.append(value);
    }
    if(value_path == "is-common-array")
    {
        is_common_array.append(value);
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Inbound::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "common-acl-name")
    {
        common_acl_name.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "interface-statistics")
    {
        interface_statistics.yfilter = yfilter;
    }
    if(value_path == "compression-level")
    {
        compression_level.yfilter = yfilter;
    }
    if(value_path == "acl-name-array")
    {
        acl_name_array.yfilter = yfilter;
    }
    if(value_path == "is-common-array")
    {
        is_common_array.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Inbound::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common-acl-name" || name == "name" || name == "interface-statistics" || name == "compression-level" || name == "acl-name-array" || name == "is-common-array")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Outbound::Outbound()
    :
    do_not_use{YType::str, "do-not-use"},
    name{YType::str, "name"},
    interface_statistics{YType::empty, "interface-statistics"},
    compression_level{YType::uint32, "compression-level"},
    acl_name_array{YType::str, "acl-name-array"},
    is_common_array{YType::boolean, "is-common-array"}
{

    yang_name = "outbound"; yang_parent_name = "ipv6-packet-filter"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Outbound::~Outbound()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Outbound::has_data() const
{
    for (auto const & leaf : acl_name_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : is_common_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return do_not_use.is_set
	|| name.is_set
	|| interface_statistics.is_set
	|| compression_level.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Outbound::has_operation() const
{
    for (auto const & leaf : acl_name_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : is_common_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(do_not_use.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(interface_statistics.yfilter)
	|| ydk::is_set(compression_level.yfilter)
	|| ydk::is_set(acl_name_array.yfilter)
	|| ydk::is_set(is_common_array.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Outbound::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outbound";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Outbound::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (do_not_use.is_set || is_set(do_not_use.yfilter)) leaf_name_data.push_back(do_not_use.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (interface_statistics.is_set || is_set(interface_statistics.yfilter)) leaf_name_data.push_back(interface_statistics.get_name_leafdata());
    if (compression_level.is_set || is_set(compression_level.yfilter)) leaf_name_data.push_back(compression_level.get_name_leafdata());

    auto acl_name_array_name_datas = acl_name_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), acl_name_array_name_datas.begin(), acl_name_array_name_datas.end());
    auto is_common_array_name_datas = is_common_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), is_common_array_name_datas.begin(), is_common_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Outbound::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Outbound::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Outbound::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "do-not-use")
    {
        do_not_use = value;
        do_not_use.value_namespace = name_space;
        do_not_use.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-statistics")
    {
        interface_statistics = value;
        interface_statistics.value_namespace = name_space;
        interface_statistics.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "compression-level")
    {
        compression_level = value;
        compression_level.value_namespace = name_space;
        compression_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acl-name-array")
    {
        acl_name_array.append(value);
    }
    if(value_path == "is-common-array")
    {
        is_common_array.append(value);
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Outbound::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "do-not-use")
    {
        do_not_use.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "interface-statistics")
    {
        interface_statistics.yfilter = yfilter;
    }
    if(value_path == "compression-level")
    {
        compression_level.yfilter = yfilter;
    }
    if(value_path == "acl-name-array")
    {
        acl_name_array.yfilter = yfilter;
    }
    if(value_path == "is-common-array")
    {
        is_common_array.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Outbound::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "do-not-use" || name == "name" || name == "interface-statistics" || name == "compression-level" || name == "acl-name-array" || name == "is-common-array")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::EsPacketFilter::EsPacketFilter()
    :
    outbound{YType::str, "outbound"},
    inbound{YType::str, "inbound"}
{

    yang_name = "es-packet-filter"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::EsPacketFilter::~EsPacketFilter()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EsPacketFilter::has_data() const
{
    return outbound.is_set
	|| inbound.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::EsPacketFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(outbound.yfilter)
	|| ydk::is_set(inbound.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::EsPacketFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-pfilter-cfg:es-packet-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::EsPacketFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (outbound.is_set || is_set(outbound.yfilter)) leaf_name_data.push_back(outbound.get_name_leafdata());
    if (inbound.is_set || is_set(inbound.yfilter)) leaf_name_data.push_back(inbound.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EsPacketFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::EsPacketFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EsPacketFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "outbound")
    {
        outbound = value;
        outbound.value_namespace = name_space;
        outbound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inbound")
    {
        inbound = value;
        inbound.value_namespace = name_space;
        inbound.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::EsPacketFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "outbound")
    {
        outbound.yfilter = yfilter;
    }
    if(value_path == "inbound")
    {
        inbound.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::EsPacketFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "outbound" || name == "inbound")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Ipv4PacketFilter()
    :
    outbound(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Outbound>())
	,inbound(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Inbound>())
{
    outbound->parent = this;
    inbound->parent = this;

    yang_name = "ipv4-packet-filter"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::~Ipv4PacketFilter()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::has_data() const
{
    return (outbound !=  nullptr && outbound->has_data())
	|| (inbound !=  nullptr && inbound->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::has_operation() const
{
    return is_set(yfilter)
	|| (outbound !=  nullptr && outbound->has_operation())
	|| (inbound !=  nullptr && inbound->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-pfilter-cfg:ipv4-packet-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "outbound")
    {
        if(outbound == nullptr)
        {
            outbound = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Outbound>();
        }
        return outbound;
    }

    if(child_yang_name == "inbound")
    {
        if(inbound == nullptr)
        {
            inbound = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Inbound>();
        }
        return inbound;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(outbound != nullptr)
    {
        children["outbound"] = outbound;
    }

    if(inbound != nullptr)
    {
        children["inbound"] = inbound;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "outbound" || name == "inbound")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Outbound::Outbound()
    :
    do_not_use{YType::str, "do-not-use"},
    name{YType::str, "name"},
    hardware_count{YType::empty, "hardware-count"},
    interface_statistics{YType::empty, "interface-statistics"},
    compression_level{YType::uint32, "compression-level"},
    acl_name_array{YType::str, "acl-name-array"},
    is_common_array{YType::boolean, "is-common-array"}
{

    yang_name = "outbound"; yang_parent_name = "ipv4-packet-filter"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Outbound::~Outbound()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Outbound::has_data() const
{
    for (auto const & leaf : acl_name_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : is_common_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return do_not_use.is_set
	|| name.is_set
	|| hardware_count.is_set
	|| interface_statistics.is_set
	|| compression_level.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Outbound::has_operation() const
{
    for (auto const & leaf : acl_name_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : is_common_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(do_not_use.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(hardware_count.yfilter)
	|| ydk::is_set(interface_statistics.yfilter)
	|| ydk::is_set(compression_level.yfilter)
	|| ydk::is_set(acl_name_array.yfilter)
	|| ydk::is_set(is_common_array.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Outbound::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outbound";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Outbound::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (do_not_use.is_set || is_set(do_not_use.yfilter)) leaf_name_data.push_back(do_not_use.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (hardware_count.is_set || is_set(hardware_count.yfilter)) leaf_name_data.push_back(hardware_count.get_name_leafdata());
    if (interface_statistics.is_set || is_set(interface_statistics.yfilter)) leaf_name_data.push_back(interface_statistics.get_name_leafdata());
    if (compression_level.is_set || is_set(compression_level.yfilter)) leaf_name_data.push_back(compression_level.get_name_leafdata());

    auto acl_name_array_name_datas = acl_name_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), acl_name_array_name_datas.begin(), acl_name_array_name_datas.end());
    auto is_common_array_name_datas = is_common_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), is_common_array_name_datas.begin(), is_common_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Outbound::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Outbound::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Outbound::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "do-not-use")
    {
        do_not_use = value;
        do_not_use.value_namespace = name_space;
        do_not_use.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-count")
    {
        hardware_count = value;
        hardware_count.value_namespace = name_space;
        hardware_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-statistics")
    {
        interface_statistics = value;
        interface_statistics.value_namespace = name_space;
        interface_statistics.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "compression-level")
    {
        compression_level = value;
        compression_level.value_namespace = name_space;
        compression_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acl-name-array")
    {
        acl_name_array.append(value);
    }
    if(value_path == "is-common-array")
    {
        is_common_array.append(value);
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Outbound::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "do-not-use")
    {
        do_not_use.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "hardware-count")
    {
        hardware_count.yfilter = yfilter;
    }
    if(value_path == "interface-statistics")
    {
        interface_statistics.yfilter = yfilter;
    }
    if(value_path == "compression-level")
    {
        compression_level.yfilter = yfilter;
    }
    if(value_path == "acl-name-array")
    {
        acl_name_array.yfilter = yfilter;
    }
    if(value_path == "is-common-array")
    {
        is_common_array.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Outbound::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "do-not-use" || name == "name" || name == "hardware-count" || name == "interface-statistics" || name == "compression-level" || name == "acl-name-array" || name == "is-common-array")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Inbound::Inbound()
    :
    common_acl_name{YType::str, "common-acl-name"},
    name{YType::str, "name"},
    hardware_count{YType::empty, "hardware-count"},
    interface_statistics{YType::empty, "interface-statistics"},
    compression_level{YType::uint32, "compression-level"},
    acl_name_array{YType::str, "acl-name-array"},
    is_common_array{YType::boolean, "is-common-array"}
{

    yang_name = "inbound"; yang_parent_name = "ipv4-packet-filter"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Inbound::~Inbound()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Inbound::has_data() const
{
    for (auto const & leaf : acl_name_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : is_common_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return common_acl_name.is_set
	|| name.is_set
	|| hardware_count.is_set
	|| interface_statistics.is_set
	|| compression_level.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Inbound::has_operation() const
{
    for (auto const & leaf : acl_name_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : is_common_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(common_acl_name.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(hardware_count.yfilter)
	|| ydk::is_set(interface_statistics.yfilter)
	|| ydk::is_set(compression_level.yfilter)
	|| ydk::is_set(acl_name_array.yfilter)
	|| ydk::is_set(is_common_array.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Inbound::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inbound";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Inbound::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (common_acl_name.is_set || is_set(common_acl_name.yfilter)) leaf_name_data.push_back(common_acl_name.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (hardware_count.is_set || is_set(hardware_count.yfilter)) leaf_name_data.push_back(hardware_count.get_name_leafdata());
    if (interface_statistics.is_set || is_set(interface_statistics.yfilter)) leaf_name_data.push_back(interface_statistics.get_name_leafdata());
    if (compression_level.is_set || is_set(compression_level.yfilter)) leaf_name_data.push_back(compression_level.get_name_leafdata());

    auto acl_name_array_name_datas = acl_name_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), acl_name_array_name_datas.begin(), acl_name_array_name_datas.end());
    auto is_common_array_name_datas = is_common_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), is_common_array_name_datas.begin(), is_common_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Inbound::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Inbound::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Inbound::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "common-acl-name")
    {
        common_acl_name = value;
        common_acl_name.value_namespace = name_space;
        common_acl_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-count")
    {
        hardware_count = value;
        hardware_count.value_namespace = name_space;
        hardware_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-statistics")
    {
        interface_statistics = value;
        interface_statistics.value_namespace = name_space;
        interface_statistics.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "compression-level")
    {
        compression_level = value;
        compression_level.value_namespace = name_space;
        compression_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acl-name-array")
    {
        acl_name_array.append(value);
    }
    if(value_path == "is-common-array")
    {
        is_common_array.append(value);
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Inbound::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "common-acl-name")
    {
        common_acl_name.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "hardware-count")
    {
        hardware_count.yfilter = yfilter;
    }
    if(value_path == "interface-statistics")
    {
        interface_statistics.yfilter = yfilter;
    }
    if(value_path == "compression-level")
    {
        compression_level.yfilter = yfilter;
    }
    if(value_path == "acl-name-array")
    {
        acl_name_array.yfilter = yfilter;
    }
    if(value_path == "is-common-array")
    {
        is_common_array.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Inbound::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common-acl-name" || name == "name" || name == "hardware-count" || name == "interface-statistics" || name == "compression-level" || name == "acl-name-array" || name == "is-common-array")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagrs()
{

    yang_name = "dagrs"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Dagrs::~Dagrs()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dagrs::has_data() const
{
    for (std::size_t index=0; index<dagr.size(); index++)
    {
        if(dagr[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dagrs::has_operation() const
{
    for (std::size_t index=0; index<dagr.size(); index++)
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
        dagr.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Dagrs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : dagr)
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
    path_buffer << "dagr" <<"[ip-addr='" <<ip_addr <<"']";
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
	,timers(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Timers>())
	,distance(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Distance>())
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

InterfaceConfigurations::InterfaceConfiguration::Ipv4Arp::Ipv4Arp()
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

InterfaceConfigurations::InterfaceConfiguration::Ipv4Arp::~Ipv4Arp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Arp::has_data() const
{
    return learning_local.is_set
	|| learning_solicited.is_set
	|| gratuitous_ignore.is_set
	|| proxy_arp.is_set
	|| purge_delay.is_set
	|| learning_disable.is_set
	|| local_proxy_arp.is_set
	|| timeout.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Arp::has_operation() const
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

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4Arp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-arp-cfg:ipv4arp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv4Arp::get_name_leaf_data() const
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

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Arp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4Arp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Arp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Arp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Arp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "learning-local" || name == "learning-solicited" || name == "gratuitous-ignore" || name == "proxy-arp" || name == "purge-delay" || name == "learning-disable" || name == "local-proxy-arp" || name == "timeout")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Ipv4Network()
    :
    forwarding_enable{YType::empty, "forwarding-enable"},
    icmp_mask_reply{YType::empty, "icmp-mask-reply"},
    tcp_mss_adjust_enable{YType::empty, "tcp-mss-adjust-enable"},
    ttl_propagate_disable{YType::empty, "ttl-propagate-disable"},
    point_to_point{YType::empty, "point-to-point"},
    mtu{YType::uint32, "mtu"}
    	,
    bgp_pa(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa>())
	,verify(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Verify>())
	,bgp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp>())
	,addresses(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses>())
	,helper_addresses(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses>())
{
    bgp_pa->parent = this;
    verify->parent = this;
    bgp->parent = this;
    addresses->parent = this;
    helper_addresses->parent = this;

    yang_name = "ipv4-network"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::~Ipv4Network()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::has_data() const
{
    return forwarding_enable.is_set
	|| icmp_mask_reply.is_set
	|| tcp_mss_adjust_enable.is_set
	|| ttl_propagate_disable.is_set
	|| point_to_point.is_set
	|| mtu.is_set
	|| (bgp_pa !=  nullptr && bgp_pa->has_data())
	|| (verify !=  nullptr && verify->has_data())
	|| (bgp !=  nullptr && bgp->has_data())
	|| (addresses !=  nullptr && addresses->has_data())
	|| (helper_addresses !=  nullptr && helper_addresses->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(forwarding_enable.yfilter)
	|| ydk::is_set(icmp_mask_reply.yfilter)
	|| ydk::is_set(tcp_mss_adjust_enable.yfilter)
	|| ydk::is_set(ttl_propagate_disable.yfilter)
	|| ydk::is_set(point_to_point.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| (bgp_pa !=  nullptr && bgp_pa->has_operation())
	|| (verify !=  nullptr && verify->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (addresses !=  nullptr && addresses->has_operation())
	|| (helper_addresses !=  nullptr && helper_addresses->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-io-cfg:ipv4-network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forwarding_enable.is_set || is_set(forwarding_enable.yfilter)) leaf_name_data.push_back(forwarding_enable.get_name_leafdata());
    if (icmp_mask_reply.is_set || is_set(icmp_mask_reply.yfilter)) leaf_name_data.push_back(icmp_mask_reply.get_name_leafdata());
    if (tcp_mss_adjust_enable.is_set || is_set(tcp_mss_adjust_enable.yfilter)) leaf_name_data.push_back(tcp_mss_adjust_enable.get_name_leafdata());
    if (ttl_propagate_disable.is_set || is_set(ttl_propagate_disable.yfilter)) leaf_name_data.push_back(ttl_propagate_disable.get_name_leafdata());
    if (point_to_point.is_set || is_set(point_to_point.yfilter)) leaf_name_data.push_back(point_to_point.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-pa")
    {
        if(bgp_pa == nullptr)
        {
            bgp_pa = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa>();
        }
        return bgp_pa;
    }

    if(child_yang_name == "verify")
    {
        if(verify == nullptr)
        {
            verify = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Verify>();
        }
        return verify;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp>();
        }
        return bgp;
    }

    if(child_yang_name == "addresses")
    {
        if(addresses == nullptr)
        {
            addresses = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses>();
        }
        return addresses;
    }

    if(child_yang_name == "helper-addresses")
    {
        if(helper_addresses == nullptr)
        {
            helper_addresses = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses>();
        }
        return helper_addresses;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(bgp_pa != nullptr)
    {
        children["bgp-pa"] = bgp_pa;
    }

    if(verify != nullptr)
    {
        children["verify"] = verify;
    }

    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    if(addresses != nullptr)
    {
        children["addresses"] = addresses;
    }

    if(helper_addresses != nullptr)
    {
        children["helper-addresses"] = helper_addresses;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "forwarding-enable")
    {
        forwarding_enable = value;
        forwarding_enable.value_namespace = name_space;
        forwarding_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "icmp-mask-reply")
    {
        icmp_mask_reply = value;
        icmp_mask_reply.value_namespace = name_space;
        icmp_mask_reply.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcp-mss-adjust-enable")
    {
        tcp_mss_adjust_enable = value;
        tcp_mss_adjust_enable.value_namespace = name_space;
        tcp_mss_adjust_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl-propagate-disable")
    {
        ttl_propagate_disable = value;
        ttl_propagate_disable.value_namespace = name_space;
        ttl_propagate_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "point-to-point")
    {
        point_to_point = value;
        point_to_point.value_namespace = name_space;
        point_to_point.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "forwarding-enable")
    {
        forwarding_enable.yfilter = yfilter;
    }
    if(value_path == "icmp-mask-reply")
    {
        icmp_mask_reply.yfilter = yfilter;
    }
    if(value_path == "tcp-mss-adjust-enable")
    {
        tcp_mss_adjust_enable.yfilter = yfilter;
    }
    if(value_path == "ttl-propagate-disable")
    {
        ttl_propagate_disable.yfilter = yfilter;
    }
    if(value_path == "point-to-point")
    {
        point_to_point.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-pa" || name == "verify" || name == "bgp" || name == "addresses" || name == "helper-addresses" || name == "forwarding-enable" || name == "icmp-mask-reply" || name == "tcp-mss-adjust-enable" || name == "ttl-propagate-disable" || name == "point-to-point" || name == "mtu")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::BgpPa()
    :
    input(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Input>())
	,output(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "bgp-pa"; yang_parent_name = "ipv4-network"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::~BgpPa()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-pa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Input::Input()
    :
    source_accounting{YType::boolean, "source-accounting"},
    destination_accounting{YType::boolean, "destination-accounting"}
{

    yang_name = "input"; yang_parent_name = "bgp-pa"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Input::~Input()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Input::has_data() const
{
    return source_accounting.is_set
	|| destination_accounting.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_accounting.yfilter)
	|| ydk::is_set(destination_accounting.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_accounting.is_set || is_set(source_accounting.yfilter)) leaf_name_data.push_back(source_accounting.get_name_leafdata());
    if (destination_accounting.is_set || is_set(destination_accounting.yfilter)) leaf_name_data.push_back(destination_accounting.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-accounting")
    {
        source_accounting = value;
        source_accounting.value_namespace = name_space;
        source_accounting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-accounting")
    {
        destination_accounting = value;
        destination_accounting.value_namespace = name_space;
        destination_accounting.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-accounting")
    {
        source_accounting.yfilter = yfilter;
    }
    if(value_path == "destination-accounting")
    {
        destination_accounting.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-accounting" || name == "destination-accounting")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Output::Output()
    :
    source_accounting{YType::boolean, "source-accounting"},
    destination_accounting{YType::boolean, "destination-accounting"}
{

    yang_name = "output"; yang_parent_name = "bgp-pa"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Output::~Output()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Output::has_data() const
{
    return source_accounting.is_set
	|| destination_accounting.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_accounting.yfilter)
	|| ydk::is_set(destination_accounting.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_accounting.is_set || is_set(source_accounting.yfilter)) leaf_name_data.push_back(source_accounting.get_name_leafdata());
    if (destination_accounting.is_set || is_set(destination_accounting.yfilter)) leaf_name_data.push_back(destination_accounting.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-accounting")
    {
        source_accounting = value;
        source_accounting.value_namespace = name_space;
        source_accounting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-accounting")
    {
        destination_accounting = value;
        destination_accounting.value_namespace = name_space;
        destination_accounting.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-accounting")
    {
        source_accounting.yfilter = yfilter;
    }
    if(value_path == "destination-accounting")
    {
        destination_accounting.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-accounting" || name == "destination-accounting")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Verify::Verify()
    :
    reachable{YType::enumeration, "reachable"},
    self_ping{YType::enumeration, "self-ping"},
    default_ping{YType::enumeration, "default-ping"}
{

    yang_name = "verify"; yang_parent_name = "ipv4-network"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Verify::~Verify()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Verify::has_data() const
{
    return reachable.is_set
	|| self_ping.is_set
	|| default_ping.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Verify::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reachable.yfilter)
	|| ydk::is_set(self_ping.yfilter)
	|| ydk::is_set(default_ping.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Verify::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "verify";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Verify::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reachable.is_set || is_set(reachable.yfilter)) leaf_name_data.push_back(reachable.get_name_leafdata());
    if (self_ping.is_set || is_set(self_ping.yfilter)) leaf_name_data.push_back(self_ping.get_name_leafdata());
    if (default_ping.is_set || is_set(default_ping.yfilter)) leaf_name_data.push_back(default_ping.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Verify::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Verify::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Verify::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reachable")
    {
        reachable = value;
        reachable.value_namespace = name_space;
        reachable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "self-ping")
    {
        self_ping = value;
        self_ping.value_namespace = name_space;
        self_ping.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-ping")
    {
        default_ping = value;
        default_ping.value_namespace = name_space;
        default_ping.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Verify::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reachable")
    {
        reachable.yfilter = yfilter;
    }
    if(value_path == "self-ping")
    {
        self_ping.yfilter = yfilter;
    }
    if(value_path == "default-ping")
    {
        default_ping.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Verify::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reachable" || name == "self-ping" || name == "default-ping")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Bgp()
    :
    qppb(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb>())
	,flow_tag(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag>())
{
    qppb->parent = this;
    flow_tag->parent = this;

    yang_name = "bgp"; yang_parent_name = "ipv4-network"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::~Bgp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::has_data() const
{
    return (qppb !=  nullptr && qppb->has_data())
	|| (flow_tag !=  nullptr && flow_tag->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| (qppb !=  nullptr && qppb->has_operation())
	|| (flow_tag !=  nullptr && flow_tag->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qppb")
    {
        if(qppb == nullptr)
        {
            qppb = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb>();
        }
        return qppb;
    }

    if(child_yang_name == "flow-tag")
    {
        if(flow_tag == nullptr)
        {
            flow_tag = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag>();
        }
        return flow_tag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(qppb != nullptr)
    {
        children["qppb"] = qppb;
    }

    if(flow_tag != nullptr)
    {
        children["flow-tag"] = flow_tag;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qppb" || name == "flow-tag")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::Qppb()
    :
    input(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::Input>())
{
    input->parent = this;

    yang_name = "qppb"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::~Qppb()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qppb";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::Input::Input()
    :
    source{YType::enumeration, "source"},
    destination{YType::enumeration, "destination"}
{

    yang_name = "input"; yang_parent_name = "qppb"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::Input::~Input()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::Input::has_data() const
{
    return source.is_set
	|| destination.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(destination.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source" || name == "destination")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::FlowTag()
    :
    flow_tag_input(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::FlowTagInput>())
{
    flow_tag_input->parent = this;

    yang_name = "flow-tag"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::~FlowTag()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::has_data() const
{
    return (flow_tag_input !=  nullptr && flow_tag_input->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::has_operation() const
{
    return is_set(yfilter)
	|| (flow_tag_input !=  nullptr && flow_tag_input->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-tag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-tag-input")
    {
        if(flow_tag_input == nullptr)
        {
            flow_tag_input = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::FlowTagInput>();
        }
        return flow_tag_input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(flow_tag_input != nullptr)
    {
        children["flow-tag-input"] = flow_tag_input;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-tag-input")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::FlowTagInput::FlowTagInput()
    :
    source{YType::boolean, "source"},
    destination{YType::boolean, "destination"}
{

    yang_name = "flow-tag-input"; yang_parent_name = "flow-tag"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::FlowTagInput::~FlowTagInput()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::FlowTagInput::has_data() const
{
    return source.is_set
	|| destination.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::FlowTagInput::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(destination.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::FlowTagInput::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-tag-input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::FlowTagInput::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::FlowTagInput::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::FlowTagInput::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::FlowTagInput::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::FlowTagInput::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::FlowTagInput::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source" || name == "destination")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Addresses()
    :
    unnumbered{YType::str, "unnumbered"}
    	,
    secondaries(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries>())
	,primary(nullptr) // presence node
	,dhcp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Dhcp>())
{
    secondaries->parent = this;
    dhcp->parent = this;

    yang_name = "addresses"; yang_parent_name = "ipv4-network"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::~Addresses()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::has_data() const
{
    return unnumbered.is_set
	|| (secondaries !=  nullptr && secondaries->has_data())
	|| (primary !=  nullptr && primary->has_data())
	|| (dhcp !=  nullptr && dhcp->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unnumbered.yfilter)
	|| (secondaries !=  nullptr && secondaries->has_operation())
	|| (primary !=  nullptr && primary->has_operation())
	|| (dhcp !=  nullptr && dhcp->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unnumbered.is_set || is_set(unnumbered.yfilter)) leaf_name_data.push_back(unnumbered.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "secondaries")
    {
        if(secondaries == nullptr)
        {
            secondaries = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries>();
        }
        return secondaries;
    }

    if(child_yang_name == "primary")
    {
        if(primary == nullptr)
        {
            primary = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Primary>();
        }
        return primary;
    }

    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Dhcp>();
        }
        return dhcp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(secondaries != nullptr)
    {
        children["secondaries"] = secondaries;
    }

    if(primary != nullptr)
    {
        children["primary"] = primary;
    }

    if(dhcp != nullptr)
    {
        children["dhcp"] = dhcp;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unnumbered")
    {
        unnumbered = value;
        unnumbered.value_namespace = name_space;
        unnumbered.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unnumbered")
    {
        unnumbered.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secondaries" || name == "primary" || name == "dhcp" || name == "unnumbered")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::Secondaries()
{

    yang_name = "secondaries"; yang_parent_name = "addresses"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::~Secondaries()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::has_data() const
{
    for (std::size_t index=0; index<secondary.size(); index++)
    {
        if(secondary[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::has_operation() const
{
    for (std::size_t index=0; index<secondary.size(); index++)
    {
        if(secondary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "secondary")
    {
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::Secondary>();
        c->parent = this;
        secondary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : secondary)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secondary")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::Secondary::Secondary()
    :
    address{YType::str, "address"},
    netmask{YType::str, "netmask"},
    route_tag{YType::uint32, "route-tag"}
{

    yang_name = "secondary"; yang_parent_name = "secondaries"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::Secondary::~Secondary()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::Secondary::has_data() const
{
    return address.is_set
	|| netmask.is_set
	|| route_tag.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::Secondary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(netmask.yfilter)
	|| ydk::is_set(route_tag.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::Secondary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::Secondary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (netmask.is_set || is_set(netmask.yfilter)) leaf_name_data.push_back(netmask.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.yfilter)) leaf_name_data.push_back(route_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::Secondary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::Secondary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::Secondary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "netmask")
    {
        netmask = value;
        netmask.value_namespace = name_space;
        netmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-tag")
    {
        route_tag = value;
        route_tag.value_namespace = name_space;
        route_tag.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::Secondary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "netmask")
    {
        netmask.yfilter = yfilter;
    }
    if(value_path == "route-tag")
    {
        route_tag.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::Secondary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "netmask" || name == "route-tag")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Primary::Primary()
    :
    address{YType::str, "address"},
    netmask{YType::str, "netmask"},
    route_tag{YType::uint32, "route-tag"}
{

    yang_name = "primary"; yang_parent_name = "addresses"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Primary::~Primary()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Primary::has_data() const
{
    return address.is_set
	|| netmask.is_set
	|| route_tag.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Primary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(netmask.yfilter)
	|| ydk::is_set(route_tag.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Primary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Primary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (netmask.is_set || is_set(netmask.yfilter)) leaf_name_data.push_back(netmask.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.yfilter)) leaf_name_data.push_back(route_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Primary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Primary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Primary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "netmask")
    {
        netmask = value;
        netmask.value_namespace = name_space;
        netmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-tag")
    {
        route_tag = value;
        route_tag.value_namespace = name_space;
        route_tag.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Primary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "netmask")
    {
        netmask.yfilter = yfilter;
    }
    if(value_path == "route-tag")
    {
        route_tag.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Primary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "netmask" || name == "route-tag")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Dhcp::Dhcp()
    :
    enabled{YType::empty, "enabled"},
    option_code{YType::enumeration, "option-code"},
    format{YType::int32, "format"},
    pattern{YType::str, "pattern"}
{

    yang_name = "dhcp"; yang_parent_name = "addresses"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Dhcp::~Dhcp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Dhcp::has_data() const
{
    return enabled.is_set
	|| option_code.is_set
	|| format.is_set
	|| pattern.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Dhcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(option_code.yfilter)
	|| ydk::is_set(format.yfilter)
	|| ydk::is_set(pattern.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Dhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (option_code.is_set || is_set(option_code.yfilter)) leaf_name_data.push_back(option_code.get_name_leafdata());
    if (format.is_set || is_set(format.yfilter)) leaf_name_data.push_back(format.get_name_leafdata());
    if (pattern.is_set || is_set(pattern.yfilter)) leaf_name_data.push_back(pattern.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option-code")
    {
        option_code = value;
        option_code.value_namespace = name_space;
        option_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "format")
    {
        format = value;
        format.value_namespace = name_space;
        format.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pattern")
    {
        pattern = value;
        pattern.value_namespace = name_space;
        pattern.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "option-code")
    {
        option_code.yfilter = yfilter;
    }
    if(value_path == "format")
    {
        format.yfilter = yfilter;
    }
    if(value_path == "pattern")
    {
        pattern.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled" || name == "option-code" || name == "format" || name == "pattern")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::HelperAddresses()
{

    yang_name = "helper-addresses"; yang_parent_name = "ipv4-network"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::~HelperAddresses()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::has_data() const
{
    for (std::size_t index=0; index<helper_address.size(); index++)
    {
        if(helper_address[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::has_operation() const
{
    for (std::size_t index=0; index<helper_address.size(); index++)
    {
        if(helper_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "helper-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "helper-address")
    {
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::HelperAddress>();
        c->parent = this;
        helper_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : helper_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "helper-address")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::HelperAddress::HelperAddress()
    :
    address{YType::str, "address"},
    vrf_name{YType::str, "vrf-name"}
{

    yang_name = "helper-address"; yang_parent_name = "helper-addresses"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::HelperAddress::~HelperAddress()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::HelperAddress::has_data() const
{
    return address.is_set
	|| vrf_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::HelperAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::HelperAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "helper-address" <<"[address='" <<address <<"']" <<"[vrf-name='" <<vrf_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::HelperAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::HelperAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::HelperAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::HelperAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::HelperAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::HelperAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "vrf-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4NetworkForwarding::Ipv4NetworkForwarding()
    :
    directed_broadcast{YType::empty, "directed-broadcast"},
    unreachables{YType::empty, "unreachables"},
    redirects{YType::empty, "redirects"}
{

    yang_name = "ipv4-network-forwarding"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4NetworkForwarding::~Ipv4NetworkForwarding()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4NetworkForwarding::has_data() const
{
    return directed_broadcast.is_set
	|| unreachables.is_set
	|| redirects.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4NetworkForwarding::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(directed_broadcast.yfilter)
	|| ydk::is_set(unreachables.yfilter)
	|| ydk::is_set(redirects.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4NetworkForwarding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-io-cfg:ipv4-network-forwarding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv4NetworkForwarding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (directed_broadcast.is_set || is_set(directed_broadcast.yfilter)) leaf_name_data.push_back(directed_broadcast.get_name_leafdata());
    if (unreachables.is_set || is_set(unreachables.yfilter)) leaf_name_data.push_back(unreachables.get_name_leafdata());
    if (redirects.is_set || is_set(redirects.yfilter)) leaf_name_data.push_back(redirects.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4NetworkForwarding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4NetworkForwarding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4NetworkForwarding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "directed-broadcast")
    {
        directed_broadcast = value;
        directed_broadcast.value_namespace = name_space;
        directed_broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unreachables")
    {
        unreachables = value;
        unreachables.value_namespace = name_space;
        unreachables.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redirects")
    {
        redirects = value;
        redirects.value_namespace = name_space;
        redirects.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4NetworkForwarding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "directed-broadcast")
    {
        directed_broadcast.yfilter = yfilter;
    }
    if(value_path == "unreachables")
    {
        unreachables.yfilter = yfilter;
    }
    if(value_path == "redirects")
    {
        redirects.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4NetworkForwarding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "directed-broadcast" || name == "unreachables" || name == "redirects")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Ipv6Network()
    :
    mtu{YType::uint32, "mtu"},
    unnumbered{YType::str, "unnumbered"},
    ttl_propagate_disable{YType::empty, "ttl-propagate-disable"},
    tcp_mss_adjust_enable{YType::empty, "tcp-mss-adjust-enable"},
    unreachables{YType::empty, "unreachables"}
    	,
    bgp_qos_policy_propagation(nullptr) // presence node
	,bgp_policy_accountings(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings>())
	,verify(nullptr) // presence node
	,addresses(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses>())
	,bgp_flow_tag_policy_table(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable>())
{
    bgp_policy_accountings->parent = this;
    addresses->parent = this;
    bgp_flow_tag_policy_table->parent = this;

    yang_name = "ipv6-network"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::~Ipv6Network()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::has_data() const
{
    return mtu.is_set
	|| unnumbered.is_set
	|| ttl_propagate_disable.is_set
	|| tcp_mss_adjust_enable.is_set
	|| unreachables.is_set
	|| (bgp_qos_policy_propagation !=  nullptr && bgp_qos_policy_propagation->has_data())
	|| (bgp_policy_accountings !=  nullptr && bgp_policy_accountings->has_data())
	|| (verify !=  nullptr && verify->has_data())
	|| (addresses !=  nullptr && addresses->has_data())
	|| (bgp_flow_tag_policy_table !=  nullptr && bgp_flow_tag_policy_table->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(unnumbered.yfilter)
	|| ydk::is_set(ttl_propagate_disable.yfilter)
	|| ydk::is_set(tcp_mss_adjust_enable.yfilter)
	|| ydk::is_set(unreachables.yfilter)
	|| (bgp_qos_policy_propagation !=  nullptr && bgp_qos_policy_propagation->has_operation())
	|| (bgp_policy_accountings !=  nullptr && bgp_policy_accountings->has_operation())
	|| (verify !=  nullptr && verify->has_operation())
	|| (addresses !=  nullptr && addresses->has_operation())
	|| (bgp_flow_tag_policy_table !=  nullptr && bgp_flow_tag_policy_table->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-ma-cfg:ipv6-network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (unnumbered.is_set || is_set(unnumbered.yfilter)) leaf_name_data.push_back(unnumbered.get_name_leafdata());
    if (ttl_propagate_disable.is_set || is_set(ttl_propagate_disable.yfilter)) leaf_name_data.push_back(ttl_propagate_disable.get_name_leafdata());
    if (tcp_mss_adjust_enable.is_set || is_set(tcp_mss_adjust_enable.yfilter)) leaf_name_data.push_back(tcp_mss_adjust_enable.get_name_leafdata());
    if (unreachables.is_set || is_set(unreachables.yfilter)) leaf_name_data.push_back(unreachables.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-qos-policy-propagation")
    {
        if(bgp_qos_policy_propagation == nullptr)
        {
            bgp_qos_policy_propagation = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpQosPolicyPropagation>();
        }
        return bgp_qos_policy_propagation;
    }

    if(child_yang_name == "bgp-policy-accountings")
    {
        if(bgp_policy_accountings == nullptr)
        {
            bgp_policy_accountings = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings>();
        }
        return bgp_policy_accountings;
    }

    if(child_yang_name == "verify")
    {
        if(verify == nullptr)
        {
            verify = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Verify>();
        }
        return verify;
    }

    if(child_yang_name == "addresses")
    {
        if(addresses == nullptr)
        {
            addresses = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses>();
        }
        return addresses;
    }

    if(child_yang_name == "bgp-flow-tag-policy-table")
    {
        if(bgp_flow_tag_policy_table == nullptr)
        {
            bgp_flow_tag_policy_table = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable>();
        }
        return bgp_flow_tag_policy_table;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(bgp_qos_policy_propagation != nullptr)
    {
        children["bgp-qos-policy-propagation"] = bgp_qos_policy_propagation;
    }

    if(bgp_policy_accountings != nullptr)
    {
        children["bgp-policy-accountings"] = bgp_policy_accountings;
    }

    if(verify != nullptr)
    {
        children["verify"] = verify;
    }

    if(addresses != nullptr)
    {
        children["addresses"] = addresses;
    }

    if(bgp_flow_tag_policy_table != nullptr)
    {
        children["bgp-flow-tag-policy-table"] = bgp_flow_tag_policy_table;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unnumbered")
    {
        unnumbered = value;
        unnumbered.value_namespace = name_space;
        unnumbered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl-propagate-disable")
    {
        ttl_propagate_disable = value;
        ttl_propagate_disable.value_namespace = name_space;
        ttl_propagate_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcp-mss-adjust-enable")
    {
        tcp_mss_adjust_enable = value;
        tcp_mss_adjust_enable.value_namespace = name_space;
        tcp_mss_adjust_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unreachables")
    {
        unreachables = value;
        unreachables.value_namespace = name_space;
        unreachables.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "unnumbered")
    {
        unnumbered.yfilter = yfilter;
    }
    if(value_path == "ttl-propagate-disable")
    {
        ttl_propagate_disable.yfilter = yfilter;
    }
    if(value_path == "tcp-mss-adjust-enable")
    {
        tcp_mss_adjust_enable.yfilter = yfilter;
    }
    if(value_path == "unreachables")
    {
        unreachables.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-qos-policy-propagation" || name == "bgp-policy-accountings" || name == "verify" || name == "addresses" || name == "bgp-flow-tag-policy-table" || name == "mtu" || name == "unnumbered" || name == "ttl-propagate-disable" || name == "tcp-mss-adjust-enable" || name == "unreachables")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpQosPolicyPropagation::BgpQosPolicyPropagation()
    :
    source{YType::enumeration, "source"},
    destination{YType::enumeration, "destination"}
{

    yang_name = "bgp-qos-policy-propagation"; yang_parent_name = "ipv6-network"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpQosPolicyPropagation::~BgpQosPolicyPropagation()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpQosPolicyPropagation::has_data() const
{
    return source.is_set
	|| destination.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpQosPolicyPropagation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(destination.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpQosPolicyPropagation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-qos-policy-propagation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpQosPolicyPropagation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpQosPolicyPropagation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpQosPolicyPropagation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpQosPolicyPropagation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpQosPolicyPropagation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpQosPolicyPropagation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source" || name == "destination")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::BgpPolicyAccountings()
{

    yang_name = "bgp-policy-accountings"; yang_parent_name = "ipv6-network"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::~BgpPolicyAccountings()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::has_data() const
{
    for (std::size_t index=0; index<bgp_policy_accounting.size(); index++)
    {
        if(bgp_policy_accounting[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::has_operation() const
{
    for (std::size_t index=0; index<bgp_policy_accounting.size(); index++)
    {
        if(bgp_policy_accounting[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-policy-accountings";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-policy-accounting")
    {
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::BgpPolicyAccounting>();
        c->parent = this;
        bgp_policy_accounting.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : bgp_policy_accounting)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-policy-accounting")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::BgpPolicyAccounting::BgpPolicyAccounting()
    :
    direction{YType::str, "direction"},
    destination_accounting{YType::boolean, "destination-accounting"},
    source_accounting{YType::boolean, "source-accounting"}
{

    yang_name = "bgp-policy-accounting"; yang_parent_name = "bgp-policy-accountings"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::BgpPolicyAccounting::~BgpPolicyAccounting()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::BgpPolicyAccounting::has_data() const
{
    return direction.is_set
	|| destination_accounting.is_set
	|| source_accounting.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::BgpPolicyAccounting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(destination_accounting.yfilter)
	|| ydk::is_set(source_accounting.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::BgpPolicyAccounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-policy-accounting" <<"[direction='" <<direction <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::BgpPolicyAccounting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (destination_accounting.is_set || is_set(destination_accounting.yfilter)) leaf_name_data.push_back(destination_accounting.get_name_leafdata());
    if (source_accounting.is_set || is_set(source_accounting.yfilter)) leaf_name_data.push_back(source_accounting.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::BgpPolicyAccounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::BgpPolicyAccounting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::BgpPolicyAccounting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-accounting")
    {
        destination_accounting = value;
        destination_accounting.value_namespace = name_space;
        destination_accounting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-accounting")
    {
        source_accounting = value;
        source_accounting.value_namespace = name_space;
        source_accounting.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::BgpPolicyAccounting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "destination-accounting")
    {
        destination_accounting.yfilter = yfilter;
    }
    if(value_path == "source-accounting")
    {
        source_accounting.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::BgpPolicyAccounting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "destination-accounting" || name == "source-accounting")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Verify::Verify()
    :
    reachable{YType::enumeration, "reachable"},
    self_ping{YType::enumeration, "self-ping"},
    default_ping{YType::enumeration, "default-ping"}
{

    yang_name = "verify"; yang_parent_name = "ipv6-network"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Verify::~Verify()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Verify::has_data() const
{
    return reachable.is_set
	|| self_ping.is_set
	|| default_ping.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Verify::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reachable.yfilter)
	|| ydk::is_set(self_ping.yfilter)
	|| ydk::is_set(default_ping.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Verify::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "verify";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Verify::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reachable.is_set || is_set(reachable.yfilter)) leaf_name_data.push_back(reachable.get_name_leafdata());
    if (self_ping.is_set || is_set(self_ping.yfilter)) leaf_name_data.push_back(self_ping.get_name_leafdata());
    if (default_ping.is_set || is_set(default_ping.yfilter)) leaf_name_data.push_back(default_ping.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Verify::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Verify::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Verify::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reachable")
    {
        reachable = value;
        reachable.value_namespace = name_space;
        reachable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "self-ping")
    {
        self_ping = value;
        self_ping.value_namespace = name_space;
        self_ping.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-ping")
    {
        default_ping = value;
        default_ping.value_namespace = name_space;
        default_ping.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Verify::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reachable")
    {
        reachable.yfilter = yfilter;
    }
    if(value_path == "self-ping")
    {
        self_ping.yfilter = yfilter;
    }
    if(value_path == "default-ping")
    {
        default_ping.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Verify::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reachable" || name == "self-ping" || name == "default-ping")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Addresses()
    :
    segment_routings(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings>())
	,link_local_address(nullptr) // presence node
	,eui64_addresses(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses>())
	,regular_addresses(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses>())
	,auto_configuration(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::AutoConfiguration>())
{
    segment_routings->parent = this;
    eui64_addresses->parent = this;
    regular_addresses->parent = this;
    auto_configuration->parent = this;

    yang_name = "addresses"; yang_parent_name = "ipv6-network"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::~Addresses()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::has_data() const
{
    return (segment_routings !=  nullptr && segment_routings->has_data())
	|| (link_local_address !=  nullptr && link_local_address->has_data())
	|| (eui64_addresses !=  nullptr && eui64_addresses->has_data())
	|| (regular_addresses !=  nullptr && regular_addresses->has_data())
	|| (auto_configuration !=  nullptr && auto_configuration->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::has_operation() const
{
    return is_set(yfilter)
	|| (segment_routings !=  nullptr && segment_routings->has_operation())
	|| (link_local_address !=  nullptr && link_local_address->has_operation())
	|| (eui64_addresses !=  nullptr && eui64_addresses->has_operation())
	|| (regular_addresses !=  nullptr && regular_addresses->has_operation())
	|| (auto_configuration !=  nullptr && auto_configuration->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "segment-routings")
    {
        if(segment_routings == nullptr)
        {
            segment_routings = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings>();
        }
        return segment_routings;
    }

    if(child_yang_name == "link-local-address")
    {
        if(link_local_address == nullptr)
        {
            link_local_address = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::LinkLocalAddress>();
        }
        return link_local_address;
    }

    if(child_yang_name == "eui64-addresses")
    {
        if(eui64_addresses == nullptr)
        {
            eui64_addresses = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses>();
        }
        return eui64_addresses;
    }

    if(child_yang_name == "regular-addresses")
    {
        if(regular_addresses == nullptr)
        {
            regular_addresses = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses>();
        }
        return regular_addresses;
    }

    if(child_yang_name == "auto-configuration")
    {
        if(auto_configuration == nullptr)
        {
            auto_configuration = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::AutoConfiguration>();
        }
        return auto_configuration;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(segment_routings != nullptr)
    {
        children["segment-routings"] = segment_routings;
    }

    if(link_local_address != nullptr)
    {
        children["link-local-address"] = link_local_address;
    }

    if(eui64_addresses != nullptr)
    {
        children["eui64-addresses"] = eui64_addresses;
    }

    if(regular_addresses != nullptr)
    {
        children["regular-addresses"] = regular_addresses;
    }

    if(auto_configuration != nullptr)
    {
        children["auto-configuration"] = auto_configuration;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment-routings" || name == "link-local-address" || name == "eui64-addresses" || name == "regular-addresses" || name == "auto-configuration")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRoutings()
{

    yang_name = "segment-routings"; yang_parent_name = "addresses"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::~SegmentRoutings()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::has_data() const
{
    for (std::size_t index=0; index<segment_routing.size(); index++)
    {
        if(segment_routing[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::has_operation() const
{
    for (std::size_t index=0; index<segment_routing.size(); index++)
    {
        if(segment_routing[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routings";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "segment-routing")
    {
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting>();
        c->parent = this;
        segment_routing.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : segment_routing)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment-routing")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::SegmentRouting()
    :
    address{YType::str, "address"},
    enable{YType::empty, "enable"}
    	,
    ipv6_prefix_sid(nullptr) // presence node
{

    yang_name = "segment-routing"; yang_parent_name = "segment-routings"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::~SegmentRouting()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::has_data() const
{
    return address.is_set
	|| enable.is_set
	|| (ipv6_prefix_sid !=  nullptr && ipv6_prefix_sid->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (ipv6_prefix_sid !=  nullptr && ipv6_prefix_sid->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routing" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-prefix-sid")
    {
        if(ipv6_prefix_sid == nullptr)
        {
            ipv6_prefix_sid = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::Ipv6PrefixSid>();
        }
        return ipv6_prefix_sid;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ipv6_prefix_sid != nullptr)
    {
        children["ipv6-prefix-sid"] = ipv6_prefix_sid;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-prefix-sid" || name == "address" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::Ipv6PrefixSid::Ipv6PrefixSid()
    :
    prefix_length{YType::uint32, "prefix-length"},
    zone{YType::str, "zone"},
    route_tag{YType::uint32, "route-tag"}
{

    yang_name = "ipv6-prefix-sid"; yang_parent_name = "segment-routing"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::Ipv6PrefixSid::~Ipv6PrefixSid()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::Ipv6PrefixSid::has_data() const
{
    return prefix_length.is_set
	|| zone.is_set
	|| route_tag.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::Ipv6PrefixSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(zone.yfilter)
	|| ydk::is_set(route_tag.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::Ipv6PrefixSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-prefix-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::Ipv6PrefixSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (zone.is_set || is_set(zone.yfilter)) leaf_name_data.push_back(zone.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.yfilter)) leaf_name_data.push_back(route_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::Ipv6PrefixSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::Ipv6PrefixSid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::Ipv6PrefixSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "zone")
    {
        zone = value;
        zone.value_namespace = name_space;
        zone.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-tag")
    {
        route_tag = value;
        route_tag.value_namespace = name_space;
        route_tag.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::Ipv6PrefixSid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "zone")
    {
        zone.yfilter = yfilter;
    }
    if(value_path == "route-tag")
    {
        route_tag.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::Ipv6PrefixSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-length" || name == "zone" || name == "route-tag")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::LinkLocalAddress::LinkLocalAddress()
    :
    address{YType::str, "address"},
    zone{YType::str, "zone"},
    route_tag{YType::uint32, "route-tag"}
{

    yang_name = "link-local-address"; yang_parent_name = "addresses"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::LinkLocalAddress::~LinkLocalAddress()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::LinkLocalAddress::has_data() const
{
    return address.is_set
	|| zone.is_set
	|| route_tag.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::LinkLocalAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(zone.yfilter)
	|| ydk::is_set(route_tag.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::LinkLocalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-local-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::LinkLocalAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (zone.is_set || is_set(zone.yfilter)) leaf_name_data.push_back(zone.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.yfilter)) leaf_name_data.push_back(route_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::LinkLocalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::LinkLocalAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::LinkLocalAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "zone")
    {
        zone = value;
        zone.value_namespace = name_space;
        zone.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-tag")
    {
        route_tag = value;
        route_tag.value_namespace = name_space;
        route_tag.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::LinkLocalAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "zone")
    {
        zone.yfilter = yfilter;
    }
    if(value_path == "route-tag")
    {
        route_tag.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::LinkLocalAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "zone" || name == "route-tag")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::Eui64Addresses()
{

    yang_name = "eui64-addresses"; yang_parent_name = "addresses"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::~Eui64Addresses()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::has_data() const
{
    for (std::size_t index=0; index<eui64_address.size(); index++)
    {
        if(eui64_address[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::has_operation() const
{
    for (std::size_t index=0; index<eui64_address.size(); index++)
    {
        if(eui64_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eui64-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eui64-address")
    {
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::Eui64Address>();
        c->parent = this;
        eui64_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : eui64_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eui64-address")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::Eui64Address::Eui64Address()
    :
    address{YType::str, "address"},
    prefix_length{YType::uint32, "prefix-length"},
    zone{YType::str, "zone"},
    route_tag{YType::uint32, "route-tag"}
{

    yang_name = "eui64-address"; yang_parent_name = "eui64-addresses"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::Eui64Address::~Eui64Address()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::Eui64Address::has_data() const
{
    return address.is_set
	|| prefix_length.is_set
	|| zone.is_set
	|| route_tag.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::Eui64Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(zone.yfilter)
	|| ydk::is_set(route_tag.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::Eui64Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eui64-address" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::Eui64Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (zone.is_set || is_set(zone.yfilter)) leaf_name_data.push_back(zone.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.yfilter)) leaf_name_data.push_back(route_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::Eui64Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::Eui64Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::Eui64Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "zone")
    {
        zone = value;
        zone.value_namespace = name_space;
        zone.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-tag")
    {
        route_tag = value;
        route_tag.value_namespace = name_space;
        route_tag.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::Eui64Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "zone")
    {
        zone.yfilter = yfilter;
    }
    if(value_path == "route-tag")
    {
        route_tag.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::Eui64Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "prefix-length" || name == "zone" || name == "route-tag")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::RegularAddresses()
{

    yang_name = "regular-addresses"; yang_parent_name = "addresses"; is_top_level_class = false; has_list_ancestor = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::~RegularAddresses()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::has_data() const
{
    for (std::size_t index=0; index<regular_address.size(); index++)
    {
        if(regular_address[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::has_operation() const
{
    for (std::size_t index=0; index<regular_address.size(); index++)
    {
        if(regular_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "regular-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "regular-address")
    {
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::RegularAddress>();
        c->parent = this;
        regular_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : regular_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "regular-address")
        return true;
    return false;
}

const Enum::YLeaf InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::TunnelingEthertype::Y_0x9100 {37120, "0x9100"};
const Enum::YLeaf InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::TunnelingEthertype::Y_0x9200 {37376, "0x9200"};


}
}

