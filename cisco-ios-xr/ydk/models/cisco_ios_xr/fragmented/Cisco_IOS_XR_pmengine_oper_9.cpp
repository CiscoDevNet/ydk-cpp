
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_pmengine_oper_9.hpp"
#include "Cisco_IOS_XR_pmengine_oper_10.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_pmengine_oper {

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorOther::InErrorOther()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-error-other"; yang_parent_name = "minute15-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorOther::~InErrorOther()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorOther::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorOther::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorOther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-other";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorOther::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorOther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorOther::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorOther::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorOther::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorOther::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorRunt::InErrorRunt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-error-runt"; yang_parent_name = "minute15-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorRunt::~InErrorRunt()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorRunt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorRunt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorRunt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-runt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorRunt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorRunt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorRunt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorRunt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorRunt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorRunt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorSymbol::InErrorSymbol()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-error-symbol"; yang_parent_name = "minute15-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorSymbol::~InErrorSymbol()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorSymbol::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorSymbol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorSymbol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-symbol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorSymbol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorSymbol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorSymbol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorSymbol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorSymbol::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorSymbol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InGoodBytes::InGoodBytes()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-good-bytes"; yang_parent_name = "minute15-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InGoodBytes::~InGoodBytes()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InGoodBytes::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InGoodBytes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InGoodBytes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-good-bytes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InGoodBytes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InGoodBytes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InGoodBytes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InGoodBytes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InGoodBytes::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InGoodBytes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InGoodPkts::InGoodPkts()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-good-pkts"; yang_parent_name = "minute15-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InGoodPkts::~InGoodPkts()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InGoodPkts::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InGoodPkts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InGoodPkts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-good-pkts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InGoodPkts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InGoodPkts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InGoodPkts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InGoodPkts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InGoodPkts::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InGoodPkts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMcastPkt::InMcastPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-mcast-pkt"; yang_parent_name = "minute15-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMcastPkt::~InMcastPkt()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMcastPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMcastPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-mcast-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMcastPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMcastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMcastPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMcastPkt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMcastPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMibGiant::InMibGiant()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-mib-giant"; yang_parent_name = "minute15-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMibGiant::~InMibGiant()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMibGiant::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMibGiant::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMibGiant::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-mib-giant";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMibGiant::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMibGiant::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMibGiant::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMibGiant::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMibGiant::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMibGiant::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMibJabber::InMibJabber()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-mib-jabber"; yang_parent_name = "minute15-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMibJabber::~InMibJabber()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMibJabber::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMibJabber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMibJabber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-mib-jabber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMibJabber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMibJabber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMibJabber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMibJabber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMibJabber::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMibJabber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMibcrc::InMibcrc()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-mibcrc"; yang_parent_name = "minute15-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMibcrc::~InMibcrc()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMibcrc::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMibcrc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMibcrc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-mibcrc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMibcrc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMibcrc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMibcrc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMibcrc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMibcrc::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMibcrc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPauseFrame::InPauseFrame()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pause-frame"; yang_parent_name = "minute15-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPauseFrame::~InPauseFrame()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPauseFrame::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPauseFrame::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPauseFrame::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pause-frame";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPauseFrame::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPauseFrame::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPauseFrame::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPauseFrame::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPauseFrame::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPauseFrame::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkt64Octet::InPkt64Octet()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkt64-octet"; yang_parent_name = "minute15-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkt64Octet::~InPkt64Octet()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkt64Octet::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkt64Octet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkt64Octet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkt64-octet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkt64Octet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkt64Octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkt64Octet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkt64Octet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkt64Octet::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkt64Octet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts1024To1518Octets::InPkts1024To1518Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts1024-to1518-octets"; yang_parent_name = "minute15-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts1024To1518Octets::~InPkts1024To1518Octets()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts1024To1518Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts1024To1518Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts1024To1518Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts1024-to1518-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts1024To1518Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts1024To1518Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts1024To1518Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts1024To1518Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts1024To1518Octets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts1024To1518Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts128To255Octets::InPkts128To255Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts128-to255-octets"; yang_parent_name = "minute15-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts128To255Octets::~InPkts128To255Octets()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts128To255Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts128To255Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts128To255Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts128-to255-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts128To255Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts128To255Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts128To255Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts128To255Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts128To255Octets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts128To255Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts1519MaxOctets::InPkts1519MaxOctets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts1519-max-octets"; yang_parent_name = "minute15-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts1519MaxOctets::~InPkts1519MaxOctets()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts1519MaxOctets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts1519MaxOctets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts1519MaxOctets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts1519-max-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts1519MaxOctets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts1519MaxOctets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts1519MaxOctets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts1519MaxOctets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts1519MaxOctets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts1519MaxOctets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts256To511Octets::InPkts256To511Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts256-to511-octets"; yang_parent_name = "minute15-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts256To511Octets::~InPkts256To511Octets()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts256To511Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts256To511Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts256To511Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts256-to511-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts256To511Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts256To511Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts256To511Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts256To511Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts256To511Octets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts256To511Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts512To1023Octets::InPkts512To1023Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts512-to1023-octets"; yang_parent_name = "minute15-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts512To1023Octets::~InPkts512To1023Octets()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts512To1023Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts512To1023Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts512To1023Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts512-to1023-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts512To1023Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts512To1023Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts512To1023Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts512To1023Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts512To1023Octets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts512To1023Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts65To127Octets::InPkts65To127Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts65-to127-octets"; yang_parent_name = "minute15-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts65To127Octets::~InPkts65To127Octets()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts65To127Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts65To127Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts65To127Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts65-to127-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts65To127Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts65To127Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts65To127Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts65To127Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts65To127Octets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts65To127Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InUcastPkt::InUcastPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-ucast-pkt"; yang_parent_name = "minute15-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InUcastPkt::~InUcastPkt()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InUcastPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InUcastPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InUcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-ucast-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InUcastPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InUcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InUcastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InUcastPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InUcastPkt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InUcastPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::JabberStat::JabberStat()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "jabber-stat"; yang_parent_name = "minute15-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::JabberStat::~JabberStat()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::JabberStat::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::JabberStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::JabberStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "jabber-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::JabberStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::JabberStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::JabberStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::JabberStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::JabberStat::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::JabberStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::LongFramesStat::LongFramesStat()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "long-frames-stat"; yang_parent_name = "minute15-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::LongFramesStat::~LongFramesStat()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::LongFramesStat::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::LongFramesStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::LongFramesStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "long-frames-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::LongFramesStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::LongFramesStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::LongFramesStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::LongFramesStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::LongFramesStat::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::LongFramesStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OctetStat::OctetStat()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "octet-stat"; yang_parent_name = "minute15-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OctetStat::~OctetStat()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OctetStat::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OctetStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OctetStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "octet-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OctetStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OctetStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OctetStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OctetStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OctetStat::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OctetStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Out8021QFrames::Out8021QFrames()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out8021q-frames"; yang_parent_name = "minute15-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Out8021QFrames::~Out8021QFrames()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Out8021QFrames::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Out8021QFrames::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Out8021QFrames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out8021q-frames";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Out8021QFrames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Out8021QFrames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Out8021QFrames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Out8021QFrames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Out8021QFrames::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Out8021QFrames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutBcastPkt::OutBcastPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-bcast-pkt"; yang_parent_name = "minute15-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutBcastPkt::~OutBcastPkt()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutBcastPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutBcastPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutBcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-bcast-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutBcastPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutBcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutBcastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutBcastPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutBcastPkt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutBcastPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutDropAbort::OutDropAbort()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-drop-abort"; yang_parent_name = "minute15-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutDropAbort::~OutDropAbort()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutDropAbort::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutDropAbort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutDropAbort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-drop-abort";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutDropAbort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutDropAbort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutDropAbort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutDropAbort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutDropAbort::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutDropAbort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutDropOther::OutDropOther()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-drop-other"; yang_parent_name = "minute15-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutDropOther::~OutDropOther()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutDropOther::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutDropOther::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutDropOther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-drop-other";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutDropOther::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutDropOther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutDropOther::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutDropOther::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutDropOther::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutDropOther::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutDropUnderrun::OutDropUnderrun()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-drop-underrun"; yang_parent_name = "minute15-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutDropUnderrun::~OutDropUnderrun()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutDropUnderrun::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutDropUnderrun::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutDropUnderrun::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-drop-underrun";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutDropUnderrun::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutDropUnderrun::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutDropUnderrun::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutDropUnderrun::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutDropUnderrun::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutDropUnderrun::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutErrorOther::OutErrorOther()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-error-other"; yang_parent_name = "minute15-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutErrorOther::~OutErrorOther()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutErrorOther::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutErrorOther::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutErrorOther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-error-other";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutErrorOther::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutErrorOther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutErrorOther::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutErrorOther::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutErrorOther::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutErrorOther::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutGoodBytes::OutGoodBytes()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-good-bytes"; yang_parent_name = "minute15-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutGoodBytes::~OutGoodBytes()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutGoodBytes::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutGoodBytes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutGoodBytes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-good-bytes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutGoodBytes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutGoodBytes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutGoodBytes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutGoodBytes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutGoodBytes::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutGoodBytes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutGoodPkts::OutGoodPkts()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-good-pkts"; yang_parent_name = "minute15-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutGoodPkts::~OutGoodPkts()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutGoodPkts::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutGoodPkts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutGoodPkts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-good-pkts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutGoodPkts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutGoodPkts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutGoodPkts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutGoodPkts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutGoodPkts::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutGoodPkts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutMcastPkt::OutMcastPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-mcast-pkt"; yang_parent_name = "minute15-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutMcastPkt::~OutMcastPkt()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutMcastPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutMcastPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutMcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-mcast-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutMcastPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutMcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutMcastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutMcastPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutMcastPkt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutMcastPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutOctets::OutOctets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-octets"; yang_parent_name = "minute15-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutOctets::~OutOctets()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutOctets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutOctets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutOctets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutOctets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutOctets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutOctets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutOctets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutOctets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutOctets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPauseFrames::OutPauseFrames()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pause-frames"; yang_parent_name = "minute15-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPauseFrames::~OutPauseFrames()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPauseFrames::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPauseFrames::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPauseFrames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pause-frames";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPauseFrames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPauseFrames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPauseFrames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPauseFrames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPauseFrames::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPauseFrames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts10241518Octets::OutPkts10241518Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts10241518-octets"; yang_parent_name = "minute15-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts10241518Octets::~OutPkts10241518Octets()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts10241518Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts10241518Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts10241518Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts10241518-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts10241518Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts10241518Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts10241518Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts10241518Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts10241518Octets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts10241518Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts128255Octets::OutPkts128255Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts128255-octets"; yang_parent_name = "minute15-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts128255Octets::~OutPkts128255Octets()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts128255Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts128255Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts128255Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts128255-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts128255Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts128255Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts128255Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts128255Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts128255Octets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts128255Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts1519MaxOctets::OutPkts1519MaxOctets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts1519-max-octets"; yang_parent_name = "minute15-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts1519MaxOctets::~OutPkts1519MaxOctets()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts1519MaxOctets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts1519MaxOctets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts1519MaxOctets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts1519-max-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts1519MaxOctets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts1519MaxOctets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts1519MaxOctets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts1519MaxOctets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts1519MaxOctets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts1519MaxOctets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts256511Octets::OutPkts256511Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts256511-octets"; yang_parent_name = "minute15-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts256511Octets::~OutPkts256511Octets()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts256511Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts256511Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts256511Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts256511-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts256511Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts256511Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts256511Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts256511Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts256511Octets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts256511Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts5121023Octets::OutPkts5121023Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts5121023-octets"; yang_parent_name = "minute15-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts5121023Octets::~OutPkts5121023Octets()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts5121023Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts5121023Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts5121023Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts5121023-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts5121023Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts5121023Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts5121023Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts5121023Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts5121023Octets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts5121023Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts65127Octets::OutPkts65127Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts65127-octets"; yang_parent_name = "minute15-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts65127Octets::~OutPkts65127Octets()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts65127Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts65127Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts65127Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts65127-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts65127Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts65127Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts65127Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts65127Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts65127Octets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts65127Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutUcastPkt::OutUcastPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-ucast-pkt"; yang_parent_name = "minute15-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutUcastPkt::~OutUcastPkt()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutUcastPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutUcastPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutUcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-ucast-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutUcastPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutUcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutUcastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutUcastPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutUcastPkt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutUcastPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Outpkt64Octet::Outpkt64Octet()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "outpkt64octet"; yang_parent_name = "minute15-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Outpkt64Octet::~Outpkt64Octet()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Outpkt64Octet::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Outpkt64Octet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Outpkt64Octet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outpkt64octet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Outpkt64Octet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Outpkt64Octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Outpkt64Octet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Outpkt64Octet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Outpkt64Octet::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Outpkt64Octet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OversizePktStat::OversizePktStat()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "oversize-pkt-stat"; yang_parent_name = "minute15-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OversizePktStat::~OversizePktStat()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OversizePktStat::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OversizePktStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OversizePktStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oversize-pkt-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OversizePktStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OversizePktStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OversizePktStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OversizePktStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OversizePktStat::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OversizePktStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::RxPkt::RxPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "rx-pkt"; yang_parent_name = "minute15-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::RxPkt::~RxPkt()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::RxPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::RxPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::RxPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::RxPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::RxPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::RxPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::RxPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::RxPkt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::RxPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::RxUtil::RxUtil()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "rx-util"; yang_parent_name = "minute15-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::RxUtil::~RxUtil()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::RxUtil::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::RxUtil::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::RxUtil::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-util";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::RxUtil::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::RxUtil::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::RxUtil::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::RxUtil::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::RxUtil::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::RxUtil::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::StatPkt::StatPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "stat-pkt"; yang_parent_name = "minute15-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::StatPkt::~StatPkt()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::StatPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::StatPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::StatPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stat-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::StatPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::StatPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::StatPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::StatPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::StatPkt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::StatPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxBadFcs::TxBadFcs()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "tx-bad-fcs"; yang_parent_name = "minute15-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxBadFcs::~TxBadFcs()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxBadFcs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxBadFcs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxBadFcs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-bad-fcs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxBadFcs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxBadFcs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxBadFcs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxBadFcs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxBadFcs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxBadFcs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxFragments::TxFragments()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "tx-fragments"; yang_parent_name = "minute15-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxFragments::~TxFragments()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxFragments::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxFragments::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxFragments::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-fragments";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxFragments::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxFragments::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxFragments::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxFragments::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxFragments::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxFragments::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxJabber::TxJabber()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "tx-jabber"; yang_parent_name = "minute15-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxJabber::~TxJabber()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxJabber::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxJabber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxJabber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-jabber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxJabber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxJabber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxJabber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxJabber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxJabber::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxJabber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxOversizedPkt::TxOversizedPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "tx-oversized-pkt"; yang_parent_name = "minute15-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxOversizedPkt::~TxOversizedPkt()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxOversizedPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxOversizedPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxOversizedPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-oversized-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxOversizedPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxOversizedPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxOversizedPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxOversizedPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxOversizedPkt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxOversizedPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxPkt::TxPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "tx-pkt"; yang_parent_name = "minute15-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxPkt::~TxPkt()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxPkt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxUndersizedPkt::TxUndersizedPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "tx-undersized-pkt"; yang_parent_name = "minute15-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxUndersizedPkt::~TxUndersizedPkt()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxUndersizedPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxUndersizedPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxUndersizedPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-undersized-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxUndersizedPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxUndersizedPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxUndersizedPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxUndersizedPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxUndersizedPkt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxUndersizedPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxUtil::TxUtil()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "tx-util"; yang_parent_name = "minute15-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxUtil::~TxUtil()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxUtil::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxUtil::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxUtil::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-util";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxUtil::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxUtil::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxUtil::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxUtil::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxUtil::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxUtil::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::EthernetSecond30History()
    :
    second30_ether_histories(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories>())
{
    second30_ether_histories->parent = this;

    yang_name = "ethernet-second30-history"; yang_parent_name = "ethernet-port-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::~EthernetSecond30History()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::has_data() const
{
    return (second30_ether_histories !=  nullptr && second30_ether_histories->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::has_operation() const
{
    return is_set(yfilter)
	|| (second30_ether_histories !=  nullptr && second30_ether_histories->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-second30-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "second30-ether-histories")
    {
        if(second30_ether_histories == nullptr)
        {
            second30_ether_histories = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories>();
        }
        return second30_ether_histories;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(second30_ether_histories != nullptr)
    {
        children["second30-ether-histories"] = second30_ether_histories;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second30-ether-histories")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistories()
{

    yang_name = "second30-ether-histories"; yang_parent_name = "ethernet-second30-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::~Second30EtherHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::has_data() const
{
    for (std::size_t index=0; index<second30_ether_history.size(); index++)
    {
        if(second30_ether_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::has_operation() const
{
    for (std::size_t index=0; index<second30_ether_history.size(); index++)
    {
        if(second30_ether_history[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30-ether-histories";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "second30-ether-history")
    {
        for(auto const & c : second30_ether_history)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory>();
        c->parent = this;
        second30_ether_history.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : second30_ether_history)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second30-ether-history")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherHistory()
    :
    slot_number{YType::int32, "slot-number"}
    	,
    second30_ether_time_line_instances(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances>())
{
    second30_ether_time_line_instances->parent = this;

    yang_name = "second30-ether-history"; yang_parent_name = "second30-ether-histories"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::~Second30EtherHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::has_data() const
{
    return slot_number.is_set
	|| (second30_ether_time_line_instances !=  nullptr && second30_ether_time_line_instances->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(slot_number.yfilter)
	|| (second30_ether_time_line_instances !=  nullptr && second30_ether_time_line_instances->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30-ether-history" <<"[slot-number='" <<slot_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (slot_number.is_set || is_set(slot_number.yfilter)) leaf_name_data.push_back(slot_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "second30-ether-time-line-instances")
    {
        if(second30_ether_time_line_instances == nullptr)
        {
            second30_ether_time_line_instances = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances>();
        }
        return second30_ether_time_line_instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(second30_ether_time_line_instances != nullptr)
    {
        children["second30-ether-time-line-instances"] = second30_ether_time_line_instances;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "slot-number")
    {
        slot_number = value;
        slot_number.value_namespace = name_space;
        slot_number.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "slot-number")
    {
        slot_number.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second30-ether-time-line-instances" || name == "slot-number")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstances()
{

    yang_name = "second30-ether-time-line-instances"; yang_parent_name = "second30-ether-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::~Second30EtherTimeLineInstances()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::has_data() const
{
    for (std::size_t index=0; index<second30_ether_time_line_instance.size(); index++)
    {
        if(second30_ether_time_line_instance[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::has_operation() const
{
    for (std::size_t index=0; index<second30_ether_time_line_instance.size(); index++)
    {
        if(second30_ether_time_line_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30-ether-time-line-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "second30-ether-time-line-instance")
    {
        for(auto const & c : second30_ether_time_line_instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance>();
        c->parent = this;
        second30_ether_time_line_instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : second30_ether_time_line_instance)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second30-ether-time-line-instance")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Second30EtherTimeLineInstance()
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
    ether10241518_octet(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether10241518Octet>())
	,ether128255_octet(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether128255Octet>())
	,ether256511_octet(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether256511Octet>())
	,ether5121023_octet(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether5121023Octet>())
	,ether64_octets(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether64Octets>())
	,ether65127_octet(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether65127Octet>())
	,ether_stat_broadcast_pkt(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatBroadcastPkt>())
	,ether_stat_multicast_pkt(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatMulticastPkt>())
	,ether_stat_undersized_pkt(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatUndersizedPkt>())
	,fcs_errors_stat(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::FcsErrorsStat>())
	,if_in_errors(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::IfInErrors>())
	,if_in_octets(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::IfInOctets>())
	,in8021q_frames(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::In8021QFrames>())
	,in_bcast_pkt(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InBcastPkt>())
	,in_drop_abort(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropAbort>())
	,in_drop_invalid_dmac(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidDmac>())
	,in_drop_invalid_encap(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidEncap>())
	,in_drop_invalid_vlan(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidVlan>())
	,in_drop_other(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropOther>())
	,in_drop_overrun(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropOverrun>())
	,in_error_collisions(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorCollisions>())
	,in_error_fragments(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorFragments>())
	,in_error_giant(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorGiant>())
	,in_error_jabbers(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorJabbers>())
	,in_error_other(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorOther>())
	,in_error_runt(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorRunt>())
	,in_error_symbol(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorSymbol>())
	,in_good_bytes(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InGoodBytes>())
	,in_good_pkts(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InGoodPkts>())
	,in_mcast_pkt(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMcastPkt>())
	,in_mib_giant(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibGiant>())
	,in_mib_jabber(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibJabber>())
	,in_mibcrc(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibcrc>())
	,in_pause_frame(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPauseFrame>())
	,in_pkt64_octet(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkt64Octet>())
	,in_pkts1024_to1518_octets(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts1024To1518Octets>())
	,in_pkts128_to255_octets(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts128To255Octets>())
	,in_pkts1519_max_octets(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts1519MaxOctets>())
	,in_pkts256_to511_octets(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts256To511Octets>())
	,in_pkts512_to1023_octets(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts512To1023Octets>())
	,in_pkts65_to127_octets(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts65To127Octets>())
	,in_ucast_pkt(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InUcastPkt>())
	,jabber_stat(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::JabberStat>())
	,long_frames_stat(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::LongFramesStat>())
	,octet_stat(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OctetStat>())
	,out8021q_frames(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Out8021QFrames>())
	,out_bcast_pkt(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutBcastPkt>())
	,out_drop_abort(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropAbort>())
	,out_drop_other(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropOther>())
	,out_drop_underrun(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropUnderrun>())
	,out_error_other(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutErrorOther>())
	,out_good_bytes(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutGoodBytes>())
	,out_good_pkts(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutGoodPkts>())
	,out_mcast_pkt(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutMcastPkt>())
	,out_octets(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutOctets>())
	,out_pause_frames(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPauseFrames>())
	,out_pkts10241518_octets(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts10241518Octets>())
	,out_pkts128255_octets(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts128255Octets>())
	,out_pkts1519_max_octets(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts1519MaxOctets>())
	,out_pkts256511_octets(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts256511Octets>())
	,out_pkts5121023_octets(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts5121023Octets>())
	,out_pkts65127_octets(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts65127Octets>())
	,out_ucast_pkt(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutUcastPkt>())
	,outpkt64octet(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Outpkt64Octet>())
	,oversize_pkt_stat(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OversizePktStat>())
	,rx_pkt(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::RxPkt>())
	,rx_util(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::RxUtil>())
	,stat_pkt(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::StatPkt>())
	,tx_bad_fcs(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxBadFcs>())
	,tx_fragments(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxFragments>())
	,tx_jabber(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxJabber>())
	,tx_oversized_pkt(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxOversizedPkt>())
	,tx_pkt(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxPkt>())
	,tx_undersized_pkt(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxUndersizedPkt>())
	,tx_util(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxUtil>())
{
    ether10241518_octet->parent = this;
    ether128255_octet->parent = this;
    ether256511_octet->parent = this;
    ether5121023_octet->parent = this;
    ether64_octets->parent = this;
    ether65127_octet->parent = this;
    ether_stat_broadcast_pkt->parent = this;
    ether_stat_multicast_pkt->parent = this;
    ether_stat_undersized_pkt->parent = this;
    fcs_errors_stat->parent = this;
    if_in_errors->parent = this;
    if_in_octets->parent = this;
    in8021q_frames->parent = this;
    in_bcast_pkt->parent = this;
    in_drop_abort->parent = this;
    in_drop_invalid_dmac->parent = this;
    in_drop_invalid_encap->parent = this;
    in_drop_invalid_vlan->parent = this;
    in_drop_other->parent = this;
    in_drop_overrun->parent = this;
    in_error_collisions->parent = this;
    in_error_fragments->parent = this;
    in_error_giant->parent = this;
    in_error_jabbers->parent = this;
    in_error_other->parent = this;
    in_error_runt->parent = this;
    in_error_symbol->parent = this;
    in_good_bytes->parent = this;
    in_good_pkts->parent = this;
    in_mcast_pkt->parent = this;
    in_mib_giant->parent = this;
    in_mib_jabber->parent = this;
    in_mibcrc->parent = this;
    in_pause_frame->parent = this;
    in_pkt64_octet->parent = this;
    in_pkts1024_to1518_octets->parent = this;
    in_pkts128_to255_octets->parent = this;
    in_pkts1519_max_octets->parent = this;
    in_pkts256_to511_octets->parent = this;
    in_pkts512_to1023_octets->parent = this;
    in_pkts65_to127_octets->parent = this;
    in_ucast_pkt->parent = this;
    jabber_stat->parent = this;
    long_frames_stat->parent = this;
    octet_stat->parent = this;
    out8021q_frames->parent = this;
    out_bcast_pkt->parent = this;
    out_drop_abort->parent = this;
    out_drop_other->parent = this;
    out_drop_underrun->parent = this;
    out_error_other->parent = this;
    out_good_bytes->parent = this;
    out_good_pkts->parent = this;
    out_mcast_pkt->parent = this;
    out_octets->parent = this;
    out_pause_frames->parent = this;
    out_pkts10241518_octets->parent = this;
    out_pkts128255_octets->parent = this;
    out_pkts1519_max_octets->parent = this;
    out_pkts256511_octets->parent = this;
    out_pkts5121023_octets->parent = this;
    out_pkts65127_octets->parent = this;
    out_ucast_pkt->parent = this;
    outpkt64octet->parent = this;
    oversize_pkt_stat->parent = this;
    rx_pkt->parent = this;
    rx_util->parent = this;
    stat_pkt->parent = this;
    tx_bad_fcs->parent = this;
    tx_fragments->parent = this;
    tx_jabber->parent = this;
    tx_oversized_pkt->parent = this;
    tx_pkt->parent = this;
    tx_undersized_pkt->parent = this;
    tx_util->parent = this;

    yang_name = "second30-ether-time-line-instance"; yang_parent_name = "second30-ether-time-line-instances"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::~Second30EtherTimeLineInstance()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::has_data() const
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
	|| (ether10241518_octet !=  nullptr && ether10241518_octet->has_data())
	|| (ether128255_octet !=  nullptr && ether128255_octet->has_data())
	|| (ether256511_octet !=  nullptr && ether256511_octet->has_data())
	|| (ether5121023_octet !=  nullptr && ether5121023_octet->has_data())
	|| (ether64_octets !=  nullptr && ether64_octets->has_data())
	|| (ether65127_octet !=  nullptr && ether65127_octet->has_data())
	|| (ether_stat_broadcast_pkt !=  nullptr && ether_stat_broadcast_pkt->has_data())
	|| (ether_stat_multicast_pkt !=  nullptr && ether_stat_multicast_pkt->has_data())
	|| (ether_stat_undersized_pkt !=  nullptr && ether_stat_undersized_pkt->has_data())
	|| (fcs_errors_stat !=  nullptr && fcs_errors_stat->has_data())
	|| (if_in_errors !=  nullptr && if_in_errors->has_data())
	|| (if_in_octets !=  nullptr && if_in_octets->has_data())
	|| (in8021q_frames !=  nullptr && in8021q_frames->has_data())
	|| (in_bcast_pkt !=  nullptr && in_bcast_pkt->has_data())
	|| (in_drop_abort !=  nullptr && in_drop_abort->has_data())
	|| (in_drop_invalid_dmac !=  nullptr && in_drop_invalid_dmac->has_data())
	|| (in_drop_invalid_encap !=  nullptr && in_drop_invalid_encap->has_data())
	|| (in_drop_invalid_vlan !=  nullptr && in_drop_invalid_vlan->has_data())
	|| (in_drop_other !=  nullptr && in_drop_other->has_data())
	|| (in_drop_overrun !=  nullptr && in_drop_overrun->has_data())
	|| (in_error_collisions !=  nullptr && in_error_collisions->has_data())
	|| (in_error_fragments !=  nullptr && in_error_fragments->has_data())
	|| (in_error_giant !=  nullptr && in_error_giant->has_data())
	|| (in_error_jabbers !=  nullptr && in_error_jabbers->has_data())
	|| (in_error_other !=  nullptr && in_error_other->has_data())
	|| (in_error_runt !=  nullptr && in_error_runt->has_data())
	|| (in_error_symbol !=  nullptr && in_error_symbol->has_data())
	|| (in_good_bytes !=  nullptr && in_good_bytes->has_data())
	|| (in_good_pkts !=  nullptr && in_good_pkts->has_data())
	|| (in_mcast_pkt !=  nullptr && in_mcast_pkt->has_data())
	|| (in_mib_giant !=  nullptr && in_mib_giant->has_data())
	|| (in_mib_jabber !=  nullptr && in_mib_jabber->has_data())
	|| (in_mibcrc !=  nullptr && in_mibcrc->has_data())
	|| (in_pause_frame !=  nullptr && in_pause_frame->has_data())
	|| (in_pkt64_octet !=  nullptr && in_pkt64_octet->has_data())
	|| (in_pkts1024_to1518_octets !=  nullptr && in_pkts1024_to1518_octets->has_data())
	|| (in_pkts128_to255_octets !=  nullptr && in_pkts128_to255_octets->has_data())
	|| (in_pkts1519_max_octets !=  nullptr && in_pkts1519_max_octets->has_data())
	|| (in_pkts256_to511_octets !=  nullptr && in_pkts256_to511_octets->has_data())
	|| (in_pkts512_to1023_octets !=  nullptr && in_pkts512_to1023_octets->has_data())
	|| (in_pkts65_to127_octets !=  nullptr && in_pkts65_to127_octets->has_data())
	|| (in_ucast_pkt !=  nullptr && in_ucast_pkt->has_data())
	|| (jabber_stat !=  nullptr && jabber_stat->has_data())
	|| (long_frames_stat !=  nullptr && long_frames_stat->has_data())
	|| (octet_stat !=  nullptr && octet_stat->has_data())
	|| (out8021q_frames !=  nullptr && out8021q_frames->has_data())
	|| (out_bcast_pkt !=  nullptr && out_bcast_pkt->has_data())
	|| (out_drop_abort !=  nullptr && out_drop_abort->has_data())
	|| (out_drop_other !=  nullptr && out_drop_other->has_data())
	|| (out_drop_underrun !=  nullptr && out_drop_underrun->has_data())
	|| (out_error_other !=  nullptr && out_error_other->has_data())
	|| (out_good_bytes !=  nullptr && out_good_bytes->has_data())
	|| (out_good_pkts !=  nullptr && out_good_pkts->has_data())
	|| (out_mcast_pkt !=  nullptr && out_mcast_pkt->has_data())
	|| (out_octets !=  nullptr && out_octets->has_data())
	|| (out_pause_frames !=  nullptr && out_pause_frames->has_data())
	|| (out_pkts10241518_octets !=  nullptr && out_pkts10241518_octets->has_data())
	|| (out_pkts128255_octets !=  nullptr && out_pkts128255_octets->has_data())
	|| (out_pkts1519_max_octets !=  nullptr && out_pkts1519_max_octets->has_data())
	|| (out_pkts256511_octets !=  nullptr && out_pkts256511_octets->has_data())
	|| (out_pkts5121023_octets !=  nullptr && out_pkts5121023_octets->has_data())
	|| (out_pkts65127_octets !=  nullptr && out_pkts65127_octets->has_data())
	|| (out_ucast_pkt !=  nullptr && out_ucast_pkt->has_data())
	|| (outpkt64octet !=  nullptr && outpkt64octet->has_data())
	|| (oversize_pkt_stat !=  nullptr && oversize_pkt_stat->has_data())
	|| (rx_pkt !=  nullptr && rx_pkt->has_data())
	|| (rx_util !=  nullptr && rx_util->has_data())
	|| (stat_pkt !=  nullptr && stat_pkt->has_data())
	|| (tx_bad_fcs !=  nullptr && tx_bad_fcs->has_data())
	|| (tx_fragments !=  nullptr && tx_fragments->has_data())
	|| (tx_jabber !=  nullptr && tx_jabber->has_data())
	|| (tx_oversized_pkt !=  nullptr && tx_oversized_pkt->has_data())
	|| (tx_pkt !=  nullptr && tx_pkt->has_data())
	|| (tx_undersized_pkt !=  nullptr && tx_undersized_pkt->has_data())
	|| (tx_util !=  nullptr && tx_util->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::has_operation() const
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
	|| (ether10241518_octet !=  nullptr && ether10241518_octet->has_operation())
	|| (ether128255_octet !=  nullptr && ether128255_octet->has_operation())
	|| (ether256511_octet !=  nullptr && ether256511_octet->has_operation())
	|| (ether5121023_octet !=  nullptr && ether5121023_octet->has_operation())
	|| (ether64_octets !=  nullptr && ether64_octets->has_operation())
	|| (ether65127_octet !=  nullptr && ether65127_octet->has_operation())
	|| (ether_stat_broadcast_pkt !=  nullptr && ether_stat_broadcast_pkt->has_operation())
	|| (ether_stat_multicast_pkt !=  nullptr && ether_stat_multicast_pkt->has_operation())
	|| (ether_stat_undersized_pkt !=  nullptr && ether_stat_undersized_pkt->has_operation())
	|| (fcs_errors_stat !=  nullptr && fcs_errors_stat->has_operation())
	|| (if_in_errors !=  nullptr && if_in_errors->has_operation())
	|| (if_in_octets !=  nullptr && if_in_octets->has_operation())
	|| (in8021q_frames !=  nullptr && in8021q_frames->has_operation())
	|| (in_bcast_pkt !=  nullptr && in_bcast_pkt->has_operation())
	|| (in_drop_abort !=  nullptr && in_drop_abort->has_operation())
	|| (in_drop_invalid_dmac !=  nullptr && in_drop_invalid_dmac->has_operation())
	|| (in_drop_invalid_encap !=  nullptr && in_drop_invalid_encap->has_operation())
	|| (in_drop_invalid_vlan !=  nullptr && in_drop_invalid_vlan->has_operation())
	|| (in_drop_other !=  nullptr && in_drop_other->has_operation())
	|| (in_drop_overrun !=  nullptr && in_drop_overrun->has_operation())
	|| (in_error_collisions !=  nullptr && in_error_collisions->has_operation())
	|| (in_error_fragments !=  nullptr && in_error_fragments->has_operation())
	|| (in_error_giant !=  nullptr && in_error_giant->has_operation())
	|| (in_error_jabbers !=  nullptr && in_error_jabbers->has_operation())
	|| (in_error_other !=  nullptr && in_error_other->has_operation())
	|| (in_error_runt !=  nullptr && in_error_runt->has_operation())
	|| (in_error_symbol !=  nullptr && in_error_symbol->has_operation())
	|| (in_good_bytes !=  nullptr && in_good_bytes->has_operation())
	|| (in_good_pkts !=  nullptr && in_good_pkts->has_operation())
	|| (in_mcast_pkt !=  nullptr && in_mcast_pkt->has_operation())
	|| (in_mib_giant !=  nullptr && in_mib_giant->has_operation())
	|| (in_mib_jabber !=  nullptr && in_mib_jabber->has_operation())
	|| (in_mibcrc !=  nullptr && in_mibcrc->has_operation())
	|| (in_pause_frame !=  nullptr && in_pause_frame->has_operation())
	|| (in_pkt64_octet !=  nullptr && in_pkt64_octet->has_operation())
	|| (in_pkts1024_to1518_octets !=  nullptr && in_pkts1024_to1518_octets->has_operation())
	|| (in_pkts128_to255_octets !=  nullptr && in_pkts128_to255_octets->has_operation())
	|| (in_pkts1519_max_octets !=  nullptr && in_pkts1519_max_octets->has_operation())
	|| (in_pkts256_to511_octets !=  nullptr && in_pkts256_to511_octets->has_operation())
	|| (in_pkts512_to1023_octets !=  nullptr && in_pkts512_to1023_octets->has_operation())
	|| (in_pkts65_to127_octets !=  nullptr && in_pkts65_to127_octets->has_operation())
	|| (in_ucast_pkt !=  nullptr && in_ucast_pkt->has_operation())
	|| (jabber_stat !=  nullptr && jabber_stat->has_operation())
	|| (long_frames_stat !=  nullptr && long_frames_stat->has_operation())
	|| (octet_stat !=  nullptr && octet_stat->has_operation())
	|| (out8021q_frames !=  nullptr && out8021q_frames->has_operation())
	|| (out_bcast_pkt !=  nullptr && out_bcast_pkt->has_operation())
	|| (out_drop_abort !=  nullptr && out_drop_abort->has_operation())
	|| (out_drop_other !=  nullptr && out_drop_other->has_operation())
	|| (out_drop_underrun !=  nullptr && out_drop_underrun->has_operation())
	|| (out_error_other !=  nullptr && out_error_other->has_operation())
	|| (out_good_bytes !=  nullptr && out_good_bytes->has_operation())
	|| (out_good_pkts !=  nullptr && out_good_pkts->has_operation())
	|| (out_mcast_pkt !=  nullptr && out_mcast_pkt->has_operation())
	|| (out_octets !=  nullptr && out_octets->has_operation())
	|| (out_pause_frames !=  nullptr && out_pause_frames->has_operation())
	|| (out_pkts10241518_octets !=  nullptr && out_pkts10241518_octets->has_operation())
	|| (out_pkts128255_octets !=  nullptr && out_pkts128255_octets->has_operation())
	|| (out_pkts1519_max_octets !=  nullptr && out_pkts1519_max_octets->has_operation())
	|| (out_pkts256511_octets !=  nullptr && out_pkts256511_octets->has_operation())
	|| (out_pkts5121023_octets !=  nullptr && out_pkts5121023_octets->has_operation())
	|| (out_pkts65127_octets !=  nullptr && out_pkts65127_octets->has_operation())
	|| (out_ucast_pkt !=  nullptr && out_ucast_pkt->has_operation())
	|| (outpkt64octet !=  nullptr && outpkt64octet->has_operation())
	|| (oversize_pkt_stat !=  nullptr && oversize_pkt_stat->has_operation())
	|| (rx_pkt !=  nullptr && rx_pkt->has_operation())
	|| (rx_util !=  nullptr && rx_util->has_operation())
	|| (stat_pkt !=  nullptr && stat_pkt->has_operation())
	|| (tx_bad_fcs !=  nullptr && tx_bad_fcs->has_operation())
	|| (tx_fragments !=  nullptr && tx_fragments->has_operation())
	|| (tx_jabber !=  nullptr && tx_jabber->has_operation())
	|| (tx_oversized_pkt !=  nullptr && tx_oversized_pkt->has_operation())
	|| (tx_pkt !=  nullptr && tx_pkt->has_operation())
	|| (tx_undersized_pkt !=  nullptr && tx_undersized_pkt->has_operation())
	|| (tx_util !=  nullptr && tx_util->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30-ether-time-line-instance" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ether10241518-octet")
    {
        if(ether10241518_octet == nullptr)
        {
            ether10241518_octet = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether10241518Octet>();
        }
        return ether10241518_octet;
    }

    if(child_yang_name == "ether128255-octet")
    {
        if(ether128255_octet == nullptr)
        {
            ether128255_octet = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether128255Octet>();
        }
        return ether128255_octet;
    }

    if(child_yang_name == "ether256511-octet")
    {
        if(ether256511_octet == nullptr)
        {
            ether256511_octet = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether256511Octet>();
        }
        return ether256511_octet;
    }

    if(child_yang_name == "ether5121023-octet")
    {
        if(ether5121023_octet == nullptr)
        {
            ether5121023_octet = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether5121023Octet>();
        }
        return ether5121023_octet;
    }

    if(child_yang_name == "ether64-octets")
    {
        if(ether64_octets == nullptr)
        {
            ether64_octets = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether64Octets>();
        }
        return ether64_octets;
    }

    if(child_yang_name == "ether65127-octet")
    {
        if(ether65127_octet == nullptr)
        {
            ether65127_octet = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether65127Octet>();
        }
        return ether65127_octet;
    }

    if(child_yang_name == "ether-stat-broadcast-pkt")
    {
        if(ether_stat_broadcast_pkt == nullptr)
        {
            ether_stat_broadcast_pkt = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatBroadcastPkt>();
        }
        return ether_stat_broadcast_pkt;
    }

    if(child_yang_name == "ether-stat-multicast-pkt")
    {
        if(ether_stat_multicast_pkt == nullptr)
        {
            ether_stat_multicast_pkt = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatMulticastPkt>();
        }
        return ether_stat_multicast_pkt;
    }

    if(child_yang_name == "ether-stat-undersized-pkt")
    {
        if(ether_stat_undersized_pkt == nullptr)
        {
            ether_stat_undersized_pkt = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatUndersizedPkt>();
        }
        return ether_stat_undersized_pkt;
    }

    if(child_yang_name == "fcs-errors-stat")
    {
        if(fcs_errors_stat == nullptr)
        {
            fcs_errors_stat = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::FcsErrorsStat>();
        }
        return fcs_errors_stat;
    }

    if(child_yang_name == "if-in-errors")
    {
        if(if_in_errors == nullptr)
        {
            if_in_errors = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::IfInErrors>();
        }
        return if_in_errors;
    }

    if(child_yang_name == "if-in-octets")
    {
        if(if_in_octets == nullptr)
        {
            if_in_octets = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::IfInOctets>();
        }
        return if_in_octets;
    }

    if(child_yang_name == "in8021q-frames")
    {
        if(in8021q_frames == nullptr)
        {
            in8021q_frames = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::In8021QFrames>();
        }
        return in8021q_frames;
    }

    if(child_yang_name == "in-bcast-pkt")
    {
        if(in_bcast_pkt == nullptr)
        {
            in_bcast_pkt = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InBcastPkt>();
        }
        return in_bcast_pkt;
    }

    if(child_yang_name == "in-drop-abort")
    {
        if(in_drop_abort == nullptr)
        {
            in_drop_abort = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropAbort>();
        }
        return in_drop_abort;
    }

    if(child_yang_name == "in-drop-invalid-dmac")
    {
        if(in_drop_invalid_dmac == nullptr)
        {
            in_drop_invalid_dmac = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidDmac>();
        }
        return in_drop_invalid_dmac;
    }

    if(child_yang_name == "in-drop-invalid-encap")
    {
        if(in_drop_invalid_encap == nullptr)
        {
            in_drop_invalid_encap = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidEncap>();
        }
        return in_drop_invalid_encap;
    }

    if(child_yang_name == "in-drop-invalid-vlan")
    {
        if(in_drop_invalid_vlan == nullptr)
        {
            in_drop_invalid_vlan = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidVlan>();
        }
        return in_drop_invalid_vlan;
    }

    if(child_yang_name == "in-drop-other")
    {
        if(in_drop_other == nullptr)
        {
            in_drop_other = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropOther>();
        }
        return in_drop_other;
    }

    if(child_yang_name == "in-drop-overrun")
    {
        if(in_drop_overrun == nullptr)
        {
            in_drop_overrun = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropOverrun>();
        }
        return in_drop_overrun;
    }

    if(child_yang_name == "in-error-collisions")
    {
        if(in_error_collisions == nullptr)
        {
            in_error_collisions = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorCollisions>();
        }
        return in_error_collisions;
    }

    if(child_yang_name == "in-error-fragments")
    {
        if(in_error_fragments == nullptr)
        {
            in_error_fragments = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorFragments>();
        }
        return in_error_fragments;
    }

    if(child_yang_name == "in-error-giant")
    {
        if(in_error_giant == nullptr)
        {
            in_error_giant = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorGiant>();
        }
        return in_error_giant;
    }

    if(child_yang_name == "in-error-jabbers")
    {
        if(in_error_jabbers == nullptr)
        {
            in_error_jabbers = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorJabbers>();
        }
        return in_error_jabbers;
    }

    if(child_yang_name == "in-error-other")
    {
        if(in_error_other == nullptr)
        {
            in_error_other = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorOther>();
        }
        return in_error_other;
    }

    if(child_yang_name == "in-error-runt")
    {
        if(in_error_runt == nullptr)
        {
            in_error_runt = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorRunt>();
        }
        return in_error_runt;
    }

    if(child_yang_name == "in-error-symbol")
    {
        if(in_error_symbol == nullptr)
        {
            in_error_symbol = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorSymbol>();
        }
        return in_error_symbol;
    }

    if(child_yang_name == "in-good-bytes")
    {
        if(in_good_bytes == nullptr)
        {
            in_good_bytes = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InGoodBytes>();
        }
        return in_good_bytes;
    }

    if(child_yang_name == "in-good-pkts")
    {
        if(in_good_pkts == nullptr)
        {
            in_good_pkts = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InGoodPkts>();
        }
        return in_good_pkts;
    }

    if(child_yang_name == "in-mcast-pkt")
    {
        if(in_mcast_pkt == nullptr)
        {
            in_mcast_pkt = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMcastPkt>();
        }
        return in_mcast_pkt;
    }

    if(child_yang_name == "in-mib-giant")
    {
        if(in_mib_giant == nullptr)
        {
            in_mib_giant = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibGiant>();
        }
        return in_mib_giant;
    }

    if(child_yang_name == "in-mib-jabber")
    {
        if(in_mib_jabber == nullptr)
        {
            in_mib_jabber = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibJabber>();
        }
        return in_mib_jabber;
    }

    if(child_yang_name == "in-mibcrc")
    {
        if(in_mibcrc == nullptr)
        {
            in_mibcrc = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibcrc>();
        }
        return in_mibcrc;
    }

    if(child_yang_name == "in-pause-frame")
    {
        if(in_pause_frame == nullptr)
        {
            in_pause_frame = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPauseFrame>();
        }
        return in_pause_frame;
    }

    if(child_yang_name == "in-pkt64-octet")
    {
        if(in_pkt64_octet == nullptr)
        {
            in_pkt64_octet = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkt64Octet>();
        }
        return in_pkt64_octet;
    }

    if(child_yang_name == "in-pkts1024-to1518-octets")
    {
        if(in_pkts1024_to1518_octets == nullptr)
        {
            in_pkts1024_to1518_octets = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts1024To1518Octets>();
        }
        return in_pkts1024_to1518_octets;
    }

    if(child_yang_name == "in-pkts128-to255-octets")
    {
        if(in_pkts128_to255_octets == nullptr)
        {
            in_pkts128_to255_octets = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts128To255Octets>();
        }
        return in_pkts128_to255_octets;
    }

    if(child_yang_name == "in-pkts1519-max-octets")
    {
        if(in_pkts1519_max_octets == nullptr)
        {
            in_pkts1519_max_octets = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts1519MaxOctets>();
        }
        return in_pkts1519_max_octets;
    }

    if(child_yang_name == "in-pkts256-to511-octets")
    {
        if(in_pkts256_to511_octets == nullptr)
        {
            in_pkts256_to511_octets = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts256To511Octets>();
        }
        return in_pkts256_to511_octets;
    }

    if(child_yang_name == "in-pkts512-to1023-octets")
    {
        if(in_pkts512_to1023_octets == nullptr)
        {
            in_pkts512_to1023_octets = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts512To1023Octets>();
        }
        return in_pkts512_to1023_octets;
    }

    if(child_yang_name == "in-pkts65-to127-octets")
    {
        if(in_pkts65_to127_octets == nullptr)
        {
            in_pkts65_to127_octets = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts65To127Octets>();
        }
        return in_pkts65_to127_octets;
    }

    if(child_yang_name == "in-ucast-pkt")
    {
        if(in_ucast_pkt == nullptr)
        {
            in_ucast_pkt = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InUcastPkt>();
        }
        return in_ucast_pkt;
    }

    if(child_yang_name == "jabber-stat")
    {
        if(jabber_stat == nullptr)
        {
            jabber_stat = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::JabberStat>();
        }
        return jabber_stat;
    }

    if(child_yang_name == "long-frames-stat")
    {
        if(long_frames_stat == nullptr)
        {
            long_frames_stat = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::LongFramesStat>();
        }
        return long_frames_stat;
    }

    if(child_yang_name == "octet-stat")
    {
        if(octet_stat == nullptr)
        {
            octet_stat = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OctetStat>();
        }
        return octet_stat;
    }

    if(child_yang_name == "out8021q-frames")
    {
        if(out8021q_frames == nullptr)
        {
            out8021q_frames = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Out8021QFrames>();
        }
        return out8021q_frames;
    }

    if(child_yang_name == "out-bcast-pkt")
    {
        if(out_bcast_pkt == nullptr)
        {
            out_bcast_pkt = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutBcastPkt>();
        }
        return out_bcast_pkt;
    }

    if(child_yang_name == "out-drop-abort")
    {
        if(out_drop_abort == nullptr)
        {
            out_drop_abort = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropAbort>();
        }
        return out_drop_abort;
    }

    if(child_yang_name == "out-drop-other")
    {
        if(out_drop_other == nullptr)
        {
            out_drop_other = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropOther>();
        }
        return out_drop_other;
    }

    if(child_yang_name == "out-drop-underrun")
    {
        if(out_drop_underrun == nullptr)
        {
            out_drop_underrun = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropUnderrun>();
        }
        return out_drop_underrun;
    }

    if(child_yang_name == "out-error-other")
    {
        if(out_error_other == nullptr)
        {
            out_error_other = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutErrorOther>();
        }
        return out_error_other;
    }

    if(child_yang_name == "out-good-bytes")
    {
        if(out_good_bytes == nullptr)
        {
            out_good_bytes = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutGoodBytes>();
        }
        return out_good_bytes;
    }

    if(child_yang_name == "out-good-pkts")
    {
        if(out_good_pkts == nullptr)
        {
            out_good_pkts = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutGoodPkts>();
        }
        return out_good_pkts;
    }

    if(child_yang_name == "out-mcast-pkt")
    {
        if(out_mcast_pkt == nullptr)
        {
            out_mcast_pkt = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutMcastPkt>();
        }
        return out_mcast_pkt;
    }

    if(child_yang_name == "out-octets")
    {
        if(out_octets == nullptr)
        {
            out_octets = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutOctets>();
        }
        return out_octets;
    }

    if(child_yang_name == "out-pause-frames")
    {
        if(out_pause_frames == nullptr)
        {
            out_pause_frames = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPauseFrames>();
        }
        return out_pause_frames;
    }

    if(child_yang_name == "out-pkts10241518-octets")
    {
        if(out_pkts10241518_octets == nullptr)
        {
            out_pkts10241518_octets = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts10241518Octets>();
        }
        return out_pkts10241518_octets;
    }

    if(child_yang_name == "out-pkts128255-octets")
    {
        if(out_pkts128255_octets == nullptr)
        {
            out_pkts128255_octets = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts128255Octets>();
        }
        return out_pkts128255_octets;
    }

    if(child_yang_name == "out-pkts1519-max-octets")
    {
        if(out_pkts1519_max_octets == nullptr)
        {
            out_pkts1519_max_octets = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts1519MaxOctets>();
        }
        return out_pkts1519_max_octets;
    }

    if(child_yang_name == "out-pkts256511-octets")
    {
        if(out_pkts256511_octets == nullptr)
        {
            out_pkts256511_octets = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts256511Octets>();
        }
        return out_pkts256511_octets;
    }

    if(child_yang_name == "out-pkts5121023-octets")
    {
        if(out_pkts5121023_octets == nullptr)
        {
            out_pkts5121023_octets = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts5121023Octets>();
        }
        return out_pkts5121023_octets;
    }

    if(child_yang_name == "out-pkts65127-octets")
    {
        if(out_pkts65127_octets == nullptr)
        {
            out_pkts65127_octets = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts65127Octets>();
        }
        return out_pkts65127_octets;
    }

    if(child_yang_name == "out-ucast-pkt")
    {
        if(out_ucast_pkt == nullptr)
        {
            out_ucast_pkt = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutUcastPkt>();
        }
        return out_ucast_pkt;
    }

    if(child_yang_name == "outpkt64octet")
    {
        if(outpkt64octet == nullptr)
        {
            outpkt64octet = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Outpkt64Octet>();
        }
        return outpkt64octet;
    }

    if(child_yang_name == "oversize-pkt-stat")
    {
        if(oversize_pkt_stat == nullptr)
        {
            oversize_pkt_stat = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OversizePktStat>();
        }
        return oversize_pkt_stat;
    }

    if(child_yang_name == "rx-pkt")
    {
        if(rx_pkt == nullptr)
        {
            rx_pkt = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::RxPkt>();
        }
        return rx_pkt;
    }

    if(child_yang_name == "rx-util")
    {
        if(rx_util == nullptr)
        {
            rx_util = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::RxUtil>();
        }
        return rx_util;
    }

    if(child_yang_name == "stat-pkt")
    {
        if(stat_pkt == nullptr)
        {
            stat_pkt = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::StatPkt>();
        }
        return stat_pkt;
    }

    if(child_yang_name == "tx-bad-fcs")
    {
        if(tx_bad_fcs == nullptr)
        {
            tx_bad_fcs = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxBadFcs>();
        }
        return tx_bad_fcs;
    }

    if(child_yang_name == "tx-fragments")
    {
        if(tx_fragments == nullptr)
        {
            tx_fragments = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxFragments>();
        }
        return tx_fragments;
    }

    if(child_yang_name == "tx-jabber")
    {
        if(tx_jabber == nullptr)
        {
            tx_jabber = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxJabber>();
        }
        return tx_jabber;
    }

    if(child_yang_name == "tx-oversized-pkt")
    {
        if(tx_oversized_pkt == nullptr)
        {
            tx_oversized_pkt = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxOversizedPkt>();
        }
        return tx_oversized_pkt;
    }

    if(child_yang_name == "tx-pkt")
    {
        if(tx_pkt == nullptr)
        {
            tx_pkt = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxPkt>();
        }
        return tx_pkt;
    }

    if(child_yang_name == "tx-undersized-pkt")
    {
        if(tx_undersized_pkt == nullptr)
        {
            tx_undersized_pkt = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxUndersizedPkt>();
        }
        return tx_undersized_pkt;
    }

    if(child_yang_name == "tx-util")
    {
        if(tx_util == nullptr)
        {
            tx_util = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxUtil>();
        }
        return tx_util;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ether10241518_octet != nullptr)
    {
        children["ether10241518-octet"] = ether10241518_octet;
    }

    if(ether128255_octet != nullptr)
    {
        children["ether128255-octet"] = ether128255_octet;
    }

    if(ether256511_octet != nullptr)
    {
        children["ether256511-octet"] = ether256511_octet;
    }

    if(ether5121023_octet != nullptr)
    {
        children["ether5121023-octet"] = ether5121023_octet;
    }

    if(ether64_octets != nullptr)
    {
        children["ether64-octets"] = ether64_octets;
    }

    if(ether65127_octet != nullptr)
    {
        children["ether65127-octet"] = ether65127_octet;
    }

    if(ether_stat_broadcast_pkt != nullptr)
    {
        children["ether-stat-broadcast-pkt"] = ether_stat_broadcast_pkt;
    }

    if(ether_stat_multicast_pkt != nullptr)
    {
        children["ether-stat-multicast-pkt"] = ether_stat_multicast_pkt;
    }

    if(ether_stat_undersized_pkt != nullptr)
    {
        children["ether-stat-undersized-pkt"] = ether_stat_undersized_pkt;
    }

    if(fcs_errors_stat != nullptr)
    {
        children["fcs-errors-stat"] = fcs_errors_stat;
    }

    if(if_in_errors != nullptr)
    {
        children["if-in-errors"] = if_in_errors;
    }

    if(if_in_octets != nullptr)
    {
        children["if-in-octets"] = if_in_octets;
    }

    if(in8021q_frames != nullptr)
    {
        children["in8021q-frames"] = in8021q_frames;
    }

    if(in_bcast_pkt != nullptr)
    {
        children["in-bcast-pkt"] = in_bcast_pkt;
    }

    if(in_drop_abort != nullptr)
    {
        children["in-drop-abort"] = in_drop_abort;
    }

    if(in_drop_invalid_dmac != nullptr)
    {
        children["in-drop-invalid-dmac"] = in_drop_invalid_dmac;
    }

    if(in_drop_invalid_encap != nullptr)
    {
        children["in-drop-invalid-encap"] = in_drop_invalid_encap;
    }

    if(in_drop_invalid_vlan != nullptr)
    {
        children["in-drop-invalid-vlan"] = in_drop_invalid_vlan;
    }

    if(in_drop_other != nullptr)
    {
        children["in-drop-other"] = in_drop_other;
    }

    if(in_drop_overrun != nullptr)
    {
        children["in-drop-overrun"] = in_drop_overrun;
    }

    if(in_error_collisions != nullptr)
    {
        children["in-error-collisions"] = in_error_collisions;
    }

    if(in_error_fragments != nullptr)
    {
        children["in-error-fragments"] = in_error_fragments;
    }

    if(in_error_giant != nullptr)
    {
        children["in-error-giant"] = in_error_giant;
    }

    if(in_error_jabbers != nullptr)
    {
        children["in-error-jabbers"] = in_error_jabbers;
    }

    if(in_error_other != nullptr)
    {
        children["in-error-other"] = in_error_other;
    }

    if(in_error_runt != nullptr)
    {
        children["in-error-runt"] = in_error_runt;
    }

    if(in_error_symbol != nullptr)
    {
        children["in-error-symbol"] = in_error_symbol;
    }

    if(in_good_bytes != nullptr)
    {
        children["in-good-bytes"] = in_good_bytes;
    }

    if(in_good_pkts != nullptr)
    {
        children["in-good-pkts"] = in_good_pkts;
    }

    if(in_mcast_pkt != nullptr)
    {
        children["in-mcast-pkt"] = in_mcast_pkt;
    }

    if(in_mib_giant != nullptr)
    {
        children["in-mib-giant"] = in_mib_giant;
    }

    if(in_mib_jabber != nullptr)
    {
        children["in-mib-jabber"] = in_mib_jabber;
    }

    if(in_mibcrc != nullptr)
    {
        children["in-mibcrc"] = in_mibcrc;
    }

    if(in_pause_frame != nullptr)
    {
        children["in-pause-frame"] = in_pause_frame;
    }

    if(in_pkt64_octet != nullptr)
    {
        children["in-pkt64-octet"] = in_pkt64_octet;
    }

    if(in_pkts1024_to1518_octets != nullptr)
    {
        children["in-pkts1024-to1518-octets"] = in_pkts1024_to1518_octets;
    }

    if(in_pkts128_to255_octets != nullptr)
    {
        children["in-pkts128-to255-octets"] = in_pkts128_to255_octets;
    }

    if(in_pkts1519_max_octets != nullptr)
    {
        children["in-pkts1519-max-octets"] = in_pkts1519_max_octets;
    }

    if(in_pkts256_to511_octets != nullptr)
    {
        children["in-pkts256-to511-octets"] = in_pkts256_to511_octets;
    }

    if(in_pkts512_to1023_octets != nullptr)
    {
        children["in-pkts512-to1023-octets"] = in_pkts512_to1023_octets;
    }

    if(in_pkts65_to127_octets != nullptr)
    {
        children["in-pkts65-to127-octets"] = in_pkts65_to127_octets;
    }

    if(in_ucast_pkt != nullptr)
    {
        children["in-ucast-pkt"] = in_ucast_pkt;
    }

    if(jabber_stat != nullptr)
    {
        children["jabber-stat"] = jabber_stat;
    }

    if(long_frames_stat != nullptr)
    {
        children["long-frames-stat"] = long_frames_stat;
    }

    if(octet_stat != nullptr)
    {
        children["octet-stat"] = octet_stat;
    }

    if(out8021q_frames != nullptr)
    {
        children["out8021q-frames"] = out8021q_frames;
    }

    if(out_bcast_pkt != nullptr)
    {
        children["out-bcast-pkt"] = out_bcast_pkt;
    }

    if(out_drop_abort != nullptr)
    {
        children["out-drop-abort"] = out_drop_abort;
    }

    if(out_drop_other != nullptr)
    {
        children["out-drop-other"] = out_drop_other;
    }

    if(out_drop_underrun != nullptr)
    {
        children["out-drop-underrun"] = out_drop_underrun;
    }

    if(out_error_other != nullptr)
    {
        children["out-error-other"] = out_error_other;
    }

    if(out_good_bytes != nullptr)
    {
        children["out-good-bytes"] = out_good_bytes;
    }

    if(out_good_pkts != nullptr)
    {
        children["out-good-pkts"] = out_good_pkts;
    }

    if(out_mcast_pkt != nullptr)
    {
        children["out-mcast-pkt"] = out_mcast_pkt;
    }

    if(out_octets != nullptr)
    {
        children["out-octets"] = out_octets;
    }

    if(out_pause_frames != nullptr)
    {
        children["out-pause-frames"] = out_pause_frames;
    }

    if(out_pkts10241518_octets != nullptr)
    {
        children["out-pkts10241518-octets"] = out_pkts10241518_octets;
    }

    if(out_pkts128255_octets != nullptr)
    {
        children["out-pkts128255-octets"] = out_pkts128255_octets;
    }

    if(out_pkts1519_max_octets != nullptr)
    {
        children["out-pkts1519-max-octets"] = out_pkts1519_max_octets;
    }

    if(out_pkts256511_octets != nullptr)
    {
        children["out-pkts256511-octets"] = out_pkts256511_octets;
    }

    if(out_pkts5121023_octets != nullptr)
    {
        children["out-pkts5121023-octets"] = out_pkts5121023_octets;
    }

    if(out_pkts65127_octets != nullptr)
    {
        children["out-pkts65127-octets"] = out_pkts65127_octets;
    }

    if(out_ucast_pkt != nullptr)
    {
        children["out-ucast-pkt"] = out_ucast_pkt;
    }

    if(outpkt64octet != nullptr)
    {
        children["outpkt64octet"] = outpkt64octet;
    }

    if(oversize_pkt_stat != nullptr)
    {
        children["oversize-pkt-stat"] = oversize_pkt_stat;
    }

    if(rx_pkt != nullptr)
    {
        children["rx-pkt"] = rx_pkt;
    }

    if(rx_util != nullptr)
    {
        children["rx-util"] = rx_util;
    }

    if(stat_pkt != nullptr)
    {
        children["stat-pkt"] = stat_pkt;
    }

    if(tx_bad_fcs != nullptr)
    {
        children["tx-bad-fcs"] = tx_bad_fcs;
    }

    if(tx_fragments != nullptr)
    {
        children["tx-fragments"] = tx_fragments;
    }

    if(tx_jabber != nullptr)
    {
        children["tx-jabber"] = tx_jabber;
    }

    if(tx_oversized_pkt != nullptr)
    {
        children["tx-oversized-pkt"] = tx_oversized_pkt;
    }

    if(tx_pkt != nullptr)
    {
        children["tx-pkt"] = tx_pkt;
    }

    if(tx_undersized_pkt != nullptr)
    {
        children["tx-undersized-pkt"] = tx_undersized_pkt;
    }

    if(tx_util != nullptr)
    {
        children["tx-util"] = tx_util;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ether10241518-octet" || name == "ether128255-octet" || name == "ether256511-octet" || name == "ether5121023-octet" || name == "ether64-octets" || name == "ether65127-octet" || name == "ether-stat-broadcast-pkt" || name == "ether-stat-multicast-pkt" || name == "ether-stat-undersized-pkt" || name == "fcs-errors-stat" || name == "if-in-errors" || name == "if-in-octets" || name == "in8021q-frames" || name == "in-bcast-pkt" || name == "in-drop-abort" || name == "in-drop-invalid-dmac" || name == "in-drop-invalid-encap" || name == "in-drop-invalid-vlan" || name == "in-drop-other" || name == "in-drop-overrun" || name == "in-error-collisions" || name == "in-error-fragments" || name == "in-error-giant" || name == "in-error-jabbers" || name == "in-error-other" || name == "in-error-runt" || name == "in-error-symbol" || name == "in-good-bytes" || name == "in-good-pkts" || name == "in-mcast-pkt" || name == "in-mib-giant" || name == "in-mib-jabber" || name == "in-mibcrc" || name == "in-pause-frame" || name == "in-pkt64-octet" || name == "in-pkts1024-to1518-octets" || name == "in-pkts128-to255-octets" || name == "in-pkts1519-max-octets" || name == "in-pkts256-to511-octets" || name == "in-pkts512-to1023-octets" || name == "in-pkts65-to127-octets" || name == "in-ucast-pkt" || name == "jabber-stat" || name == "long-frames-stat" || name == "octet-stat" || name == "out8021q-frames" || name == "out-bcast-pkt" || name == "out-drop-abort" || name == "out-drop-other" || name == "out-drop-underrun" || name == "out-error-other" || name == "out-good-bytes" || name == "out-good-pkts" || name == "out-mcast-pkt" || name == "out-octets" || name == "out-pause-frames" || name == "out-pkts10241518-octets" || name == "out-pkts128255-octets" || name == "out-pkts1519-max-octets" || name == "out-pkts256511-octets" || name == "out-pkts5121023-octets" || name == "out-pkts65127-octets" || name == "out-ucast-pkt" || name == "outpkt64octet" || name == "oversize-pkt-stat" || name == "rx-pkt" || name == "rx-util" || name == "stat-pkt" || name == "tx-bad-fcs" || name == "tx-fragments" || name == "tx-jabber" || name == "tx-oversized-pkt" || name == "tx-pkt" || name == "tx-undersized-pkt" || name == "tx-util" || name == "number" || name == "index" || name == "last-clear15-min-time" || name == "last-clear24-hr-time" || name == "last-clear30-sec-time" || name == "last-clear-time" || name == "sec30-support" || name == "timestamp" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether10241518Octet::Ether10241518Octet()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ether10241518-octet"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether10241518Octet::~Ether10241518Octet()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether10241518Octet::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether10241518Octet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether10241518Octet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether10241518-octet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether10241518Octet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether10241518Octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether10241518Octet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether10241518Octet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether10241518Octet::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether10241518Octet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether128255Octet::Ether128255Octet()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ether128255-octet"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether128255Octet::~Ether128255Octet()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether128255Octet::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether128255Octet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether128255Octet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether128255-octet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether128255Octet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether128255Octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether128255Octet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether128255Octet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether128255Octet::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether128255Octet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether256511Octet::Ether256511Octet()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ether256511-octet"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether256511Octet::~Ether256511Octet()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether256511Octet::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether256511Octet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether256511Octet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether256511-octet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether256511Octet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether256511Octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether256511Octet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether256511Octet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether256511Octet::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether256511Octet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether5121023Octet::Ether5121023Octet()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ether5121023-octet"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether5121023Octet::~Ether5121023Octet()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether5121023Octet::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether5121023Octet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether5121023Octet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether5121023-octet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether5121023Octet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether5121023Octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether5121023Octet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether5121023Octet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether5121023Octet::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether5121023Octet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether64Octets::Ether64Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ether64-octets"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether64Octets::~Ether64Octets()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether64Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether64Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether64Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether64-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether64Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether64Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether64Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether64Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether64Octets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether64Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether65127Octet::Ether65127Octet()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ether65127-octet"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether65127Octet::~Ether65127Octet()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether65127Octet::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether65127Octet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether65127Octet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether65127-octet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether65127Octet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether65127Octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether65127Octet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether65127Octet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether65127Octet::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether65127Octet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatBroadcastPkt::EtherStatBroadcastPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ether-stat-broadcast-pkt"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatBroadcastPkt::~EtherStatBroadcastPkt()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatBroadcastPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatBroadcastPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatBroadcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether-stat-broadcast-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatBroadcastPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatBroadcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatBroadcastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatBroadcastPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatBroadcastPkt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatBroadcastPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatMulticastPkt::EtherStatMulticastPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ether-stat-multicast-pkt"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatMulticastPkt::~EtherStatMulticastPkt()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatMulticastPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatMulticastPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatMulticastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether-stat-multicast-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatMulticastPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatMulticastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatMulticastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatMulticastPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatMulticastPkt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatMulticastPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatUndersizedPkt::EtherStatUndersizedPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ether-stat-undersized-pkt"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatUndersizedPkt::~EtherStatUndersizedPkt()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatUndersizedPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatUndersizedPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatUndersizedPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether-stat-undersized-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatUndersizedPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatUndersizedPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatUndersizedPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatUndersizedPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatUndersizedPkt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatUndersizedPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::FcsErrorsStat::FcsErrorsStat()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "fcs-errors-stat"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::FcsErrorsStat::~FcsErrorsStat()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::FcsErrorsStat::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::FcsErrorsStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::FcsErrorsStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fcs-errors-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::FcsErrorsStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::FcsErrorsStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::FcsErrorsStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::FcsErrorsStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::FcsErrorsStat::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::FcsErrorsStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::IfInErrors::IfInErrors()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "if-in-errors"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::IfInErrors::~IfInErrors()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::IfInErrors::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::IfInErrors::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::IfInErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-in-errors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::IfInErrors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::IfInErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::IfInErrors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::IfInErrors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::IfInErrors::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::IfInErrors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::IfInOctets::IfInOctets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "if-in-octets"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::IfInOctets::~IfInOctets()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::IfInOctets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::IfInOctets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::IfInOctets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-in-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::IfInOctets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::IfInOctets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::IfInOctets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::IfInOctets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::IfInOctets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::IfInOctets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::In8021QFrames::In8021QFrames()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in8021q-frames"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::In8021QFrames::~In8021QFrames()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::In8021QFrames::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::In8021QFrames::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::In8021QFrames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in8021q-frames";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::In8021QFrames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::In8021QFrames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::In8021QFrames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::In8021QFrames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::In8021QFrames::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::In8021QFrames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InBcastPkt::InBcastPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-bcast-pkt"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InBcastPkt::~InBcastPkt()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InBcastPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InBcastPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InBcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-bcast-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InBcastPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InBcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InBcastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InBcastPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InBcastPkt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InBcastPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropAbort::InDropAbort()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-drop-abort"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropAbort::~InDropAbort()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropAbort::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropAbort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropAbort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-drop-abort";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropAbort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropAbort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropAbort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropAbort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropAbort::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropAbort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidDmac::InDropInvalidDmac()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-drop-invalid-dmac"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidDmac::~InDropInvalidDmac()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidDmac::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidDmac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidDmac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-drop-invalid-dmac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidDmac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidDmac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidDmac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidDmac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidDmac::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidDmac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidEncap::InDropInvalidEncap()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-drop-invalid-encap"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidEncap::~InDropInvalidEncap()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidEncap::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidEncap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidEncap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-drop-invalid-encap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidEncap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidEncap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidEncap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidEncap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidEncap::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidEncap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidVlan::InDropInvalidVlan()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-drop-invalid-vlan"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidVlan::~InDropInvalidVlan()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidVlan::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidVlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidVlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-drop-invalid-vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidVlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidVlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidVlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidVlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidVlan::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidVlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropOther::InDropOther()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-drop-other"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropOther::~InDropOther()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropOther::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropOther::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropOther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-drop-other";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropOther::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropOther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropOther::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropOther::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropOther::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropOther::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropOverrun::InDropOverrun()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-drop-overrun"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropOverrun::~InDropOverrun()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropOverrun::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropOverrun::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropOverrun::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-drop-overrun";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropOverrun::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropOverrun::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropOverrun::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropOverrun::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropOverrun::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropOverrun::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorCollisions::InErrorCollisions()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-error-collisions"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorCollisions::~InErrorCollisions()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorCollisions::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorCollisions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorCollisions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-collisions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorCollisions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorCollisions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorCollisions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorCollisions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorCollisions::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorCollisions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorFragments::InErrorFragments()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-error-fragments"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorFragments::~InErrorFragments()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorFragments::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorFragments::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorFragments::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-fragments";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorFragments::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorFragments::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorFragments::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorFragments::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorFragments::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorFragments::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorGiant::InErrorGiant()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-error-giant"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorGiant::~InErrorGiant()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorGiant::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorGiant::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorGiant::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-giant";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorGiant::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorGiant::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorGiant::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorGiant::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorGiant::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorGiant::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorJabbers::InErrorJabbers()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-error-jabbers"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorJabbers::~InErrorJabbers()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorJabbers::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorJabbers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorJabbers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-jabbers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorJabbers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorJabbers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorJabbers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorJabbers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorJabbers::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorJabbers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorOther::InErrorOther()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-error-other"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorOther::~InErrorOther()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorOther::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorOther::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorOther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-other";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorOther::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorOther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorOther::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorOther::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorOther::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorOther::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorRunt::InErrorRunt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-error-runt"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorRunt::~InErrorRunt()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorRunt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorRunt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorRunt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-runt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorRunt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorRunt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorRunt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorRunt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorRunt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorRunt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorSymbol::InErrorSymbol()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-error-symbol"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorSymbol::~InErrorSymbol()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorSymbol::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorSymbol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorSymbol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-symbol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorSymbol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorSymbol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorSymbol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorSymbol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorSymbol::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorSymbol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InGoodBytes::InGoodBytes()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-good-bytes"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InGoodBytes::~InGoodBytes()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InGoodBytes::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InGoodBytes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InGoodBytes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-good-bytes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InGoodBytes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InGoodBytes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InGoodBytes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InGoodBytes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InGoodBytes::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InGoodBytes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InGoodPkts::InGoodPkts()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-good-pkts"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InGoodPkts::~InGoodPkts()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InGoodPkts::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InGoodPkts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InGoodPkts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-good-pkts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InGoodPkts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InGoodPkts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InGoodPkts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InGoodPkts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InGoodPkts::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InGoodPkts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMcastPkt::InMcastPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-mcast-pkt"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMcastPkt::~InMcastPkt()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMcastPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMcastPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-mcast-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMcastPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMcastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMcastPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMcastPkt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMcastPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibGiant::InMibGiant()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-mib-giant"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibGiant::~InMibGiant()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibGiant::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibGiant::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibGiant::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-mib-giant";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibGiant::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibGiant::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibGiant::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibGiant::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibGiant::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibGiant::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibJabber::InMibJabber()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-mib-jabber"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibJabber::~InMibJabber()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibJabber::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibJabber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibJabber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-mib-jabber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibJabber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibJabber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibJabber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibJabber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibJabber::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibJabber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibcrc::InMibcrc()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-mibcrc"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibcrc::~InMibcrc()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibcrc::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibcrc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibcrc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-mibcrc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibcrc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibcrc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibcrc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibcrc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibcrc::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibcrc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPauseFrame::InPauseFrame()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pause-frame"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPauseFrame::~InPauseFrame()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPauseFrame::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPauseFrame::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPauseFrame::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pause-frame";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPauseFrame::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPauseFrame::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPauseFrame::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPauseFrame::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPauseFrame::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPauseFrame::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkt64Octet::InPkt64Octet()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkt64-octet"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkt64Octet::~InPkt64Octet()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkt64Octet::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkt64Octet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkt64Octet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkt64-octet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkt64Octet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkt64Octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkt64Octet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkt64Octet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkt64Octet::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkt64Octet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts1024To1518Octets::InPkts1024To1518Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts1024-to1518-octets"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts1024To1518Octets::~InPkts1024To1518Octets()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts1024To1518Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts1024To1518Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts1024To1518Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts1024-to1518-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts1024To1518Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts1024To1518Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts1024To1518Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts1024To1518Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts1024To1518Octets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts1024To1518Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts128To255Octets::InPkts128To255Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts128-to255-octets"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts128To255Octets::~InPkts128To255Octets()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts128To255Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts128To255Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts128To255Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts128-to255-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts128To255Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts128To255Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts128To255Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts128To255Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts128To255Octets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts128To255Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts1519MaxOctets::InPkts1519MaxOctets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts1519-max-octets"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts1519MaxOctets::~InPkts1519MaxOctets()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts1519MaxOctets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts1519MaxOctets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts1519MaxOctets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts1519-max-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts1519MaxOctets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts1519MaxOctets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts1519MaxOctets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts1519MaxOctets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts1519MaxOctets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts1519MaxOctets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts256To511Octets::InPkts256To511Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts256-to511-octets"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts256To511Octets::~InPkts256To511Octets()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts256To511Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts256To511Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts256To511Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts256-to511-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts256To511Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts256To511Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts256To511Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts256To511Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts256To511Octets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts256To511Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts512To1023Octets::InPkts512To1023Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts512-to1023-octets"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts512To1023Octets::~InPkts512To1023Octets()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts512To1023Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts512To1023Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts512To1023Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts512-to1023-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts512To1023Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts512To1023Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts512To1023Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts512To1023Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts512To1023Octets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts512To1023Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts65To127Octets::InPkts65To127Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts65-to127-octets"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts65To127Octets::~InPkts65To127Octets()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts65To127Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts65To127Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts65To127Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts65-to127-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts65To127Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts65To127Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts65To127Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts65To127Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts65To127Octets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts65To127Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InUcastPkt::InUcastPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-ucast-pkt"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InUcastPkt::~InUcastPkt()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InUcastPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InUcastPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InUcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-ucast-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InUcastPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InUcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InUcastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InUcastPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InUcastPkt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InUcastPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::JabberStat::JabberStat()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "jabber-stat"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::JabberStat::~JabberStat()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::JabberStat::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::JabberStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::JabberStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "jabber-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::JabberStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::JabberStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::JabberStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::JabberStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::JabberStat::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::JabberStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::LongFramesStat::LongFramesStat()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "long-frames-stat"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::LongFramesStat::~LongFramesStat()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::LongFramesStat::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::LongFramesStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::LongFramesStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "long-frames-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::LongFramesStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::LongFramesStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::LongFramesStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::LongFramesStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::LongFramesStat::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::LongFramesStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OctetStat::OctetStat()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "octet-stat"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OctetStat::~OctetStat()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OctetStat::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OctetStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OctetStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "octet-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OctetStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OctetStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OctetStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OctetStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OctetStat::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OctetStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Out8021QFrames::Out8021QFrames()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out8021q-frames"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Out8021QFrames::~Out8021QFrames()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Out8021QFrames::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Out8021QFrames::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Out8021QFrames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out8021q-frames";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Out8021QFrames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Out8021QFrames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Out8021QFrames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Out8021QFrames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Out8021QFrames::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Out8021QFrames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutBcastPkt::OutBcastPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-bcast-pkt"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutBcastPkt::~OutBcastPkt()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutBcastPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutBcastPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutBcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-bcast-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutBcastPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutBcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutBcastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutBcastPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutBcastPkt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutBcastPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropAbort::OutDropAbort()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-drop-abort"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropAbort::~OutDropAbort()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropAbort::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropAbort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropAbort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-drop-abort";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropAbort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropAbort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropAbort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropAbort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropAbort::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropAbort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropOther::OutDropOther()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-drop-other"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropOther::~OutDropOther()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropOther::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropOther::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropOther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-drop-other";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropOther::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropOther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropOther::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropOther::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropOther::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropOther::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropUnderrun::OutDropUnderrun()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-drop-underrun"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropUnderrun::~OutDropUnderrun()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropUnderrun::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropUnderrun::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropUnderrun::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-drop-underrun";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropUnderrun::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropUnderrun::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropUnderrun::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropUnderrun::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropUnderrun::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropUnderrun::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutErrorOther::OutErrorOther()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-error-other"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutErrorOther::~OutErrorOther()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutErrorOther::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutErrorOther::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutErrorOther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-error-other";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutErrorOther::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutErrorOther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutErrorOther::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutErrorOther::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutErrorOther::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutErrorOther::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutGoodBytes::OutGoodBytes()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-good-bytes"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutGoodBytes::~OutGoodBytes()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutGoodBytes::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutGoodBytes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutGoodBytes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-good-bytes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutGoodBytes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutGoodBytes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutGoodBytes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutGoodBytes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutGoodBytes::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutGoodBytes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutGoodPkts::OutGoodPkts()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-good-pkts"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutGoodPkts::~OutGoodPkts()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutGoodPkts::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutGoodPkts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutGoodPkts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-good-pkts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutGoodPkts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutGoodPkts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutGoodPkts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutGoodPkts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutGoodPkts::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutGoodPkts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutMcastPkt::OutMcastPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-mcast-pkt"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutMcastPkt::~OutMcastPkt()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutMcastPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutMcastPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutMcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-mcast-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutMcastPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutMcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutMcastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutMcastPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutMcastPkt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutMcastPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutOctets::OutOctets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-octets"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutOctets::~OutOctets()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutOctets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutOctets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutOctets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutOctets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutOctets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutOctets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutOctets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutOctets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutOctets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPauseFrames::OutPauseFrames()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pause-frames"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPauseFrames::~OutPauseFrames()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPauseFrames::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPauseFrames::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPauseFrames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pause-frames";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPauseFrames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPauseFrames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPauseFrames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPauseFrames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPauseFrames::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPauseFrames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts10241518Octets::OutPkts10241518Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts10241518-octets"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts10241518Octets::~OutPkts10241518Octets()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts10241518Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts10241518Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts10241518Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts10241518-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts10241518Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts10241518Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts10241518Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts10241518Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts10241518Octets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts10241518Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts128255Octets::OutPkts128255Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts128255-octets"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts128255Octets::~OutPkts128255Octets()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts128255Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts128255Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts128255Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts128255-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts128255Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts128255Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts128255Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts128255Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts128255Octets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts128255Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts1519MaxOctets::OutPkts1519MaxOctets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts1519-max-octets"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts1519MaxOctets::~OutPkts1519MaxOctets()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts1519MaxOctets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts1519MaxOctets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts1519MaxOctets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts1519-max-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts1519MaxOctets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts1519MaxOctets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts1519MaxOctets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts1519MaxOctets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts1519MaxOctets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts1519MaxOctets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts256511Octets::OutPkts256511Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts256511-octets"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts256511Octets::~OutPkts256511Octets()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts256511Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts256511Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts256511Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts256511-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts256511Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts256511Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts256511Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts256511Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts256511Octets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts256511Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts5121023Octets::OutPkts5121023Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts5121023-octets"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts5121023Octets::~OutPkts5121023Octets()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts5121023Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts5121023Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts5121023Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts5121023-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts5121023Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts5121023Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts5121023Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts5121023Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts5121023Octets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts5121023Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts65127Octets::OutPkts65127Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts65127-octets"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts65127Octets::~OutPkts65127Octets()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts65127Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts65127Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts65127Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts65127-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts65127Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts65127Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts65127Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts65127Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts65127Octets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts65127Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutUcastPkt::OutUcastPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-ucast-pkt"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutUcastPkt::~OutUcastPkt()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutUcastPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutUcastPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutUcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-ucast-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutUcastPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutUcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutUcastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutUcastPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutUcastPkt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutUcastPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Outpkt64Octet::Outpkt64Octet()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "outpkt64octet"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Outpkt64Octet::~Outpkt64Octet()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Outpkt64Octet::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Outpkt64Octet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Outpkt64Octet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outpkt64octet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Outpkt64Octet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Outpkt64Octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Outpkt64Octet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Outpkt64Octet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Outpkt64Octet::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Outpkt64Octet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OversizePktStat::OversizePktStat()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "oversize-pkt-stat"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OversizePktStat::~OversizePktStat()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OversizePktStat::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OversizePktStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OversizePktStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oversize-pkt-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OversizePktStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OversizePktStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OversizePktStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OversizePktStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OversizePktStat::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OversizePktStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::RxPkt::RxPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "rx-pkt"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::RxPkt::~RxPkt()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::RxPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::RxPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::RxPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::RxPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::RxPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::RxPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::RxPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::RxPkt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::RxPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::RxUtil::RxUtil()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "rx-util"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::RxUtil::~RxUtil()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::RxUtil::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::RxUtil::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::RxUtil::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-util";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::RxUtil::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::RxUtil::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::RxUtil::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::RxUtil::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::RxUtil::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::RxUtil::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::StatPkt::StatPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "stat-pkt"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::StatPkt::~StatPkt()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::StatPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::StatPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::StatPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stat-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::StatPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::StatPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::StatPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::StatPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::StatPkt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::StatPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxBadFcs::TxBadFcs()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "tx-bad-fcs"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxBadFcs::~TxBadFcs()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxBadFcs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxBadFcs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxBadFcs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-bad-fcs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxBadFcs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxBadFcs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxBadFcs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxBadFcs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxBadFcs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxBadFcs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxFragments::TxFragments()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "tx-fragments"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxFragments::~TxFragments()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxFragments::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxFragments::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxFragments::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-fragments";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxFragments::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxFragments::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxFragments::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxFragments::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxFragments::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxFragments::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxJabber::TxJabber()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "tx-jabber"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxJabber::~TxJabber()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxJabber::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxJabber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxJabber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-jabber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxJabber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxJabber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxJabber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxJabber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxJabber::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxJabber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxOversizedPkt::TxOversizedPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "tx-oversized-pkt"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxOversizedPkt::~TxOversizedPkt()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxOversizedPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxOversizedPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxOversizedPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-oversized-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxOversizedPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxOversizedPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxOversizedPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxOversizedPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxOversizedPkt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxOversizedPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxPkt::TxPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "tx-pkt"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxPkt::~TxPkt()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxPkt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxUndersizedPkt::TxUndersizedPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "tx-undersized-pkt"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxUndersizedPkt::~TxUndersizedPkt()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxUndersizedPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxUndersizedPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxUndersizedPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-undersized-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxUndersizedPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxUndersizedPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxUndersizedPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxUndersizedPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxUndersizedPkt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxUndersizedPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxUtil::TxUtil()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"},
    valid{YType::boolean, "valid"}
{

    yang_name = "tx-util"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxUtil::~TxUtil()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxUtil::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxUtil::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxUtil::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-util";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxUtil::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxUtil::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxUtil::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxUtil::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxUtil::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxUtil::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcHistory()
    :
    ho_vc_port_histories(std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories>())
{
    ho_vc_port_histories->parent = this;

    yang_name = "ho-vc-history"; yang_parent_name = "periodic"; is_top_level_class = false; has_list_ancestor = false;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::~HoVcHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::has_data() const
{
    return (ho_vc_port_histories !=  nullptr && ho_vc_port_histories->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::has_operation() const
{
    return is_set(yfilter)
	|| (ho_vc_port_histories !=  nullptr && ho_vc_port_histories->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::HoVcHistory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management-history/global/periodic/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceManagementHistory::Global::Periodic::HoVcHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::HoVcHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::HoVcHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ho-vc-port-histories")
    {
        if(ho_vc_port_histories == nullptr)
        {
            ho_vc_port_histories = std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories>();
        }
        return ho_vc_port_histories;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::HoVcHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ho_vc_port_histories != nullptr)
    {
        children["ho-vc-port-histories"] = ho_vc_port_histories;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ho-vc-port-histories")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistories()
{

    yang_name = "ho-vc-port-histories"; yang_parent_name = "ho-vc-history"; is_top_level_class = false; has_list_ancestor = false;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::~HoVcPortHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::has_data() const
{
    for (std::size_t index=0; index<ho_vc_port_history.size(); index++)
    {
        if(ho_vc_port_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::has_operation() const
{
    for (std::size_t index=0; index<ho_vc_port_history.size(); index++)
    {
        if(ho_vc_port_history[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management-history/global/periodic/ho-vc-history/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-port-histories";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ho-vc-port-history")
    {
        for(auto const & c : ho_vc_port_history)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory>();
        c->parent = this;
        ho_vc_port_history.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ho_vc_port_history)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ho-vc-port-history")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcPortHistory()
    :
    name{YType::str, "name"}
    	,
    ho_vc_hour24_history(std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History>())
	,ho_vc_minute15_history(std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History>())
{
    ho_vc_hour24_history->parent = this;
    ho_vc_minute15_history->parent = this;

    yang_name = "ho-vc-port-history"; yang_parent_name = "ho-vc-port-histories"; is_top_level_class = false; has_list_ancestor = false;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::~HoVcPortHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::has_data() const
{
    return name.is_set
	|| (ho_vc_hour24_history !=  nullptr && ho_vc_hour24_history->has_data())
	|| (ho_vc_minute15_history !=  nullptr && ho_vc_minute15_history->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (ho_vc_hour24_history !=  nullptr && ho_vc_hour24_history->has_operation())
	|| (ho_vc_minute15_history !=  nullptr && ho_vc_minute15_history->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management-history/global/periodic/ho-vc-history/ho-vc-port-histories/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-port-history" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ho-vc-hour24-history")
    {
        if(ho_vc_hour24_history == nullptr)
        {
            ho_vc_hour24_history = std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History>();
        }
        return ho_vc_hour24_history;
    }

    if(child_yang_name == "ho-vc-minute15-history")
    {
        if(ho_vc_minute15_history == nullptr)
        {
            ho_vc_minute15_history = std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History>();
        }
        return ho_vc_minute15_history;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ho_vc_hour24_history != nullptr)
    {
        children["ho-vc-hour24-history"] = ho_vc_hour24_history;
    }

    if(ho_vc_minute15_history != nullptr)
    {
        children["ho-vc-minute15-history"] = ho_vc_minute15_history;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ho-vc-hour24-history" || name == "ho-vc-minute15-history" || name == "name")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24History()
    :
    ho_vc_hour24_path_histories(std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories>())
{
    ho_vc_hour24_path_histories->parent = this;

    yang_name = "ho-vc-hour24-history"; yang_parent_name = "ho-vc-port-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::~HoVcHour24History()
{
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::has_data() const
{
    return (ho_vc_hour24_path_histories !=  nullptr && ho_vc_hour24_path_histories->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::has_operation() const
{
    return is_set(yfilter)
	|| (ho_vc_hour24_path_histories !=  nullptr && ho_vc_hour24_path_histories->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-hour24-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ho-vc-hour24-path-histories")
    {
        if(ho_vc_hour24_path_histories == nullptr)
        {
            ho_vc_hour24_path_histories = std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories>();
        }
        return ho_vc_hour24_path_histories;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ho_vc_hour24_path_histories != nullptr)
    {
        children["ho-vc-hour24-path-histories"] = ho_vc_hour24_path_histories;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ho-vc-hour24-path-histories")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistories()
{

    yang_name = "ho-vc-hour24-path-histories"; yang_parent_name = "ho-vc-hour24-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::~HoVcHour24PathHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::has_data() const
{
    for (std::size_t index=0; index<ho_vc_hour24_path_history.size(); index++)
    {
        if(ho_vc_hour24_path_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::has_operation() const
{
    for (std::size_t index=0; index<ho_vc_hour24_path_history.size(); index++)
    {
        if(ho_vc_hour24_path_history[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-hour24-path-histories";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ho-vc-hour24-path-history")
    {
        for(auto const & c : ho_vc_hour24_path_history)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory>();
        c->parent = this;
        ho_vc_hour24_path_history.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ho_vc_hour24_path_history)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ho-vc-hour24-path-history")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathHistory()
    :
    number{YType::int32, "number"}
    	,
    ho_vc_hour24_path_time_line_instances(std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances>())
{
    ho_vc_hour24_path_time_line_instances->parent = this;

    yang_name = "ho-vc-hour24-path-history"; yang_parent_name = "ho-vc-hour24-path-histories"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::~HoVcHour24PathHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::has_data() const
{
    return number.is_set
	|| (ho_vc_hour24_path_time_line_instances !=  nullptr && ho_vc_hour24_path_time_line_instances->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (ho_vc_hour24_path_time_line_instances !=  nullptr && ho_vc_hour24_path_time_line_instances->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-hour24-path-history" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ho-vc-hour24-path-time-line-instances")
    {
        if(ho_vc_hour24_path_time_line_instances == nullptr)
        {
            ho_vc_hour24_path_time_line_instances = std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances>();
        }
        return ho_vc_hour24_path_time_line_instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ho_vc_hour24_path_time_line_instances != nullptr)
    {
        children["ho-vc-hour24-path-time-line-instances"] = ho_vc_hour24_path_time_line_instances;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ho-vc-hour24-path-time-line-instances" || name == "number")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstances()
{

    yang_name = "ho-vc-hour24-path-time-line-instances"; yang_parent_name = "ho-vc-hour24-path-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::~HoVcHour24PathTimeLineInstances()
{
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::has_data() const
{
    for (std::size_t index=0; index<ho_vc_hour24_path_time_line_instance.size(); index++)
    {
        if(ho_vc_hour24_path_time_line_instance[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::has_operation() const
{
    for (std::size_t index=0; index<ho_vc_hour24_path_time_line_instance.size(); index++)
    {
        if(ho_vc_hour24_path_time_line_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-hour24-path-time-line-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ho-vc-hour24-path-time-line-instance")
    {
        for(auto const & c : ho_vc_hour24_path_time_line_instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance>();
        c->parent = this;
        ho_vc_hour24_path_time_line_instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ho_vc_hour24_path_time_line_instance)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ho-vc-hour24-path-time-line-instance")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::HoVcHour24PathTimeLineInstance()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    last_clear_time{YType::str, "last-clear-time"},
    timestamp{YType::str, "timestamp"},
    valid{YType::boolean, "valid"}
    	,
    fe_path(std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::FePath>())
	,path(std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path>())
{
    fe_path->parent = this;
    path->parent = this;

    yang_name = "ho-vc-hour24-path-time-line-instance"; yang_parent_name = "ho-vc-hour24-path-time-line-instances"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::~HoVcHour24PathTimeLineInstance()
{
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::has_data() const
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

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::has_operation() const
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

std::string PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-hour24-path-time-line-instance" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fe-path")
    {
        if(fe_path == nullptr)
        {
            fe_path = std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::FePath>();
        }
        return fe_path;
    }

    if(child_yang_name == "path")
    {
        if(path == nullptr)
        {
            path = std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path>();
        }
        return path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::get_children() const
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

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fe-path" || name == "path" || name == "number" || name == "index" || name == "last-clear15-min-time" || name == "last-clear24-hr-time" || name == "last-clear-time" || name == "timestamp" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::FePath::FePath()
    :
    far_end_path_c_vs{YType::uint32, "far-end-path-c-vs"},
    far_end_path_e_ss{YType::uint32, "far-end-path-e-ss"},
    far_end_path_se_ss{YType::uint32, "far-end-path-se-ss"},
    far_end_path_ua_ss{YType::uint32, "far-end-path-ua-ss"}
{

    yang_name = "fe-path"; yang_parent_name = "ho-vc-hour24-path-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::FePath::~FePath()
{
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::FePath::has_data() const
{
    return far_end_path_c_vs.is_set
	|| far_end_path_e_ss.is_set
	|| far_end_path_se_ss.is_set
	|| far_end_path_ua_ss.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::FePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(far_end_path_c_vs.yfilter)
	|| ydk::is_set(far_end_path_e_ss.yfilter)
	|| ydk::is_set(far_end_path_se_ss.yfilter)
	|| ydk::is_set(far_end_path_ua_ss.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::FePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fe-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::FePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (far_end_path_c_vs.is_set || is_set(far_end_path_c_vs.yfilter)) leaf_name_data.push_back(far_end_path_c_vs.get_name_leafdata());
    if (far_end_path_e_ss.is_set || is_set(far_end_path_e_ss.yfilter)) leaf_name_data.push_back(far_end_path_e_ss.get_name_leafdata());
    if (far_end_path_se_ss.is_set || is_set(far_end_path_se_ss.yfilter)) leaf_name_data.push_back(far_end_path_se_ss.get_name_leafdata());
    if (far_end_path_ua_ss.is_set || is_set(far_end_path_ua_ss.yfilter)) leaf_name_data.push_back(far_end_path_ua_ss.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::FePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::FePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::FePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::FePath::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::FePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "far-end-path-c-vs" || name == "far-end-path-e-ss" || name == "far-end-path-se-ss" || name == "far-end-path-ua-ss")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::Path()
    :
    path_status{YType::int32, "path-status"}
    	,
    path_bb_es(std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathBbEs>())
	,path_bbe_rs(std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathBbeRs>())
	,path_e_bs(std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathEBs>())
	,path_e_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathESs>())
	,path_es_rs(std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathEsRs>())
	,path_se_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathSeSs>())
	,path_ses_rs(std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathSesRs>())
	,path_ua_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathUaSs>())
{
    path_bb_es->parent = this;
    path_bbe_rs->parent = this;
    path_e_bs->parent = this;
    path_e_ss->parent = this;
    path_es_rs->parent = this;
    path_se_ss->parent = this;
    path_ses_rs->parent = this;
    path_ua_ss->parent = this;

    yang_name = "path"; yang_parent_name = "ho-vc-hour24-path-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::~Path()
{
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::has_data() const
{
    return path_status.is_set
	|| (path_bb_es !=  nullptr && path_bb_es->has_data())
	|| (path_bbe_rs !=  nullptr && path_bbe_rs->has_data())
	|| (path_e_bs !=  nullptr && path_e_bs->has_data())
	|| (path_e_ss !=  nullptr && path_e_ss->has_data())
	|| (path_es_rs !=  nullptr && path_es_rs->has_data())
	|| (path_se_ss !=  nullptr && path_se_ss->has_data())
	|| (path_ses_rs !=  nullptr && path_ses_rs->has_data())
	|| (path_ua_ss !=  nullptr && path_ua_ss->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_status.yfilter)
	|| (path_bb_es !=  nullptr && path_bb_es->has_operation())
	|| (path_bbe_rs !=  nullptr && path_bbe_rs->has_operation())
	|| (path_e_bs !=  nullptr && path_e_bs->has_operation())
	|| (path_e_ss !=  nullptr && path_e_ss->has_operation())
	|| (path_es_rs !=  nullptr && path_es_rs->has_operation())
	|| (path_se_ss !=  nullptr && path_se_ss->has_operation())
	|| (path_ses_rs !=  nullptr && path_ses_rs->has_operation())
	|| (path_ua_ss !=  nullptr && path_ua_ss->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_status.is_set || is_set(path_status.yfilter)) leaf_name_data.push_back(path_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-bb-es")
    {
        if(path_bb_es == nullptr)
        {
            path_bb_es = std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathBbEs>();
        }
        return path_bb_es;
    }

    if(child_yang_name == "path-bbe-rs")
    {
        if(path_bbe_rs == nullptr)
        {
            path_bbe_rs = std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathBbeRs>();
        }
        return path_bbe_rs;
    }

    if(child_yang_name == "path-e-bs")
    {
        if(path_e_bs == nullptr)
        {
            path_e_bs = std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathEBs>();
        }
        return path_e_bs;
    }

    if(child_yang_name == "path-e-ss")
    {
        if(path_e_ss == nullptr)
        {
            path_e_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathESs>();
        }
        return path_e_ss;
    }

    if(child_yang_name == "path-es-rs")
    {
        if(path_es_rs == nullptr)
        {
            path_es_rs = std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathEsRs>();
        }
        return path_es_rs;
    }

    if(child_yang_name == "path-se-ss")
    {
        if(path_se_ss == nullptr)
        {
            path_se_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathSeSs>();
        }
        return path_se_ss;
    }

    if(child_yang_name == "path-ses-rs")
    {
        if(path_ses_rs == nullptr)
        {
            path_ses_rs = std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathSesRs>();
        }
        return path_ses_rs;
    }

    if(child_yang_name == "path-ua-ss")
    {
        if(path_ua_ss == nullptr)
        {
            path_ua_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathUaSs>();
        }
        return path_ua_ss;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(path_bb_es != nullptr)
    {
        children["path-bb-es"] = path_bb_es;
    }

    if(path_bbe_rs != nullptr)
    {
        children["path-bbe-rs"] = path_bbe_rs;
    }

    if(path_e_bs != nullptr)
    {
        children["path-e-bs"] = path_e_bs;
    }

    if(path_e_ss != nullptr)
    {
        children["path-e-ss"] = path_e_ss;
    }

    if(path_es_rs != nullptr)
    {
        children["path-es-rs"] = path_es_rs;
    }

    if(path_se_ss != nullptr)
    {
        children["path-se-ss"] = path_se_ss;
    }

    if(path_ses_rs != nullptr)
    {
        children["path-ses-rs"] = path_ses_rs;
    }

    if(path_ua_ss != nullptr)
    {
        children["path-ua-ss"] = path_ua_ss;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-status")
    {
        path_status = value;
        path_status.value_namespace = name_space;
        path_status.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-status")
    {
        path_status.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-bb-es" || name == "path-bbe-rs" || name == "path-e-bs" || name == "path-e-ss" || name == "path-es-rs" || name == "path-se-ss" || name == "path-ses-rs" || name == "path-ua-ss" || name == "path-status")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathBbEs::PathBbEs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "path-bb-es"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathBbEs::~PathBbEs()
{
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathBbEs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathBbEs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathBbEs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-bb-es";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathBbEs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathBbEs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathBbEs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathBbEs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathBbEs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathBbEs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathBbeRs::PathBbeRs()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{

    yang_name = "path-bbe-rs"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathBbeRs::~PathBbeRs()
{
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathBbeRs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathBbeRs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathBbeRs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-bbe-rs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathBbeRs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathBbeRs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathBbeRs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathBbeRs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathBbeRs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathBbeRs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathEBs::PathEBs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "path-e-bs"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathEBs::~PathEBs()
{
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathEBs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathEBs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathEBs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-e-bs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathEBs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathEBs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathEBs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathEBs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathEBs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathEBs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathESs::PathESs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "path-e-ss"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathESs::~PathESs()
{
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathESs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathESs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-e-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathESs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathESs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathESs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathESs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathESs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathEsRs::PathEsRs()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{

    yang_name = "path-es-rs"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathEsRs::~PathEsRs()
{
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathEsRs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathEsRs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathEsRs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-es-rs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathEsRs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathEsRs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathEsRs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathEsRs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathEsRs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathEsRs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathSeSs::PathSeSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "path-se-ss"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathSeSs::~PathSeSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathSeSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathSeSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-se-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathSeSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathSeSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathSeSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathSeSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathSeSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathSesRs::PathSesRs()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{

    yang_name = "path-ses-rs"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathSesRs::~PathSesRs()
{
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathSesRs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathSesRs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathSesRs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-ses-rs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathSesRs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathSesRs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathSesRs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathSesRs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathSesRs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathSesRs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathUaSs::PathUaSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "path-ua-ss"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathUaSs::~PathUaSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathUaSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathUaSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathUaSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-ua-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathUaSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathUaSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathUaSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathUaSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathUaSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcHour24History::HoVcHour24PathHistories::HoVcHour24PathHistory::HoVcHour24PathTimeLineInstances::HoVcHour24PathTimeLineInstance::Path::PathUaSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15History()
    :
    ho_vc_minute15_path_histories(std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories>())
{
    ho_vc_minute15_path_histories->parent = this;

    yang_name = "ho-vc-minute15-history"; yang_parent_name = "ho-vc-port-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::~HoVcMinute15History()
{
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::has_data() const
{
    return (ho_vc_minute15_path_histories !=  nullptr && ho_vc_minute15_path_histories->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::has_operation() const
{
    return is_set(yfilter)
	|| (ho_vc_minute15_path_histories !=  nullptr && ho_vc_minute15_path_histories->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-minute15-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ho-vc-minute15-path-histories")
    {
        if(ho_vc_minute15_path_histories == nullptr)
        {
            ho_vc_minute15_path_histories = std::make_shared<PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories>();
        }
        return ho_vc_minute15_path_histories;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ho_vc_minute15_path_histories != nullptr)
    {
        children["ho-vc-minute15-path-histories"] = ho_vc_minute15_path_histories;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ho-vc-minute15-path-histories")
        return true;
    return false;
}


}
}

