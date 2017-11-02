
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

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropInvalidEncap::InDropInvalidEncap()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-drop-invalid-encap"; yang_parent_name = "ethernet-hour24-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropInvalidEncap::~InDropInvalidEncap()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropInvalidEncap::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropInvalidEncap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropInvalidEncap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-drop-invalid-encap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropInvalidEncap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropInvalidEncap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropInvalidEncap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropInvalidEncap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropInvalidEncap::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropInvalidEncap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropOther::InDropOther()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-drop-other"; yang_parent_name = "ethernet-hour24-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropOther::~InDropOther()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropOther::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropOther::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropOther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-drop-other";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropOther::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropOther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropOther::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropOther::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropOther::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropOther::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMibGiant::InMibGiant()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-mib-giant"; yang_parent_name = "ethernet-hour24-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMibGiant::~InMibGiant()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMibGiant::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMibGiant::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMibGiant::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-mib-giant";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMibGiant::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMibGiant::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMibGiant::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMibGiant::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMibGiant::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMibGiant::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMibJabber::InMibJabber()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-mib-jabber"; yang_parent_name = "ethernet-hour24-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMibJabber::~InMibJabber()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMibJabber::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMibJabber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMibJabber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-mib-jabber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMibJabber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMibJabber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMibJabber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMibJabber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMibJabber::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMibJabber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMibcrc::InMibcrc()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-mibcrc"; yang_parent_name = "ethernet-hour24-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMibcrc::~InMibcrc()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMibcrc::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMibcrc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMibcrc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-mibcrc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMibcrc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMibcrc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMibcrc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMibcrc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMibcrc::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMibcrc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorCollisions::InErrorCollisions()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-error-collisions"; yang_parent_name = "ethernet-hour24-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorCollisions::~InErrorCollisions()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorCollisions::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorCollisions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorCollisions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-collisions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorCollisions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorCollisions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorCollisions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorCollisions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorCollisions::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorCollisions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorSymbol::InErrorSymbol()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-error-symbol"; yang_parent_name = "ethernet-hour24-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorSymbol::~InErrorSymbol()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorSymbol::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorSymbol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorSymbol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-symbol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorSymbol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorSymbol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorSymbol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorSymbol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorSymbol::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorSymbol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutGoodBytes::OutGoodBytes()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-good-bytes"; yang_parent_name = "ethernet-hour24-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutGoodBytes::~OutGoodBytes()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutGoodBytes::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutGoodBytes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutGoodBytes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-good-bytes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutGoodBytes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutGoodBytes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutGoodBytes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutGoodBytes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutGoodBytes::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutGoodBytes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Out8021QFrames::Out8021QFrames()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out8021q-frames"; yang_parent_name = "ethernet-hour24-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Out8021QFrames::~Out8021QFrames()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Out8021QFrames::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Out8021QFrames::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Out8021QFrames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out8021q-frames";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Out8021QFrames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Out8021QFrames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Out8021QFrames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Out8021QFrames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Out8021QFrames::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Out8021QFrames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPauseFrames::OutPauseFrames()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pause-frames"; yang_parent_name = "ethernet-hour24-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPauseFrames::~OutPauseFrames()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPauseFrames::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPauseFrames::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPauseFrames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pause-frames";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPauseFrames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPauseFrames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPauseFrames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPauseFrames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPauseFrames::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPauseFrames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts1519MaxOctets::OutPkts1519MaxOctets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts1519-max-octets"; yang_parent_name = "ethernet-hour24-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts1519MaxOctets::~OutPkts1519MaxOctets()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts1519MaxOctets::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts1519MaxOctets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts1519MaxOctets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts1519-max-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts1519MaxOctets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts1519MaxOctets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts1519MaxOctets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts1519MaxOctets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts1519MaxOctets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts1519MaxOctets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutGoodPkts::OutGoodPkts()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-good-pkts"; yang_parent_name = "ethernet-hour24-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutGoodPkts::~OutGoodPkts()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutGoodPkts::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutGoodPkts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutGoodPkts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-good-pkts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutGoodPkts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutGoodPkts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutGoodPkts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutGoodPkts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutGoodPkts::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutGoodPkts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutDropUnderrun::OutDropUnderrun()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-drop-underrun"; yang_parent_name = "ethernet-hour24-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutDropUnderrun::~OutDropUnderrun()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutDropUnderrun::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutDropUnderrun::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutDropUnderrun::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-drop-underrun";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutDropUnderrun::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutDropUnderrun::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutDropUnderrun::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutDropUnderrun::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutDropUnderrun::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutDropUnderrun::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutDropAbort::OutDropAbort()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-drop-abort"; yang_parent_name = "ethernet-hour24-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutDropAbort::~OutDropAbort()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutDropAbort::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutDropAbort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutDropAbort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-drop-abort";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutDropAbort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutDropAbort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutDropAbort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutDropAbort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutDropAbort::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutDropAbort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutDropOther::OutDropOther()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-drop-other"; yang_parent_name = "ethernet-hour24-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutDropOther::~OutDropOther()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutDropOther::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutDropOther::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutDropOther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-drop-other";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutDropOther::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutDropOther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutDropOther::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutDropOther::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutDropOther::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutDropOther::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutErrorOther::OutErrorOther()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-error-other"; yang_parent_name = "ethernet-hour24-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutErrorOther::~OutErrorOther()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutErrorOther::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutErrorOther::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutErrorOther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-error-other";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutErrorOther::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutErrorOther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutErrorOther::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutErrorOther::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutErrorOther::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutErrorOther::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorGiant::InErrorGiant()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-error-giant"; yang_parent_name = "ethernet-hour24-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorGiant::~InErrorGiant()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorGiant::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorGiant::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorGiant::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-giant";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorGiant::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorGiant::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorGiant::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorGiant::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorGiant::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorGiant::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorRunt::InErrorRunt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-error-runt"; yang_parent_name = "ethernet-hour24-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorRunt::~InErrorRunt()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorRunt::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorRunt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorRunt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-runt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorRunt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorRunt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorRunt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorRunt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorRunt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorRunt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorJabbers::InErrorJabbers()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-error-jabbers"; yang_parent_name = "ethernet-hour24-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorJabbers::~InErrorJabbers()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorJabbers::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorJabbers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorJabbers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-jabbers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorJabbers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorJabbers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorJabbers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorJabbers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorJabbers::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorJabbers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorFragments::InErrorFragments()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-error-fragments"; yang_parent_name = "ethernet-hour24-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorFragments::~InErrorFragments()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorFragments::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorFragments::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorFragments::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-fragments";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorFragments::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorFragments::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorFragments::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorFragments::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorFragments::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorFragments::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorOther::InErrorOther()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-error-other"; yang_parent_name = "ethernet-hour24-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorOther::~InErrorOther()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorOther::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorOther::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorOther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-other";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorOther::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorOther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorOther::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorOther::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorOther::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorOther::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkt64Octet::InPkt64Octet()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkt64-octet"; yang_parent_name = "ethernet-hour24-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkt64Octet::~InPkt64Octet()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkt64Octet::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkt64Octet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkt64Octet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkt64-octet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkt64Octet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkt64Octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkt64Octet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkt64Octet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkt64Octet::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkt64Octet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts65To127Octets::InPkts65To127Octets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts65-to127-octets"; yang_parent_name = "ethernet-hour24-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts65To127Octets::~InPkts65To127Octets()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts65To127Octets::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts65To127Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts65To127Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts65-to127-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts65To127Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts65To127Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts65To127Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts65To127Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts65To127Octets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts65To127Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts128To255Octets::InPkts128To255Octets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts128-to255-octets"; yang_parent_name = "ethernet-hour24-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts128To255Octets::~InPkts128To255Octets()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts128To255Octets::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts128To255Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts128To255Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts128-to255-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts128To255Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts128To255Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts128To255Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts128To255Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts128To255Octets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts128To255Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts256To511Octets::InPkts256To511Octets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts256-to511-octets"; yang_parent_name = "ethernet-hour24-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts256To511Octets::~InPkts256To511Octets()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts256To511Octets::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts256To511Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts256To511Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts256-to511-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts256To511Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts256To511Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts256To511Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts256To511Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts256To511Octets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts256To511Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts512To1023Octets::InPkts512To1023Octets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts512-to1023-octets"; yang_parent_name = "ethernet-hour24-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts512To1023Octets::~InPkts512To1023Octets()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts512To1023Octets::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts512To1023Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts512To1023Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts512-to1023-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts512To1023Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts512To1023Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts512To1023Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts512To1023Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts512To1023Octets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts512To1023Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts1024To1518Octets::InPkts1024To1518Octets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts1024-to1518-octets"; yang_parent_name = "ethernet-hour24-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts1024To1518Octets::~InPkts1024To1518Octets()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts1024To1518Octets::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts1024To1518Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts1024To1518Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts1024-to1518-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts1024To1518Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts1024To1518Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts1024To1518Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts1024To1518Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts1024To1518Octets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts1024To1518Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Outpkt64Octet::Outpkt64Octet()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "outpkt64octet"; yang_parent_name = "ethernet-hour24-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Outpkt64Octet::~Outpkt64Octet()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Outpkt64Octet::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Outpkt64Octet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Outpkt64Octet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outpkt64octet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Outpkt64Octet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Outpkt64Octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Outpkt64Octet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Outpkt64Octet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Outpkt64Octet::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Outpkt64Octet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts65127Octets::OutPkts65127Octets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts65127-octets"; yang_parent_name = "ethernet-hour24-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts65127Octets::~OutPkts65127Octets()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts65127Octets::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts65127Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts65127Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts65127-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts65127Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts65127Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts65127Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts65127Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts65127Octets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts65127Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts128255Octets::OutPkts128255Octets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts128255-octets"; yang_parent_name = "ethernet-hour24-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts128255Octets::~OutPkts128255Octets()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts128255Octets::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts128255Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts128255Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts128255-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts128255Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts128255Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts128255Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts128255Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts128255Octets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts128255Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts256511Octets::OutPkts256511Octets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts256511-octets"; yang_parent_name = "ethernet-hour24-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts256511Octets::~OutPkts256511Octets()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts256511Octets::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts256511Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts256511Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts256511-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts256511Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts256511Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts256511Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts256511Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts256511Octets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts256511Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts5121023Octets::OutPkts5121023Octets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts5121023-octets"; yang_parent_name = "ethernet-hour24-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts5121023Octets::~OutPkts5121023Octets()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts5121023Octets::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts5121023Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts5121023Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts5121023-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts5121023Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts5121023Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts5121023Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts5121023Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts5121023Octets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts5121023Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts10241518Octets::OutPkts10241518Octets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts10241518-octets"; yang_parent_name = "ethernet-hour24-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts10241518Octets::~OutPkts10241518Octets()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts10241518Octets::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts10241518Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts10241518Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts10241518-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts10241518Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts10241518Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts10241518Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts10241518Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts10241518Octets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts10241518Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::RxUtil::RxUtil()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "rx-util"; yang_parent_name = "ethernet-hour24-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::RxUtil::~RxUtil()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::RxUtil::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::RxUtil::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::RxUtil::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-util";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::RxUtil::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::RxUtil::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::RxUtil::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::RxUtil::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::RxUtil::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::RxUtil::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxUtil::TxUtil()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "tx-util"; yang_parent_name = "ethernet-hour24-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxUtil::~TxUtil()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxUtil::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxUtil::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxUtil::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-util";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxUtil::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxUtil::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxUtil::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxUtil::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxUtil::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxUtil::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxUndersizedPkt::TxUndersizedPkt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "tx-undersized-pkt"; yang_parent_name = "ethernet-hour24-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxUndersizedPkt::~TxUndersizedPkt()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxUndersizedPkt::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxUndersizedPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxUndersizedPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-undersized-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxUndersizedPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxUndersizedPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxUndersizedPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxUndersizedPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxUndersizedPkt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxUndersizedPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxOversizedPkt::TxOversizedPkt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "tx-oversized-pkt"; yang_parent_name = "ethernet-hour24-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxOversizedPkt::~TxOversizedPkt()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxOversizedPkt::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxOversizedPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxOversizedPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-oversized-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxOversizedPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxOversizedPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxOversizedPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxOversizedPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxOversizedPkt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxOversizedPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxFragments::TxFragments()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "tx-fragments"; yang_parent_name = "ethernet-hour24-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxFragments::~TxFragments()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxFragments::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxFragments::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxFragments::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-fragments";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxFragments::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxFragments::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxFragments::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxFragments::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxFragments::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxFragments::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxJabber::TxJabber()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "tx-jabber"; yang_parent_name = "ethernet-hour24-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxJabber::~TxJabber()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxJabber::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxJabber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxJabber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-jabber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxJabber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxJabber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxJabber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxJabber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxJabber::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxJabber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxBadFcs::TxBadFcs()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "tx-bad-fcs"; yang_parent_name = "ethernet-hour24-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxBadFcs::~TxBadFcs()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxBadFcs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxBadFcs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxBadFcs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-bad-fcs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxBadFcs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxBadFcs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxBadFcs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxBadFcs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxBadFcs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxBadFcs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::EthernetMinute15History()
    :
    minute15_ether_histories(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories>())
{
    minute15_ether_histories->parent = this;

    yang_name = "ethernet-minute15-history"; yang_parent_name = "ethernet-port-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::~EthernetMinute15History()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::has_data() const
{
    return (minute15_ether_histories !=  nullptr && minute15_ether_histories->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::has_operation() const
{
    return is_set(yfilter)
	|| (minute15_ether_histories !=  nullptr && minute15_ether_histories->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-minute15-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15-ether-histories")
    {
        if(minute15_ether_histories == nullptr)
        {
            minute15_ether_histories = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories>();
        }
        return minute15_ether_histories;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(minute15_ether_histories != nullptr)
    {
        children["minute15-ether-histories"] = minute15_ether_histories;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15-ether-histories")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistories()
{

    yang_name = "minute15-ether-histories"; yang_parent_name = "ethernet-minute15-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::~Minute15EtherHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::has_data() const
{
    for (std::size_t index=0; index<minute15_ether_history.size(); index++)
    {
        if(minute15_ether_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::has_operation() const
{
    for (std::size_t index=0; index<minute15_ether_history.size(); index++)
    {
        if(minute15_ether_history[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-ether-histories";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15-ether-history")
    {
        for(auto const & c : minute15_ether_history)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory>();
        c->parent = this;
        minute15_ether_history.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : minute15_ether_history)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15-ether-history")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherHistory()
    :
    slot_number{YType::int32, "slot-number"}
    	,
    minute15_ether_time_line_instances(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances>())
{
    minute15_ether_time_line_instances->parent = this;

    yang_name = "minute15-ether-history"; yang_parent_name = "minute15-ether-histories"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::~Minute15EtherHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::has_data() const
{
    return slot_number.is_set
	|| (minute15_ether_time_line_instances !=  nullptr && minute15_ether_time_line_instances->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(slot_number.yfilter)
	|| (minute15_ether_time_line_instances !=  nullptr && minute15_ether_time_line_instances->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-ether-history" <<"[slot-number='" <<slot_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (slot_number.is_set || is_set(slot_number.yfilter)) leaf_name_data.push_back(slot_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15-ether-time-line-instances")
    {
        if(minute15_ether_time_line_instances == nullptr)
        {
            minute15_ether_time_line_instances = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances>();
        }
        return minute15_ether_time_line_instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(minute15_ether_time_line_instances != nullptr)
    {
        children["minute15-ether-time-line-instances"] = minute15_ether_time_line_instances;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "slot-number")
    {
        slot_number = value;
        slot_number.value_namespace = name_space;
        slot_number.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "slot-number")
    {
        slot_number.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15-ether-time-line-instances" || name == "slot-number")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstances()
{

    yang_name = "minute15-ether-time-line-instances"; yang_parent_name = "minute15-ether-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::~Minute15EtherTimeLineInstances()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::has_data() const
{
    for (std::size_t index=0; index<minute15_ether_time_line_instance.size(); index++)
    {
        if(minute15_ether_time_line_instance[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::has_operation() const
{
    for (std::size_t index=0; index<minute15_ether_time_line_instance.size(); index++)
    {
        if(minute15_ether_time_line_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-ether-time-line-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minute15-ether-time-line-instance")
    {
        for(auto const & c : minute15_ether_time_line_instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance>();
        c->parent = this;
        minute15_ether_time_line_instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : minute15_ether_time_line_instance)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minute15-ether-time-line-instance")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Minute15EtherTimeLineInstance()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    valid{YType::boolean, "valid"},
    timestamp{YType::str, "timestamp"},
    last_clear_time{YType::str, "last-clear-time"},
    last_clear30_sec_time{YType::str, "last-clear30-sec-time"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    sec30_support{YType::boolean, "sec30-support"}
    	,
    rx_pkt(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::RxPkt>())
	,stat_pkt(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::StatPkt>())
	,octet_stat(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OctetStat>())
	,oversize_pkt_stat(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OversizePktStat>())
	,fcs_errors_stat(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::FcsErrorsStat>())
	,long_frames_stat(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::LongFramesStat>())
	,jabber_stat(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::JabberStat>())
	,ether64_octets(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether64Octets>())
	,ether65127_octet(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether65127Octet>())
	,ether128255_octet(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether128255Octet>())
	,ether256511_octet(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether256511Octet>())
	,ether5121023_octet(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether5121023Octet>())
	,ether10241518_octet(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether10241518Octet>())
	,in_ucast_pkt(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InUcastPkt>())
	,in_mcast_pkt(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMcastPkt>())
	,in_bcast_pkt(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InBcastPkt>())
	,out_ucast_pkt(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutUcastPkt>())
	,out_bcast_pkt(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutBcastPkt>())
	,out_mcast_pkt(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutMcastPkt>())
	,tx_pkt(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxPkt>())
	,if_in_errors(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::IfInErrors>())
	,if_in_octets(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::IfInOctets>())
	,ether_stat_multicast_pkt(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::EtherStatMulticastPkt>())
	,ether_stat_broadcast_pkt(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::EtherStatBroadcastPkt>())
	,ether_stat_undersized_pkt(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::EtherStatUndersizedPkt>())
	,out_octets(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutOctets>())
	,in_pause_frame(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPauseFrame>())
	,in_good_bytes(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InGoodBytes>())
	,in8021q_frames(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::In8021QFrames>())
	,in_pkts1519_max_octets(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts1519MaxOctets>())
	,in_good_pkts(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InGoodPkts>())
	,in_drop_overrun(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropOverrun>())
	,in_drop_abort(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropAbort>())
	,in_drop_invalid_vlan(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropInvalidVlan>())
	,in_drop_invalid_dmac(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropInvalidDmac>())
	,in_drop_invalid_encap(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropInvalidEncap>())
	,in_drop_other(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropOther>())
	,in_mib_giant(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMibGiant>())
	,in_mib_jabber(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMibJabber>())
	,in_mibcrc(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMibcrc>())
	,in_error_collisions(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorCollisions>())
	,in_error_symbol(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorSymbol>())
	,out_good_bytes(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutGoodBytes>())
	,out8021q_frames(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Out8021QFrames>())
	,out_pause_frames(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPauseFrames>())
	,out_pkts1519_max_octets(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts1519MaxOctets>())
	,out_good_pkts(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutGoodPkts>())
	,out_drop_underrun(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutDropUnderrun>())
	,out_drop_abort(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutDropAbort>())
	,out_drop_other(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutDropOther>())
	,out_error_other(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutErrorOther>())
	,in_error_giant(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorGiant>())
	,in_error_runt(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorRunt>())
	,in_error_jabbers(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorJabbers>())
	,in_error_fragments(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorFragments>())
	,in_error_other(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorOther>())
	,in_pkt64_octet(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkt64Octet>())
	,in_pkts65_to127_octets(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts65To127Octets>())
	,in_pkts128_to255_octets(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts128To255Octets>())
	,in_pkts256_to511_octets(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts256To511Octets>())
	,in_pkts512_to1023_octets(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts512To1023Octets>())
	,in_pkts1024_to1518_octets(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts1024To1518Octets>())
	,outpkt64octet(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Outpkt64Octet>())
	,out_pkts65127_octets(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts65127Octets>())
	,out_pkts128255_octets(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts128255Octets>())
	,out_pkts256511_octets(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts256511Octets>())
	,out_pkts5121023_octets(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts5121023Octets>())
	,out_pkts10241518_octets(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts10241518Octets>())
	,rx_util(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::RxUtil>())
	,tx_util(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxUtil>())
	,tx_undersized_pkt(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxUndersizedPkt>())
	,tx_oversized_pkt(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxOversizedPkt>())
	,tx_fragments(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxFragments>())
	,tx_jabber(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxJabber>())
	,tx_bad_fcs(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxBadFcs>())
{
    rx_pkt->parent = this;
    stat_pkt->parent = this;
    octet_stat->parent = this;
    oversize_pkt_stat->parent = this;
    fcs_errors_stat->parent = this;
    long_frames_stat->parent = this;
    jabber_stat->parent = this;
    ether64_octets->parent = this;
    ether65127_octet->parent = this;
    ether128255_octet->parent = this;
    ether256511_octet->parent = this;
    ether5121023_octet->parent = this;
    ether10241518_octet->parent = this;
    in_ucast_pkt->parent = this;
    in_mcast_pkt->parent = this;
    in_bcast_pkt->parent = this;
    out_ucast_pkt->parent = this;
    out_bcast_pkt->parent = this;
    out_mcast_pkt->parent = this;
    tx_pkt->parent = this;
    if_in_errors->parent = this;
    if_in_octets->parent = this;
    ether_stat_multicast_pkt->parent = this;
    ether_stat_broadcast_pkt->parent = this;
    ether_stat_undersized_pkt->parent = this;
    out_octets->parent = this;
    in_pause_frame->parent = this;
    in_good_bytes->parent = this;
    in8021q_frames->parent = this;
    in_pkts1519_max_octets->parent = this;
    in_good_pkts->parent = this;
    in_drop_overrun->parent = this;
    in_drop_abort->parent = this;
    in_drop_invalid_vlan->parent = this;
    in_drop_invalid_dmac->parent = this;
    in_drop_invalid_encap->parent = this;
    in_drop_other->parent = this;
    in_mib_giant->parent = this;
    in_mib_jabber->parent = this;
    in_mibcrc->parent = this;
    in_error_collisions->parent = this;
    in_error_symbol->parent = this;
    out_good_bytes->parent = this;
    out8021q_frames->parent = this;
    out_pause_frames->parent = this;
    out_pkts1519_max_octets->parent = this;
    out_good_pkts->parent = this;
    out_drop_underrun->parent = this;
    out_drop_abort->parent = this;
    out_drop_other->parent = this;
    out_error_other->parent = this;
    in_error_giant->parent = this;
    in_error_runt->parent = this;
    in_error_jabbers->parent = this;
    in_error_fragments->parent = this;
    in_error_other->parent = this;
    in_pkt64_octet->parent = this;
    in_pkts65_to127_octets->parent = this;
    in_pkts128_to255_octets->parent = this;
    in_pkts256_to511_octets->parent = this;
    in_pkts512_to1023_octets->parent = this;
    in_pkts1024_to1518_octets->parent = this;
    outpkt64octet->parent = this;
    out_pkts65127_octets->parent = this;
    out_pkts128255_octets->parent = this;
    out_pkts256511_octets->parent = this;
    out_pkts5121023_octets->parent = this;
    out_pkts10241518_octets->parent = this;
    rx_util->parent = this;
    tx_util->parent = this;
    tx_undersized_pkt->parent = this;
    tx_oversized_pkt->parent = this;
    tx_fragments->parent = this;
    tx_jabber->parent = this;
    tx_bad_fcs->parent = this;

    yang_name = "minute15-ether-time-line-instance"; yang_parent_name = "minute15-ether-time-line-instances"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::~Minute15EtherTimeLineInstance()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::has_data() const
{
    return number.is_set
	|| index_.is_set
	|| valid.is_set
	|| timestamp.is_set
	|| last_clear_time.is_set
	|| last_clear30_sec_time.is_set
	|| last_clear15_min_time.is_set
	|| last_clear24_hr_time.is_set
	|| sec30_support.is_set
	|| (rx_pkt !=  nullptr && rx_pkt->has_data())
	|| (stat_pkt !=  nullptr && stat_pkt->has_data())
	|| (octet_stat !=  nullptr && octet_stat->has_data())
	|| (oversize_pkt_stat !=  nullptr && oversize_pkt_stat->has_data())
	|| (fcs_errors_stat !=  nullptr && fcs_errors_stat->has_data())
	|| (long_frames_stat !=  nullptr && long_frames_stat->has_data())
	|| (jabber_stat !=  nullptr && jabber_stat->has_data())
	|| (ether64_octets !=  nullptr && ether64_octets->has_data())
	|| (ether65127_octet !=  nullptr && ether65127_octet->has_data())
	|| (ether128255_octet !=  nullptr && ether128255_octet->has_data())
	|| (ether256511_octet !=  nullptr && ether256511_octet->has_data())
	|| (ether5121023_octet !=  nullptr && ether5121023_octet->has_data())
	|| (ether10241518_octet !=  nullptr && ether10241518_octet->has_data())
	|| (in_ucast_pkt !=  nullptr && in_ucast_pkt->has_data())
	|| (in_mcast_pkt !=  nullptr && in_mcast_pkt->has_data())
	|| (in_bcast_pkt !=  nullptr && in_bcast_pkt->has_data())
	|| (out_ucast_pkt !=  nullptr && out_ucast_pkt->has_data())
	|| (out_bcast_pkt !=  nullptr && out_bcast_pkt->has_data())
	|| (out_mcast_pkt !=  nullptr && out_mcast_pkt->has_data())
	|| (tx_pkt !=  nullptr && tx_pkt->has_data())
	|| (if_in_errors !=  nullptr && if_in_errors->has_data())
	|| (if_in_octets !=  nullptr && if_in_octets->has_data())
	|| (ether_stat_multicast_pkt !=  nullptr && ether_stat_multicast_pkt->has_data())
	|| (ether_stat_broadcast_pkt !=  nullptr && ether_stat_broadcast_pkt->has_data())
	|| (ether_stat_undersized_pkt !=  nullptr && ether_stat_undersized_pkt->has_data())
	|| (out_octets !=  nullptr && out_octets->has_data())
	|| (in_pause_frame !=  nullptr && in_pause_frame->has_data())
	|| (in_good_bytes !=  nullptr && in_good_bytes->has_data())
	|| (in8021q_frames !=  nullptr && in8021q_frames->has_data())
	|| (in_pkts1519_max_octets !=  nullptr && in_pkts1519_max_octets->has_data())
	|| (in_good_pkts !=  nullptr && in_good_pkts->has_data())
	|| (in_drop_overrun !=  nullptr && in_drop_overrun->has_data())
	|| (in_drop_abort !=  nullptr && in_drop_abort->has_data())
	|| (in_drop_invalid_vlan !=  nullptr && in_drop_invalid_vlan->has_data())
	|| (in_drop_invalid_dmac !=  nullptr && in_drop_invalid_dmac->has_data())
	|| (in_drop_invalid_encap !=  nullptr && in_drop_invalid_encap->has_data())
	|| (in_drop_other !=  nullptr && in_drop_other->has_data())
	|| (in_mib_giant !=  nullptr && in_mib_giant->has_data())
	|| (in_mib_jabber !=  nullptr && in_mib_jabber->has_data())
	|| (in_mibcrc !=  nullptr && in_mibcrc->has_data())
	|| (in_error_collisions !=  nullptr && in_error_collisions->has_data())
	|| (in_error_symbol !=  nullptr && in_error_symbol->has_data())
	|| (out_good_bytes !=  nullptr && out_good_bytes->has_data())
	|| (out8021q_frames !=  nullptr && out8021q_frames->has_data())
	|| (out_pause_frames !=  nullptr && out_pause_frames->has_data())
	|| (out_pkts1519_max_octets !=  nullptr && out_pkts1519_max_octets->has_data())
	|| (out_good_pkts !=  nullptr && out_good_pkts->has_data())
	|| (out_drop_underrun !=  nullptr && out_drop_underrun->has_data())
	|| (out_drop_abort !=  nullptr && out_drop_abort->has_data())
	|| (out_drop_other !=  nullptr && out_drop_other->has_data())
	|| (out_error_other !=  nullptr && out_error_other->has_data())
	|| (in_error_giant !=  nullptr && in_error_giant->has_data())
	|| (in_error_runt !=  nullptr && in_error_runt->has_data())
	|| (in_error_jabbers !=  nullptr && in_error_jabbers->has_data())
	|| (in_error_fragments !=  nullptr && in_error_fragments->has_data())
	|| (in_error_other !=  nullptr && in_error_other->has_data())
	|| (in_pkt64_octet !=  nullptr && in_pkt64_octet->has_data())
	|| (in_pkts65_to127_octets !=  nullptr && in_pkts65_to127_octets->has_data())
	|| (in_pkts128_to255_octets !=  nullptr && in_pkts128_to255_octets->has_data())
	|| (in_pkts256_to511_octets !=  nullptr && in_pkts256_to511_octets->has_data())
	|| (in_pkts512_to1023_octets !=  nullptr && in_pkts512_to1023_octets->has_data())
	|| (in_pkts1024_to1518_octets !=  nullptr && in_pkts1024_to1518_octets->has_data())
	|| (outpkt64octet !=  nullptr && outpkt64octet->has_data())
	|| (out_pkts65127_octets !=  nullptr && out_pkts65127_octets->has_data())
	|| (out_pkts128255_octets !=  nullptr && out_pkts128255_octets->has_data())
	|| (out_pkts256511_octets !=  nullptr && out_pkts256511_octets->has_data())
	|| (out_pkts5121023_octets !=  nullptr && out_pkts5121023_octets->has_data())
	|| (out_pkts10241518_octets !=  nullptr && out_pkts10241518_octets->has_data())
	|| (rx_util !=  nullptr && rx_util->has_data())
	|| (tx_util !=  nullptr && tx_util->has_data())
	|| (tx_undersized_pkt !=  nullptr && tx_undersized_pkt->has_data())
	|| (tx_oversized_pkt !=  nullptr && tx_oversized_pkt->has_data())
	|| (tx_fragments !=  nullptr && tx_fragments->has_data())
	|| (tx_jabber !=  nullptr && tx_jabber->has_data())
	|| (tx_bad_fcs !=  nullptr && tx_bad_fcs->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(last_clear_time.yfilter)
	|| ydk::is_set(last_clear30_sec_time.yfilter)
	|| ydk::is_set(last_clear15_min_time.yfilter)
	|| ydk::is_set(last_clear24_hr_time.yfilter)
	|| ydk::is_set(sec30_support.yfilter)
	|| (rx_pkt !=  nullptr && rx_pkt->has_operation())
	|| (stat_pkt !=  nullptr && stat_pkt->has_operation())
	|| (octet_stat !=  nullptr && octet_stat->has_operation())
	|| (oversize_pkt_stat !=  nullptr && oversize_pkt_stat->has_operation())
	|| (fcs_errors_stat !=  nullptr && fcs_errors_stat->has_operation())
	|| (long_frames_stat !=  nullptr && long_frames_stat->has_operation())
	|| (jabber_stat !=  nullptr && jabber_stat->has_operation())
	|| (ether64_octets !=  nullptr && ether64_octets->has_operation())
	|| (ether65127_octet !=  nullptr && ether65127_octet->has_operation())
	|| (ether128255_octet !=  nullptr && ether128255_octet->has_operation())
	|| (ether256511_octet !=  nullptr && ether256511_octet->has_operation())
	|| (ether5121023_octet !=  nullptr && ether5121023_octet->has_operation())
	|| (ether10241518_octet !=  nullptr && ether10241518_octet->has_operation())
	|| (in_ucast_pkt !=  nullptr && in_ucast_pkt->has_operation())
	|| (in_mcast_pkt !=  nullptr && in_mcast_pkt->has_operation())
	|| (in_bcast_pkt !=  nullptr && in_bcast_pkt->has_operation())
	|| (out_ucast_pkt !=  nullptr && out_ucast_pkt->has_operation())
	|| (out_bcast_pkt !=  nullptr && out_bcast_pkt->has_operation())
	|| (out_mcast_pkt !=  nullptr && out_mcast_pkt->has_operation())
	|| (tx_pkt !=  nullptr && tx_pkt->has_operation())
	|| (if_in_errors !=  nullptr && if_in_errors->has_operation())
	|| (if_in_octets !=  nullptr && if_in_octets->has_operation())
	|| (ether_stat_multicast_pkt !=  nullptr && ether_stat_multicast_pkt->has_operation())
	|| (ether_stat_broadcast_pkt !=  nullptr && ether_stat_broadcast_pkt->has_operation())
	|| (ether_stat_undersized_pkt !=  nullptr && ether_stat_undersized_pkt->has_operation())
	|| (out_octets !=  nullptr && out_octets->has_operation())
	|| (in_pause_frame !=  nullptr && in_pause_frame->has_operation())
	|| (in_good_bytes !=  nullptr && in_good_bytes->has_operation())
	|| (in8021q_frames !=  nullptr && in8021q_frames->has_operation())
	|| (in_pkts1519_max_octets !=  nullptr && in_pkts1519_max_octets->has_operation())
	|| (in_good_pkts !=  nullptr && in_good_pkts->has_operation())
	|| (in_drop_overrun !=  nullptr && in_drop_overrun->has_operation())
	|| (in_drop_abort !=  nullptr && in_drop_abort->has_operation())
	|| (in_drop_invalid_vlan !=  nullptr && in_drop_invalid_vlan->has_operation())
	|| (in_drop_invalid_dmac !=  nullptr && in_drop_invalid_dmac->has_operation())
	|| (in_drop_invalid_encap !=  nullptr && in_drop_invalid_encap->has_operation())
	|| (in_drop_other !=  nullptr && in_drop_other->has_operation())
	|| (in_mib_giant !=  nullptr && in_mib_giant->has_operation())
	|| (in_mib_jabber !=  nullptr && in_mib_jabber->has_operation())
	|| (in_mibcrc !=  nullptr && in_mibcrc->has_operation())
	|| (in_error_collisions !=  nullptr && in_error_collisions->has_operation())
	|| (in_error_symbol !=  nullptr && in_error_symbol->has_operation())
	|| (out_good_bytes !=  nullptr && out_good_bytes->has_operation())
	|| (out8021q_frames !=  nullptr && out8021q_frames->has_operation())
	|| (out_pause_frames !=  nullptr && out_pause_frames->has_operation())
	|| (out_pkts1519_max_octets !=  nullptr && out_pkts1519_max_octets->has_operation())
	|| (out_good_pkts !=  nullptr && out_good_pkts->has_operation())
	|| (out_drop_underrun !=  nullptr && out_drop_underrun->has_operation())
	|| (out_drop_abort !=  nullptr && out_drop_abort->has_operation())
	|| (out_drop_other !=  nullptr && out_drop_other->has_operation())
	|| (out_error_other !=  nullptr && out_error_other->has_operation())
	|| (in_error_giant !=  nullptr && in_error_giant->has_operation())
	|| (in_error_runt !=  nullptr && in_error_runt->has_operation())
	|| (in_error_jabbers !=  nullptr && in_error_jabbers->has_operation())
	|| (in_error_fragments !=  nullptr && in_error_fragments->has_operation())
	|| (in_error_other !=  nullptr && in_error_other->has_operation())
	|| (in_pkt64_octet !=  nullptr && in_pkt64_octet->has_operation())
	|| (in_pkts65_to127_octets !=  nullptr && in_pkts65_to127_octets->has_operation())
	|| (in_pkts128_to255_octets !=  nullptr && in_pkts128_to255_octets->has_operation())
	|| (in_pkts256_to511_octets !=  nullptr && in_pkts256_to511_octets->has_operation())
	|| (in_pkts512_to1023_octets !=  nullptr && in_pkts512_to1023_octets->has_operation())
	|| (in_pkts1024_to1518_octets !=  nullptr && in_pkts1024_to1518_octets->has_operation())
	|| (outpkt64octet !=  nullptr && outpkt64octet->has_operation())
	|| (out_pkts65127_octets !=  nullptr && out_pkts65127_octets->has_operation())
	|| (out_pkts128255_octets !=  nullptr && out_pkts128255_octets->has_operation())
	|| (out_pkts256511_octets !=  nullptr && out_pkts256511_octets->has_operation())
	|| (out_pkts5121023_octets !=  nullptr && out_pkts5121023_octets->has_operation())
	|| (out_pkts10241518_octets !=  nullptr && out_pkts10241518_octets->has_operation())
	|| (rx_util !=  nullptr && rx_util->has_operation())
	|| (tx_util !=  nullptr && tx_util->has_operation())
	|| (tx_undersized_pkt !=  nullptr && tx_undersized_pkt->has_operation())
	|| (tx_oversized_pkt !=  nullptr && tx_oversized_pkt->has_operation())
	|| (tx_fragments !=  nullptr && tx_fragments->has_operation())
	|| (tx_jabber !=  nullptr && tx_jabber->has_operation())
	|| (tx_bad_fcs !=  nullptr && tx_bad_fcs->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-ether-time-line-instance" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.yfilter)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (last_clear30_sec_time.is_set || is_set(last_clear30_sec_time.yfilter)) leaf_name_data.push_back(last_clear30_sec_time.get_name_leafdata());
    if (last_clear15_min_time.is_set || is_set(last_clear15_min_time.yfilter)) leaf_name_data.push_back(last_clear15_min_time.get_name_leafdata());
    if (last_clear24_hr_time.is_set || is_set(last_clear24_hr_time.yfilter)) leaf_name_data.push_back(last_clear24_hr_time.get_name_leafdata());
    if (sec30_support.is_set || is_set(sec30_support.yfilter)) leaf_name_data.push_back(sec30_support.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rx-pkt")
    {
        if(rx_pkt == nullptr)
        {
            rx_pkt = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::RxPkt>();
        }
        return rx_pkt;
    }

    if(child_yang_name == "stat-pkt")
    {
        if(stat_pkt == nullptr)
        {
            stat_pkt = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::StatPkt>();
        }
        return stat_pkt;
    }

    if(child_yang_name == "octet-stat")
    {
        if(octet_stat == nullptr)
        {
            octet_stat = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OctetStat>();
        }
        return octet_stat;
    }

    if(child_yang_name == "oversize-pkt-stat")
    {
        if(oversize_pkt_stat == nullptr)
        {
            oversize_pkt_stat = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OversizePktStat>();
        }
        return oversize_pkt_stat;
    }

    if(child_yang_name == "fcs-errors-stat")
    {
        if(fcs_errors_stat == nullptr)
        {
            fcs_errors_stat = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::FcsErrorsStat>();
        }
        return fcs_errors_stat;
    }

    if(child_yang_name == "long-frames-stat")
    {
        if(long_frames_stat == nullptr)
        {
            long_frames_stat = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::LongFramesStat>();
        }
        return long_frames_stat;
    }

    if(child_yang_name == "jabber-stat")
    {
        if(jabber_stat == nullptr)
        {
            jabber_stat = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::JabberStat>();
        }
        return jabber_stat;
    }

    if(child_yang_name == "ether64-octets")
    {
        if(ether64_octets == nullptr)
        {
            ether64_octets = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether64Octets>();
        }
        return ether64_octets;
    }

    if(child_yang_name == "ether65127-octet")
    {
        if(ether65127_octet == nullptr)
        {
            ether65127_octet = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether65127Octet>();
        }
        return ether65127_octet;
    }

    if(child_yang_name == "ether128255-octet")
    {
        if(ether128255_octet == nullptr)
        {
            ether128255_octet = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether128255Octet>();
        }
        return ether128255_octet;
    }

    if(child_yang_name == "ether256511-octet")
    {
        if(ether256511_octet == nullptr)
        {
            ether256511_octet = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether256511Octet>();
        }
        return ether256511_octet;
    }

    if(child_yang_name == "ether5121023-octet")
    {
        if(ether5121023_octet == nullptr)
        {
            ether5121023_octet = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether5121023Octet>();
        }
        return ether5121023_octet;
    }

    if(child_yang_name == "ether10241518-octet")
    {
        if(ether10241518_octet == nullptr)
        {
            ether10241518_octet = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether10241518Octet>();
        }
        return ether10241518_octet;
    }

    if(child_yang_name == "in-ucast-pkt")
    {
        if(in_ucast_pkt == nullptr)
        {
            in_ucast_pkt = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InUcastPkt>();
        }
        return in_ucast_pkt;
    }

    if(child_yang_name == "in-mcast-pkt")
    {
        if(in_mcast_pkt == nullptr)
        {
            in_mcast_pkt = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMcastPkt>();
        }
        return in_mcast_pkt;
    }

    if(child_yang_name == "in-bcast-pkt")
    {
        if(in_bcast_pkt == nullptr)
        {
            in_bcast_pkt = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InBcastPkt>();
        }
        return in_bcast_pkt;
    }

    if(child_yang_name == "out-ucast-pkt")
    {
        if(out_ucast_pkt == nullptr)
        {
            out_ucast_pkt = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutUcastPkt>();
        }
        return out_ucast_pkt;
    }

    if(child_yang_name == "out-bcast-pkt")
    {
        if(out_bcast_pkt == nullptr)
        {
            out_bcast_pkt = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutBcastPkt>();
        }
        return out_bcast_pkt;
    }

    if(child_yang_name == "out-mcast-pkt")
    {
        if(out_mcast_pkt == nullptr)
        {
            out_mcast_pkt = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutMcastPkt>();
        }
        return out_mcast_pkt;
    }

    if(child_yang_name == "tx-pkt")
    {
        if(tx_pkt == nullptr)
        {
            tx_pkt = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxPkt>();
        }
        return tx_pkt;
    }

    if(child_yang_name == "if-in-errors")
    {
        if(if_in_errors == nullptr)
        {
            if_in_errors = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::IfInErrors>();
        }
        return if_in_errors;
    }

    if(child_yang_name == "if-in-octets")
    {
        if(if_in_octets == nullptr)
        {
            if_in_octets = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::IfInOctets>();
        }
        return if_in_octets;
    }

    if(child_yang_name == "ether-stat-multicast-pkt")
    {
        if(ether_stat_multicast_pkt == nullptr)
        {
            ether_stat_multicast_pkt = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::EtherStatMulticastPkt>();
        }
        return ether_stat_multicast_pkt;
    }

    if(child_yang_name == "ether-stat-broadcast-pkt")
    {
        if(ether_stat_broadcast_pkt == nullptr)
        {
            ether_stat_broadcast_pkt = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::EtherStatBroadcastPkt>();
        }
        return ether_stat_broadcast_pkt;
    }

    if(child_yang_name == "ether-stat-undersized-pkt")
    {
        if(ether_stat_undersized_pkt == nullptr)
        {
            ether_stat_undersized_pkt = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::EtherStatUndersizedPkt>();
        }
        return ether_stat_undersized_pkt;
    }

    if(child_yang_name == "out-octets")
    {
        if(out_octets == nullptr)
        {
            out_octets = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutOctets>();
        }
        return out_octets;
    }

    if(child_yang_name == "in-pause-frame")
    {
        if(in_pause_frame == nullptr)
        {
            in_pause_frame = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPauseFrame>();
        }
        return in_pause_frame;
    }

    if(child_yang_name == "in-good-bytes")
    {
        if(in_good_bytes == nullptr)
        {
            in_good_bytes = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InGoodBytes>();
        }
        return in_good_bytes;
    }

    if(child_yang_name == "in8021q-frames")
    {
        if(in8021q_frames == nullptr)
        {
            in8021q_frames = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::In8021QFrames>();
        }
        return in8021q_frames;
    }

    if(child_yang_name == "in-pkts1519-max-octets")
    {
        if(in_pkts1519_max_octets == nullptr)
        {
            in_pkts1519_max_octets = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts1519MaxOctets>();
        }
        return in_pkts1519_max_octets;
    }

    if(child_yang_name == "in-good-pkts")
    {
        if(in_good_pkts == nullptr)
        {
            in_good_pkts = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InGoodPkts>();
        }
        return in_good_pkts;
    }

    if(child_yang_name == "in-drop-overrun")
    {
        if(in_drop_overrun == nullptr)
        {
            in_drop_overrun = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropOverrun>();
        }
        return in_drop_overrun;
    }

    if(child_yang_name == "in-drop-abort")
    {
        if(in_drop_abort == nullptr)
        {
            in_drop_abort = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropAbort>();
        }
        return in_drop_abort;
    }

    if(child_yang_name == "in-drop-invalid-vlan")
    {
        if(in_drop_invalid_vlan == nullptr)
        {
            in_drop_invalid_vlan = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropInvalidVlan>();
        }
        return in_drop_invalid_vlan;
    }

    if(child_yang_name == "in-drop-invalid-dmac")
    {
        if(in_drop_invalid_dmac == nullptr)
        {
            in_drop_invalid_dmac = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropInvalidDmac>();
        }
        return in_drop_invalid_dmac;
    }

    if(child_yang_name == "in-drop-invalid-encap")
    {
        if(in_drop_invalid_encap == nullptr)
        {
            in_drop_invalid_encap = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropInvalidEncap>();
        }
        return in_drop_invalid_encap;
    }

    if(child_yang_name == "in-drop-other")
    {
        if(in_drop_other == nullptr)
        {
            in_drop_other = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropOther>();
        }
        return in_drop_other;
    }

    if(child_yang_name == "in-mib-giant")
    {
        if(in_mib_giant == nullptr)
        {
            in_mib_giant = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMibGiant>();
        }
        return in_mib_giant;
    }

    if(child_yang_name == "in-mib-jabber")
    {
        if(in_mib_jabber == nullptr)
        {
            in_mib_jabber = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMibJabber>();
        }
        return in_mib_jabber;
    }

    if(child_yang_name == "in-mibcrc")
    {
        if(in_mibcrc == nullptr)
        {
            in_mibcrc = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMibcrc>();
        }
        return in_mibcrc;
    }

    if(child_yang_name == "in-error-collisions")
    {
        if(in_error_collisions == nullptr)
        {
            in_error_collisions = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorCollisions>();
        }
        return in_error_collisions;
    }

    if(child_yang_name == "in-error-symbol")
    {
        if(in_error_symbol == nullptr)
        {
            in_error_symbol = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorSymbol>();
        }
        return in_error_symbol;
    }

    if(child_yang_name == "out-good-bytes")
    {
        if(out_good_bytes == nullptr)
        {
            out_good_bytes = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutGoodBytes>();
        }
        return out_good_bytes;
    }

    if(child_yang_name == "out8021q-frames")
    {
        if(out8021q_frames == nullptr)
        {
            out8021q_frames = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Out8021QFrames>();
        }
        return out8021q_frames;
    }

    if(child_yang_name == "out-pause-frames")
    {
        if(out_pause_frames == nullptr)
        {
            out_pause_frames = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPauseFrames>();
        }
        return out_pause_frames;
    }

    if(child_yang_name == "out-pkts1519-max-octets")
    {
        if(out_pkts1519_max_octets == nullptr)
        {
            out_pkts1519_max_octets = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts1519MaxOctets>();
        }
        return out_pkts1519_max_octets;
    }

    if(child_yang_name == "out-good-pkts")
    {
        if(out_good_pkts == nullptr)
        {
            out_good_pkts = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutGoodPkts>();
        }
        return out_good_pkts;
    }

    if(child_yang_name == "out-drop-underrun")
    {
        if(out_drop_underrun == nullptr)
        {
            out_drop_underrun = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutDropUnderrun>();
        }
        return out_drop_underrun;
    }

    if(child_yang_name == "out-drop-abort")
    {
        if(out_drop_abort == nullptr)
        {
            out_drop_abort = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutDropAbort>();
        }
        return out_drop_abort;
    }

    if(child_yang_name == "out-drop-other")
    {
        if(out_drop_other == nullptr)
        {
            out_drop_other = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutDropOther>();
        }
        return out_drop_other;
    }

    if(child_yang_name == "out-error-other")
    {
        if(out_error_other == nullptr)
        {
            out_error_other = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutErrorOther>();
        }
        return out_error_other;
    }

    if(child_yang_name == "in-error-giant")
    {
        if(in_error_giant == nullptr)
        {
            in_error_giant = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorGiant>();
        }
        return in_error_giant;
    }

    if(child_yang_name == "in-error-runt")
    {
        if(in_error_runt == nullptr)
        {
            in_error_runt = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorRunt>();
        }
        return in_error_runt;
    }

    if(child_yang_name == "in-error-jabbers")
    {
        if(in_error_jabbers == nullptr)
        {
            in_error_jabbers = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorJabbers>();
        }
        return in_error_jabbers;
    }

    if(child_yang_name == "in-error-fragments")
    {
        if(in_error_fragments == nullptr)
        {
            in_error_fragments = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorFragments>();
        }
        return in_error_fragments;
    }

    if(child_yang_name == "in-error-other")
    {
        if(in_error_other == nullptr)
        {
            in_error_other = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorOther>();
        }
        return in_error_other;
    }

    if(child_yang_name == "in-pkt64-octet")
    {
        if(in_pkt64_octet == nullptr)
        {
            in_pkt64_octet = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkt64Octet>();
        }
        return in_pkt64_octet;
    }

    if(child_yang_name == "in-pkts65-to127-octets")
    {
        if(in_pkts65_to127_octets == nullptr)
        {
            in_pkts65_to127_octets = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts65To127Octets>();
        }
        return in_pkts65_to127_octets;
    }

    if(child_yang_name == "in-pkts128-to255-octets")
    {
        if(in_pkts128_to255_octets == nullptr)
        {
            in_pkts128_to255_octets = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts128To255Octets>();
        }
        return in_pkts128_to255_octets;
    }

    if(child_yang_name == "in-pkts256-to511-octets")
    {
        if(in_pkts256_to511_octets == nullptr)
        {
            in_pkts256_to511_octets = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts256To511Octets>();
        }
        return in_pkts256_to511_octets;
    }

    if(child_yang_name == "in-pkts512-to1023-octets")
    {
        if(in_pkts512_to1023_octets == nullptr)
        {
            in_pkts512_to1023_octets = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts512To1023Octets>();
        }
        return in_pkts512_to1023_octets;
    }

    if(child_yang_name == "in-pkts1024-to1518-octets")
    {
        if(in_pkts1024_to1518_octets == nullptr)
        {
            in_pkts1024_to1518_octets = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts1024To1518Octets>();
        }
        return in_pkts1024_to1518_octets;
    }

    if(child_yang_name == "outpkt64octet")
    {
        if(outpkt64octet == nullptr)
        {
            outpkt64octet = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Outpkt64Octet>();
        }
        return outpkt64octet;
    }

    if(child_yang_name == "out-pkts65127-octets")
    {
        if(out_pkts65127_octets == nullptr)
        {
            out_pkts65127_octets = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts65127Octets>();
        }
        return out_pkts65127_octets;
    }

    if(child_yang_name == "out-pkts128255-octets")
    {
        if(out_pkts128255_octets == nullptr)
        {
            out_pkts128255_octets = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts128255Octets>();
        }
        return out_pkts128255_octets;
    }

    if(child_yang_name == "out-pkts256511-octets")
    {
        if(out_pkts256511_octets == nullptr)
        {
            out_pkts256511_octets = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts256511Octets>();
        }
        return out_pkts256511_octets;
    }

    if(child_yang_name == "out-pkts5121023-octets")
    {
        if(out_pkts5121023_octets == nullptr)
        {
            out_pkts5121023_octets = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts5121023Octets>();
        }
        return out_pkts5121023_octets;
    }

    if(child_yang_name == "out-pkts10241518-octets")
    {
        if(out_pkts10241518_octets == nullptr)
        {
            out_pkts10241518_octets = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts10241518Octets>();
        }
        return out_pkts10241518_octets;
    }

    if(child_yang_name == "rx-util")
    {
        if(rx_util == nullptr)
        {
            rx_util = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::RxUtil>();
        }
        return rx_util;
    }

    if(child_yang_name == "tx-util")
    {
        if(tx_util == nullptr)
        {
            tx_util = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxUtil>();
        }
        return tx_util;
    }

    if(child_yang_name == "tx-undersized-pkt")
    {
        if(tx_undersized_pkt == nullptr)
        {
            tx_undersized_pkt = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxUndersizedPkt>();
        }
        return tx_undersized_pkt;
    }

    if(child_yang_name == "tx-oversized-pkt")
    {
        if(tx_oversized_pkt == nullptr)
        {
            tx_oversized_pkt = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxOversizedPkt>();
        }
        return tx_oversized_pkt;
    }

    if(child_yang_name == "tx-fragments")
    {
        if(tx_fragments == nullptr)
        {
            tx_fragments = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxFragments>();
        }
        return tx_fragments;
    }

    if(child_yang_name == "tx-jabber")
    {
        if(tx_jabber == nullptr)
        {
            tx_jabber = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxJabber>();
        }
        return tx_jabber;
    }

    if(child_yang_name == "tx-bad-fcs")
    {
        if(tx_bad_fcs == nullptr)
        {
            tx_bad_fcs = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxBadFcs>();
        }
        return tx_bad_fcs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rx_pkt != nullptr)
    {
        children["rx-pkt"] = rx_pkt;
    }

    if(stat_pkt != nullptr)
    {
        children["stat-pkt"] = stat_pkt;
    }

    if(octet_stat != nullptr)
    {
        children["octet-stat"] = octet_stat;
    }

    if(oversize_pkt_stat != nullptr)
    {
        children["oversize-pkt-stat"] = oversize_pkt_stat;
    }

    if(fcs_errors_stat != nullptr)
    {
        children["fcs-errors-stat"] = fcs_errors_stat;
    }

    if(long_frames_stat != nullptr)
    {
        children["long-frames-stat"] = long_frames_stat;
    }

    if(jabber_stat != nullptr)
    {
        children["jabber-stat"] = jabber_stat;
    }

    if(ether64_octets != nullptr)
    {
        children["ether64-octets"] = ether64_octets;
    }

    if(ether65127_octet != nullptr)
    {
        children["ether65127-octet"] = ether65127_octet;
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

    if(ether10241518_octet != nullptr)
    {
        children["ether10241518-octet"] = ether10241518_octet;
    }

    if(in_ucast_pkt != nullptr)
    {
        children["in-ucast-pkt"] = in_ucast_pkt;
    }

    if(in_mcast_pkt != nullptr)
    {
        children["in-mcast-pkt"] = in_mcast_pkt;
    }

    if(in_bcast_pkt != nullptr)
    {
        children["in-bcast-pkt"] = in_bcast_pkt;
    }

    if(out_ucast_pkt != nullptr)
    {
        children["out-ucast-pkt"] = out_ucast_pkt;
    }

    if(out_bcast_pkt != nullptr)
    {
        children["out-bcast-pkt"] = out_bcast_pkt;
    }

    if(out_mcast_pkt != nullptr)
    {
        children["out-mcast-pkt"] = out_mcast_pkt;
    }

    if(tx_pkt != nullptr)
    {
        children["tx-pkt"] = tx_pkt;
    }

    if(if_in_errors != nullptr)
    {
        children["if-in-errors"] = if_in_errors;
    }

    if(if_in_octets != nullptr)
    {
        children["if-in-octets"] = if_in_octets;
    }

    if(ether_stat_multicast_pkt != nullptr)
    {
        children["ether-stat-multicast-pkt"] = ether_stat_multicast_pkt;
    }

    if(ether_stat_broadcast_pkt != nullptr)
    {
        children["ether-stat-broadcast-pkt"] = ether_stat_broadcast_pkt;
    }

    if(ether_stat_undersized_pkt != nullptr)
    {
        children["ether-stat-undersized-pkt"] = ether_stat_undersized_pkt;
    }

    if(out_octets != nullptr)
    {
        children["out-octets"] = out_octets;
    }

    if(in_pause_frame != nullptr)
    {
        children["in-pause-frame"] = in_pause_frame;
    }

    if(in_good_bytes != nullptr)
    {
        children["in-good-bytes"] = in_good_bytes;
    }

    if(in8021q_frames != nullptr)
    {
        children["in8021q-frames"] = in8021q_frames;
    }

    if(in_pkts1519_max_octets != nullptr)
    {
        children["in-pkts1519-max-octets"] = in_pkts1519_max_octets;
    }

    if(in_good_pkts != nullptr)
    {
        children["in-good-pkts"] = in_good_pkts;
    }

    if(in_drop_overrun != nullptr)
    {
        children["in-drop-overrun"] = in_drop_overrun;
    }

    if(in_drop_abort != nullptr)
    {
        children["in-drop-abort"] = in_drop_abort;
    }

    if(in_drop_invalid_vlan != nullptr)
    {
        children["in-drop-invalid-vlan"] = in_drop_invalid_vlan;
    }

    if(in_drop_invalid_dmac != nullptr)
    {
        children["in-drop-invalid-dmac"] = in_drop_invalid_dmac;
    }

    if(in_drop_invalid_encap != nullptr)
    {
        children["in-drop-invalid-encap"] = in_drop_invalid_encap;
    }

    if(in_drop_other != nullptr)
    {
        children["in-drop-other"] = in_drop_other;
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

    if(in_error_collisions != nullptr)
    {
        children["in-error-collisions"] = in_error_collisions;
    }

    if(in_error_symbol != nullptr)
    {
        children["in-error-symbol"] = in_error_symbol;
    }

    if(out_good_bytes != nullptr)
    {
        children["out-good-bytes"] = out_good_bytes;
    }

    if(out8021q_frames != nullptr)
    {
        children["out8021q-frames"] = out8021q_frames;
    }

    if(out_pause_frames != nullptr)
    {
        children["out-pause-frames"] = out_pause_frames;
    }

    if(out_pkts1519_max_octets != nullptr)
    {
        children["out-pkts1519-max-octets"] = out_pkts1519_max_octets;
    }

    if(out_good_pkts != nullptr)
    {
        children["out-good-pkts"] = out_good_pkts;
    }

    if(out_drop_underrun != nullptr)
    {
        children["out-drop-underrun"] = out_drop_underrun;
    }

    if(out_drop_abort != nullptr)
    {
        children["out-drop-abort"] = out_drop_abort;
    }

    if(out_drop_other != nullptr)
    {
        children["out-drop-other"] = out_drop_other;
    }

    if(out_error_other != nullptr)
    {
        children["out-error-other"] = out_error_other;
    }

    if(in_error_giant != nullptr)
    {
        children["in-error-giant"] = in_error_giant;
    }

    if(in_error_runt != nullptr)
    {
        children["in-error-runt"] = in_error_runt;
    }

    if(in_error_jabbers != nullptr)
    {
        children["in-error-jabbers"] = in_error_jabbers;
    }

    if(in_error_fragments != nullptr)
    {
        children["in-error-fragments"] = in_error_fragments;
    }

    if(in_error_other != nullptr)
    {
        children["in-error-other"] = in_error_other;
    }

    if(in_pkt64_octet != nullptr)
    {
        children["in-pkt64-octet"] = in_pkt64_octet;
    }

    if(in_pkts65_to127_octets != nullptr)
    {
        children["in-pkts65-to127-octets"] = in_pkts65_to127_octets;
    }

    if(in_pkts128_to255_octets != nullptr)
    {
        children["in-pkts128-to255-octets"] = in_pkts128_to255_octets;
    }

    if(in_pkts256_to511_octets != nullptr)
    {
        children["in-pkts256-to511-octets"] = in_pkts256_to511_octets;
    }

    if(in_pkts512_to1023_octets != nullptr)
    {
        children["in-pkts512-to1023-octets"] = in_pkts512_to1023_octets;
    }

    if(in_pkts1024_to1518_octets != nullptr)
    {
        children["in-pkts1024-to1518-octets"] = in_pkts1024_to1518_octets;
    }

    if(outpkt64octet != nullptr)
    {
        children["outpkt64octet"] = outpkt64octet;
    }

    if(out_pkts65127_octets != nullptr)
    {
        children["out-pkts65127-octets"] = out_pkts65127_octets;
    }

    if(out_pkts128255_octets != nullptr)
    {
        children["out-pkts128255-octets"] = out_pkts128255_octets;
    }

    if(out_pkts256511_octets != nullptr)
    {
        children["out-pkts256511-octets"] = out_pkts256511_octets;
    }

    if(out_pkts5121023_octets != nullptr)
    {
        children["out-pkts5121023-octets"] = out_pkts5121023_octets;
    }

    if(out_pkts10241518_octets != nullptr)
    {
        children["out-pkts10241518-octets"] = out_pkts10241518_octets;
    }

    if(rx_util != nullptr)
    {
        children["rx-util"] = rx_util;
    }

    if(tx_util != nullptr)
    {
        children["tx-util"] = tx_util;
    }

    if(tx_undersized_pkt != nullptr)
    {
        children["tx-undersized-pkt"] = tx_undersized_pkt;
    }

    if(tx_oversized_pkt != nullptr)
    {
        children["tx-oversized-pkt"] = tx_oversized_pkt;
    }

    if(tx_fragments != nullptr)
    {
        children["tx-fragments"] = tx_fragments;
    }

    if(tx_jabber != nullptr)
    {
        children["tx-jabber"] = tx_jabber;
    }

    if(tx_bad_fcs != nullptr)
    {
        children["tx-bad-fcs"] = tx_bad_fcs;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "last-clear30-sec-time")
    {
        last_clear30_sec_time = value;
        last_clear30_sec_time.value_namespace = name_space;
        last_clear30_sec_time.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "sec30-support")
    {
        sec30_support = value;
        sec30_support.value_namespace = name_space;
        sec30_support.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "last-clear30-sec-time")
    {
        last_clear30_sec_time.yfilter = yfilter;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time.yfilter = yfilter;
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rx-pkt" || name == "stat-pkt" || name == "octet-stat" || name == "oversize-pkt-stat" || name == "fcs-errors-stat" || name == "long-frames-stat" || name == "jabber-stat" || name == "ether64-octets" || name == "ether65127-octet" || name == "ether128255-octet" || name == "ether256511-octet" || name == "ether5121023-octet" || name == "ether10241518-octet" || name == "in-ucast-pkt" || name == "in-mcast-pkt" || name == "in-bcast-pkt" || name == "out-ucast-pkt" || name == "out-bcast-pkt" || name == "out-mcast-pkt" || name == "tx-pkt" || name == "if-in-errors" || name == "if-in-octets" || name == "ether-stat-multicast-pkt" || name == "ether-stat-broadcast-pkt" || name == "ether-stat-undersized-pkt" || name == "out-octets" || name == "in-pause-frame" || name == "in-good-bytes" || name == "in8021q-frames" || name == "in-pkts1519-max-octets" || name == "in-good-pkts" || name == "in-drop-overrun" || name == "in-drop-abort" || name == "in-drop-invalid-vlan" || name == "in-drop-invalid-dmac" || name == "in-drop-invalid-encap" || name == "in-drop-other" || name == "in-mib-giant" || name == "in-mib-jabber" || name == "in-mibcrc" || name == "in-error-collisions" || name == "in-error-symbol" || name == "out-good-bytes" || name == "out8021q-frames" || name == "out-pause-frames" || name == "out-pkts1519-max-octets" || name == "out-good-pkts" || name == "out-drop-underrun" || name == "out-drop-abort" || name == "out-drop-other" || name == "out-error-other" || name == "in-error-giant" || name == "in-error-runt" || name == "in-error-jabbers" || name == "in-error-fragments" || name == "in-error-other" || name == "in-pkt64-octet" || name == "in-pkts65-to127-octets" || name == "in-pkts128-to255-octets" || name == "in-pkts256-to511-octets" || name == "in-pkts512-to1023-octets" || name == "in-pkts1024-to1518-octets" || name == "outpkt64octet" || name == "out-pkts65127-octets" || name == "out-pkts128255-octets" || name == "out-pkts256511-octets" || name == "out-pkts5121023-octets" || name == "out-pkts10241518-octets" || name == "rx-util" || name == "tx-util" || name == "tx-undersized-pkt" || name == "tx-oversized-pkt" || name == "tx-fragments" || name == "tx-jabber" || name == "tx-bad-fcs" || name == "number" || name == "index" || name == "valid" || name == "timestamp" || name == "last-clear-time" || name == "last-clear30-sec-time" || name == "last-clear15-min-time" || name == "last-clear24-hr-time" || name == "sec30-support")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::RxPkt::RxPkt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
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
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::RxPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::RxPkt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::RxPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::StatPkt::StatPkt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
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
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::StatPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::StatPkt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::StatPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OctetStat::OctetStat()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
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
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OctetStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OctetStat::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OctetStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OversizePktStat::OversizePktStat()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
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
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OversizePktStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OversizePktStat::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OversizePktStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::FcsErrorsStat::FcsErrorsStat()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "fcs-errors-stat"; yang_parent_name = "minute15-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::FcsErrorsStat::~FcsErrorsStat()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::FcsErrorsStat::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::FcsErrorsStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::FcsErrorsStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fcs-errors-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::FcsErrorsStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::FcsErrorsStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::FcsErrorsStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::FcsErrorsStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::FcsErrorsStat::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::FcsErrorsStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::LongFramesStat::LongFramesStat()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
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
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::LongFramesStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::LongFramesStat::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::LongFramesStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::JabberStat::JabberStat()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
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
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::JabberStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::JabberStat::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::JabberStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether64Octets::Ether64Octets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ether64-octets"; yang_parent_name = "minute15-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether64Octets::~Ether64Octets()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether64Octets::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether64Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether64Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether64-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether64Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether64Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether64Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether64Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether64Octets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether64Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether65127Octet::Ether65127Octet()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ether65127-octet"; yang_parent_name = "minute15-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether65127Octet::~Ether65127Octet()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether65127Octet::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether65127Octet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether65127Octet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether65127-octet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether65127Octet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether65127Octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether65127Octet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether65127Octet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether65127Octet::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether65127Octet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether128255Octet::Ether128255Octet()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ether128255-octet"; yang_parent_name = "minute15-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether128255Octet::~Ether128255Octet()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether128255Octet::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether128255Octet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether128255Octet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether128255-octet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether128255Octet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether128255Octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether128255Octet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether128255Octet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether128255Octet::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether128255Octet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether256511Octet::Ether256511Octet()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ether256511-octet"; yang_parent_name = "minute15-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether256511Octet::~Ether256511Octet()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether256511Octet::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether256511Octet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether256511Octet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether256511-octet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether256511Octet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether256511Octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether256511Octet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether256511Octet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether256511Octet::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether256511Octet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether5121023Octet::Ether5121023Octet()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ether5121023-octet"; yang_parent_name = "minute15-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether5121023Octet::~Ether5121023Octet()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether5121023Octet::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether5121023Octet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether5121023Octet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether5121023-octet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether5121023Octet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether5121023Octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether5121023Octet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether5121023Octet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether5121023Octet::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether5121023Octet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether10241518Octet::Ether10241518Octet()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ether10241518-octet"; yang_parent_name = "minute15-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether10241518Octet::~Ether10241518Octet()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether10241518Octet::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether10241518Octet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether10241518Octet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether10241518-octet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether10241518Octet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether10241518Octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether10241518Octet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether10241518Octet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether10241518Octet::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether10241518Octet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InUcastPkt::InUcastPkt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
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
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InUcastPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InUcastPkt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InUcastPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMcastPkt::InMcastPkt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
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
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMcastPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMcastPkt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMcastPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InBcastPkt::InBcastPkt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-bcast-pkt"; yang_parent_name = "minute15-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InBcastPkt::~InBcastPkt()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InBcastPkt::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InBcastPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InBcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-bcast-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InBcastPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InBcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InBcastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InBcastPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InBcastPkt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InBcastPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutUcastPkt::OutUcastPkt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
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
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutUcastPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutUcastPkt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutUcastPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutBcastPkt::OutBcastPkt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
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
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutBcastPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutBcastPkt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutBcastPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutMcastPkt::OutMcastPkt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
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
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutMcastPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutMcastPkt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutMcastPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxPkt::TxPkt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
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
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxPkt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::IfInErrors::IfInErrors()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "if-in-errors"; yang_parent_name = "minute15-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::IfInErrors::~IfInErrors()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::IfInErrors::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::IfInErrors::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::IfInErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-in-errors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::IfInErrors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::IfInErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::IfInErrors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::IfInErrors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::IfInErrors::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::IfInErrors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::IfInOctets::IfInOctets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "if-in-octets"; yang_parent_name = "minute15-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::IfInOctets::~IfInOctets()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::IfInOctets::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::IfInOctets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::IfInOctets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-in-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::IfInOctets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::IfInOctets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::IfInOctets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::IfInOctets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::IfInOctets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::IfInOctets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::EtherStatMulticastPkt::EtherStatMulticastPkt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ether-stat-multicast-pkt"; yang_parent_name = "minute15-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::EtherStatMulticastPkt::~EtherStatMulticastPkt()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::EtherStatMulticastPkt::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::EtherStatMulticastPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::EtherStatMulticastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether-stat-multicast-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::EtherStatMulticastPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::EtherStatMulticastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::EtherStatMulticastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::EtherStatMulticastPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::EtherStatMulticastPkt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::EtherStatMulticastPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::EtherStatBroadcastPkt::EtherStatBroadcastPkt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ether-stat-broadcast-pkt"; yang_parent_name = "minute15-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::EtherStatBroadcastPkt::~EtherStatBroadcastPkt()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::EtherStatBroadcastPkt::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::EtherStatBroadcastPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::EtherStatBroadcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether-stat-broadcast-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::EtherStatBroadcastPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::EtherStatBroadcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::EtherStatBroadcastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::EtherStatBroadcastPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::EtherStatBroadcastPkt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::EtherStatBroadcastPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::EtherStatUndersizedPkt::EtherStatUndersizedPkt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ether-stat-undersized-pkt"; yang_parent_name = "minute15-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::EtherStatUndersizedPkt::~EtherStatUndersizedPkt()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::EtherStatUndersizedPkt::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::EtherStatUndersizedPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::EtherStatUndersizedPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether-stat-undersized-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::EtherStatUndersizedPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::EtherStatUndersizedPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::EtherStatUndersizedPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::EtherStatUndersizedPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::EtherStatUndersizedPkt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::EtherStatUndersizedPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutOctets::OutOctets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
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
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutOctets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutOctets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutOctets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPauseFrame::InPauseFrame()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
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
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPauseFrame::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPauseFrame::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPauseFrame::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InGoodBytes::InGoodBytes()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
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
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InGoodBytes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InGoodBytes::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InGoodBytes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::In8021QFrames::In8021QFrames()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in8021q-frames"; yang_parent_name = "minute15-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::In8021QFrames::~In8021QFrames()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::In8021QFrames::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::In8021QFrames::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::In8021QFrames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in8021q-frames";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::In8021QFrames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::In8021QFrames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::In8021QFrames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::In8021QFrames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::In8021QFrames::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::In8021QFrames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts1519MaxOctets::InPkts1519MaxOctets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
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
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts1519MaxOctets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts1519MaxOctets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts1519MaxOctets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InGoodPkts::InGoodPkts()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
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
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InGoodPkts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InGoodPkts::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InGoodPkts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropOverrun::InDropOverrun()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-drop-overrun"; yang_parent_name = "minute15-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropOverrun::~InDropOverrun()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropOverrun::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropOverrun::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropOverrun::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-drop-overrun";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropOverrun::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropOverrun::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropOverrun::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropOverrun::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropOverrun::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropOverrun::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropAbort::InDropAbort()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-drop-abort"; yang_parent_name = "minute15-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropAbort::~InDropAbort()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropAbort::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropAbort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropAbort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-drop-abort";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropAbort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropAbort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropAbort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropAbort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropAbort::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropAbort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropInvalidVlan::InDropInvalidVlan()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-drop-invalid-vlan"; yang_parent_name = "minute15-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropInvalidVlan::~InDropInvalidVlan()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropInvalidVlan::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropInvalidVlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropInvalidVlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-drop-invalid-vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropInvalidVlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropInvalidVlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropInvalidVlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropInvalidVlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropInvalidVlan::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropInvalidVlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropInvalidDmac::InDropInvalidDmac()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-drop-invalid-dmac"; yang_parent_name = "minute15-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropInvalidDmac::~InDropInvalidDmac()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropInvalidDmac::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropInvalidDmac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropInvalidDmac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-drop-invalid-dmac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropInvalidDmac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropInvalidDmac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropInvalidDmac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropInvalidDmac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropInvalidDmac::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropInvalidDmac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropInvalidEncap::InDropInvalidEncap()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-drop-invalid-encap"; yang_parent_name = "minute15-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropInvalidEncap::~InDropInvalidEncap()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropInvalidEncap::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropInvalidEncap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropInvalidEncap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-drop-invalid-encap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropInvalidEncap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropInvalidEncap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropInvalidEncap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropInvalidEncap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropInvalidEncap::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropInvalidEncap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropOther::InDropOther()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-drop-other"; yang_parent_name = "minute15-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropOther::~InDropOther()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropOther::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropOther::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropOther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-drop-other";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropOther::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropOther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropOther::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropOther::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropOther::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropOther::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMibGiant::InMibGiant()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
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
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMibGiant::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMibGiant::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMibGiant::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMibJabber::InMibJabber()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
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
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMibJabber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMibJabber::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMibJabber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMibcrc::InMibcrc()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
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
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMibcrc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMibcrc::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMibcrc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorCollisions::InErrorCollisions()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-error-collisions"; yang_parent_name = "minute15-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorCollisions::~InErrorCollisions()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorCollisions::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorCollisions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorCollisions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-collisions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorCollisions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorCollisions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorCollisions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorCollisions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorCollisions::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorCollisions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorSymbol::InErrorSymbol()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
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
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorSymbol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorSymbol::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorSymbol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutGoodBytes::OutGoodBytes()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
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
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutGoodBytes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutGoodBytes::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutGoodBytes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Out8021QFrames::Out8021QFrames()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
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
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Out8021QFrames::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Out8021QFrames::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Out8021QFrames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPauseFrames::OutPauseFrames()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
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
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPauseFrames::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPauseFrames::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPauseFrames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts1519MaxOctets::OutPkts1519MaxOctets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
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
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts1519MaxOctets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts1519MaxOctets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts1519MaxOctets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutGoodPkts::OutGoodPkts()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
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
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutGoodPkts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutGoodPkts::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutGoodPkts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutDropUnderrun::OutDropUnderrun()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
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
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutDropUnderrun::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutDropUnderrun::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutDropUnderrun::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutDropAbort::OutDropAbort()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
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
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutDropAbort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutDropAbort::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutDropAbort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutDropOther::OutDropOther()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
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
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutDropOther::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutDropOther::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutDropOther::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutErrorOther::OutErrorOther()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
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
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutErrorOther::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutErrorOther::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutErrorOther::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorGiant::InErrorGiant()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-error-giant"; yang_parent_name = "minute15-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorGiant::~InErrorGiant()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorGiant::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorGiant::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorGiant::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-giant";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorGiant::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorGiant::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorGiant::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorGiant::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorGiant::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorGiant::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorRunt::InErrorRunt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
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
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorRunt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorRunt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorRunt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorJabbers::InErrorJabbers()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-error-jabbers"; yang_parent_name = "minute15-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorJabbers::~InErrorJabbers()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorJabbers::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorJabbers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorJabbers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-jabbers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorJabbers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorJabbers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorJabbers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorJabbers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorJabbers::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorJabbers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorFragments::InErrorFragments()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-error-fragments"; yang_parent_name = "minute15-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorFragments::~InErrorFragments()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorFragments::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorFragments::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorFragments::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-fragments";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorFragments::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorFragments::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorFragments::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorFragments::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorFragments::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorFragments::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorOther::InErrorOther()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
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
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorOther::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorOther::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorOther::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkt64Octet::InPkt64Octet()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
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
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkt64Octet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkt64Octet::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkt64Octet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts65To127Octets::InPkts65To127Octets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
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
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts65To127Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts65To127Octets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts65To127Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts128To255Octets::InPkts128To255Octets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
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
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts128To255Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts128To255Octets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts128To255Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts256To511Octets::InPkts256To511Octets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
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
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts256To511Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts256To511Octets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts256To511Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts512To1023Octets::InPkts512To1023Octets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
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
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts512To1023Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts512To1023Octets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts512To1023Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts1024To1518Octets::InPkts1024To1518Octets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
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
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts1024To1518Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts1024To1518Octets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts1024To1518Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Outpkt64Octet::Outpkt64Octet()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
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
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Outpkt64Octet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Outpkt64Octet::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Outpkt64Octet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts65127Octets::OutPkts65127Octets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
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
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts65127Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts65127Octets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts65127Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts128255Octets::OutPkts128255Octets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
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
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts128255Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts128255Octets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts128255Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts256511Octets::OutPkts256511Octets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
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
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts256511Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts256511Octets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts256511Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts5121023Octets::OutPkts5121023Octets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
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
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts5121023Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts5121023Octets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts5121023Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts10241518Octets::OutPkts10241518Octets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
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
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts10241518Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts10241518Octets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts10241518Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::RxUtil::RxUtil()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"},
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
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::RxUtil::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::RxUtil::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::RxUtil::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxUtil::TxUtil()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"},
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
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxUtil::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxUtil::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxUtil::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxUndersizedPkt::TxUndersizedPkt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
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
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxUndersizedPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxUndersizedPkt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxUndersizedPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxOversizedPkt::TxOversizedPkt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
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
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxOversizedPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxOversizedPkt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxOversizedPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxFragments::TxFragments()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
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
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxFragments::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxFragments::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxFragments::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxJabber::TxJabber()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
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
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxJabber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxJabber::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxJabber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxBadFcs::TxBadFcs()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
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
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxBadFcs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxBadFcs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxBadFcs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmHistory()
    :
    dwdm_port_histories(std::make_shared<PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories>())
{
    dwdm_port_histories->parent = this;

    yang_name = "dwdm-history"; yang_parent_name = "periodic"; is_top_level_class = false; has_list_ancestor = false;
}

PerformanceManagementHistory::Global::Periodic::DwdmHistory::~DwdmHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::has_data() const
{
    return (dwdm_port_histories !=  nullptr && dwdm_port_histories->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::has_operation() const
{
    return is_set(yfilter)
	|| (dwdm_port_histories !=  nullptr && dwdm_port_histories->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::DwdmHistory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management-history/global/periodic/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceManagementHistory::Global::Periodic::DwdmHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dwdm-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::DwdmHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::DwdmHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dwdm-port-histories")
    {
        if(dwdm_port_histories == nullptr)
        {
            dwdm_port_histories = std::make_shared<PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories>();
        }
        return dwdm_port_histories;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::DwdmHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dwdm_port_histories != nullptr)
    {
        children["dwdm-port-histories"] = dwdm_port_histories;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::DwdmHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::DwdmHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dwdm-port-histories")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistories()
{

    yang_name = "dwdm-port-histories"; yang_parent_name = "dwdm-history"; is_top_level_class = false; has_list_ancestor = false;
}

PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::~DwdmPortHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::has_data() const
{
    for (std::size_t index=0; index<dwdm_port_history.size(); index++)
    {
        if(dwdm_port_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::has_operation() const
{
    for (std::size_t index=0; index<dwdm_port_history.size(); index++)
    {
        if(dwdm_port_history[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management-history/global/periodic/dwdm-history/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dwdm-port-histories";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dwdm-port-history")
    {
        for(auto const & c : dwdm_port_history)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory>();
        c->parent = this;
        dwdm_port_history.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dwdm_port_history)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dwdm-port-history")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmPortHistory()
    :
    name{YType::str, "name"}
    	,
    dwdm_minute15_history(std::make_shared<PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History>())
	,dwdm_hour24_history(std::make_shared<PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History>())
{
    dwdm_minute15_history->parent = this;
    dwdm_hour24_history->parent = this;

    yang_name = "dwdm-port-history"; yang_parent_name = "dwdm-port-histories"; is_top_level_class = false; has_list_ancestor = false;
}

PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::~DwdmPortHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::has_data() const
{
    return name.is_set
	|| (dwdm_minute15_history !=  nullptr && dwdm_minute15_history->has_data())
	|| (dwdm_hour24_history !=  nullptr && dwdm_hour24_history->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (dwdm_minute15_history !=  nullptr && dwdm_minute15_history->has_operation())
	|| (dwdm_hour24_history !=  nullptr && dwdm_hour24_history->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management-history/global/periodic/dwdm-history/dwdm-port-histories/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dwdm-port-history" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dwdm-minute15-history")
    {
        if(dwdm_minute15_history == nullptr)
        {
            dwdm_minute15_history = std::make_shared<PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History>();
        }
        return dwdm_minute15_history;
    }

    if(child_yang_name == "dwdm-hour24-history")
    {
        if(dwdm_hour24_history == nullptr)
        {
            dwdm_hour24_history = std::make_shared<PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History>();
        }
        return dwdm_hour24_history;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dwdm_minute15_history != nullptr)
    {
        children["dwdm-minute15-history"] = dwdm_minute15_history;
    }

    if(dwdm_hour24_history != nullptr)
    {
        children["dwdm-hour24-history"] = dwdm_hour24_history;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dwdm-minute15-history" || name == "dwdm-hour24-history" || name == "name")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15History()
    :
    dwdm_minute15otn_histories(std::make_shared<PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories>())
	,dwdm_minute15fec_histories(std::make_shared<PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories>())
	,dwdm_minute15_optics_histories(std::make_shared<PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories>())
{
    dwdm_minute15otn_histories->parent = this;
    dwdm_minute15fec_histories->parent = this;
    dwdm_minute15_optics_histories->parent = this;

    yang_name = "dwdm-minute15-history"; yang_parent_name = "dwdm-port-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::~DwdmMinute15History()
{
}

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::has_data() const
{
    return (dwdm_minute15otn_histories !=  nullptr && dwdm_minute15otn_histories->has_data())
	|| (dwdm_minute15fec_histories !=  nullptr && dwdm_minute15fec_histories->has_data())
	|| (dwdm_minute15_optics_histories !=  nullptr && dwdm_minute15_optics_histories->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::has_operation() const
{
    return is_set(yfilter)
	|| (dwdm_minute15otn_histories !=  nullptr && dwdm_minute15otn_histories->has_operation())
	|| (dwdm_minute15fec_histories !=  nullptr && dwdm_minute15fec_histories->has_operation())
	|| (dwdm_minute15_optics_histories !=  nullptr && dwdm_minute15_optics_histories->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dwdm-minute15-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dwdm-minute15otn-histories")
    {
        if(dwdm_minute15otn_histories == nullptr)
        {
            dwdm_minute15otn_histories = std::make_shared<PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories>();
        }
        return dwdm_minute15otn_histories;
    }

    if(child_yang_name == "dwdm-minute15fec-histories")
    {
        if(dwdm_minute15fec_histories == nullptr)
        {
            dwdm_minute15fec_histories = std::make_shared<PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories>();
        }
        return dwdm_minute15fec_histories;
    }

    if(child_yang_name == "dwdm-minute15-optics-histories")
    {
        if(dwdm_minute15_optics_histories == nullptr)
        {
            dwdm_minute15_optics_histories = std::make_shared<PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories>();
        }
        return dwdm_minute15_optics_histories;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dwdm_minute15otn_histories != nullptr)
    {
        children["dwdm-minute15otn-histories"] = dwdm_minute15otn_histories;
    }

    if(dwdm_minute15fec_histories != nullptr)
    {
        children["dwdm-minute15fec-histories"] = dwdm_minute15fec_histories;
    }

    if(dwdm_minute15_optics_histories != nullptr)
    {
        children["dwdm-minute15-optics-histories"] = dwdm_minute15_optics_histories;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dwdm-minute15otn-histories" || name == "dwdm-minute15fec-histories" || name == "dwdm-minute15-optics-histories")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistories()
{

    yang_name = "dwdm-minute15otn-histories"; yang_parent_name = "dwdm-minute15-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::~DwdmMinute15OtnHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::has_data() const
{
    for (std::size_t index=0; index<dwdm_minute15otn_history.size(); index++)
    {
        if(dwdm_minute15otn_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::has_operation() const
{
    for (std::size_t index=0; index<dwdm_minute15otn_history.size(); index++)
    {
        if(dwdm_minute15otn_history[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dwdm-minute15otn-histories";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dwdm-minute15otn-history")
    {
        for(auto const & c : dwdm_minute15otn_history)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory>();
        c->parent = this;
        dwdm_minute15otn_history.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dwdm_minute15otn_history)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dwdm-minute15otn-history")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnHistory()
    :
    number{YType::int32, "number"}
    	,
    dwdm_minute15otn_time_line_instances(std::make_shared<PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances>())
{
    dwdm_minute15otn_time_line_instances->parent = this;

    yang_name = "dwdm-minute15otn-history"; yang_parent_name = "dwdm-minute15otn-histories"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::~DwdmMinute15OtnHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::has_data() const
{
    return number.is_set
	|| (dwdm_minute15otn_time_line_instances !=  nullptr && dwdm_minute15otn_time_line_instances->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (dwdm_minute15otn_time_line_instances !=  nullptr && dwdm_minute15otn_time_line_instances->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dwdm-minute15otn-history" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dwdm-minute15otn-time-line-instances")
    {
        if(dwdm_minute15otn_time_line_instances == nullptr)
        {
            dwdm_minute15otn_time_line_instances = std::make_shared<PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances>();
        }
        return dwdm_minute15otn_time_line_instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dwdm_minute15otn_time_line_instances != nullptr)
    {
        children["dwdm-minute15otn-time-line-instances"] = dwdm_minute15otn_time_line_instances;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dwdm-minute15otn-time-line-instances" || name == "number")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstances()
{

    yang_name = "dwdm-minute15otn-time-line-instances"; yang_parent_name = "dwdm-minute15otn-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::~DwdmMinute15OtnTimeLineInstances()
{
}

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::has_data() const
{
    for (std::size_t index=0; index<dwdm_minute15otn_time_line_instance.size(); index++)
    {
        if(dwdm_minute15otn_time_line_instance[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::has_operation() const
{
    for (std::size_t index=0; index<dwdm_minute15otn_time_line_instance.size(); index++)
    {
        if(dwdm_minute15otn_time_line_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dwdm-minute15otn-time-line-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dwdm-minute15otn-time-line-instance")
    {
        for(auto const & c : dwdm_minute15otn_time_line_instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance>();
        c->parent = this;
        dwdm_minute15otn_time_line_instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dwdm_minute15otn_time_line_instance)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dwdm-minute15otn-time-line-instance")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::DwdmMinute15OtnTimeLineInstance()
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
    lbc(std::make_shared<PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::Lbc>())
	,es_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::EsNe>())
	,esr_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::EsrNe>())
	,ses_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::SesNe>())
	,sesr_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::SesrNe>())
	,uas_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::UasNe>())
	,bbe_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::BbeNe>())
	,bber_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::BberNe>())
	,fc_ne(std::make_shared<PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::FcNe>())
	,es_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::EsFe>())
	,esr_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::EsrFe>())
	,ses_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::SesFe>())
	,sesr_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::SesrFe>())
	,uas_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::UasFe>())
	,bbe_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::BbeFe>())
	,bber_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::BberFe>())
	,fc_fe(std::make_shared<PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::FcFe>())
{
    lbc->parent = this;
    es_ne->parent = this;
    esr_ne->parent = this;
    ses_ne->parent = this;
    sesr_ne->parent = this;
    uas_ne->parent = this;
    bbe_ne->parent = this;
    bber_ne->parent = this;
    fc_ne->parent = this;
    es_fe->parent = this;
    esr_fe->parent = this;
    ses_fe->parent = this;
    sesr_fe->parent = this;
    uas_fe->parent = this;
    bbe_fe->parent = this;
    bber_fe->parent = this;
    fc_fe->parent = this;

    yang_name = "dwdm-minute15otn-time-line-instance"; yang_parent_name = "dwdm-minute15otn-time-line-instances"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::~DwdmMinute15OtnTimeLineInstance()
{
}

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::has_data() const
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
	|| (es_ne !=  nullptr && es_ne->has_data())
	|| (esr_ne !=  nullptr && esr_ne->has_data())
	|| (ses_ne !=  nullptr && ses_ne->has_data())
	|| (sesr_ne !=  nullptr && sesr_ne->has_data())
	|| (uas_ne !=  nullptr && uas_ne->has_data())
	|| (bbe_ne !=  nullptr && bbe_ne->has_data())
	|| (bber_ne !=  nullptr && bber_ne->has_data())
	|| (fc_ne !=  nullptr && fc_ne->has_data())
	|| (es_fe !=  nullptr && es_fe->has_data())
	|| (esr_fe !=  nullptr && esr_fe->has_data())
	|| (ses_fe !=  nullptr && ses_fe->has_data())
	|| (sesr_fe !=  nullptr && sesr_fe->has_data())
	|| (uas_fe !=  nullptr && uas_fe->has_data())
	|| (bbe_fe !=  nullptr && bbe_fe->has_data())
	|| (bber_fe !=  nullptr && bber_fe->has_data())
	|| (fc_fe !=  nullptr && fc_fe->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::has_operation() const
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
	|| (es_ne !=  nullptr && es_ne->has_operation())
	|| (esr_ne !=  nullptr && esr_ne->has_operation())
	|| (ses_ne !=  nullptr && ses_ne->has_operation())
	|| (sesr_ne !=  nullptr && sesr_ne->has_operation())
	|| (uas_ne !=  nullptr && uas_ne->has_operation())
	|| (bbe_ne !=  nullptr && bbe_ne->has_operation())
	|| (bber_ne !=  nullptr && bber_ne->has_operation())
	|| (fc_ne !=  nullptr && fc_ne->has_operation())
	|| (es_fe !=  nullptr && es_fe->has_operation())
	|| (esr_fe !=  nullptr && esr_fe->has_operation())
	|| (ses_fe !=  nullptr && ses_fe->has_operation())
	|| (sesr_fe !=  nullptr && sesr_fe->has_operation())
	|| (uas_fe !=  nullptr && uas_fe->has_operation())
	|| (bbe_fe !=  nullptr && bbe_fe->has_operation())
	|| (bber_fe !=  nullptr && bber_fe->has_operation())
	|| (fc_fe !=  nullptr && fc_fe->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dwdm-minute15otn-time-line-instance" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lbc")
    {
        if(lbc == nullptr)
        {
            lbc = std::make_shared<PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::Lbc>();
        }
        return lbc;
    }

    if(child_yang_name == "es-ne")
    {
        if(es_ne == nullptr)
        {
            es_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::EsNe>();
        }
        return es_ne;
    }

    if(child_yang_name == "esr-ne")
    {
        if(esr_ne == nullptr)
        {
            esr_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::EsrNe>();
        }
        return esr_ne;
    }

    if(child_yang_name == "ses-ne")
    {
        if(ses_ne == nullptr)
        {
            ses_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::SesNe>();
        }
        return ses_ne;
    }

    if(child_yang_name == "sesr-ne")
    {
        if(sesr_ne == nullptr)
        {
            sesr_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::SesrNe>();
        }
        return sesr_ne;
    }

    if(child_yang_name == "uas-ne")
    {
        if(uas_ne == nullptr)
        {
            uas_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::UasNe>();
        }
        return uas_ne;
    }

    if(child_yang_name == "bbe-ne")
    {
        if(bbe_ne == nullptr)
        {
            bbe_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::BbeNe>();
        }
        return bbe_ne;
    }

    if(child_yang_name == "bber-ne")
    {
        if(bber_ne == nullptr)
        {
            bber_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::BberNe>();
        }
        return bber_ne;
    }

    if(child_yang_name == "fc-ne")
    {
        if(fc_ne == nullptr)
        {
            fc_ne = std::make_shared<PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::FcNe>();
        }
        return fc_ne;
    }

    if(child_yang_name == "es-fe")
    {
        if(es_fe == nullptr)
        {
            es_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::EsFe>();
        }
        return es_fe;
    }

    if(child_yang_name == "esr-fe")
    {
        if(esr_fe == nullptr)
        {
            esr_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::EsrFe>();
        }
        return esr_fe;
    }

    if(child_yang_name == "ses-fe")
    {
        if(ses_fe == nullptr)
        {
            ses_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::SesFe>();
        }
        return ses_fe;
    }

    if(child_yang_name == "sesr-fe")
    {
        if(sesr_fe == nullptr)
        {
            sesr_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::SesrFe>();
        }
        return sesr_fe;
    }

    if(child_yang_name == "uas-fe")
    {
        if(uas_fe == nullptr)
        {
            uas_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::UasFe>();
        }
        return uas_fe;
    }

    if(child_yang_name == "bbe-fe")
    {
        if(bbe_fe == nullptr)
        {
            bbe_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::BbeFe>();
        }
        return bbe_fe;
    }

    if(child_yang_name == "bber-fe")
    {
        if(bber_fe == nullptr)
        {
            bber_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::BberFe>();
        }
        return bber_fe;
    }

    if(child_yang_name == "fc-fe")
    {
        if(fc_fe == nullptr)
        {
            fc_fe = std::make_shared<PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::FcFe>();
        }
        return fc_fe;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lbc != nullptr)
    {
        children["lbc"] = lbc;
    }

    if(es_ne != nullptr)
    {
        children["es-ne"] = es_ne;
    }

    if(esr_ne != nullptr)
    {
        children["esr-ne"] = esr_ne;
    }

    if(ses_ne != nullptr)
    {
        children["ses-ne"] = ses_ne;
    }

    if(sesr_ne != nullptr)
    {
        children["sesr-ne"] = sesr_ne;
    }

    if(uas_ne != nullptr)
    {
        children["uas-ne"] = uas_ne;
    }

    if(bbe_ne != nullptr)
    {
        children["bbe-ne"] = bbe_ne;
    }

    if(bber_ne != nullptr)
    {
        children["bber-ne"] = bber_ne;
    }

    if(fc_ne != nullptr)
    {
        children["fc-ne"] = fc_ne;
    }

    if(es_fe != nullptr)
    {
        children["es-fe"] = es_fe;
    }

    if(esr_fe != nullptr)
    {
        children["esr-fe"] = esr_fe;
    }

    if(ses_fe != nullptr)
    {
        children["ses-fe"] = ses_fe;
    }

    if(sesr_fe != nullptr)
    {
        children["sesr-fe"] = sesr_fe;
    }

    if(uas_fe != nullptr)
    {
        children["uas-fe"] = uas_fe;
    }

    if(bbe_fe != nullptr)
    {
        children["bbe-fe"] = bbe_fe;
    }

    if(bber_fe != nullptr)
    {
        children["bber-fe"] = bber_fe;
    }

    if(fc_fe != nullptr)
    {
        children["fc-fe"] = fc_fe;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lbc" || name == "es-ne" || name == "esr-ne" || name == "ses-ne" || name == "sesr-ne" || name == "uas-ne" || name == "bbe-ne" || name == "bber-ne" || name == "fc-ne" || name == "es-fe" || name == "esr-fe" || name == "ses-fe" || name == "sesr-fe" || name == "uas-fe" || name == "bbe-fe" || name == "bber-fe" || name == "fc-fe" || name == "number" || name == "index" || name == "valid" || name == "timestamp" || name == "last-clear-time" || name == "last-clear15-min-time" || name == "last-clear30-sec-time" || name == "last-clear24-hr-time" || name == "sec30-support")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::Lbc::Lbc()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "lbc"; yang_parent_name = "dwdm-minute15otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::Lbc::~Lbc()
{
}

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::Lbc::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::Lbc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::Lbc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lbc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::Lbc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::Lbc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::Lbc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::Lbc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::Lbc::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::Lbc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::EsNe::EsNe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "es-ne"; yang_parent_name = "dwdm-minute15otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::EsNe::~EsNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::EsNe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::EsNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::EsNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::EsNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::EsNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::EsNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::EsNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::EsNe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::EsNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::EsrNe::EsrNe()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "esr-ne"; yang_parent_name = "dwdm-minute15otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::EsrNe::~EsrNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::EsrNe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::EsrNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::EsrNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esr-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::EsrNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::EsrNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::EsrNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::EsrNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::EsrNe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::EsrNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::SesNe::SesNe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "ses-ne"; yang_parent_name = "dwdm-minute15otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::SesNe::~SesNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::SesNe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::SesNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::SesNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ses-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::SesNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::SesNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::SesNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::SesNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::SesNe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::SesNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::SesrNe::SesrNe()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "sesr-ne"; yang_parent_name = "dwdm-minute15otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::SesrNe::~SesrNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::SesrNe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::SesrNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::SesrNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sesr-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::SesrNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::SesrNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::SesrNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::SesrNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::SesrNe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::SesrNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::UasNe::UasNe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "uas-ne"; yang_parent_name = "dwdm-minute15otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::UasNe::~UasNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::UasNe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::UasNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::UasNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uas-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::UasNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::UasNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::UasNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::UasNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::UasNe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::UasNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::BbeNe::BbeNe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "bbe-ne"; yang_parent_name = "dwdm-minute15otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::BbeNe::~BbeNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::BbeNe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::BbeNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::BbeNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bbe-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::BbeNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::BbeNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::BbeNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::BbeNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::BbeNe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::BbeNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::BberNe::BberNe()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "bber-ne"; yang_parent_name = "dwdm-minute15otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::BberNe::~BberNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::BberNe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::BberNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::BberNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bber-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::BberNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::BberNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::BberNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::BberNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::BberNe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::BberNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::FcNe::FcNe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "fc-ne"; yang_parent_name = "dwdm-minute15otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::FcNe::~FcNe()
{
}

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::FcNe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::FcNe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::FcNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fc-ne";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::FcNe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::FcNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::FcNe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::FcNe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::FcNe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::FcNe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::EsFe::EsFe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "es-fe"; yang_parent_name = "dwdm-minute15otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::EsFe::~EsFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::EsFe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::EsFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::EsFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::EsFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::EsFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::EsFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::EsFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::EsFe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::EsFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::EsrFe::EsrFe()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "esr-fe"; yang_parent_name = "dwdm-minute15otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::EsrFe::~EsrFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::EsrFe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::EsrFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::EsrFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esr-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::EsrFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::EsrFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::EsrFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::EsrFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::EsrFe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::EsrFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::SesFe::SesFe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "ses-fe"; yang_parent_name = "dwdm-minute15otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::SesFe::~SesFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::SesFe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::SesFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::SesFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ses-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::SesFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::SesFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::SesFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::SesFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::SesFe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::SesFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::SesrFe::SesrFe()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "sesr-fe"; yang_parent_name = "dwdm-minute15otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::SesrFe::~SesrFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::SesrFe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::SesrFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::SesrFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sesr-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::SesrFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::SesrFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::SesrFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::SesrFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::SesrFe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::SesrFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::UasFe::UasFe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "uas-fe"; yang_parent_name = "dwdm-minute15otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::UasFe::~UasFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::UasFe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::UasFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::UasFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uas-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::UasFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::UasFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::UasFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::UasFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::UasFe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::UasFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::BbeFe::BbeFe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "bbe-fe"; yang_parent_name = "dwdm-minute15otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::BbeFe::~BbeFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::BbeFe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::BbeFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::BbeFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bbe-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::BbeFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::BbeFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::BbeFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::BbeFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::BbeFe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::BbeFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::BberFe::BberFe()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "bber-fe"; yang_parent_name = "dwdm-minute15otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::BberFe::~BberFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::BberFe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::BberFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::BberFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bber-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::BberFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::BberFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::BberFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::BberFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::BberFe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::BberFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::FcFe::FcFe()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "fc-fe"; yang_parent_name = "dwdm-minute15otn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::FcFe::~FcFe()
{
}

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::FcFe::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::FcFe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::FcFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fc-fe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::FcFe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::FcFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::FcFe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::FcFe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::FcFe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::FcFe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistories()
{

    yang_name = "dwdm-minute15fec-histories"; yang_parent_name = "dwdm-minute15-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::~DwdmMinute15FecHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::has_data() const
{
    for (std::size_t index=0; index<dwdm_minute15fec_history.size(); index++)
    {
        if(dwdm_minute15fec_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::has_operation() const
{
    for (std::size_t index=0; index<dwdm_minute15fec_history.size(); index++)
    {
        if(dwdm_minute15fec_history[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dwdm-minute15fec-histories";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dwdm-minute15fec-history")
    {
        for(auto const & c : dwdm_minute15fec_history)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory>();
        c->parent = this;
        dwdm_minute15fec_history.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dwdm_minute15fec_history)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dwdm-minute15fec-history")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecHistory()
    :
    number{YType::int32, "number"}
    	,
    dwdm_minute15fec_time_line_instances(std::make_shared<PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances>())
{
    dwdm_minute15fec_time_line_instances->parent = this;

    yang_name = "dwdm-minute15fec-history"; yang_parent_name = "dwdm-minute15fec-histories"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::~DwdmMinute15FecHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::has_data() const
{
    return number.is_set
	|| (dwdm_minute15fec_time_line_instances !=  nullptr && dwdm_minute15fec_time_line_instances->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (dwdm_minute15fec_time_line_instances !=  nullptr && dwdm_minute15fec_time_line_instances->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dwdm-minute15fec-history" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dwdm-minute15fec-time-line-instances")
    {
        if(dwdm_minute15fec_time_line_instances == nullptr)
        {
            dwdm_minute15fec_time_line_instances = std::make_shared<PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances>();
        }
        return dwdm_minute15fec_time_line_instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dwdm_minute15fec_time_line_instances != nullptr)
    {
        children["dwdm-minute15fec-time-line-instances"] = dwdm_minute15fec_time_line_instances;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dwdm-minute15fec-time-line-instances" || name == "number")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances::DwdmMinute15FecTimeLineInstances()
{

    yang_name = "dwdm-minute15fec-time-line-instances"; yang_parent_name = "dwdm-minute15fec-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances::~DwdmMinute15FecTimeLineInstances()
{
}

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances::has_data() const
{
    for (std::size_t index=0; index<dwdm_minute15fec_time_line_instance.size(); index++)
    {
        if(dwdm_minute15fec_time_line_instance[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances::has_operation() const
{
    for (std::size_t index=0; index<dwdm_minute15fec_time_line_instance.size(); index++)
    {
        if(dwdm_minute15fec_time_line_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dwdm-minute15fec-time-line-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dwdm-minute15fec-time-line-instance")
    {
        for(auto const & c : dwdm_minute15fec_time_line_instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances::DwdmMinute15FecTimeLineInstance>();
        c->parent = this;
        dwdm_minute15fec_time_line_instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dwdm_minute15fec_time_line_instance)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dwdm-minute15fec-time-line-instance")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances::DwdmMinute15FecTimeLineInstance::DwdmMinute15FecTimeLineInstance()
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
    ec_bits(std::make_shared<PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances::DwdmMinute15FecTimeLineInstance::EcBits>())
	,uc_words(std::make_shared<PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances::DwdmMinute15FecTimeLineInstance::UcWords>())
	,pre_fec_ber(std::make_shared<PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances::DwdmMinute15FecTimeLineInstance::PreFecBer>())
	,post_fec_ber(std::make_shared<PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances::DwdmMinute15FecTimeLineInstance::PostFecBer>())
	,q(std::make_shared<PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances::DwdmMinute15FecTimeLineInstance::Q>())
	,qmargin(std::make_shared<PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances::DwdmMinute15FecTimeLineInstance::Qmargin>())
{
    ec_bits->parent = this;
    uc_words->parent = this;
    pre_fec_ber->parent = this;
    post_fec_ber->parent = this;
    q->parent = this;
    qmargin->parent = this;

    yang_name = "dwdm-minute15fec-time-line-instance"; yang_parent_name = "dwdm-minute15fec-time-line-instances"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances::DwdmMinute15FecTimeLineInstance::~DwdmMinute15FecTimeLineInstance()
{
}

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances::DwdmMinute15FecTimeLineInstance::has_data() const
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

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances::DwdmMinute15FecTimeLineInstance::has_operation() const
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

std::string PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances::DwdmMinute15FecTimeLineInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dwdm-minute15fec-time-line-instance" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances::DwdmMinute15FecTimeLineInstance::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances::DwdmMinute15FecTimeLineInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ec-bits")
    {
        if(ec_bits == nullptr)
        {
            ec_bits = std::make_shared<PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances::DwdmMinute15FecTimeLineInstance::EcBits>();
        }
        return ec_bits;
    }

    if(child_yang_name == "uc-words")
    {
        if(uc_words == nullptr)
        {
            uc_words = std::make_shared<PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances::DwdmMinute15FecTimeLineInstance::UcWords>();
        }
        return uc_words;
    }

    if(child_yang_name == "pre-fec-ber")
    {
        if(pre_fec_ber == nullptr)
        {
            pre_fec_ber = std::make_shared<PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances::DwdmMinute15FecTimeLineInstance::PreFecBer>();
        }
        return pre_fec_ber;
    }

    if(child_yang_name == "post-fec-ber")
    {
        if(post_fec_ber == nullptr)
        {
            post_fec_ber = std::make_shared<PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances::DwdmMinute15FecTimeLineInstance::PostFecBer>();
        }
        return post_fec_ber;
    }

    if(child_yang_name == "q")
    {
        if(q == nullptr)
        {
            q = std::make_shared<PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances::DwdmMinute15FecTimeLineInstance::Q>();
        }
        return q;
    }

    if(child_yang_name == "qmargin")
    {
        if(qmargin == nullptr)
        {
            qmargin = std::make_shared<PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances::DwdmMinute15FecTimeLineInstance::Qmargin>();
        }
        return qmargin;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances::DwdmMinute15FecTimeLineInstance::get_children() const
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

void PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances::DwdmMinute15FecTimeLineInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances::DwdmMinute15FecTimeLineInstance::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances::DwdmMinute15FecTimeLineInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ec-bits" || name == "uc-words" || name == "pre-fec-ber" || name == "post-fec-ber" || name == "q" || name == "qmargin" || name == "number" || name == "index" || name == "valid" || name == "timestamp" || name == "last-clear-time" || name == "last-clear15-min-time" || name == "last-clear30-sec-time" || name == "last-clear24-hr-time" || name == "sec30-support")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances::DwdmMinute15FecTimeLineInstance::EcBits::EcBits()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ec-bits"; yang_parent_name = "dwdm-minute15fec-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances::DwdmMinute15FecTimeLineInstance::EcBits::~EcBits()
{
}

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances::DwdmMinute15FecTimeLineInstance::EcBits::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances::DwdmMinute15FecTimeLineInstance::EcBits::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances::DwdmMinute15FecTimeLineInstance::EcBits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ec-bits";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances::DwdmMinute15FecTimeLineInstance::EcBits::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances::DwdmMinute15FecTimeLineInstance::EcBits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances::DwdmMinute15FecTimeLineInstance::EcBits::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances::DwdmMinute15FecTimeLineInstance::EcBits::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances::DwdmMinute15FecTimeLineInstance::EcBits::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances::DwdmMinute15FecTimeLineInstance::EcBits::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}


}
}

