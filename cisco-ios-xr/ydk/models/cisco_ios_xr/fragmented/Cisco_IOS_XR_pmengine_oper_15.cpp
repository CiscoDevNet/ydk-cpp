
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_pmengine_oper_15.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_pmengine_oper {

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::LineESs::LineESs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "line-e-ss"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::LineESs::~LineESs()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::LineESs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::LineESs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::LineESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-e-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::LineESs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::LineESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::LineESs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::LineESs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::LineESs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::LineESs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::LineFcLs::LineFcLs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "line-fc-ls"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::LineFcLs::~LineFcLs()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::LineFcLs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::LineFcLs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::LineFcLs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-fc-ls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::LineFcLs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::LineFcLs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::LineFcLs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::LineFcLs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::LineFcLs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::LineFcLs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::LineSeSs::LineSeSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "line-se-ss"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::LineSeSs::~LineSeSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::LineSeSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::LineSeSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::LineSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-se-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::LineSeSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::LineSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::LineSeSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::LineSeSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::LineSeSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::LineSeSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::LineUaSs::LineUaSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "line-ua-ss"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::LineUaSs::~LineUaSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::LineUaSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::LineUaSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::LineUaSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-ua-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::LineUaSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::LineUaSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::LineUaSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::LineUaSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::LineUaSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::LineUaSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Section::Section()
    :
    section_status{YType::int32, "section-status"}
    	,
    section_c_vs(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Section::SectionCVs>())
	,section_e_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Section::SectionESs>())
	,section_se_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Section::SectionSeSs>())
	,section_sef_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Section::SectionSefSs>())
{
    section_c_vs->parent = this;
    section_e_ss->parent = this;
    section_se_ss->parent = this;
    section_sef_ss->parent = this;

    yang_name = "section"; yang_parent_name = "sonet-minute15ocn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Section::~Section()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Section::has_data() const
{
    return section_status.is_set
	|| (section_c_vs !=  nullptr && section_c_vs->has_data())
	|| (section_e_ss !=  nullptr && section_e_ss->has_data())
	|| (section_se_ss !=  nullptr && section_se_ss->has_data())
	|| (section_sef_ss !=  nullptr && section_sef_ss->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Section::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(section_status.yfilter)
	|| (section_c_vs !=  nullptr && section_c_vs->has_operation())
	|| (section_e_ss !=  nullptr && section_e_ss->has_operation())
	|| (section_se_ss !=  nullptr && section_se_ss->has_operation())
	|| (section_sef_ss !=  nullptr && section_sef_ss->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Section::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Section::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (section_status.is_set || is_set(section_status.yfilter)) leaf_name_data.push_back(section_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Section::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "section-c-vs")
    {
        if(section_c_vs == nullptr)
        {
            section_c_vs = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Section::SectionCVs>();
        }
        return section_c_vs;
    }

    if(child_yang_name == "section-e-ss")
    {
        if(section_e_ss == nullptr)
        {
            section_e_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Section::SectionESs>();
        }
        return section_e_ss;
    }

    if(child_yang_name == "section-se-ss")
    {
        if(section_se_ss == nullptr)
        {
            section_se_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Section::SectionSeSs>();
        }
        return section_se_ss;
    }

    if(child_yang_name == "section-sef-ss")
    {
        if(section_sef_ss == nullptr)
        {
            section_sef_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Section::SectionSefSs>();
        }
        return section_sef_ss;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Section::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(section_c_vs != nullptr)
    {
        children["section-c-vs"] = section_c_vs;
    }

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

    return children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Section::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "section-status")
    {
        section_status = value;
        section_status.value_namespace = name_space;
        section_status.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Section::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "section-status")
    {
        section_status.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Section::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "section-c-vs" || name == "section-e-ss" || name == "section-se-ss" || name == "section-sef-ss" || name == "section-status")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Section::SectionCVs::SectionCVs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "section-c-vs"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Section::SectionCVs::~SectionCVs()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Section::SectionCVs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Section::SectionCVs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Section::SectionCVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-c-vs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Section::SectionCVs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Section::SectionCVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Section::SectionCVs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Section::SectionCVs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Section::SectionCVs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Section::SectionCVs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Section::SectionESs::SectionESs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "section-e-ss"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Section::SectionESs::~SectionESs()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Section::SectionESs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Section::SectionESs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Section::SectionESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-e-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Section::SectionESs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Section::SectionESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Section::SectionESs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Section::SectionESs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Section::SectionESs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Section::SectionESs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Section::SectionSeSs::SectionSeSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "section-se-ss"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Section::SectionSeSs::~SectionSeSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Section::SectionSeSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Section::SectionSeSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Section::SectionSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-se-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Section::SectionSeSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Section::SectionSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Section::SectionSeSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Section::SectionSeSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Section::SectionSeSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Section::SectionSeSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Section::SectionSefSs::SectionSefSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "section-sef-ss"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Section::SectionSefSs::~SectionSefSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Section::SectionSefSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Section::SectionSefSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Section::SectionSefSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-sef-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Section::SectionSefSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Section::SectionSefSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Section::SectionSefSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Section::SectionSefSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Section::SectionSefSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Section::SectionSefSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistories()
{

    yang_name = "sonet-minute15-path-histories"; yang_parent_name = "sonet-minute15-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::~SonetMinute15PathHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::has_data() const
{
    for (std::size_t index=0; index<sonet_minute15_path_history.size(); index++)
    {
        if(sonet_minute15_path_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::has_operation() const
{
    for (std::size_t index=0; index<sonet_minute15_path_history.size(); index++)
    {
        if(sonet_minute15_path_history[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-minute15-path-histories";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-minute15-path-history")
    {
        for(auto const & c : sonet_minute15_path_history)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory>();
        c->parent = this;
        sonet_minute15_path_history.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sonet_minute15_path_history)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonet-minute15-path-history")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathHistory()
    :
    number{YType::int32, "number"}
    	,
    sonet_minute15_path_time_line_instances(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances>())
{
    sonet_minute15_path_time_line_instances->parent = this;

    yang_name = "sonet-minute15-path-history"; yang_parent_name = "sonet-minute15-path-histories"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::~SonetMinute15PathHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::has_data() const
{
    return number.is_set
	|| (sonet_minute15_path_time_line_instances !=  nullptr && sonet_minute15_path_time_line_instances->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (sonet_minute15_path_time_line_instances !=  nullptr && sonet_minute15_path_time_line_instances->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-minute15-path-history" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-minute15-path-time-line-instances")
    {
        if(sonet_minute15_path_time_line_instances == nullptr)
        {
            sonet_minute15_path_time_line_instances = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances>();
        }
        return sonet_minute15_path_time_line_instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sonet_minute15_path_time_line_instances != nullptr)
    {
        children["sonet-minute15-path-time-line-instances"] = sonet_minute15_path_time_line_instances;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonet-minute15-path-time-line-instances" || name == "number")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstances()
{

    yang_name = "sonet-minute15-path-time-line-instances"; yang_parent_name = "sonet-minute15-path-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::~SonetMinute15PathTimeLineInstances()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::has_data() const
{
    for (std::size_t index=0; index<sonet_minute15_path_time_line_instance.size(); index++)
    {
        if(sonet_minute15_path_time_line_instance[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::has_operation() const
{
    for (std::size_t index=0; index<sonet_minute15_path_time_line_instance.size(); index++)
    {
        if(sonet_minute15_path_time_line_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-minute15-path-time-line-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-minute15-path-time-line-instance")
    {
        for(auto const & c : sonet_minute15_path_time_line_instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance>();
        c->parent = this;
        sonet_minute15_path_time_line_instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sonet_minute15_path_time_line_instance)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonet-minute15-path-time-line-instance")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::SonetMinute15PathTimeLineInstance()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    last_clear_time{YType::str, "last-clear-time"},
    timestamp{YType::str, "timestamp"},
    valid{YType::boolean, "valid"}
    	,
    fe_path(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::FePath>())
	,path(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path>())
{
    fe_path->parent = this;
    path->parent = this;

    yang_name = "sonet-minute15-path-time-line-instance"; yang_parent_name = "sonet-minute15-path-time-line-instances"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::~SonetMinute15PathTimeLineInstance()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::has_data() const
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

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::has_operation() const
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

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-minute15-path-time-line-instance" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fe-path")
    {
        if(fe_path == nullptr)
        {
            fe_path = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::FePath>();
        }
        return fe_path;
    }

    if(child_yang_name == "path")
    {
        if(path == nullptr)
        {
            path = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path>();
        }
        return path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::get_children() const
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

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fe-path" || name == "path" || name == "number" || name == "index" || name == "last-clear15-min-time" || name == "last-clear24-hr-time" || name == "last-clear-time" || name == "timestamp" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::FePath::FePath()
    :
    far_end_path_c_vs{YType::uint32, "far-end-path-c-vs"},
    far_end_path_e_ss{YType::uint32, "far-end-path-e-ss"},
    far_end_path_se_ss{YType::uint32, "far-end-path-se-ss"},
    far_end_path_ua_ss{YType::uint32, "far-end-path-ua-ss"}
{

    yang_name = "fe-path"; yang_parent_name = "sonet-minute15-path-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::FePath::~FePath()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::FePath::has_data() const
{
    return far_end_path_c_vs.is_set
	|| far_end_path_e_ss.is_set
	|| far_end_path_se_ss.is_set
	|| far_end_path_ua_ss.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::FePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(far_end_path_c_vs.yfilter)
	|| ydk::is_set(far_end_path_e_ss.yfilter)
	|| ydk::is_set(far_end_path_se_ss.yfilter)
	|| ydk::is_set(far_end_path_ua_ss.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::FePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fe-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::FePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (far_end_path_c_vs.is_set || is_set(far_end_path_c_vs.yfilter)) leaf_name_data.push_back(far_end_path_c_vs.get_name_leafdata());
    if (far_end_path_e_ss.is_set || is_set(far_end_path_e_ss.yfilter)) leaf_name_data.push_back(far_end_path_e_ss.get_name_leafdata());
    if (far_end_path_se_ss.is_set || is_set(far_end_path_se_ss.yfilter)) leaf_name_data.push_back(far_end_path_se_ss.get_name_leafdata());
    if (far_end_path_ua_ss.is_set || is_set(far_end_path_ua_ss.yfilter)) leaf_name_data.push_back(far_end_path_ua_ss.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::FePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::FePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::FePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::FePath::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::FePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "far-end-path-c-vs" || name == "far-end-path-e-ss" || name == "far-end-path-se-ss" || name == "far-end-path-ua-ss")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::Path()
    :
    path_status{YType::int32, "path-status"},
    path_width{YType::enumeration, "path-width"}
    	,
    path_c_vs(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathCVs>())
	,path_e_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathESs>())
	,path_se_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathSeSs>())
	,path_ua_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathUaSs>())
{
    path_c_vs->parent = this;
    path_e_ss->parent = this;
    path_se_ss->parent = this;
    path_ua_ss->parent = this;

    yang_name = "path"; yang_parent_name = "sonet-minute15-path-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::~Path()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::has_data() const
{
    return path_status.is_set
	|| path_width.is_set
	|| (path_c_vs !=  nullptr && path_c_vs->has_data())
	|| (path_e_ss !=  nullptr && path_e_ss->has_data())
	|| (path_se_ss !=  nullptr && path_se_ss->has_data())
	|| (path_ua_ss !=  nullptr && path_ua_ss->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_status.yfilter)
	|| ydk::is_set(path_width.yfilter)
	|| (path_c_vs !=  nullptr && path_c_vs->has_operation())
	|| (path_e_ss !=  nullptr && path_e_ss->has_operation())
	|| (path_se_ss !=  nullptr && path_se_ss->has_operation())
	|| (path_ua_ss !=  nullptr && path_ua_ss->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_status.is_set || is_set(path_status.yfilter)) leaf_name_data.push_back(path_status.get_name_leafdata());
    if (path_width.is_set || is_set(path_width.yfilter)) leaf_name_data.push_back(path_width.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-c-vs")
    {
        if(path_c_vs == nullptr)
        {
            path_c_vs = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathCVs>();
        }
        return path_c_vs;
    }

    if(child_yang_name == "path-e-ss")
    {
        if(path_e_ss == nullptr)
        {
            path_e_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathESs>();
        }
        return path_e_ss;
    }

    if(child_yang_name == "path-se-ss")
    {
        if(path_se_ss == nullptr)
        {
            path_se_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathSeSs>();
        }
        return path_se_ss;
    }

    if(child_yang_name == "path-ua-ss")
    {
        if(path_ua_ss == nullptr)
        {
            path_ua_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathUaSs>();
        }
        return path_ua_ss;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(path_c_vs != nullptr)
    {
        children["path-c-vs"] = path_c_vs;
    }

    if(path_e_ss != nullptr)
    {
        children["path-e-ss"] = path_e_ss;
    }

    if(path_se_ss != nullptr)
    {
        children["path-se-ss"] = path_se_ss;
    }

    if(path_ua_ss != nullptr)
    {
        children["path-ua-ss"] = path_ua_ss;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-status")
    {
        path_status = value;
        path_status.value_namespace = name_space;
        path_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-width")
    {
        path_width = value;
        path_width.value_namespace = name_space;
        path_width.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-status")
    {
        path_status.yfilter = yfilter;
    }
    if(value_path == "path-width")
    {
        path_width.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-c-vs" || name == "path-e-ss" || name == "path-se-ss" || name == "path-ua-ss" || name == "path-status" || name == "path-width")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathCVs::PathCVs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "path-c-vs"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathCVs::~PathCVs()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathCVs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathCVs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathCVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-c-vs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathCVs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathCVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathCVs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathCVs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathCVs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathCVs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathESs::PathESs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "path-e-ss"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathESs::~PathESs()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathESs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathESs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-e-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathESs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathESs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathESs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathESs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathESs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathSeSs::PathSeSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "path-se-ss"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathSeSs::~PathSeSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathSeSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathSeSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-se-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathSeSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathSeSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathSeSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathSeSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathSeSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathUaSs::PathUaSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "path-ua-ss"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathUaSs::~PathUaSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathUaSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathUaSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathUaSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-ua-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathUaSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathUaSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathUaSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathUaSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathUaSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathUaSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmHistory()
    :
    stm_port_histories(std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories>())
{
    stm_port_histories->parent = this;

    yang_name = "stm-history"; yang_parent_name = "periodic"; is_top_level_class = false; has_list_ancestor = false;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::~StmHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::has_data() const
{
    return (stm_port_histories !=  nullptr && stm_port_histories->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::has_operation() const
{
    return is_set(yfilter)
	|| (stm_port_histories !=  nullptr && stm_port_histories->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::StmHistory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management-history/global/periodic/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceManagementHistory::Global::Periodic::StmHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stm-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StmHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StmHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stm-port-histories")
    {
        if(stm_port_histories == nullptr)
        {
            stm_port_histories = std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories>();
        }
        return stm_port_histories;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StmHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(stm_port_histories != nullptr)
    {
        children["stm-port-histories"] = stm_port_histories;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::StmHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::StmHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stm-port-histories")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistories()
{

    yang_name = "stm-port-histories"; yang_parent_name = "stm-history"; is_top_level_class = false; has_list_ancestor = false;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::~StmPortHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::has_data() const
{
    for (std::size_t index=0; index<stm_port_history.size(); index++)
    {
        if(stm_port_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::has_operation() const
{
    for (std::size_t index=0; index<stm_port_history.size(); index++)
    {
        if(stm_port_history[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management-history/global/periodic/stm-history/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stm-port-histories";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stm-port-history")
    {
        for(auto const & c : stm_port_history)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory>();
        c->parent = this;
        stm_port_history.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : stm_port_history)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stm-port-history")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmPortHistory()
    :
    name{YType::str, "name"}
    	,
    stm_hour24_history(std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History>())
	,stm_minute15_history(std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History>())
{
    stm_hour24_history->parent = this;
    stm_minute15_history->parent = this;

    yang_name = "stm-port-history"; yang_parent_name = "stm-port-histories"; is_top_level_class = false; has_list_ancestor = false;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::~StmPortHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::has_data() const
{
    return name.is_set
	|| (stm_hour24_history !=  nullptr && stm_hour24_history->has_data())
	|| (stm_minute15_history !=  nullptr && stm_minute15_history->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (stm_hour24_history !=  nullptr && stm_hour24_history->has_operation())
	|| (stm_minute15_history !=  nullptr && stm_minute15_history->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management-history/global/periodic/stm-history/stm-port-histories/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stm-port-history" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stm-hour24-history")
    {
        if(stm_hour24_history == nullptr)
        {
            stm_hour24_history = std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History>();
        }
        return stm_hour24_history;
    }

    if(child_yang_name == "stm-minute15-history")
    {
        if(stm_minute15_history == nullptr)
        {
            stm_minute15_history = std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History>();
        }
        return stm_minute15_history;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(stm_hour24_history != nullptr)
    {
        children["stm-hour24-history"] = stm_hour24_history;
    }

    if(stm_minute15_history != nullptr)
    {
        children["stm-minute15-history"] = stm_minute15_history;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stm-hour24-history" || name == "stm-minute15-history" || name == "name")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24History()
    :
    stm_hour24stm_histories(std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories>())
{
    stm_hour24stm_histories->parent = this;

    yang_name = "stm-hour24-history"; yang_parent_name = "stm-port-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::~StmHour24History()
{
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::has_data() const
{
    return (stm_hour24stm_histories !=  nullptr && stm_hour24stm_histories->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::has_operation() const
{
    return is_set(yfilter)
	|| (stm_hour24stm_histories !=  nullptr && stm_hour24stm_histories->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stm-hour24-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stm-hour24stm-histories")
    {
        if(stm_hour24stm_histories == nullptr)
        {
            stm_hour24stm_histories = std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories>();
        }
        return stm_hour24stm_histories;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(stm_hour24stm_histories != nullptr)
    {
        children["stm-hour24stm-histories"] = stm_hour24stm_histories;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stm-hour24stm-histories")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistories()
{

    yang_name = "stm-hour24stm-histories"; yang_parent_name = "stm-hour24-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::~StmHour24StmHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::has_data() const
{
    for (std::size_t index=0; index<stm_hour24stm_history.size(); index++)
    {
        if(stm_hour24stm_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::has_operation() const
{
    for (std::size_t index=0; index<stm_hour24stm_history.size(); index++)
    {
        if(stm_hour24stm_history[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stm-hour24stm-histories";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stm-hour24stm-history")
    {
        for(auto const & c : stm_hour24stm_history)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory>();
        c->parent = this;
        stm_hour24stm_history.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : stm_hour24stm_history)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stm-hour24stm-history")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmHistory()
    :
    number{YType::int32, "number"}
    	,
    stm_hour24stm_time_line_instances(std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances>())
{
    stm_hour24stm_time_line_instances->parent = this;

    yang_name = "stm-hour24stm-history"; yang_parent_name = "stm-hour24stm-histories"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::~StmHour24StmHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::has_data() const
{
    return number.is_set
	|| (stm_hour24stm_time_line_instances !=  nullptr && stm_hour24stm_time_line_instances->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (stm_hour24stm_time_line_instances !=  nullptr && stm_hour24stm_time_line_instances->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stm-hour24stm-history" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stm-hour24stm-time-line-instances")
    {
        if(stm_hour24stm_time_line_instances == nullptr)
        {
            stm_hour24stm_time_line_instances = std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances>();
        }
        return stm_hour24stm_time_line_instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(stm_hour24stm_time_line_instances != nullptr)
    {
        children["stm-hour24stm-time-line-instances"] = stm_hour24stm_time_line_instances;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stm-hour24stm-time-line-instances" || name == "number")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstances()
{

    yang_name = "stm-hour24stm-time-line-instances"; yang_parent_name = "stm-hour24stm-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::~StmHour24StmTimeLineInstances()
{
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::has_data() const
{
    for (std::size_t index=0; index<stm_hour24stm_time_line_instance.size(); index++)
    {
        if(stm_hour24stm_time_line_instance[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::has_operation() const
{
    for (std::size_t index=0; index<stm_hour24stm_time_line_instance.size(); index++)
    {
        if(stm_hour24stm_time_line_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stm-hour24stm-time-line-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stm-hour24stm-time-line-instance")
    {
        for(auto const & c : stm_hour24stm_time_line_instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance>();
        c->parent = this;
        stm_hour24stm_time_line_instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : stm_hour24stm_time_line_instance)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stm-hour24stm-time-line-instance")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::StmHour24StmTimeLineInstance()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    last_clear_time{YType::str, "last-clear-time"},
    timestamp{YType::str, "timestamp"},
    valid{YType::boolean, "valid"}
    	,
    fe_line(std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine>())
	,line(std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line>())
	,section(std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section>())
{
    fe_line->parent = this;
    line->parent = this;
    section->parent = this;

    yang_name = "stm-hour24stm-time-line-instance"; yang_parent_name = "stm-hour24stm-time-line-instances"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::~StmHour24StmTimeLineInstance()
{
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::has_data() const
{
    return number.is_set
	|| index_.is_set
	|| last_clear15_min_time.is_set
	|| last_clear24_hr_time.is_set
	|| last_clear_time.is_set
	|| timestamp.is_set
	|| valid.is_set
	|| (fe_line !=  nullptr && fe_line->has_data())
	|| (line !=  nullptr && line->has_data())
	|| (section !=  nullptr && section->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(last_clear15_min_time.yfilter)
	|| ydk::is_set(last_clear24_hr_time.yfilter)
	|| ydk::is_set(last_clear_time.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(valid.yfilter)
	|| (fe_line !=  nullptr && fe_line->has_operation())
	|| (line !=  nullptr && line->has_operation())
	|| (section !=  nullptr && section->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stm-hour24stm-time-line-instance" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fe-line")
    {
        if(fe_line == nullptr)
        {
            fe_line = std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine>();
        }
        return fe_line;
    }

    if(child_yang_name == "line")
    {
        if(line == nullptr)
        {
            line = std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line>();
        }
        return line;
    }

    if(child_yang_name == "section")
    {
        if(section == nullptr)
        {
            section = std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section>();
        }
        return section;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fe_line != nullptr)
    {
        children["fe-line"] = fe_line;
    }

    if(line != nullptr)
    {
        children["line"] = line;
    }

    if(section != nullptr)
    {
        children["section"] = section;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fe-line" || name == "line" || name == "section" || name == "number" || name == "index" || name == "last-clear15-min-time" || name == "last-clear24-hr-time" || name == "last-clear-time" || name == "timestamp" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FeLine()
    :
    far_end_line_bbe_rs(std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineBbeRs>())
	,far_end_line_e_bs(std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineEBs>())
	,far_end_line_e_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineESs>())
	,far_end_line_ebb_es(std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineEbbEs>())
	,far_end_line_es_rs(std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineEsRs>())
	,far_end_line_se_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineSeSs>())
	,far_end_line_ses_rs(std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineSesRs>())
	,far_end_line_ua_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineUaSs>())
{
    far_end_line_bbe_rs->parent = this;
    far_end_line_e_bs->parent = this;
    far_end_line_e_ss->parent = this;
    far_end_line_ebb_es->parent = this;
    far_end_line_es_rs->parent = this;
    far_end_line_se_ss->parent = this;
    far_end_line_ses_rs->parent = this;
    far_end_line_ua_ss->parent = this;

    yang_name = "fe-line"; yang_parent_name = "stm-hour24stm-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::~FeLine()
{
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::has_data() const
{
    return (far_end_line_bbe_rs !=  nullptr && far_end_line_bbe_rs->has_data())
	|| (far_end_line_e_bs !=  nullptr && far_end_line_e_bs->has_data())
	|| (far_end_line_e_ss !=  nullptr && far_end_line_e_ss->has_data())
	|| (far_end_line_ebb_es !=  nullptr && far_end_line_ebb_es->has_data())
	|| (far_end_line_es_rs !=  nullptr && far_end_line_es_rs->has_data())
	|| (far_end_line_se_ss !=  nullptr && far_end_line_se_ss->has_data())
	|| (far_end_line_ses_rs !=  nullptr && far_end_line_ses_rs->has_data())
	|| (far_end_line_ua_ss !=  nullptr && far_end_line_ua_ss->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::has_operation() const
{
    return is_set(yfilter)
	|| (far_end_line_bbe_rs !=  nullptr && far_end_line_bbe_rs->has_operation())
	|| (far_end_line_e_bs !=  nullptr && far_end_line_e_bs->has_operation())
	|| (far_end_line_e_ss !=  nullptr && far_end_line_e_ss->has_operation())
	|| (far_end_line_ebb_es !=  nullptr && far_end_line_ebb_es->has_operation())
	|| (far_end_line_es_rs !=  nullptr && far_end_line_es_rs->has_operation())
	|| (far_end_line_se_ss !=  nullptr && far_end_line_se_ss->has_operation())
	|| (far_end_line_ses_rs !=  nullptr && far_end_line_ses_rs->has_operation())
	|| (far_end_line_ua_ss !=  nullptr && far_end_line_ua_ss->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fe-line";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "far-end-line-bbe-rs")
    {
        if(far_end_line_bbe_rs == nullptr)
        {
            far_end_line_bbe_rs = std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineBbeRs>();
        }
        return far_end_line_bbe_rs;
    }

    if(child_yang_name == "far-end-line-e-bs")
    {
        if(far_end_line_e_bs == nullptr)
        {
            far_end_line_e_bs = std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineEBs>();
        }
        return far_end_line_e_bs;
    }

    if(child_yang_name == "far-end-line-e-ss")
    {
        if(far_end_line_e_ss == nullptr)
        {
            far_end_line_e_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineESs>();
        }
        return far_end_line_e_ss;
    }

    if(child_yang_name == "far-end-line-ebb-es")
    {
        if(far_end_line_ebb_es == nullptr)
        {
            far_end_line_ebb_es = std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineEbbEs>();
        }
        return far_end_line_ebb_es;
    }

    if(child_yang_name == "far-end-line-es-rs")
    {
        if(far_end_line_es_rs == nullptr)
        {
            far_end_line_es_rs = std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineEsRs>();
        }
        return far_end_line_es_rs;
    }

    if(child_yang_name == "far-end-line-se-ss")
    {
        if(far_end_line_se_ss == nullptr)
        {
            far_end_line_se_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineSeSs>();
        }
        return far_end_line_se_ss;
    }

    if(child_yang_name == "far-end-line-ses-rs")
    {
        if(far_end_line_ses_rs == nullptr)
        {
            far_end_line_ses_rs = std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineSesRs>();
        }
        return far_end_line_ses_rs;
    }

    if(child_yang_name == "far-end-line-ua-ss")
    {
        if(far_end_line_ua_ss == nullptr)
        {
            far_end_line_ua_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineUaSs>();
        }
        return far_end_line_ua_ss;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(far_end_line_bbe_rs != nullptr)
    {
        children["far-end-line-bbe-rs"] = far_end_line_bbe_rs;
    }

    if(far_end_line_e_bs != nullptr)
    {
        children["far-end-line-e-bs"] = far_end_line_e_bs;
    }

    if(far_end_line_e_ss != nullptr)
    {
        children["far-end-line-e-ss"] = far_end_line_e_ss;
    }

    if(far_end_line_ebb_es != nullptr)
    {
        children["far-end-line-ebb-es"] = far_end_line_ebb_es;
    }

    if(far_end_line_es_rs != nullptr)
    {
        children["far-end-line-es-rs"] = far_end_line_es_rs;
    }

    if(far_end_line_se_ss != nullptr)
    {
        children["far-end-line-se-ss"] = far_end_line_se_ss;
    }

    if(far_end_line_ses_rs != nullptr)
    {
        children["far-end-line-ses-rs"] = far_end_line_ses_rs;
    }

    if(far_end_line_ua_ss != nullptr)
    {
        children["far-end-line-ua-ss"] = far_end_line_ua_ss;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "far-end-line-bbe-rs" || name == "far-end-line-e-bs" || name == "far-end-line-e-ss" || name == "far-end-line-ebb-es" || name == "far-end-line-es-rs" || name == "far-end-line-se-ss" || name == "far-end-line-ses-rs" || name == "far-end-line-ua-ss")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineBbeRs::FarEndLineBbeRs()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{

    yang_name = "far-end-line-bbe-rs"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineBbeRs::~FarEndLineBbeRs()
{
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineBbeRs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineBbeRs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineBbeRs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-bbe-rs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineBbeRs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineBbeRs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineBbeRs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineBbeRs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineBbeRs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineBbeRs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineEBs::FarEndLineEBs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "far-end-line-e-bs"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineEBs::~FarEndLineEBs()
{
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineEBs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineEBs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineEBs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-e-bs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineEBs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineEBs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineEBs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineEBs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineEBs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineEBs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineESs::FarEndLineESs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "far-end-line-e-ss"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineESs::~FarEndLineESs()
{
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineESs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineESs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-e-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineESs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineESs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineESs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineESs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineESs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineEbbEs::FarEndLineEbbEs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "far-end-line-ebb-es"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineEbbEs::~FarEndLineEbbEs()
{
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineEbbEs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineEbbEs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineEbbEs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-ebb-es";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineEbbEs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineEbbEs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineEbbEs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineEbbEs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineEbbEs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineEbbEs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineEsRs::FarEndLineEsRs()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{

    yang_name = "far-end-line-es-rs"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineEsRs::~FarEndLineEsRs()
{
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineEsRs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineEsRs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineEsRs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-es-rs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineEsRs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineEsRs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineEsRs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineEsRs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineEsRs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineEsRs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineSeSs::FarEndLineSeSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "far-end-line-se-ss"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineSeSs::~FarEndLineSeSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineSeSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineSeSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-se-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineSeSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineSeSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineSeSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineSeSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineSeSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineSesRs::FarEndLineSesRs()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{

    yang_name = "far-end-line-ses-rs"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineSesRs::~FarEndLineSesRs()
{
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineSesRs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineSesRs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineSesRs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-ses-rs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineSesRs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineSesRs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineSesRs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineSesRs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineSesRs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineSesRs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineUaSs::FarEndLineUaSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "far-end-line-ua-ss"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineUaSs::~FarEndLineUaSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineUaSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineUaSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineUaSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-ua-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineUaSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineUaSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineUaSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineUaSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineUaSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineUaSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::Line()
    :
    line_status{YType::int32, "line-status"}
    	,
    line_bb_es(std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineBbEs>())
	,line_bbe_rs(std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineBbeRs>())
	,line_e_bs(std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineEBs>())
	,line_e_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineESs>())
	,line_es_rs(std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineEsRs>())
	,line_se_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineSeSs>())
	,line_ses_rs(std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineSesRs>())
	,line_ua_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineUaSs>())
{
    line_bb_es->parent = this;
    line_bbe_rs->parent = this;
    line_e_bs->parent = this;
    line_e_ss->parent = this;
    line_es_rs->parent = this;
    line_se_ss->parent = this;
    line_ses_rs->parent = this;
    line_ua_ss->parent = this;

    yang_name = "line"; yang_parent_name = "stm-hour24stm-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::~Line()
{
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::has_data() const
{
    return line_status.is_set
	|| (line_bb_es !=  nullptr && line_bb_es->has_data())
	|| (line_bbe_rs !=  nullptr && line_bbe_rs->has_data())
	|| (line_e_bs !=  nullptr && line_e_bs->has_data())
	|| (line_e_ss !=  nullptr && line_e_ss->has_data())
	|| (line_es_rs !=  nullptr && line_es_rs->has_data())
	|| (line_se_ss !=  nullptr && line_se_ss->has_data())
	|| (line_ses_rs !=  nullptr && line_ses_rs->has_data())
	|| (line_ua_ss !=  nullptr && line_ua_ss->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(line_status.yfilter)
	|| (line_bb_es !=  nullptr && line_bb_es->has_operation())
	|| (line_bbe_rs !=  nullptr && line_bbe_rs->has_operation())
	|| (line_e_bs !=  nullptr && line_e_bs->has_operation())
	|| (line_e_ss !=  nullptr && line_e_ss->has_operation())
	|| (line_es_rs !=  nullptr && line_es_rs->has_operation())
	|| (line_se_ss !=  nullptr && line_se_ss->has_operation())
	|| (line_ses_rs !=  nullptr && line_ses_rs->has_operation())
	|| (line_ua_ss !=  nullptr && line_ua_ss->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (line_status.is_set || is_set(line_status.yfilter)) leaf_name_data.push_back(line_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "line-bb-es")
    {
        if(line_bb_es == nullptr)
        {
            line_bb_es = std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineBbEs>();
        }
        return line_bb_es;
    }

    if(child_yang_name == "line-bbe-rs")
    {
        if(line_bbe_rs == nullptr)
        {
            line_bbe_rs = std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineBbeRs>();
        }
        return line_bbe_rs;
    }

    if(child_yang_name == "line-e-bs")
    {
        if(line_e_bs == nullptr)
        {
            line_e_bs = std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineEBs>();
        }
        return line_e_bs;
    }

    if(child_yang_name == "line-e-ss")
    {
        if(line_e_ss == nullptr)
        {
            line_e_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineESs>();
        }
        return line_e_ss;
    }

    if(child_yang_name == "line-es-rs")
    {
        if(line_es_rs == nullptr)
        {
            line_es_rs = std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineEsRs>();
        }
        return line_es_rs;
    }

    if(child_yang_name == "line-se-ss")
    {
        if(line_se_ss == nullptr)
        {
            line_se_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineSeSs>();
        }
        return line_se_ss;
    }

    if(child_yang_name == "line-ses-rs")
    {
        if(line_ses_rs == nullptr)
        {
            line_ses_rs = std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineSesRs>();
        }
        return line_ses_rs;
    }

    if(child_yang_name == "line-ua-ss")
    {
        if(line_ua_ss == nullptr)
        {
            line_ua_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineUaSs>();
        }
        return line_ua_ss;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(line_bb_es != nullptr)
    {
        children["line-bb-es"] = line_bb_es;
    }

    if(line_bbe_rs != nullptr)
    {
        children["line-bbe-rs"] = line_bbe_rs;
    }

    if(line_e_bs != nullptr)
    {
        children["line-e-bs"] = line_e_bs;
    }

    if(line_e_ss != nullptr)
    {
        children["line-e-ss"] = line_e_ss;
    }

    if(line_es_rs != nullptr)
    {
        children["line-es-rs"] = line_es_rs;
    }

    if(line_se_ss != nullptr)
    {
        children["line-se-ss"] = line_se_ss;
    }

    if(line_ses_rs != nullptr)
    {
        children["line-ses-rs"] = line_ses_rs;
    }

    if(line_ua_ss != nullptr)
    {
        children["line-ua-ss"] = line_ua_ss;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "line-status")
    {
        line_status = value;
        line_status.value_namespace = name_space;
        line_status.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "line-status")
    {
        line_status.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "line-bb-es" || name == "line-bbe-rs" || name == "line-e-bs" || name == "line-e-ss" || name == "line-es-rs" || name == "line-se-ss" || name == "line-ses-rs" || name == "line-ua-ss" || name == "line-status")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineBbEs::LineBbEs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "line-bb-es"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineBbEs::~LineBbEs()
{
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineBbEs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineBbEs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineBbEs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-bb-es";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineBbEs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineBbEs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineBbEs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineBbEs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineBbEs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineBbEs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineBbeRs::LineBbeRs()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{

    yang_name = "line-bbe-rs"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineBbeRs::~LineBbeRs()
{
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineBbeRs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineBbeRs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineBbeRs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-bbe-rs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineBbeRs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineBbeRs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineBbeRs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineBbeRs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineBbeRs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineBbeRs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineEBs::LineEBs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "line-e-bs"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineEBs::~LineEBs()
{
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineEBs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineEBs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineEBs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-e-bs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineEBs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineEBs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineEBs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineEBs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineEBs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineEBs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineESs::LineESs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "line-e-ss"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineESs::~LineESs()
{
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineESs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineESs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-e-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineESs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineESs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineESs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineESs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineESs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineEsRs::LineEsRs()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{

    yang_name = "line-es-rs"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineEsRs::~LineEsRs()
{
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineEsRs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineEsRs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineEsRs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-es-rs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineEsRs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineEsRs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineEsRs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineEsRs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineEsRs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineEsRs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineSeSs::LineSeSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "line-se-ss"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineSeSs::~LineSeSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineSeSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineSeSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-se-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineSeSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineSeSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineSeSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineSeSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineSeSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineSesRs::LineSesRs()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{

    yang_name = "line-ses-rs"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineSesRs::~LineSesRs()
{
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineSesRs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineSesRs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineSesRs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-ses-rs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineSesRs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineSesRs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineSesRs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineSesRs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineSesRs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineSesRs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineUaSs::LineUaSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "line-ua-ss"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineUaSs::~LineUaSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineUaSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineUaSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineUaSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-ua-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineUaSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineUaSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineUaSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineUaSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineUaSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineUaSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::Section()
    :
    section_status{YType::int32, "section-status"}
    	,
    section_bb_es(std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionBbEs>())
	,section_bbe_rs(std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionBbeRs>())
	,section_e_bs(std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionEBs>())
	,section_e_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionESs>())
	,section_es_rs(std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionEsRs>())
	,section_se_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionSeSs>())
	,section_ses_rs(std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionSesRs>())
	,section_ua_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionUaSs>())
{
    section_bb_es->parent = this;
    section_bbe_rs->parent = this;
    section_e_bs->parent = this;
    section_e_ss->parent = this;
    section_es_rs->parent = this;
    section_se_ss->parent = this;
    section_ses_rs->parent = this;
    section_ua_ss->parent = this;

    yang_name = "section"; yang_parent_name = "stm-hour24stm-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::~Section()
{
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::has_data() const
{
    return section_status.is_set
	|| (section_bb_es !=  nullptr && section_bb_es->has_data())
	|| (section_bbe_rs !=  nullptr && section_bbe_rs->has_data())
	|| (section_e_bs !=  nullptr && section_e_bs->has_data())
	|| (section_e_ss !=  nullptr && section_e_ss->has_data())
	|| (section_es_rs !=  nullptr && section_es_rs->has_data())
	|| (section_se_ss !=  nullptr && section_se_ss->has_data())
	|| (section_ses_rs !=  nullptr && section_ses_rs->has_data())
	|| (section_ua_ss !=  nullptr && section_ua_ss->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(section_status.yfilter)
	|| (section_bb_es !=  nullptr && section_bb_es->has_operation())
	|| (section_bbe_rs !=  nullptr && section_bbe_rs->has_operation())
	|| (section_e_bs !=  nullptr && section_e_bs->has_operation())
	|| (section_e_ss !=  nullptr && section_e_ss->has_operation())
	|| (section_es_rs !=  nullptr && section_es_rs->has_operation())
	|| (section_se_ss !=  nullptr && section_se_ss->has_operation())
	|| (section_ses_rs !=  nullptr && section_ses_rs->has_operation())
	|| (section_ua_ss !=  nullptr && section_ua_ss->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (section_status.is_set || is_set(section_status.yfilter)) leaf_name_data.push_back(section_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "section-bb-es")
    {
        if(section_bb_es == nullptr)
        {
            section_bb_es = std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionBbEs>();
        }
        return section_bb_es;
    }

    if(child_yang_name == "section-bbe-rs")
    {
        if(section_bbe_rs == nullptr)
        {
            section_bbe_rs = std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionBbeRs>();
        }
        return section_bbe_rs;
    }

    if(child_yang_name == "section-e-bs")
    {
        if(section_e_bs == nullptr)
        {
            section_e_bs = std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionEBs>();
        }
        return section_e_bs;
    }

    if(child_yang_name == "section-e-ss")
    {
        if(section_e_ss == nullptr)
        {
            section_e_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionESs>();
        }
        return section_e_ss;
    }

    if(child_yang_name == "section-es-rs")
    {
        if(section_es_rs == nullptr)
        {
            section_es_rs = std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionEsRs>();
        }
        return section_es_rs;
    }

    if(child_yang_name == "section-se-ss")
    {
        if(section_se_ss == nullptr)
        {
            section_se_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionSeSs>();
        }
        return section_se_ss;
    }

    if(child_yang_name == "section-ses-rs")
    {
        if(section_ses_rs == nullptr)
        {
            section_ses_rs = std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionSesRs>();
        }
        return section_ses_rs;
    }

    if(child_yang_name == "section-ua-ss")
    {
        if(section_ua_ss == nullptr)
        {
            section_ua_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionUaSs>();
        }
        return section_ua_ss;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(section_bb_es != nullptr)
    {
        children["section-bb-es"] = section_bb_es;
    }

    if(section_bbe_rs != nullptr)
    {
        children["section-bbe-rs"] = section_bbe_rs;
    }

    if(section_e_bs != nullptr)
    {
        children["section-e-bs"] = section_e_bs;
    }

    if(section_e_ss != nullptr)
    {
        children["section-e-ss"] = section_e_ss;
    }

    if(section_es_rs != nullptr)
    {
        children["section-es-rs"] = section_es_rs;
    }

    if(section_se_ss != nullptr)
    {
        children["section-se-ss"] = section_se_ss;
    }

    if(section_ses_rs != nullptr)
    {
        children["section-ses-rs"] = section_ses_rs;
    }

    if(section_ua_ss != nullptr)
    {
        children["section-ua-ss"] = section_ua_ss;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "section-status")
    {
        section_status = value;
        section_status.value_namespace = name_space;
        section_status.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "section-status")
    {
        section_status.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "section-bb-es" || name == "section-bbe-rs" || name == "section-e-bs" || name == "section-e-ss" || name == "section-es-rs" || name == "section-se-ss" || name == "section-ses-rs" || name == "section-ua-ss" || name == "section-status")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionBbEs::SectionBbEs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "section-bb-es"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionBbEs::~SectionBbEs()
{
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionBbEs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionBbEs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionBbEs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-bb-es";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionBbEs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionBbEs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionBbEs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionBbEs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionBbEs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionBbEs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionBbeRs::SectionBbeRs()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{

    yang_name = "section-bbe-rs"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionBbeRs::~SectionBbeRs()
{
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionBbeRs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionBbeRs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionBbeRs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-bbe-rs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionBbeRs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionBbeRs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionBbeRs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionBbeRs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionBbeRs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionBbeRs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionEBs::SectionEBs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "section-e-bs"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionEBs::~SectionEBs()
{
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionEBs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionEBs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionEBs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-e-bs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionEBs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionEBs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionEBs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionEBs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionEBs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionEBs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionESs::SectionESs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "section-e-ss"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionESs::~SectionESs()
{
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionESs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionESs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-e-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionESs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionESs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionESs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionESs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionESs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionEsRs::SectionEsRs()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{

    yang_name = "section-es-rs"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionEsRs::~SectionEsRs()
{
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionEsRs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionEsRs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionEsRs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-es-rs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionEsRs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionEsRs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionEsRs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionEsRs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionEsRs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionEsRs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionSeSs::SectionSeSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "section-se-ss"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionSeSs::~SectionSeSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionSeSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionSeSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-se-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionSeSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionSeSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionSeSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionSeSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionSeSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionSesRs::SectionSesRs()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{

    yang_name = "section-ses-rs"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionSesRs::~SectionSesRs()
{
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionSesRs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionSesRs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionSesRs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-ses-rs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionSesRs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionSesRs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionSesRs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionSesRs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionSesRs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionSesRs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionUaSs::SectionUaSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "section-ua-ss"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionUaSs::~SectionUaSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionUaSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionUaSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionUaSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-ua-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionUaSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionUaSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionUaSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionUaSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionUaSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionUaSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15History()
    :
    stm_minute15stm_histories(std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories>())
{
    stm_minute15stm_histories->parent = this;

    yang_name = "stm-minute15-history"; yang_parent_name = "stm-port-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::~StmMinute15History()
{
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::has_data() const
{
    return (stm_minute15stm_histories !=  nullptr && stm_minute15stm_histories->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::has_operation() const
{
    return is_set(yfilter)
	|| (stm_minute15stm_histories !=  nullptr && stm_minute15stm_histories->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stm-minute15-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stm-minute15stm-histories")
    {
        if(stm_minute15stm_histories == nullptr)
        {
            stm_minute15stm_histories = std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories>();
        }
        return stm_minute15stm_histories;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(stm_minute15stm_histories != nullptr)
    {
        children["stm-minute15stm-histories"] = stm_minute15stm_histories;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stm-minute15stm-histories")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistories()
{

    yang_name = "stm-minute15stm-histories"; yang_parent_name = "stm-minute15-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::~StmMinute15StmHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::has_data() const
{
    for (std::size_t index=0; index<stm_minute15stm_history.size(); index++)
    {
        if(stm_minute15stm_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::has_operation() const
{
    for (std::size_t index=0; index<stm_minute15stm_history.size(); index++)
    {
        if(stm_minute15stm_history[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stm-minute15stm-histories";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stm-minute15stm-history")
    {
        for(auto const & c : stm_minute15stm_history)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory>();
        c->parent = this;
        stm_minute15stm_history.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : stm_minute15stm_history)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stm-minute15stm-history")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmHistory()
    :
    number{YType::int32, "number"}
    	,
    stm_minute15stm_time_line_instances(std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances>())
{
    stm_minute15stm_time_line_instances->parent = this;

    yang_name = "stm-minute15stm-history"; yang_parent_name = "stm-minute15stm-histories"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::~StmMinute15StmHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::has_data() const
{
    return number.is_set
	|| (stm_minute15stm_time_line_instances !=  nullptr && stm_minute15stm_time_line_instances->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (stm_minute15stm_time_line_instances !=  nullptr && stm_minute15stm_time_line_instances->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stm-minute15stm-history" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stm-minute15stm-time-line-instances")
    {
        if(stm_minute15stm_time_line_instances == nullptr)
        {
            stm_minute15stm_time_line_instances = std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances>();
        }
        return stm_minute15stm_time_line_instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(stm_minute15stm_time_line_instances != nullptr)
    {
        children["stm-minute15stm-time-line-instances"] = stm_minute15stm_time_line_instances;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stm-minute15stm-time-line-instances" || name == "number")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstances()
{

    yang_name = "stm-minute15stm-time-line-instances"; yang_parent_name = "stm-minute15stm-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::~StmMinute15StmTimeLineInstances()
{
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::has_data() const
{
    for (std::size_t index=0; index<stm_minute15stm_time_line_instance.size(); index++)
    {
        if(stm_minute15stm_time_line_instance[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::has_operation() const
{
    for (std::size_t index=0; index<stm_minute15stm_time_line_instance.size(); index++)
    {
        if(stm_minute15stm_time_line_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stm-minute15stm-time-line-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stm-minute15stm-time-line-instance")
    {
        for(auto const & c : stm_minute15stm_time_line_instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance>();
        c->parent = this;
        stm_minute15stm_time_line_instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : stm_minute15stm_time_line_instance)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stm-minute15stm-time-line-instance")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::StmMinute15StmTimeLineInstance()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    last_clear_time{YType::str, "last-clear-time"},
    timestamp{YType::str, "timestamp"},
    valid{YType::boolean, "valid"}
    	,
    fe_line(std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine>())
	,line(std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line>())
	,section(std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section>())
{
    fe_line->parent = this;
    line->parent = this;
    section->parent = this;

    yang_name = "stm-minute15stm-time-line-instance"; yang_parent_name = "stm-minute15stm-time-line-instances"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::~StmMinute15StmTimeLineInstance()
{
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::has_data() const
{
    return number.is_set
	|| index_.is_set
	|| last_clear15_min_time.is_set
	|| last_clear24_hr_time.is_set
	|| last_clear_time.is_set
	|| timestamp.is_set
	|| valid.is_set
	|| (fe_line !=  nullptr && fe_line->has_data())
	|| (line !=  nullptr && line->has_data())
	|| (section !=  nullptr && section->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(last_clear15_min_time.yfilter)
	|| ydk::is_set(last_clear24_hr_time.yfilter)
	|| ydk::is_set(last_clear_time.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(valid.yfilter)
	|| (fe_line !=  nullptr && fe_line->has_operation())
	|| (line !=  nullptr && line->has_operation())
	|| (section !=  nullptr && section->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stm-minute15stm-time-line-instance" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fe-line")
    {
        if(fe_line == nullptr)
        {
            fe_line = std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine>();
        }
        return fe_line;
    }

    if(child_yang_name == "line")
    {
        if(line == nullptr)
        {
            line = std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line>();
        }
        return line;
    }

    if(child_yang_name == "section")
    {
        if(section == nullptr)
        {
            section = std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section>();
        }
        return section;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fe_line != nullptr)
    {
        children["fe-line"] = fe_line;
    }

    if(line != nullptr)
    {
        children["line"] = line;
    }

    if(section != nullptr)
    {
        children["section"] = section;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fe-line" || name == "line" || name == "section" || name == "number" || name == "index" || name == "last-clear15-min-time" || name == "last-clear24-hr-time" || name == "last-clear-time" || name == "timestamp" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FeLine()
    :
    far_end_line_bbe_rs(std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineBbeRs>())
	,far_end_line_e_bs(std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineEBs>())
	,far_end_line_e_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineESs>())
	,far_end_line_ebb_es(std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineEbbEs>())
	,far_end_line_es_rs(std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineEsRs>())
	,far_end_line_se_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineSeSs>())
	,far_end_line_ses_rs(std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineSesRs>())
	,far_end_line_ua_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineUaSs>())
{
    far_end_line_bbe_rs->parent = this;
    far_end_line_e_bs->parent = this;
    far_end_line_e_ss->parent = this;
    far_end_line_ebb_es->parent = this;
    far_end_line_es_rs->parent = this;
    far_end_line_se_ss->parent = this;
    far_end_line_ses_rs->parent = this;
    far_end_line_ua_ss->parent = this;

    yang_name = "fe-line"; yang_parent_name = "stm-minute15stm-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::~FeLine()
{
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::has_data() const
{
    return (far_end_line_bbe_rs !=  nullptr && far_end_line_bbe_rs->has_data())
	|| (far_end_line_e_bs !=  nullptr && far_end_line_e_bs->has_data())
	|| (far_end_line_e_ss !=  nullptr && far_end_line_e_ss->has_data())
	|| (far_end_line_ebb_es !=  nullptr && far_end_line_ebb_es->has_data())
	|| (far_end_line_es_rs !=  nullptr && far_end_line_es_rs->has_data())
	|| (far_end_line_se_ss !=  nullptr && far_end_line_se_ss->has_data())
	|| (far_end_line_ses_rs !=  nullptr && far_end_line_ses_rs->has_data())
	|| (far_end_line_ua_ss !=  nullptr && far_end_line_ua_ss->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::has_operation() const
{
    return is_set(yfilter)
	|| (far_end_line_bbe_rs !=  nullptr && far_end_line_bbe_rs->has_operation())
	|| (far_end_line_e_bs !=  nullptr && far_end_line_e_bs->has_operation())
	|| (far_end_line_e_ss !=  nullptr && far_end_line_e_ss->has_operation())
	|| (far_end_line_ebb_es !=  nullptr && far_end_line_ebb_es->has_operation())
	|| (far_end_line_es_rs !=  nullptr && far_end_line_es_rs->has_operation())
	|| (far_end_line_se_ss !=  nullptr && far_end_line_se_ss->has_operation())
	|| (far_end_line_ses_rs !=  nullptr && far_end_line_ses_rs->has_operation())
	|| (far_end_line_ua_ss !=  nullptr && far_end_line_ua_ss->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fe-line";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "far-end-line-bbe-rs")
    {
        if(far_end_line_bbe_rs == nullptr)
        {
            far_end_line_bbe_rs = std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineBbeRs>();
        }
        return far_end_line_bbe_rs;
    }

    if(child_yang_name == "far-end-line-e-bs")
    {
        if(far_end_line_e_bs == nullptr)
        {
            far_end_line_e_bs = std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineEBs>();
        }
        return far_end_line_e_bs;
    }

    if(child_yang_name == "far-end-line-e-ss")
    {
        if(far_end_line_e_ss == nullptr)
        {
            far_end_line_e_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineESs>();
        }
        return far_end_line_e_ss;
    }

    if(child_yang_name == "far-end-line-ebb-es")
    {
        if(far_end_line_ebb_es == nullptr)
        {
            far_end_line_ebb_es = std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineEbbEs>();
        }
        return far_end_line_ebb_es;
    }

    if(child_yang_name == "far-end-line-es-rs")
    {
        if(far_end_line_es_rs == nullptr)
        {
            far_end_line_es_rs = std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineEsRs>();
        }
        return far_end_line_es_rs;
    }

    if(child_yang_name == "far-end-line-se-ss")
    {
        if(far_end_line_se_ss == nullptr)
        {
            far_end_line_se_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineSeSs>();
        }
        return far_end_line_se_ss;
    }

    if(child_yang_name == "far-end-line-ses-rs")
    {
        if(far_end_line_ses_rs == nullptr)
        {
            far_end_line_ses_rs = std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineSesRs>();
        }
        return far_end_line_ses_rs;
    }

    if(child_yang_name == "far-end-line-ua-ss")
    {
        if(far_end_line_ua_ss == nullptr)
        {
            far_end_line_ua_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineUaSs>();
        }
        return far_end_line_ua_ss;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(far_end_line_bbe_rs != nullptr)
    {
        children["far-end-line-bbe-rs"] = far_end_line_bbe_rs;
    }

    if(far_end_line_e_bs != nullptr)
    {
        children["far-end-line-e-bs"] = far_end_line_e_bs;
    }

    if(far_end_line_e_ss != nullptr)
    {
        children["far-end-line-e-ss"] = far_end_line_e_ss;
    }

    if(far_end_line_ebb_es != nullptr)
    {
        children["far-end-line-ebb-es"] = far_end_line_ebb_es;
    }

    if(far_end_line_es_rs != nullptr)
    {
        children["far-end-line-es-rs"] = far_end_line_es_rs;
    }

    if(far_end_line_se_ss != nullptr)
    {
        children["far-end-line-se-ss"] = far_end_line_se_ss;
    }

    if(far_end_line_ses_rs != nullptr)
    {
        children["far-end-line-ses-rs"] = far_end_line_ses_rs;
    }

    if(far_end_line_ua_ss != nullptr)
    {
        children["far-end-line-ua-ss"] = far_end_line_ua_ss;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "far-end-line-bbe-rs" || name == "far-end-line-e-bs" || name == "far-end-line-e-ss" || name == "far-end-line-ebb-es" || name == "far-end-line-es-rs" || name == "far-end-line-se-ss" || name == "far-end-line-ses-rs" || name == "far-end-line-ua-ss")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineBbeRs::FarEndLineBbeRs()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{

    yang_name = "far-end-line-bbe-rs"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineBbeRs::~FarEndLineBbeRs()
{
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineBbeRs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineBbeRs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineBbeRs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-bbe-rs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineBbeRs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineBbeRs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineBbeRs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineBbeRs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineBbeRs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineBbeRs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineEBs::FarEndLineEBs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "far-end-line-e-bs"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineEBs::~FarEndLineEBs()
{
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineEBs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineEBs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineEBs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-e-bs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineEBs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineEBs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineEBs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineEBs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineEBs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineEBs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineESs::FarEndLineESs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "far-end-line-e-ss"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineESs::~FarEndLineESs()
{
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineESs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineESs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-e-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineESs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineESs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineESs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineESs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineESs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineEbbEs::FarEndLineEbbEs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "far-end-line-ebb-es"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineEbbEs::~FarEndLineEbbEs()
{
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineEbbEs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineEbbEs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineEbbEs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-ebb-es";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineEbbEs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineEbbEs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineEbbEs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineEbbEs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineEbbEs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineEbbEs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineEsRs::FarEndLineEsRs()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{

    yang_name = "far-end-line-es-rs"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineEsRs::~FarEndLineEsRs()
{
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineEsRs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineEsRs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineEsRs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-es-rs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineEsRs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineEsRs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineEsRs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineEsRs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineEsRs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineEsRs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineSeSs::FarEndLineSeSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "far-end-line-se-ss"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineSeSs::~FarEndLineSeSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineSeSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineSeSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-se-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineSeSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineSeSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineSeSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineSeSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineSeSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineSesRs::FarEndLineSesRs()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{

    yang_name = "far-end-line-ses-rs"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineSesRs::~FarEndLineSesRs()
{
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineSesRs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineSesRs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineSesRs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-ses-rs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineSesRs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineSesRs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineSesRs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineSesRs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineSesRs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineSesRs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineUaSs::FarEndLineUaSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "far-end-line-ua-ss"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineUaSs::~FarEndLineUaSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineUaSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineUaSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineUaSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-ua-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineUaSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineUaSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineUaSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineUaSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineUaSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineUaSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::Line()
    :
    line_status{YType::int32, "line-status"}
    	,
    line_bb_es(std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineBbEs>())
	,line_bbe_rs(std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineBbeRs>())
	,line_e_bs(std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineEBs>())
	,line_e_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineESs>())
	,line_es_rs(std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineEsRs>())
	,line_se_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineSeSs>())
	,line_ses_rs(std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineSesRs>())
	,line_ua_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineUaSs>())
{
    line_bb_es->parent = this;
    line_bbe_rs->parent = this;
    line_e_bs->parent = this;
    line_e_ss->parent = this;
    line_es_rs->parent = this;
    line_se_ss->parent = this;
    line_ses_rs->parent = this;
    line_ua_ss->parent = this;

    yang_name = "line"; yang_parent_name = "stm-minute15stm-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::~Line()
{
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::has_data() const
{
    return line_status.is_set
	|| (line_bb_es !=  nullptr && line_bb_es->has_data())
	|| (line_bbe_rs !=  nullptr && line_bbe_rs->has_data())
	|| (line_e_bs !=  nullptr && line_e_bs->has_data())
	|| (line_e_ss !=  nullptr && line_e_ss->has_data())
	|| (line_es_rs !=  nullptr && line_es_rs->has_data())
	|| (line_se_ss !=  nullptr && line_se_ss->has_data())
	|| (line_ses_rs !=  nullptr && line_ses_rs->has_data())
	|| (line_ua_ss !=  nullptr && line_ua_ss->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(line_status.yfilter)
	|| (line_bb_es !=  nullptr && line_bb_es->has_operation())
	|| (line_bbe_rs !=  nullptr && line_bbe_rs->has_operation())
	|| (line_e_bs !=  nullptr && line_e_bs->has_operation())
	|| (line_e_ss !=  nullptr && line_e_ss->has_operation())
	|| (line_es_rs !=  nullptr && line_es_rs->has_operation())
	|| (line_se_ss !=  nullptr && line_se_ss->has_operation())
	|| (line_ses_rs !=  nullptr && line_ses_rs->has_operation())
	|| (line_ua_ss !=  nullptr && line_ua_ss->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (line_status.is_set || is_set(line_status.yfilter)) leaf_name_data.push_back(line_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "line-bb-es")
    {
        if(line_bb_es == nullptr)
        {
            line_bb_es = std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineBbEs>();
        }
        return line_bb_es;
    }

    if(child_yang_name == "line-bbe-rs")
    {
        if(line_bbe_rs == nullptr)
        {
            line_bbe_rs = std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineBbeRs>();
        }
        return line_bbe_rs;
    }

    if(child_yang_name == "line-e-bs")
    {
        if(line_e_bs == nullptr)
        {
            line_e_bs = std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineEBs>();
        }
        return line_e_bs;
    }

    if(child_yang_name == "line-e-ss")
    {
        if(line_e_ss == nullptr)
        {
            line_e_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineESs>();
        }
        return line_e_ss;
    }

    if(child_yang_name == "line-es-rs")
    {
        if(line_es_rs == nullptr)
        {
            line_es_rs = std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineEsRs>();
        }
        return line_es_rs;
    }

    if(child_yang_name == "line-se-ss")
    {
        if(line_se_ss == nullptr)
        {
            line_se_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineSeSs>();
        }
        return line_se_ss;
    }

    if(child_yang_name == "line-ses-rs")
    {
        if(line_ses_rs == nullptr)
        {
            line_ses_rs = std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineSesRs>();
        }
        return line_ses_rs;
    }

    if(child_yang_name == "line-ua-ss")
    {
        if(line_ua_ss == nullptr)
        {
            line_ua_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineUaSs>();
        }
        return line_ua_ss;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(line_bb_es != nullptr)
    {
        children["line-bb-es"] = line_bb_es;
    }

    if(line_bbe_rs != nullptr)
    {
        children["line-bbe-rs"] = line_bbe_rs;
    }

    if(line_e_bs != nullptr)
    {
        children["line-e-bs"] = line_e_bs;
    }

    if(line_e_ss != nullptr)
    {
        children["line-e-ss"] = line_e_ss;
    }

    if(line_es_rs != nullptr)
    {
        children["line-es-rs"] = line_es_rs;
    }

    if(line_se_ss != nullptr)
    {
        children["line-se-ss"] = line_se_ss;
    }

    if(line_ses_rs != nullptr)
    {
        children["line-ses-rs"] = line_ses_rs;
    }

    if(line_ua_ss != nullptr)
    {
        children["line-ua-ss"] = line_ua_ss;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "line-status")
    {
        line_status = value;
        line_status.value_namespace = name_space;
        line_status.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "line-status")
    {
        line_status.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "line-bb-es" || name == "line-bbe-rs" || name == "line-e-bs" || name == "line-e-ss" || name == "line-es-rs" || name == "line-se-ss" || name == "line-ses-rs" || name == "line-ua-ss" || name == "line-status")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineBbEs::LineBbEs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "line-bb-es"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineBbEs::~LineBbEs()
{
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineBbEs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineBbEs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineBbEs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-bb-es";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineBbEs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineBbEs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineBbEs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineBbEs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineBbEs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineBbEs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineBbeRs::LineBbeRs()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{

    yang_name = "line-bbe-rs"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineBbeRs::~LineBbeRs()
{
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineBbeRs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineBbeRs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineBbeRs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-bbe-rs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineBbeRs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineBbeRs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineBbeRs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineBbeRs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineBbeRs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineBbeRs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineEBs::LineEBs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "line-e-bs"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineEBs::~LineEBs()
{
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineEBs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineEBs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineEBs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-e-bs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineEBs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineEBs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineEBs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineEBs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineEBs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineEBs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineESs::LineESs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "line-e-ss"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineESs::~LineESs()
{
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineESs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineESs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-e-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineESs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineESs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineESs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineESs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineESs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineEsRs::LineEsRs()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{

    yang_name = "line-es-rs"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineEsRs::~LineEsRs()
{
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineEsRs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineEsRs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineEsRs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-es-rs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineEsRs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineEsRs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineEsRs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineEsRs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineEsRs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineEsRs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineSeSs::LineSeSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "line-se-ss"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineSeSs::~LineSeSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineSeSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineSeSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-se-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineSeSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineSeSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineSeSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineSeSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineSeSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineSesRs::LineSesRs()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{

    yang_name = "line-ses-rs"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineSesRs::~LineSesRs()
{
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineSesRs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineSesRs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineSesRs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-ses-rs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineSesRs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineSesRs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineSesRs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineSesRs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineSesRs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineSesRs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineUaSs::LineUaSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "line-ua-ss"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineUaSs::~LineUaSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineUaSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineUaSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineUaSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-ua-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineUaSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineUaSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineUaSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineUaSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineUaSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineUaSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::Section()
    :
    section_status{YType::int32, "section-status"}
    	,
    section_bb_es(std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionBbEs>())
	,section_bbe_rs(std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionBbeRs>())
	,section_e_bs(std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionEBs>())
	,section_e_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionESs>())
	,section_es_rs(std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionEsRs>())
	,section_se_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionSeSs>())
	,section_ses_rs(std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionSesRs>())
	,section_ua_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionUaSs>())
{
    section_bb_es->parent = this;
    section_bbe_rs->parent = this;
    section_e_bs->parent = this;
    section_e_ss->parent = this;
    section_es_rs->parent = this;
    section_se_ss->parent = this;
    section_ses_rs->parent = this;
    section_ua_ss->parent = this;

    yang_name = "section"; yang_parent_name = "stm-minute15stm-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::~Section()
{
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::has_data() const
{
    return section_status.is_set
	|| (section_bb_es !=  nullptr && section_bb_es->has_data())
	|| (section_bbe_rs !=  nullptr && section_bbe_rs->has_data())
	|| (section_e_bs !=  nullptr && section_e_bs->has_data())
	|| (section_e_ss !=  nullptr && section_e_ss->has_data())
	|| (section_es_rs !=  nullptr && section_es_rs->has_data())
	|| (section_se_ss !=  nullptr && section_se_ss->has_data())
	|| (section_ses_rs !=  nullptr && section_ses_rs->has_data())
	|| (section_ua_ss !=  nullptr && section_ua_ss->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(section_status.yfilter)
	|| (section_bb_es !=  nullptr && section_bb_es->has_operation())
	|| (section_bbe_rs !=  nullptr && section_bbe_rs->has_operation())
	|| (section_e_bs !=  nullptr && section_e_bs->has_operation())
	|| (section_e_ss !=  nullptr && section_e_ss->has_operation())
	|| (section_es_rs !=  nullptr && section_es_rs->has_operation())
	|| (section_se_ss !=  nullptr && section_se_ss->has_operation())
	|| (section_ses_rs !=  nullptr && section_ses_rs->has_operation())
	|| (section_ua_ss !=  nullptr && section_ua_ss->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (section_status.is_set || is_set(section_status.yfilter)) leaf_name_data.push_back(section_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "section-bb-es")
    {
        if(section_bb_es == nullptr)
        {
            section_bb_es = std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionBbEs>();
        }
        return section_bb_es;
    }

    if(child_yang_name == "section-bbe-rs")
    {
        if(section_bbe_rs == nullptr)
        {
            section_bbe_rs = std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionBbeRs>();
        }
        return section_bbe_rs;
    }

    if(child_yang_name == "section-e-bs")
    {
        if(section_e_bs == nullptr)
        {
            section_e_bs = std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionEBs>();
        }
        return section_e_bs;
    }

    if(child_yang_name == "section-e-ss")
    {
        if(section_e_ss == nullptr)
        {
            section_e_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionESs>();
        }
        return section_e_ss;
    }

    if(child_yang_name == "section-es-rs")
    {
        if(section_es_rs == nullptr)
        {
            section_es_rs = std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionEsRs>();
        }
        return section_es_rs;
    }

    if(child_yang_name == "section-se-ss")
    {
        if(section_se_ss == nullptr)
        {
            section_se_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionSeSs>();
        }
        return section_se_ss;
    }

    if(child_yang_name == "section-ses-rs")
    {
        if(section_ses_rs == nullptr)
        {
            section_ses_rs = std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionSesRs>();
        }
        return section_ses_rs;
    }

    if(child_yang_name == "section-ua-ss")
    {
        if(section_ua_ss == nullptr)
        {
            section_ua_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionUaSs>();
        }
        return section_ua_ss;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(section_bb_es != nullptr)
    {
        children["section-bb-es"] = section_bb_es;
    }

    if(section_bbe_rs != nullptr)
    {
        children["section-bbe-rs"] = section_bbe_rs;
    }

    if(section_e_bs != nullptr)
    {
        children["section-e-bs"] = section_e_bs;
    }

    if(section_e_ss != nullptr)
    {
        children["section-e-ss"] = section_e_ss;
    }

    if(section_es_rs != nullptr)
    {
        children["section-es-rs"] = section_es_rs;
    }

    if(section_se_ss != nullptr)
    {
        children["section-se-ss"] = section_se_ss;
    }

    if(section_ses_rs != nullptr)
    {
        children["section-ses-rs"] = section_ses_rs;
    }

    if(section_ua_ss != nullptr)
    {
        children["section-ua-ss"] = section_ua_ss;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "section-status")
    {
        section_status = value;
        section_status.value_namespace = name_space;
        section_status.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "section-status")
    {
        section_status.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "section-bb-es" || name == "section-bbe-rs" || name == "section-e-bs" || name == "section-e-ss" || name == "section-es-rs" || name == "section-se-ss" || name == "section-ses-rs" || name == "section-ua-ss" || name == "section-status")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionBbEs::SectionBbEs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "section-bb-es"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionBbEs::~SectionBbEs()
{
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionBbEs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionBbEs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionBbEs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-bb-es";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionBbEs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionBbEs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionBbEs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionBbEs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionBbEs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionBbEs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionBbeRs::SectionBbeRs()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{

    yang_name = "section-bbe-rs"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionBbeRs::~SectionBbeRs()
{
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionBbeRs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionBbeRs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionBbeRs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-bbe-rs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionBbeRs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionBbeRs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionBbeRs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionBbeRs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionBbeRs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionBbeRs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionEBs::SectionEBs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "section-e-bs"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionEBs::~SectionEBs()
{
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionEBs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionEBs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionEBs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-e-bs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionEBs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionEBs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionEBs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionEBs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionEBs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionEBs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionESs::SectionESs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "section-e-ss"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionESs::~SectionESs()
{
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionESs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionESs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-e-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionESs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionESs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionESs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionESs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionESs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionEsRs::SectionEsRs()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{

    yang_name = "section-es-rs"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionEsRs::~SectionEsRs()
{
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionEsRs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionEsRs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionEsRs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-es-rs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionEsRs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionEsRs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionEsRs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionEsRs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionEsRs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionEsRs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionSeSs::SectionSeSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "section-se-ss"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionSeSs::~SectionSeSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionSeSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionSeSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-se-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionSeSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionSeSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionSeSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionSeSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionSeSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionSesRs::SectionSesRs()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{

    yang_name = "section-ses-rs"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionSesRs::~SectionSesRs()
{
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionSesRs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionSesRs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionSesRs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-ses-rs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionSesRs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionSesRs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionSesRs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionSesRs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionSesRs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionSesRs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionUaSs::SectionUaSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "section-ua-ss"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionUaSs::~SectionUaSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionUaSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionUaSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionUaSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-ua-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionUaSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionUaSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionUaSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionUaSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionUaSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionUaSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StsHistory::StsHistory()
    :
    sts_port_histories(std::make_shared<PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories>())
{
    sts_port_histories->parent = this;

    yang_name = "sts-history"; yang_parent_name = "periodic"; is_top_level_class = false; has_list_ancestor = false;
}

PerformanceManagementHistory::Global::Periodic::StsHistory::~StsHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::has_data() const
{
    return (sts_port_histories !=  nullptr && sts_port_histories->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::has_operation() const
{
    return is_set(yfilter)
	|| (sts_port_histories !=  nullptr && sts_port_histories->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::StsHistory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management-history/global/periodic/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceManagementHistory::Global::Periodic::StsHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sts-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StsHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StsHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sts-port-histories")
    {
        if(sts_port_histories == nullptr)
        {
            sts_port_histories = std::make_shared<PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories>();
        }
        return sts_port_histories;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StsHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sts_port_histories != nullptr)
    {
        children["sts-port-histories"] = sts_port_histories;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::StsHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::StsHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sts-port-histories")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistories()
{

    yang_name = "sts-port-histories"; yang_parent_name = "sts-history"; is_top_level_class = false; has_list_ancestor = false;
}

PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::~StsPortHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::has_data() const
{
    for (std::size_t index=0; index<sts_port_history.size(); index++)
    {
        if(sts_port_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::has_operation() const
{
    for (std::size_t index=0; index<sts_port_history.size(); index++)
    {
        if(sts_port_history[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management-history/global/periodic/sts-history/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sts-port-histories";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sts-port-history")
    {
        for(auto const & c : sts_port_history)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory>();
        c->parent = this;
        sts_port_history.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sts_port_history)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sts-port-history")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsPortHistory()
    :
    name{YType::str, "name"}
    	,
    sts_hour24_history(std::make_shared<PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History>())
	,sts_minute15_history(std::make_shared<PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History>())
{
    sts_hour24_history->parent = this;
    sts_minute15_history->parent = this;

    yang_name = "sts-port-history"; yang_parent_name = "sts-port-histories"; is_top_level_class = false; has_list_ancestor = false;
}

PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::~StsPortHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::has_data() const
{
    return name.is_set
	|| (sts_hour24_history !=  nullptr && sts_hour24_history->has_data())
	|| (sts_minute15_history !=  nullptr && sts_minute15_history->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (sts_hour24_history !=  nullptr && sts_hour24_history->has_operation())
	|| (sts_minute15_history !=  nullptr && sts_minute15_history->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management-history/global/periodic/sts-history/sts-port-histories/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sts-port-history" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sts-hour24-history")
    {
        if(sts_hour24_history == nullptr)
        {
            sts_hour24_history = std::make_shared<PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History>();
        }
        return sts_hour24_history;
    }

    if(child_yang_name == "sts-minute15-history")
    {
        if(sts_minute15_history == nullptr)
        {
            sts_minute15_history = std::make_shared<PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History>();
        }
        return sts_minute15_history;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sts_hour24_history != nullptr)
    {
        children["sts-hour24-history"] = sts_hour24_history;
    }

    if(sts_minute15_history != nullptr)
    {
        children["sts-minute15-history"] = sts_minute15_history;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sts-hour24-history" || name == "sts-minute15-history" || name == "name")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24History()
    :
    sts_hour24_path_histories(std::make_shared<PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories>())
{
    sts_hour24_path_histories->parent = this;

    yang_name = "sts-hour24-history"; yang_parent_name = "sts-port-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::~StsHour24History()
{
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::has_data() const
{
    return (sts_hour24_path_histories !=  nullptr && sts_hour24_path_histories->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::has_operation() const
{
    return is_set(yfilter)
	|| (sts_hour24_path_histories !=  nullptr && sts_hour24_path_histories->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sts-hour24-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sts-hour24-path-histories")
    {
        if(sts_hour24_path_histories == nullptr)
        {
            sts_hour24_path_histories = std::make_shared<PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories>();
        }
        return sts_hour24_path_histories;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sts_hour24_path_histories != nullptr)
    {
        children["sts-hour24-path-histories"] = sts_hour24_path_histories;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sts-hour24-path-histories")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistories()
{

    yang_name = "sts-hour24-path-histories"; yang_parent_name = "sts-hour24-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::~StsHour24PathHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::has_data() const
{
    for (std::size_t index=0; index<sts_hour24_path_history.size(); index++)
    {
        if(sts_hour24_path_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::has_operation() const
{
    for (std::size_t index=0; index<sts_hour24_path_history.size(); index++)
    {
        if(sts_hour24_path_history[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sts-hour24-path-histories";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sts-hour24-path-history")
    {
        for(auto const & c : sts_hour24_path_history)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory>();
        c->parent = this;
        sts_hour24_path_history.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sts_hour24_path_history)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sts-hour24-path-history")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathHistory()
    :
    number{YType::int32, "number"}
    	,
    sts_hour24_path_time_line_instances(std::make_shared<PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances>())
{
    sts_hour24_path_time_line_instances->parent = this;

    yang_name = "sts-hour24-path-history"; yang_parent_name = "sts-hour24-path-histories"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::~StsHour24PathHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::has_data() const
{
    return number.is_set
	|| (sts_hour24_path_time_line_instances !=  nullptr && sts_hour24_path_time_line_instances->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (sts_hour24_path_time_line_instances !=  nullptr && sts_hour24_path_time_line_instances->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sts-hour24-path-history" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sts-hour24-path-time-line-instances")
    {
        if(sts_hour24_path_time_line_instances == nullptr)
        {
            sts_hour24_path_time_line_instances = std::make_shared<PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances>();
        }
        return sts_hour24_path_time_line_instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sts_hour24_path_time_line_instances != nullptr)
    {
        children["sts-hour24-path-time-line-instances"] = sts_hour24_path_time_line_instances;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sts-hour24-path-time-line-instances" || name == "number")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstances()
{

    yang_name = "sts-hour24-path-time-line-instances"; yang_parent_name = "sts-hour24-path-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::~StsHour24PathTimeLineInstances()
{
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::has_data() const
{
    for (std::size_t index=0; index<sts_hour24_path_time_line_instance.size(); index++)
    {
        if(sts_hour24_path_time_line_instance[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::has_operation() const
{
    for (std::size_t index=0; index<sts_hour24_path_time_line_instance.size(); index++)
    {
        if(sts_hour24_path_time_line_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sts-hour24-path-time-line-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sts-hour24-path-time-line-instance")
    {
        for(auto const & c : sts_hour24_path_time_line_instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance>();
        c->parent = this;
        sts_hour24_path_time_line_instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sts_hour24_path_time_line_instance)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sts-hour24-path-time-line-instance")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::StsHour24PathTimeLineInstance()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    last_clear_time{YType::str, "last-clear-time"},
    timestamp{YType::str, "timestamp"},
    valid{YType::boolean, "valid"}
    	,
    fe_path(std::make_shared<PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::FePath>())
	,path(std::make_shared<PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path>())
{
    fe_path->parent = this;
    path->parent = this;

    yang_name = "sts-hour24-path-time-line-instance"; yang_parent_name = "sts-hour24-path-time-line-instances"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::~StsHour24PathTimeLineInstance()
{
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::has_data() const
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

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::has_operation() const
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

std::string PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sts-hour24-path-time-line-instance" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fe-path")
    {
        if(fe_path == nullptr)
        {
            fe_path = std::make_shared<PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::FePath>();
        }
        return fe_path;
    }

    if(child_yang_name == "path")
    {
        if(path == nullptr)
        {
            path = std::make_shared<PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path>();
        }
        return path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::get_children() const
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

void PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fe-path" || name == "path" || name == "number" || name == "index" || name == "last-clear15-min-time" || name == "last-clear24-hr-time" || name == "last-clear-time" || name == "timestamp" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::FePath::FePath()
    :
    far_end_path_c_vs{YType::uint32, "far-end-path-c-vs"},
    far_end_path_e_ss{YType::uint32, "far-end-path-e-ss"},
    far_end_path_se_ss{YType::uint32, "far-end-path-se-ss"},
    far_end_path_ua_ss{YType::uint32, "far-end-path-ua-ss"}
{

    yang_name = "fe-path"; yang_parent_name = "sts-hour24-path-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::FePath::~FePath()
{
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::FePath::has_data() const
{
    return far_end_path_c_vs.is_set
	|| far_end_path_e_ss.is_set
	|| far_end_path_se_ss.is_set
	|| far_end_path_ua_ss.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::FePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(far_end_path_c_vs.yfilter)
	|| ydk::is_set(far_end_path_e_ss.yfilter)
	|| ydk::is_set(far_end_path_se_ss.yfilter)
	|| ydk::is_set(far_end_path_ua_ss.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::FePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fe-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::FePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (far_end_path_c_vs.is_set || is_set(far_end_path_c_vs.yfilter)) leaf_name_data.push_back(far_end_path_c_vs.get_name_leafdata());
    if (far_end_path_e_ss.is_set || is_set(far_end_path_e_ss.yfilter)) leaf_name_data.push_back(far_end_path_e_ss.get_name_leafdata());
    if (far_end_path_se_ss.is_set || is_set(far_end_path_se_ss.yfilter)) leaf_name_data.push_back(far_end_path_se_ss.get_name_leafdata());
    if (far_end_path_ua_ss.is_set || is_set(far_end_path_ua_ss.yfilter)) leaf_name_data.push_back(far_end_path_ua_ss.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::FePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::FePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::FePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::FePath::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::FePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "far-end-path-c-vs" || name == "far-end-path-e-ss" || name == "far-end-path-se-ss" || name == "far-end-path-ua-ss")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::Path()
    :
    path_status{YType::int32, "path-status"},
    path_width{YType::enumeration, "path-width"}
    	,
    path_c_vs(std::make_shared<PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathCVs>())
	,path_e_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathESs>())
	,path_se_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathSeSs>())
	,path_ua_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathUaSs>())
{
    path_c_vs->parent = this;
    path_e_ss->parent = this;
    path_se_ss->parent = this;
    path_ua_ss->parent = this;

    yang_name = "path"; yang_parent_name = "sts-hour24-path-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::~Path()
{
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::has_data() const
{
    return path_status.is_set
	|| path_width.is_set
	|| (path_c_vs !=  nullptr && path_c_vs->has_data())
	|| (path_e_ss !=  nullptr && path_e_ss->has_data())
	|| (path_se_ss !=  nullptr && path_se_ss->has_data())
	|| (path_ua_ss !=  nullptr && path_ua_ss->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_status.yfilter)
	|| ydk::is_set(path_width.yfilter)
	|| (path_c_vs !=  nullptr && path_c_vs->has_operation())
	|| (path_e_ss !=  nullptr && path_e_ss->has_operation())
	|| (path_se_ss !=  nullptr && path_se_ss->has_operation())
	|| (path_ua_ss !=  nullptr && path_ua_ss->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_status.is_set || is_set(path_status.yfilter)) leaf_name_data.push_back(path_status.get_name_leafdata());
    if (path_width.is_set || is_set(path_width.yfilter)) leaf_name_data.push_back(path_width.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-c-vs")
    {
        if(path_c_vs == nullptr)
        {
            path_c_vs = std::make_shared<PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathCVs>();
        }
        return path_c_vs;
    }

    if(child_yang_name == "path-e-ss")
    {
        if(path_e_ss == nullptr)
        {
            path_e_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathESs>();
        }
        return path_e_ss;
    }

    if(child_yang_name == "path-se-ss")
    {
        if(path_se_ss == nullptr)
        {
            path_se_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathSeSs>();
        }
        return path_se_ss;
    }

    if(child_yang_name == "path-ua-ss")
    {
        if(path_ua_ss == nullptr)
        {
            path_ua_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathUaSs>();
        }
        return path_ua_ss;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(path_c_vs != nullptr)
    {
        children["path-c-vs"] = path_c_vs;
    }

    if(path_e_ss != nullptr)
    {
        children["path-e-ss"] = path_e_ss;
    }

    if(path_se_ss != nullptr)
    {
        children["path-se-ss"] = path_se_ss;
    }

    if(path_ua_ss != nullptr)
    {
        children["path-ua-ss"] = path_ua_ss;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-status")
    {
        path_status = value;
        path_status.value_namespace = name_space;
        path_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-width")
    {
        path_width = value;
        path_width.value_namespace = name_space;
        path_width.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-status")
    {
        path_status.yfilter = yfilter;
    }
    if(value_path == "path-width")
    {
        path_width.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-c-vs" || name == "path-e-ss" || name == "path-se-ss" || name == "path-ua-ss" || name == "path-status" || name == "path-width")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathCVs::PathCVs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "path-c-vs"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathCVs::~PathCVs()
{
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathCVs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathCVs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathCVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-c-vs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathCVs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathCVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathCVs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathCVs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathCVs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathCVs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathESs::PathESs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "path-e-ss"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathESs::~PathESs()
{
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathESs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathESs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-e-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathESs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathESs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathESs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathESs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathESs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathSeSs::PathSeSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "path-se-ss"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathSeSs::~PathSeSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathSeSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathSeSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-se-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathSeSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathSeSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathSeSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathSeSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathSeSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathUaSs::PathUaSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "path-ua-ss"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathUaSs::~PathUaSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathUaSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathUaSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathUaSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-ua-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathUaSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathUaSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathUaSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathUaSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathUaSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathUaSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15History()
    :
    sts_minute15_path_histories(std::make_shared<PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories>())
{
    sts_minute15_path_histories->parent = this;

    yang_name = "sts-minute15-history"; yang_parent_name = "sts-port-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::~StsMinute15History()
{
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::has_data() const
{
    return (sts_minute15_path_histories !=  nullptr && sts_minute15_path_histories->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::has_operation() const
{
    return is_set(yfilter)
	|| (sts_minute15_path_histories !=  nullptr && sts_minute15_path_histories->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sts-minute15-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sts-minute15-path-histories")
    {
        if(sts_minute15_path_histories == nullptr)
        {
            sts_minute15_path_histories = std::make_shared<PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories>();
        }
        return sts_minute15_path_histories;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sts_minute15_path_histories != nullptr)
    {
        children["sts-minute15-path-histories"] = sts_minute15_path_histories;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sts-minute15-path-histories")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistories()
{

    yang_name = "sts-minute15-path-histories"; yang_parent_name = "sts-minute15-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::~StsMinute15PathHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::has_data() const
{
    for (std::size_t index=0; index<sts_minute15_path_history.size(); index++)
    {
        if(sts_minute15_path_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::has_operation() const
{
    for (std::size_t index=0; index<sts_minute15_path_history.size(); index++)
    {
        if(sts_minute15_path_history[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sts-minute15-path-histories";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sts-minute15-path-history")
    {
        for(auto const & c : sts_minute15_path_history)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory>();
        c->parent = this;
        sts_minute15_path_history.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sts_minute15_path_history)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sts-minute15-path-history")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathHistory()
    :
    number{YType::int32, "number"}
    	,
    sts_minute15_path_time_line_instances(std::make_shared<PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances>())
{
    sts_minute15_path_time_line_instances->parent = this;

    yang_name = "sts-minute15-path-history"; yang_parent_name = "sts-minute15-path-histories"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::~StsMinute15PathHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::has_data() const
{
    return number.is_set
	|| (sts_minute15_path_time_line_instances !=  nullptr && sts_minute15_path_time_line_instances->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (sts_minute15_path_time_line_instances !=  nullptr && sts_minute15_path_time_line_instances->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sts-minute15-path-history" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sts-minute15-path-time-line-instances")
    {
        if(sts_minute15_path_time_line_instances == nullptr)
        {
            sts_minute15_path_time_line_instances = std::make_shared<PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances>();
        }
        return sts_minute15_path_time_line_instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sts_minute15_path_time_line_instances != nullptr)
    {
        children["sts-minute15-path-time-line-instances"] = sts_minute15_path_time_line_instances;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sts-minute15-path-time-line-instances" || name == "number")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstances()
{

    yang_name = "sts-minute15-path-time-line-instances"; yang_parent_name = "sts-minute15-path-history"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::~StsMinute15PathTimeLineInstances()
{
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::has_data() const
{
    for (std::size_t index=0; index<sts_minute15_path_time_line_instance.size(); index++)
    {
        if(sts_minute15_path_time_line_instance[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::has_operation() const
{
    for (std::size_t index=0; index<sts_minute15_path_time_line_instance.size(); index++)
    {
        if(sts_minute15_path_time_line_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sts-minute15-path-time-line-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sts-minute15-path-time-line-instance")
    {
        for(auto const & c : sts_minute15_path_time_line_instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance>();
        c->parent = this;
        sts_minute15_path_time_line_instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sts_minute15_path_time_line_instance)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sts-minute15-path-time-line-instance")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::StsMinute15PathTimeLineInstance()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    last_clear_time{YType::str, "last-clear-time"},
    timestamp{YType::str, "timestamp"},
    valid{YType::boolean, "valid"}
    	,
    fe_path(std::make_shared<PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::FePath>())
	,path(std::make_shared<PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path>())
{
    fe_path->parent = this;
    path->parent = this;

    yang_name = "sts-minute15-path-time-line-instance"; yang_parent_name = "sts-minute15-path-time-line-instances"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::~StsMinute15PathTimeLineInstance()
{
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::has_data() const
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

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::has_operation() const
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

std::string PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sts-minute15-path-time-line-instance" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fe-path")
    {
        if(fe_path == nullptr)
        {
            fe_path = std::make_shared<PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::FePath>();
        }
        return fe_path;
    }

    if(child_yang_name == "path")
    {
        if(path == nullptr)
        {
            path = std::make_shared<PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path>();
        }
        return path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::get_children() const
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

void PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fe-path" || name == "path" || name == "number" || name == "index" || name == "last-clear15-min-time" || name == "last-clear24-hr-time" || name == "last-clear-time" || name == "timestamp" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::FePath::FePath()
    :
    far_end_path_c_vs{YType::uint32, "far-end-path-c-vs"},
    far_end_path_e_ss{YType::uint32, "far-end-path-e-ss"},
    far_end_path_se_ss{YType::uint32, "far-end-path-se-ss"},
    far_end_path_ua_ss{YType::uint32, "far-end-path-ua-ss"}
{

    yang_name = "fe-path"; yang_parent_name = "sts-minute15-path-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::FePath::~FePath()
{
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::FePath::has_data() const
{
    return far_end_path_c_vs.is_set
	|| far_end_path_e_ss.is_set
	|| far_end_path_se_ss.is_set
	|| far_end_path_ua_ss.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::FePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(far_end_path_c_vs.yfilter)
	|| ydk::is_set(far_end_path_e_ss.yfilter)
	|| ydk::is_set(far_end_path_se_ss.yfilter)
	|| ydk::is_set(far_end_path_ua_ss.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::FePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fe-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::FePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (far_end_path_c_vs.is_set || is_set(far_end_path_c_vs.yfilter)) leaf_name_data.push_back(far_end_path_c_vs.get_name_leafdata());
    if (far_end_path_e_ss.is_set || is_set(far_end_path_e_ss.yfilter)) leaf_name_data.push_back(far_end_path_e_ss.get_name_leafdata());
    if (far_end_path_se_ss.is_set || is_set(far_end_path_se_ss.yfilter)) leaf_name_data.push_back(far_end_path_se_ss.get_name_leafdata());
    if (far_end_path_ua_ss.is_set || is_set(far_end_path_ua_ss.yfilter)) leaf_name_data.push_back(far_end_path_ua_ss.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::FePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::FePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::FePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::FePath::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::FePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "far-end-path-c-vs" || name == "far-end-path-e-ss" || name == "far-end-path-se-ss" || name == "far-end-path-ua-ss")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::Path()
    :
    path_status{YType::int32, "path-status"},
    path_width{YType::enumeration, "path-width"}
    	,
    path_c_vs(std::make_shared<PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathCVs>())
	,path_e_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathESs>())
	,path_se_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathSeSs>())
	,path_ua_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathUaSs>())
{
    path_c_vs->parent = this;
    path_e_ss->parent = this;
    path_se_ss->parent = this;
    path_ua_ss->parent = this;

    yang_name = "path"; yang_parent_name = "sts-minute15-path-time-line-instance"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::~Path()
{
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::has_data() const
{
    return path_status.is_set
	|| path_width.is_set
	|| (path_c_vs !=  nullptr && path_c_vs->has_data())
	|| (path_e_ss !=  nullptr && path_e_ss->has_data())
	|| (path_se_ss !=  nullptr && path_se_ss->has_data())
	|| (path_ua_ss !=  nullptr && path_ua_ss->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_status.yfilter)
	|| ydk::is_set(path_width.yfilter)
	|| (path_c_vs !=  nullptr && path_c_vs->has_operation())
	|| (path_e_ss !=  nullptr && path_e_ss->has_operation())
	|| (path_se_ss !=  nullptr && path_se_ss->has_operation())
	|| (path_ua_ss !=  nullptr && path_ua_ss->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_status.is_set || is_set(path_status.yfilter)) leaf_name_data.push_back(path_status.get_name_leafdata());
    if (path_width.is_set || is_set(path_width.yfilter)) leaf_name_data.push_back(path_width.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-c-vs")
    {
        if(path_c_vs == nullptr)
        {
            path_c_vs = std::make_shared<PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathCVs>();
        }
        return path_c_vs;
    }

    if(child_yang_name == "path-e-ss")
    {
        if(path_e_ss == nullptr)
        {
            path_e_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathESs>();
        }
        return path_e_ss;
    }

    if(child_yang_name == "path-se-ss")
    {
        if(path_se_ss == nullptr)
        {
            path_se_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathSeSs>();
        }
        return path_se_ss;
    }

    if(child_yang_name == "path-ua-ss")
    {
        if(path_ua_ss == nullptr)
        {
            path_ua_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathUaSs>();
        }
        return path_ua_ss;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(path_c_vs != nullptr)
    {
        children["path-c-vs"] = path_c_vs;
    }

    if(path_e_ss != nullptr)
    {
        children["path-e-ss"] = path_e_ss;
    }

    if(path_se_ss != nullptr)
    {
        children["path-se-ss"] = path_se_ss;
    }

    if(path_ua_ss != nullptr)
    {
        children["path-ua-ss"] = path_ua_ss;
    }

    return children;
}

void PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-status")
    {
        path_status = value;
        path_status.value_namespace = name_space;
        path_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-width")
    {
        path_width = value;
        path_width.value_namespace = name_space;
        path_width.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-status")
    {
        path_status.yfilter = yfilter;
    }
    if(value_path == "path-width")
    {
        path_width.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-c-vs" || name == "path-e-ss" || name == "path-se-ss" || name == "path-ua-ss" || name == "path-status" || name == "path-width")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathCVs::PathCVs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "path-c-vs"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathCVs::~PathCVs()
{
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathCVs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathCVs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathCVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-c-vs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathCVs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathCVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathCVs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathCVs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathCVs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathCVs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathESs::PathESs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "path-e-ss"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathESs::~PathESs()
{
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathESs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathESs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-e-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathESs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathESs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathESs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathESs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathESs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathSeSs::PathSeSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "path-se-ss"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathSeSs::~PathSeSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathSeSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathSeSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-se-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathSeSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathSeSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathSeSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathSeSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathSeSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathUaSs::PathUaSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "path-ua-ss"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathUaSs::~PathUaSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathUaSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathUaSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathUaSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-ua-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathUaSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathUaSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathUaSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathUaSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathUaSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathUaSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "tca-report" || name == "threshold")
        return true;
    return false;
}


}
}

