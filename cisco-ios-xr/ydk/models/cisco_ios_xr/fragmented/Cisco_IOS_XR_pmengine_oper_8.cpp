
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_pmengine_oper_8.hpp"
#include "Cisco_IOS_XR_pmengine_oper_9.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_pmengine_oper {

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::FeLine()
    :
    far_end_line_e_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::FarEndLineESs>())
    , far_end_line_se_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::FarEndLineSeSs>())
    , far_end_line_c_vs(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::FarEndLineCVs>())
    , far_end_line_ua_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::FarEndLineUaSs>())
    , far_end_line_fc_ls(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::FarEndLineFcLs>())
{
    far_end_line_e_ss->parent = this;
    far_end_line_se_ss->parent = this;
    far_end_line_c_vs->parent = this;
    far_end_line_ua_ss->parent = this;
    far_end_line_fc_ls->parent = this;

    yang_name = "fe-line"; yang_parent_name = "sonet-minute15ocn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::~FeLine()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::has_data() const
{
    if (is_presence_container) return true;
    return (far_end_line_e_ss !=  nullptr && far_end_line_e_ss->has_data())
	|| (far_end_line_se_ss !=  nullptr && far_end_line_se_ss->has_data())
	|| (far_end_line_c_vs !=  nullptr && far_end_line_c_vs->has_data())
	|| (far_end_line_ua_ss !=  nullptr && far_end_line_ua_ss->has_data())
	|| (far_end_line_fc_ls !=  nullptr && far_end_line_fc_ls->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::has_operation() const
{
    return is_set(yfilter)
	|| (far_end_line_e_ss !=  nullptr && far_end_line_e_ss->has_operation())
	|| (far_end_line_se_ss !=  nullptr && far_end_line_se_ss->has_operation())
	|| (far_end_line_c_vs !=  nullptr && far_end_line_c_vs->has_operation())
	|| (far_end_line_ua_ss !=  nullptr && far_end_line_ua_ss->has_operation())
	|| (far_end_line_fc_ls !=  nullptr && far_end_line_fc_ls->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fe-line";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "far-end-line-e-ss")
    {
        if(far_end_line_e_ss == nullptr)
        {
            far_end_line_e_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::FarEndLineESs>();
        }
        return far_end_line_e_ss;
    }

    if(child_yang_name == "far-end-line-se-ss")
    {
        if(far_end_line_se_ss == nullptr)
        {
            far_end_line_se_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::FarEndLineSeSs>();
        }
        return far_end_line_se_ss;
    }

    if(child_yang_name == "far-end-line-c-vs")
    {
        if(far_end_line_c_vs == nullptr)
        {
            far_end_line_c_vs = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::FarEndLineCVs>();
        }
        return far_end_line_c_vs;
    }

    if(child_yang_name == "far-end-line-ua-ss")
    {
        if(far_end_line_ua_ss == nullptr)
        {
            far_end_line_ua_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::FarEndLineUaSs>();
        }
        return far_end_line_ua_ss;
    }

    if(child_yang_name == "far-end-line-fc-ls")
    {
        if(far_end_line_fc_ls == nullptr)
        {
            far_end_line_fc_ls = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::FarEndLineFcLs>();
        }
        return far_end_line_fc_ls;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(far_end_line_e_ss != nullptr)
    {
        _children["far-end-line-e-ss"] = far_end_line_e_ss;
    }

    if(far_end_line_se_ss != nullptr)
    {
        _children["far-end-line-se-ss"] = far_end_line_se_ss;
    }

    if(far_end_line_c_vs != nullptr)
    {
        _children["far-end-line-c-vs"] = far_end_line_c_vs;
    }

    if(far_end_line_ua_ss != nullptr)
    {
        _children["far-end-line-ua-ss"] = far_end_line_ua_ss;
    }

    if(far_end_line_fc_ls != nullptr)
    {
        _children["far-end-line-fc-ls"] = far_end_line_fc_ls;
    }

    return _children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "far-end-line-e-ss" || name == "far-end-line-se-ss" || name == "far-end-line-c-vs" || name == "far-end-line-ua-ss" || name == "far-end-line-fc-ls")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::FarEndLineESs::FarEndLineESs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "far-end-line-e-ss"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::FarEndLineESs::~FarEndLineESs()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::FarEndLineESs::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::FarEndLineESs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::FarEndLineESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-e-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::FarEndLineESs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::FarEndLineESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::FarEndLineESs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::FarEndLineESs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::FarEndLineESs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::FarEndLineESs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::FarEndLineSeSs::FarEndLineSeSs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "far-end-line-se-ss"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::FarEndLineSeSs::~FarEndLineSeSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::FarEndLineSeSs::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::FarEndLineSeSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::FarEndLineSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-se-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::FarEndLineSeSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::FarEndLineSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::FarEndLineSeSs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::FarEndLineSeSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::FarEndLineSeSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::FarEndLineSeSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::FarEndLineCVs::FarEndLineCVs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "far-end-line-c-vs"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::FarEndLineCVs::~FarEndLineCVs()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::FarEndLineCVs::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::FarEndLineCVs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::FarEndLineCVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-c-vs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::FarEndLineCVs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::FarEndLineCVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::FarEndLineCVs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::FarEndLineCVs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::FarEndLineCVs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::FarEndLineCVs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::FarEndLineUaSs::FarEndLineUaSs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "far-end-line-ua-ss"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::FarEndLineUaSs::~FarEndLineUaSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::FarEndLineUaSs::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::FarEndLineUaSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::FarEndLineUaSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-ua-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::FarEndLineUaSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::FarEndLineUaSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::FarEndLineUaSs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::FarEndLineUaSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::FarEndLineUaSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::FarEndLineUaSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::FarEndLineFcLs::FarEndLineFcLs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "far-end-line-fc-ls"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::FarEndLineFcLs::~FarEndLineFcLs()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::FarEndLineFcLs::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::FarEndLineFcLs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::FarEndLineFcLs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-fc-ls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::FarEndLineFcLs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::FarEndLineFcLs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::FarEndLineFcLs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::FarEndLineFcLs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::FarEndLineFcLs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::FarEndLineFcLs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistories()
    :
    sonet_minute15_path_history(this, {"number"})
{

    yang_name = "sonet-minute15-path-histories"; yang_parent_name = "sonet-minute15-history"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::~SonetMinute15PathHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sonet_minute15_path_history.len(); index++)
    {
        if(sonet_minute15_path_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::has_operation() const
{
    for (std::size_t index=0; index<sonet_minute15_path_history.len(); index++)
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

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-minute15-path-history")
    {
        auto ent_ = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory>();
        ent_->parent = this;
        sonet_minute15_path_history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sonet_minute15_path_history.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    number{YType::uint32, "number"}
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
    if (is_presence_container) return true;
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
    path_buffer << "sonet-minute15-path-history";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sonet_minute15_path_time_line_instances != nullptr)
    {
        _children["sonet-minute15-path-time-line-instances"] = sonet_minute15_path_time_line_instances;
    }

    return _children;
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
    :
    sonet_minute15_path_time_line_instance(this, {"number"})
{

    yang_name = "sonet-minute15-path-time-line-instances"; yang_parent_name = "sonet-minute15-path-history"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::~SonetMinute15PathTimeLineInstances()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sonet_minute15_path_time_line_instance.len(); index++)
    {
        if(sonet_minute15_path_time_line_instance[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::has_operation() const
{
    for (std::size_t index=0; index<sonet_minute15_path_time_line_instance.len(); index++)
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

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-minute15-path-time-line-instance")
    {
        auto ent_ = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance>();
        ent_->parent = this;
        sonet_minute15_path_time_line_instance.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sonet_minute15_path_time_line_instance.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    number{YType::uint32, "number"},
    index_{YType::uint32, "index"},
    valid{YType::boolean, "valid"},
    timestamp{YType::str, "timestamp"},
    last_clear_time{YType::str, "last-clear-time"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"}
        ,
    path(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path>())
    , fe_path(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::FePath>())
{
    path->parent = this;
    fe_path->parent = this;

    yang_name = "sonet-minute15-path-time-line-instance"; yang_parent_name = "sonet-minute15-path-time-line-instances"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::~SonetMinute15PathTimeLineInstance()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| index_.is_set
	|| valid.is_set
	|| timestamp.is_set
	|| last_clear_time.is_set
	|| last_clear15_min_time.is_set
	|| last_clear24_hr_time.is_set
	|| (path !=  nullptr && path->has_data())
	|| (fe_path !=  nullptr && fe_path->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(last_clear_time.yfilter)
	|| ydk::is_set(last_clear15_min_time.yfilter)
	|| ydk::is_set(last_clear24_hr_time.yfilter)
	|| (path !=  nullptr && path->has_operation())
	|| (fe_path !=  nullptr && fe_path->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-minute15-path-time-line-instance";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.yfilter)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (last_clear15_min_time.is_set || is_set(last_clear15_min_time.yfilter)) leaf_name_data.push_back(last_clear15_min_time.get_name_leafdata());
    if (last_clear24_hr_time.is_set || is_set(last_clear24_hr_time.yfilter)) leaf_name_data.push_back(last_clear24_hr_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path")
    {
        if(path == nullptr)
        {
            path = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path>();
        }
        return path;
    }

    if(child_yang_name == "fe-path")
    {
        if(fe_path == nullptr)
        {
            fe_path = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::FePath>();
        }
        return fe_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(path != nullptr)
    {
        _children["path"] = path;
    }

    if(fe_path != nullptr)
    {
        _children["fe-path"] = fe_path;
    }

    return _children;
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
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time = value;
        last_clear24_hr_time.value_namespace = name_space;
        last_clear24_hr_time.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "fe-path" || name == "number" || name == "index" || name == "valid" || name == "timestamp" || name == "last-clear-time" || name == "last-clear15-min-time" || name == "last-clear24-hr-time")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::Path()
    :
    path_width{YType::enumeration, "path-width"},
    path_status{YType::int32, "path-status"}
        ,
    path_e_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathESs>())
    , path_se_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathSeSs>())
    , path_c_vs(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathCVs>())
    , path_ua_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathUaSs>())
{
    path_e_ss->parent = this;
    path_se_ss->parent = this;
    path_c_vs->parent = this;
    path_ua_ss->parent = this;

    yang_name = "path"; yang_parent_name = "sonet-minute15-path-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::~Path()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::has_data() const
{
    if (is_presence_container) return true;
    return path_width.is_set
	|| path_status.is_set
	|| (path_e_ss !=  nullptr && path_e_ss->has_data())
	|| (path_se_ss !=  nullptr && path_se_ss->has_data())
	|| (path_c_vs !=  nullptr && path_c_vs->has_data())
	|| (path_ua_ss !=  nullptr && path_ua_ss->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_width.yfilter)
	|| ydk::is_set(path_status.yfilter)
	|| (path_e_ss !=  nullptr && path_e_ss->has_operation())
	|| (path_se_ss !=  nullptr && path_se_ss->has_operation())
	|| (path_c_vs !=  nullptr && path_c_vs->has_operation())
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

    if (path_width.is_set || is_set(path_width.yfilter)) leaf_name_data.push_back(path_width.get_name_leafdata());
    if (path_status.is_set || is_set(path_status.yfilter)) leaf_name_data.push_back(path_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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

    if(child_yang_name == "path-c-vs")
    {
        if(path_c_vs == nullptr)
        {
            path_c_vs = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathCVs>();
        }
        return path_c_vs;
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

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(path_e_ss != nullptr)
    {
        _children["path-e-ss"] = path_e_ss;
    }

    if(path_se_ss != nullptr)
    {
        _children["path-se-ss"] = path_se_ss;
    }

    if(path_c_vs != nullptr)
    {
        _children["path-c-vs"] = path_c_vs;
    }

    if(path_ua_ss != nullptr)
    {
        _children["path-ua-ss"] = path_ua_ss;
    }

    return _children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-width")
    {
        path_width = value;
        path_width.value_namespace = name_space;
        path_width.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-status")
    {
        path_status = value;
        path_status.value_namespace = name_space;
        path_status.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-width")
    {
        path_width.yfilter = yfilter;
    }
    if(value_path == "path-status")
    {
        path_status.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-e-ss" || name == "path-se-ss" || name == "path-c-vs" || name == "path-ua-ss" || name == "path-width" || name == "path-status")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathESs::PathESs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "path-e-ss"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathESs::~PathESs()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathESs::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathESs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathESs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathESs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathESs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathESs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathSeSs::PathSeSs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "path-se-ss"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathSeSs::~PathSeSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathSeSs::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathSeSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathSeSs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathSeSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathSeSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathSeSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathCVs::PathCVs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "path-c-vs"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathCVs::~PathCVs()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathCVs::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathCVs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathCVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathCVs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathCVs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathCVs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathCVs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathUaSs::PathUaSs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "path-ua-ss"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathUaSs::~PathUaSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathUaSs::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathUaSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathUaSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathUaSs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathUaSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathUaSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathUaSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::FePath::FePath()
    :
    far_end_path_e_ss{YType::uint32, "far-end-path-e-ss"},
    far_end_path_se_ss{YType::uint32, "far-end-path-se-ss"},
    far_end_path_c_vs{YType::uint32, "far-end-path-c-vs"},
    far_end_path_ua_ss{YType::uint32, "far-end-path-ua-ss"}
{

    yang_name = "fe-path"; yang_parent_name = "sonet-minute15-path-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::FePath::~FePath()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::FePath::has_data() const
{
    if (is_presence_container) return true;
    return far_end_path_e_ss.is_set
	|| far_end_path_se_ss.is_set
	|| far_end_path_c_vs.is_set
	|| far_end_path_ua_ss.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::FePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(far_end_path_e_ss.yfilter)
	|| ydk::is_set(far_end_path_se_ss.yfilter)
	|| ydk::is_set(far_end_path_c_vs.yfilter)
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

    if (far_end_path_e_ss.is_set || is_set(far_end_path_e_ss.yfilter)) leaf_name_data.push_back(far_end_path_e_ss.get_name_leafdata());
    if (far_end_path_se_ss.is_set || is_set(far_end_path_se_ss.yfilter)) leaf_name_data.push_back(far_end_path_se_ss.get_name_leafdata());
    if (far_end_path_c_vs.is_set || is_set(far_end_path_c_vs.yfilter)) leaf_name_data.push_back(far_end_path_c_vs.get_name_leafdata());
    if (far_end_path_ua_ss.is_set || is_set(far_end_path_ua_ss.yfilter)) leaf_name_data.push_back(far_end_path_ua_ss.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::FePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::FePath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::FePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "far-end-path-c-vs")
    {
        far_end_path_c_vs = value;
        far_end_path_c_vs.value_namespace = name_space;
        far_end_path_c_vs.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "far-end-path-e-ss")
    {
        far_end_path_e_ss.yfilter = yfilter;
    }
    if(value_path == "far-end-path-se-ss")
    {
        far_end_path_se_ss.yfilter = yfilter;
    }
    if(value_path == "far-end-path-c-vs")
    {
        far_end_path_c_vs.yfilter = yfilter;
    }
    if(value_path == "far-end-path-ua-ss")
    {
        far_end_path_ua_ss.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::FePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "far-end-path-e-ss" || name == "far-end-path-se-ss" || name == "far-end-path-c-vs" || name == "far-end-path-ua-ss")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24History()
    :
    sonet_hour24_path_histories(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories>())
    , sonet_hour24ocn_histories(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories>())
{
    sonet_hour24_path_histories->parent = this;
    sonet_hour24ocn_histories->parent = this;

    yang_name = "sonet-hour24-history"; yang_parent_name = "sonet-port-history"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::~SonetHour24History()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::has_data() const
{
    if (is_presence_container) return true;
    return (sonet_hour24_path_histories !=  nullptr && sonet_hour24_path_histories->has_data())
	|| (sonet_hour24ocn_histories !=  nullptr && sonet_hour24ocn_histories->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::has_operation() const
{
    return is_set(yfilter)
	|| (sonet_hour24_path_histories !=  nullptr && sonet_hour24_path_histories->has_operation())
	|| (sonet_hour24ocn_histories !=  nullptr && sonet_hour24ocn_histories->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-hour24-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-hour24-path-histories")
    {
        if(sonet_hour24_path_histories == nullptr)
        {
            sonet_hour24_path_histories = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories>();
        }
        return sonet_hour24_path_histories;
    }

    if(child_yang_name == "sonet-hour24ocn-histories")
    {
        if(sonet_hour24ocn_histories == nullptr)
        {
            sonet_hour24ocn_histories = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories>();
        }
        return sonet_hour24ocn_histories;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sonet_hour24_path_histories != nullptr)
    {
        _children["sonet-hour24-path-histories"] = sonet_hour24_path_histories;
    }

    if(sonet_hour24ocn_histories != nullptr)
    {
        _children["sonet-hour24ocn-histories"] = sonet_hour24ocn_histories;
    }

    return _children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonet-hour24-path-histories" || name == "sonet-hour24ocn-histories")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistories()
    :
    sonet_hour24_path_history(this, {"number"})
{

    yang_name = "sonet-hour24-path-histories"; yang_parent_name = "sonet-hour24-history"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::~SonetHour24PathHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sonet_hour24_path_history.len(); index++)
    {
        if(sonet_hour24_path_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::has_operation() const
{
    for (std::size_t index=0; index<sonet_hour24_path_history.len(); index++)
    {
        if(sonet_hour24_path_history[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-hour24-path-histories";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-hour24-path-history")
    {
        auto ent_ = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory>();
        ent_->parent = this;
        sonet_hour24_path_history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sonet_hour24_path_history.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonet-hour24-path-history")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathHistory()
    :
    number{YType::uint32, "number"}
        ,
    sonet_hour24_path_time_line_instances(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances>())
{
    sonet_hour24_path_time_line_instances->parent = this;

    yang_name = "sonet-hour24-path-history"; yang_parent_name = "sonet-hour24-path-histories"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::~SonetHour24PathHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| (sonet_hour24_path_time_line_instances !=  nullptr && sonet_hour24_path_time_line_instances->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (sonet_hour24_path_time_line_instances !=  nullptr && sonet_hour24_path_time_line_instances->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-hour24-path-history";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-hour24-path-time-line-instances")
    {
        if(sonet_hour24_path_time_line_instances == nullptr)
        {
            sonet_hour24_path_time_line_instances = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances>();
        }
        return sonet_hour24_path_time_line_instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sonet_hour24_path_time_line_instances != nullptr)
    {
        _children["sonet-hour24-path-time-line-instances"] = sonet_hour24_path_time_line_instances;
    }

    return _children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonet-hour24-path-time-line-instances" || name == "number")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstances()
    :
    sonet_hour24_path_time_line_instance(this, {"number"})
{

    yang_name = "sonet-hour24-path-time-line-instances"; yang_parent_name = "sonet-hour24-path-history"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::~SonetHour24PathTimeLineInstances()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sonet_hour24_path_time_line_instance.len(); index++)
    {
        if(sonet_hour24_path_time_line_instance[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::has_operation() const
{
    for (std::size_t index=0; index<sonet_hour24_path_time_line_instance.len(); index++)
    {
        if(sonet_hour24_path_time_line_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-hour24-path-time-line-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-hour24-path-time-line-instance")
    {
        auto ent_ = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance>();
        ent_->parent = this;
        sonet_hour24_path_time_line_instance.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sonet_hour24_path_time_line_instance.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonet-hour24-path-time-line-instance")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::SonetHour24PathTimeLineInstance()
    :
    number{YType::uint32, "number"},
    index_{YType::uint32, "index"},
    valid{YType::boolean, "valid"},
    timestamp{YType::str, "timestamp"},
    last_clear_time{YType::str, "last-clear-time"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"}
        ,
    path(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path>())
    , fe_path(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::FePath>())
{
    path->parent = this;
    fe_path->parent = this;

    yang_name = "sonet-hour24-path-time-line-instance"; yang_parent_name = "sonet-hour24-path-time-line-instances"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::~SonetHour24PathTimeLineInstance()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| index_.is_set
	|| valid.is_set
	|| timestamp.is_set
	|| last_clear_time.is_set
	|| last_clear15_min_time.is_set
	|| last_clear24_hr_time.is_set
	|| (path !=  nullptr && path->has_data())
	|| (fe_path !=  nullptr && fe_path->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(last_clear_time.yfilter)
	|| ydk::is_set(last_clear15_min_time.yfilter)
	|| ydk::is_set(last_clear24_hr_time.yfilter)
	|| (path !=  nullptr && path->has_operation())
	|| (fe_path !=  nullptr && fe_path->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-hour24-path-time-line-instance";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.yfilter)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (last_clear15_min_time.is_set || is_set(last_clear15_min_time.yfilter)) leaf_name_data.push_back(last_clear15_min_time.get_name_leafdata());
    if (last_clear24_hr_time.is_set || is_set(last_clear24_hr_time.yfilter)) leaf_name_data.push_back(last_clear24_hr_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path")
    {
        if(path == nullptr)
        {
            path = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path>();
        }
        return path;
    }

    if(child_yang_name == "fe-path")
    {
        if(fe_path == nullptr)
        {
            fe_path = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::FePath>();
        }
        return fe_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(path != nullptr)
    {
        _children["path"] = path;
    }

    if(fe_path != nullptr)
    {
        _children["fe-path"] = fe_path;
    }

    return _children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time = value;
        last_clear24_hr_time.value_namespace = name_space;
        last_clear24_hr_time.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "fe-path" || name == "number" || name == "index" || name == "valid" || name == "timestamp" || name == "last-clear-time" || name == "last-clear15-min-time" || name == "last-clear24-hr-time")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::Path()
    :
    path_width{YType::enumeration, "path-width"},
    path_status{YType::int32, "path-status"}
        ,
    path_e_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathESs>())
    , path_se_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathSeSs>())
    , path_c_vs(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathCVs>())
    , path_ua_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathUaSs>())
{
    path_e_ss->parent = this;
    path_se_ss->parent = this;
    path_c_vs->parent = this;
    path_ua_ss->parent = this;

    yang_name = "path"; yang_parent_name = "sonet-hour24-path-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::~Path()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::has_data() const
{
    if (is_presence_container) return true;
    return path_width.is_set
	|| path_status.is_set
	|| (path_e_ss !=  nullptr && path_e_ss->has_data())
	|| (path_se_ss !=  nullptr && path_se_ss->has_data())
	|| (path_c_vs !=  nullptr && path_c_vs->has_data())
	|| (path_ua_ss !=  nullptr && path_ua_ss->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_width.yfilter)
	|| ydk::is_set(path_status.yfilter)
	|| (path_e_ss !=  nullptr && path_e_ss->has_operation())
	|| (path_se_ss !=  nullptr && path_se_ss->has_operation())
	|| (path_c_vs !=  nullptr && path_c_vs->has_operation())
	|| (path_ua_ss !=  nullptr && path_ua_ss->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_width.is_set || is_set(path_width.yfilter)) leaf_name_data.push_back(path_width.get_name_leafdata());
    if (path_status.is_set || is_set(path_status.yfilter)) leaf_name_data.push_back(path_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-e-ss")
    {
        if(path_e_ss == nullptr)
        {
            path_e_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathESs>();
        }
        return path_e_ss;
    }

    if(child_yang_name == "path-se-ss")
    {
        if(path_se_ss == nullptr)
        {
            path_se_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathSeSs>();
        }
        return path_se_ss;
    }

    if(child_yang_name == "path-c-vs")
    {
        if(path_c_vs == nullptr)
        {
            path_c_vs = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathCVs>();
        }
        return path_c_vs;
    }

    if(child_yang_name == "path-ua-ss")
    {
        if(path_ua_ss == nullptr)
        {
            path_ua_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathUaSs>();
        }
        return path_ua_ss;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(path_e_ss != nullptr)
    {
        _children["path-e-ss"] = path_e_ss;
    }

    if(path_se_ss != nullptr)
    {
        _children["path-se-ss"] = path_se_ss;
    }

    if(path_c_vs != nullptr)
    {
        _children["path-c-vs"] = path_c_vs;
    }

    if(path_ua_ss != nullptr)
    {
        _children["path-ua-ss"] = path_ua_ss;
    }

    return _children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-width")
    {
        path_width = value;
        path_width.value_namespace = name_space;
        path_width.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-status")
    {
        path_status = value;
        path_status.value_namespace = name_space;
        path_status.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-width")
    {
        path_width.yfilter = yfilter;
    }
    if(value_path == "path-status")
    {
        path_status.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-e-ss" || name == "path-se-ss" || name == "path-c-vs" || name == "path-ua-ss" || name == "path-width" || name == "path-status")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathESs::PathESs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "path-e-ss"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathESs::~PathESs()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathESs::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathESs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-e-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathESs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathESs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathESs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathESs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathESs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathSeSs::PathSeSs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "path-se-ss"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathSeSs::~PathSeSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathSeSs::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathSeSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-se-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathSeSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathSeSs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathSeSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathSeSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathSeSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathCVs::PathCVs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "path-c-vs"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathCVs::~PathCVs()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathCVs::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathCVs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathCVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-c-vs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathCVs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathCVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathCVs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathCVs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathCVs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathCVs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathUaSs::PathUaSs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "path-ua-ss"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathUaSs::~PathUaSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathUaSs::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathUaSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathUaSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-ua-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathUaSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathUaSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathUaSs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathUaSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathUaSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathUaSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::FePath::FePath()
    :
    far_end_path_e_ss{YType::uint32, "far-end-path-e-ss"},
    far_end_path_se_ss{YType::uint32, "far-end-path-se-ss"},
    far_end_path_c_vs{YType::uint32, "far-end-path-c-vs"},
    far_end_path_ua_ss{YType::uint32, "far-end-path-ua-ss"}
{

    yang_name = "fe-path"; yang_parent_name = "sonet-hour24-path-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::FePath::~FePath()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::FePath::has_data() const
{
    if (is_presence_container) return true;
    return far_end_path_e_ss.is_set
	|| far_end_path_se_ss.is_set
	|| far_end_path_c_vs.is_set
	|| far_end_path_ua_ss.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::FePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(far_end_path_e_ss.yfilter)
	|| ydk::is_set(far_end_path_se_ss.yfilter)
	|| ydk::is_set(far_end_path_c_vs.yfilter)
	|| ydk::is_set(far_end_path_ua_ss.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::FePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fe-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::FePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (far_end_path_e_ss.is_set || is_set(far_end_path_e_ss.yfilter)) leaf_name_data.push_back(far_end_path_e_ss.get_name_leafdata());
    if (far_end_path_se_ss.is_set || is_set(far_end_path_se_ss.yfilter)) leaf_name_data.push_back(far_end_path_se_ss.get_name_leafdata());
    if (far_end_path_c_vs.is_set || is_set(far_end_path_c_vs.yfilter)) leaf_name_data.push_back(far_end_path_c_vs.get_name_leafdata());
    if (far_end_path_ua_ss.is_set || is_set(far_end_path_ua_ss.yfilter)) leaf_name_data.push_back(far_end_path_ua_ss.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::FePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::FePath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::FePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "far-end-path-c-vs")
    {
        far_end_path_c_vs = value;
        far_end_path_c_vs.value_namespace = name_space;
        far_end_path_c_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "far-end-path-ua-ss")
    {
        far_end_path_ua_ss = value;
        far_end_path_ua_ss.value_namespace = name_space;
        far_end_path_ua_ss.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::FePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "far-end-path-e-ss")
    {
        far_end_path_e_ss.yfilter = yfilter;
    }
    if(value_path == "far-end-path-se-ss")
    {
        far_end_path_se_ss.yfilter = yfilter;
    }
    if(value_path == "far-end-path-c-vs")
    {
        far_end_path_c_vs.yfilter = yfilter;
    }
    if(value_path == "far-end-path-ua-ss")
    {
        far_end_path_ua_ss.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::FePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "far-end-path-e-ss" || name == "far-end-path-se-ss" || name == "far-end-path-c-vs" || name == "far-end-path-ua-ss")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistories()
    :
    sonet_hour24ocn_history(this, {"number"})
{

    yang_name = "sonet-hour24ocn-histories"; yang_parent_name = "sonet-hour24-history"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::~SonetHour24ocnHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sonet_hour24ocn_history.len(); index++)
    {
        if(sonet_hour24ocn_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::has_operation() const
{
    for (std::size_t index=0; index<sonet_hour24ocn_history.len(); index++)
    {
        if(sonet_hour24ocn_history[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-hour24ocn-histories";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-hour24ocn-history")
    {
        auto ent_ = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory>();
        ent_->parent = this;
        sonet_hour24ocn_history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sonet_hour24ocn_history.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonet-hour24ocn-history")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnHistory()
    :
    number{YType::uint32, "number"}
        ,
    sonet_hour24ocn_time_line_instances(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances>())
{
    sonet_hour24ocn_time_line_instances->parent = this;

    yang_name = "sonet-hour24ocn-history"; yang_parent_name = "sonet-hour24ocn-histories"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::~SonetHour24ocnHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| (sonet_hour24ocn_time_line_instances !=  nullptr && sonet_hour24ocn_time_line_instances->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (sonet_hour24ocn_time_line_instances !=  nullptr && sonet_hour24ocn_time_line_instances->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-hour24ocn-history";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-hour24ocn-time-line-instances")
    {
        if(sonet_hour24ocn_time_line_instances == nullptr)
        {
            sonet_hour24ocn_time_line_instances = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances>();
        }
        return sonet_hour24ocn_time_line_instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sonet_hour24ocn_time_line_instances != nullptr)
    {
        _children["sonet-hour24ocn-time-line-instances"] = sonet_hour24ocn_time_line_instances;
    }

    return _children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonet-hour24ocn-time-line-instances" || name == "number")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstances()
    :
    sonet_hour24ocn_time_line_instance(this, {"number"})
{

    yang_name = "sonet-hour24ocn-time-line-instances"; yang_parent_name = "sonet-hour24ocn-history"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::~SonetHour24ocnTimeLineInstances()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sonet_hour24ocn_time_line_instance.len(); index++)
    {
        if(sonet_hour24ocn_time_line_instance[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::has_operation() const
{
    for (std::size_t index=0; index<sonet_hour24ocn_time_line_instance.len(); index++)
    {
        if(sonet_hour24ocn_time_line_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-hour24ocn-time-line-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-hour24ocn-time-line-instance")
    {
        auto ent_ = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance>();
        ent_->parent = this;
        sonet_hour24ocn_time_line_instance.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sonet_hour24ocn_time_line_instance.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonet-hour24ocn-time-line-instance")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::SonetHour24ocnTimeLineInstance()
    :
    number{YType::uint32, "number"},
    index_{YType::uint32, "index"},
    valid{YType::boolean, "valid"},
    timestamp{YType::str, "timestamp"},
    last_clear_time{YType::str, "last-clear-time"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"}
        ,
    section(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Section>())
    , line(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line>())
    , fe_line(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine>())
{
    section->parent = this;
    line->parent = this;
    fe_line->parent = this;

    yang_name = "sonet-hour24ocn-time-line-instance"; yang_parent_name = "sonet-hour24ocn-time-line-instances"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::~SonetHour24ocnTimeLineInstance()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| index_.is_set
	|| valid.is_set
	|| timestamp.is_set
	|| last_clear_time.is_set
	|| last_clear15_min_time.is_set
	|| last_clear24_hr_time.is_set
	|| (section !=  nullptr && section->has_data())
	|| (line !=  nullptr && line->has_data())
	|| (fe_line !=  nullptr && fe_line->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(last_clear_time.yfilter)
	|| ydk::is_set(last_clear15_min_time.yfilter)
	|| ydk::is_set(last_clear24_hr_time.yfilter)
	|| (section !=  nullptr && section->has_operation())
	|| (line !=  nullptr && line->has_operation())
	|| (fe_line !=  nullptr && fe_line->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-hour24ocn-time-line-instance";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.yfilter)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (last_clear15_min_time.is_set || is_set(last_clear15_min_time.yfilter)) leaf_name_data.push_back(last_clear15_min_time.get_name_leafdata());
    if (last_clear24_hr_time.is_set || is_set(last_clear24_hr_time.yfilter)) leaf_name_data.push_back(last_clear24_hr_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "section")
    {
        if(section == nullptr)
        {
            section = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Section>();
        }
        return section;
    }

    if(child_yang_name == "line")
    {
        if(line == nullptr)
        {
            line = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line>();
        }
        return line;
    }

    if(child_yang_name == "fe-line")
    {
        if(fe_line == nullptr)
        {
            fe_line = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine>();
        }
        return fe_line;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(section != nullptr)
    {
        _children["section"] = section;
    }

    if(line != nullptr)
    {
        _children["line"] = line;
    }

    if(fe_line != nullptr)
    {
        _children["fe-line"] = fe_line;
    }

    return _children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time = value;
        last_clear24_hr_time.value_namespace = name_space;
        last_clear24_hr_time.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "section" || name == "line" || name == "fe-line" || name == "number" || name == "index" || name == "valid" || name == "timestamp" || name == "last-clear-time" || name == "last-clear15-min-time" || name == "last-clear24-hr-time")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Section::Section()
    :
    section_status{YType::int32, "section-status"}
        ,
    section_e_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Section::SectionESs>())
    , section_se_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Section::SectionSeSs>())
    , section_sef_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Section::SectionSefSs>())
    , section_c_vs(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Section::SectionCVs>())
{
    section_e_ss->parent = this;
    section_se_ss->parent = this;
    section_sef_ss->parent = this;
    section_c_vs->parent = this;

    yang_name = "section"; yang_parent_name = "sonet-hour24ocn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Section::~Section()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Section::has_data() const
{
    if (is_presence_container) return true;
    return section_status.is_set
	|| (section_e_ss !=  nullptr && section_e_ss->has_data())
	|| (section_se_ss !=  nullptr && section_se_ss->has_data())
	|| (section_sef_ss !=  nullptr && section_sef_ss->has_data())
	|| (section_c_vs !=  nullptr && section_c_vs->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Section::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(section_status.yfilter)
	|| (section_e_ss !=  nullptr && section_e_ss->has_operation())
	|| (section_se_ss !=  nullptr && section_se_ss->has_operation())
	|| (section_sef_ss !=  nullptr && section_sef_ss->has_operation())
	|| (section_c_vs !=  nullptr && section_c_vs->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Section::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Section::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (section_status.is_set || is_set(section_status.yfilter)) leaf_name_data.push_back(section_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Section::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "section-e-ss")
    {
        if(section_e_ss == nullptr)
        {
            section_e_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Section::SectionESs>();
        }
        return section_e_ss;
    }

    if(child_yang_name == "section-se-ss")
    {
        if(section_se_ss == nullptr)
        {
            section_se_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Section::SectionSeSs>();
        }
        return section_se_ss;
    }

    if(child_yang_name == "section-sef-ss")
    {
        if(section_sef_ss == nullptr)
        {
            section_sef_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Section::SectionSefSs>();
        }
        return section_sef_ss;
    }

    if(child_yang_name == "section-c-vs")
    {
        if(section_c_vs == nullptr)
        {
            section_c_vs = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Section::SectionCVs>();
        }
        return section_c_vs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Section::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(section_e_ss != nullptr)
    {
        _children["section-e-ss"] = section_e_ss;
    }

    if(section_se_ss != nullptr)
    {
        _children["section-se-ss"] = section_se_ss;
    }

    if(section_sef_ss != nullptr)
    {
        _children["section-sef-ss"] = section_sef_ss;
    }

    if(section_c_vs != nullptr)
    {
        _children["section-c-vs"] = section_c_vs;
    }

    return _children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Section::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "section-status")
    {
        section_status = value;
        section_status.value_namespace = name_space;
        section_status.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Section::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "section-status")
    {
        section_status.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Section::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "section-e-ss" || name == "section-se-ss" || name == "section-sef-ss" || name == "section-c-vs" || name == "section-status")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Section::SectionESs::SectionESs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "section-e-ss"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Section::SectionESs::~SectionESs()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Section::SectionESs::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Section::SectionESs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Section::SectionESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-e-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Section::SectionESs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Section::SectionESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Section::SectionESs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Section::SectionESs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Section::SectionESs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Section::SectionESs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Section::SectionSeSs::SectionSeSs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "section-se-ss"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Section::SectionSeSs::~SectionSeSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Section::SectionSeSs::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Section::SectionSeSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Section::SectionSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-se-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Section::SectionSeSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Section::SectionSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Section::SectionSeSs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Section::SectionSeSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Section::SectionSeSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Section::SectionSeSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Section::SectionSefSs::SectionSefSs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "section-sef-ss"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Section::SectionSefSs::~SectionSefSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Section::SectionSefSs::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Section::SectionSefSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Section::SectionSefSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-sef-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Section::SectionSefSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Section::SectionSefSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Section::SectionSefSs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Section::SectionSefSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Section::SectionSefSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Section::SectionSefSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Section::SectionCVs::SectionCVs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "section-c-vs"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Section::SectionCVs::~SectionCVs()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Section::SectionCVs::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Section::SectionCVs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Section::SectionCVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-c-vs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Section::SectionCVs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Section::SectionCVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Section::SectionCVs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Section::SectionCVs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Section::SectionCVs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Section::SectionCVs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::Line()
    :
    line_status{YType::int32, "line-status"}
        ,
    line_e_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::LineESs>())
    , line_se_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::LineSeSs>())
    , line_c_vs(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::LineCVs>())
    , line_ua_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::LineUaSs>())
    , line_fc_ls(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::LineFcLs>())
{
    line_e_ss->parent = this;
    line_se_ss->parent = this;
    line_c_vs->parent = this;
    line_ua_ss->parent = this;
    line_fc_ls->parent = this;

    yang_name = "line"; yang_parent_name = "sonet-hour24ocn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::~Line()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::has_data() const
{
    if (is_presence_container) return true;
    return line_status.is_set
	|| (line_e_ss !=  nullptr && line_e_ss->has_data())
	|| (line_se_ss !=  nullptr && line_se_ss->has_data())
	|| (line_c_vs !=  nullptr && line_c_vs->has_data())
	|| (line_ua_ss !=  nullptr && line_ua_ss->has_data())
	|| (line_fc_ls !=  nullptr && line_fc_ls->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(line_status.yfilter)
	|| (line_e_ss !=  nullptr && line_e_ss->has_operation())
	|| (line_se_ss !=  nullptr && line_se_ss->has_operation())
	|| (line_c_vs !=  nullptr && line_c_vs->has_operation())
	|| (line_ua_ss !=  nullptr && line_ua_ss->has_operation())
	|| (line_fc_ls !=  nullptr && line_fc_ls->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (line_status.is_set || is_set(line_status.yfilter)) leaf_name_data.push_back(line_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "line-e-ss")
    {
        if(line_e_ss == nullptr)
        {
            line_e_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::LineESs>();
        }
        return line_e_ss;
    }

    if(child_yang_name == "line-se-ss")
    {
        if(line_se_ss == nullptr)
        {
            line_se_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::LineSeSs>();
        }
        return line_se_ss;
    }

    if(child_yang_name == "line-c-vs")
    {
        if(line_c_vs == nullptr)
        {
            line_c_vs = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::LineCVs>();
        }
        return line_c_vs;
    }

    if(child_yang_name == "line-ua-ss")
    {
        if(line_ua_ss == nullptr)
        {
            line_ua_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::LineUaSs>();
        }
        return line_ua_ss;
    }

    if(child_yang_name == "line-fc-ls")
    {
        if(line_fc_ls == nullptr)
        {
            line_fc_ls = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::LineFcLs>();
        }
        return line_fc_ls;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(line_e_ss != nullptr)
    {
        _children["line-e-ss"] = line_e_ss;
    }

    if(line_se_ss != nullptr)
    {
        _children["line-se-ss"] = line_se_ss;
    }

    if(line_c_vs != nullptr)
    {
        _children["line-c-vs"] = line_c_vs;
    }

    if(line_ua_ss != nullptr)
    {
        _children["line-ua-ss"] = line_ua_ss;
    }

    if(line_fc_ls != nullptr)
    {
        _children["line-fc-ls"] = line_fc_ls;
    }

    return _children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "line-status")
    {
        line_status = value;
        line_status.value_namespace = name_space;
        line_status.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "line-status")
    {
        line_status.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "line-e-ss" || name == "line-se-ss" || name == "line-c-vs" || name == "line-ua-ss" || name == "line-fc-ls" || name == "line-status")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::LineESs::LineESs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "line-e-ss"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::LineESs::~LineESs()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::LineESs::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::LineESs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::LineESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-e-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::LineESs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::LineESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::LineESs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::LineESs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::LineESs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::LineESs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::LineSeSs::LineSeSs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "line-se-ss"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::LineSeSs::~LineSeSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::LineSeSs::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::LineSeSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::LineSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-se-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::LineSeSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::LineSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::LineSeSs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::LineSeSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::LineSeSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::LineSeSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::LineCVs::LineCVs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "line-c-vs"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::LineCVs::~LineCVs()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::LineCVs::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::LineCVs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::LineCVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-c-vs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::LineCVs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::LineCVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::LineCVs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::LineCVs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::LineCVs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::LineCVs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::LineUaSs::LineUaSs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "line-ua-ss"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::LineUaSs::~LineUaSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::LineUaSs::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::LineUaSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::LineUaSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-ua-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::LineUaSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::LineUaSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::LineUaSs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::LineUaSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::LineUaSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::LineUaSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::LineFcLs::LineFcLs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "line-fc-ls"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::LineFcLs::~LineFcLs()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::LineFcLs::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::LineFcLs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::LineFcLs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-fc-ls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::LineFcLs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::LineFcLs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::LineFcLs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::LineFcLs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::LineFcLs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::LineFcLs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::FeLine()
    :
    far_end_line_e_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::FarEndLineESs>())
    , far_end_line_se_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::FarEndLineSeSs>())
    , far_end_line_c_vs(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::FarEndLineCVs>())
    , far_end_line_ua_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::FarEndLineUaSs>())
    , far_end_line_fc_ls(std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::FarEndLineFcLs>())
{
    far_end_line_e_ss->parent = this;
    far_end_line_se_ss->parent = this;
    far_end_line_c_vs->parent = this;
    far_end_line_ua_ss->parent = this;
    far_end_line_fc_ls->parent = this;

    yang_name = "fe-line"; yang_parent_name = "sonet-hour24ocn-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::~FeLine()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::has_data() const
{
    if (is_presence_container) return true;
    return (far_end_line_e_ss !=  nullptr && far_end_line_e_ss->has_data())
	|| (far_end_line_se_ss !=  nullptr && far_end_line_se_ss->has_data())
	|| (far_end_line_c_vs !=  nullptr && far_end_line_c_vs->has_data())
	|| (far_end_line_ua_ss !=  nullptr && far_end_line_ua_ss->has_data())
	|| (far_end_line_fc_ls !=  nullptr && far_end_line_fc_ls->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::has_operation() const
{
    return is_set(yfilter)
	|| (far_end_line_e_ss !=  nullptr && far_end_line_e_ss->has_operation())
	|| (far_end_line_se_ss !=  nullptr && far_end_line_se_ss->has_operation())
	|| (far_end_line_c_vs !=  nullptr && far_end_line_c_vs->has_operation())
	|| (far_end_line_ua_ss !=  nullptr && far_end_line_ua_ss->has_operation())
	|| (far_end_line_fc_ls !=  nullptr && far_end_line_fc_ls->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fe-line";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "far-end-line-e-ss")
    {
        if(far_end_line_e_ss == nullptr)
        {
            far_end_line_e_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::FarEndLineESs>();
        }
        return far_end_line_e_ss;
    }

    if(child_yang_name == "far-end-line-se-ss")
    {
        if(far_end_line_se_ss == nullptr)
        {
            far_end_line_se_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::FarEndLineSeSs>();
        }
        return far_end_line_se_ss;
    }

    if(child_yang_name == "far-end-line-c-vs")
    {
        if(far_end_line_c_vs == nullptr)
        {
            far_end_line_c_vs = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::FarEndLineCVs>();
        }
        return far_end_line_c_vs;
    }

    if(child_yang_name == "far-end-line-ua-ss")
    {
        if(far_end_line_ua_ss == nullptr)
        {
            far_end_line_ua_ss = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::FarEndLineUaSs>();
        }
        return far_end_line_ua_ss;
    }

    if(child_yang_name == "far-end-line-fc-ls")
    {
        if(far_end_line_fc_ls == nullptr)
        {
            far_end_line_fc_ls = std::make_shared<PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::FarEndLineFcLs>();
        }
        return far_end_line_fc_ls;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(far_end_line_e_ss != nullptr)
    {
        _children["far-end-line-e-ss"] = far_end_line_e_ss;
    }

    if(far_end_line_se_ss != nullptr)
    {
        _children["far-end-line-se-ss"] = far_end_line_se_ss;
    }

    if(far_end_line_c_vs != nullptr)
    {
        _children["far-end-line-c-vs"] = far_end_line_c_vs;
    }

    if(far_end_line_ua_ss != nullptr)
    {
        _children["far-end-line-ua-ss"] = far_end_line_ua_ss;
    }

    if(far_end_line_fc_ls != nullptr)
    {
        _children["far-end-line-fc-ls"] = far_end_line_fc_ls;
    }

    return _children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "far-end-line-e-ss" || name == "far-end-line-se-ss" || name == "far-end-line-c-vs" || name == "far-end-line-ua-ss" || name == "far-end-line-fc-ls")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::FarEndLineESs::FarEndLineESs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "far-end-line-e-ss"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::FarEndLineESs::~FarEndLineESs()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::FarEndLineESs::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::FarEndLineESs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::FarEndLineESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-e-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::FarEndLineESs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::FarEndLineESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::FarEndLineESs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::FarEndLineESs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::FarEndLineESs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::FarEndLineESs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::FarEndLineSeSs::FarEndLineSeSs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "far-end-line-se-ss"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::FarEndLineSeSs::~FarEndLineSeSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::FarEndLineSeSs::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::FarEndLineSeSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::FarEndLineSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-se-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::FarEndLineSeSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::FarEndLineSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::FarEndLineSeSs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::FarEndLineSeSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::FarEndLineSeSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::FarEndLineSeSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::FarEndLineCVs::FarEndLineCVs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "far-end-line-c-vs"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::FarEndLineCVs::~FarEndLineCVs()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::FarEndLineCVs::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::FarEndLineCVs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::FarEndLineCVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-c-vs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::FarEndLineCVs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::FarEndLineCVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::FarEndLineCVs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::FarEndLineCVs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::FarEndLineCVs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::FarEndLineCVs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::FarEndLineUaSs::FarEndLineUaSs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "far-end-line-ua-ss"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::FarEndLineUaSs::~FarEndLineUaSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::FarEndLineUaSs::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::FarEndLineUaSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::FarEndLineUaSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-ua-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::FarEndLineUaSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::FarEndLineUaSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::FarEndLineUaSs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::FarEndLineUaSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::FarEndLineUaSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::FarEndLineUaSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::FarEndLineFcLs::FarEndLineFcLs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "far-end-line-fc-ls"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::FarEndLineFcLs::~FarEndLineFcLs()
{
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::FarEndLineFcLs::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::FarEndLineFcLs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::FarEndLineFcLs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-fc-ls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::FarEndLineFcLs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::FarEndLineFcLs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::FarEndLineFcLs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::FarEndLineFcLs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::FarEndLineFcLs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::FarEndLineFcLs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::StsHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::StsHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sts_port_histories != nullptr)
    {
        _children["sts-port-histories"] = sts_port_histories;
    }

    return _children;
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
    :
    sts_port_history(this, {"name"})
{

    yang_name = "sts-port-histories"; yang_parent_name = "sts-history"; is_top_level_class = false; has_list_ancestor = false; 
}

PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::~StsPortHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sts_port_history.len(); index++)
    {
        if(sts_port_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::has_operation() const
{
    for (std::size_t index=0; index<sts_port_history.len(); index++)
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

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sts-port-history")
    {
        auto ent_ = std::make_shared<PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory>();
        ent_->parent = this;
        sts_port_history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sts_port_history.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    sts_minute15_history(std::make_shared<PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History>())
    , sts_hour24_history(std::make_shared<PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History>())
{
    sts_minute15_history->parent = this;
    sts_hour24_history->parent = this;

    yang_name = "sts-port-history"; yang_parent_name = "sts-port-histories"; is_top_level_class = false; has_list_ancestor = false; 
}

PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::~StsPortHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (sts_minute15_history !=  nullptr && sts_minute15_history->has_data())
	|| (sts_hour24_history !=  nullptr && sts_hour24_history->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (sts_minute15_history !=  nullptr && sts_minute15_history->has_operation())
	|| (sts_hour24_history !=  nullptr && sts_hour24_history->has_operation());
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
    path_buffer << "sts-port-history";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sts-minute15-history")
    {
        if(sts_minute15_history == nullptr)
        {
            sts_minute15_history = std::make_shared<PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History>();
        }
        return sts_minute15_history;
    }

    if(child_yang_name == "sts-hour24-history")
    {
        if(sts_hour24_history == nullptr)
        {
            sts_hour24_history = std::make_shared<PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History>();
        }
        return sts_hour24_history;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sts_minute15_history != nullptr)
    {
        _children["sts-minute15-history"] = sts_minute15_history;
    }

    if(sts_hour24_history != nullptr)
    {
        _children["sts-hour24-history"] = sts_hour24_history;
    }

    return _children;
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
    if(name == "sts-minute15-history" || name == "sts-hour24-history" || name == "name")
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sts_minute15_path_histories != nullptr)
    {
        _children["sts-minute15-path-histories"] = sts_minute15_path_histories;
    }

    return _children;
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
    :
    sts_minute15_path_history(this, {"number"})
{

    yang_name = "sts-minute15-path-histories"; yang_parent_name = "sts-minute15-history"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::~StsMinute15PathHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sts_minute15_path_history.len(); index++)
    {
        if(sts_minute15_path_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::has_operation() const
{
    for (std::size_t index=0; index<sts_minute15_path_history.len(); index++)
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

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sts-minute15-path-history")
    {
        auto ent_ = std::make_shared<PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory>();
        ent_->parent = this;
        sts_minute15_path_history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sts_minute15_path_history.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    number{YType::uint32, "number"}
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
    if (is_presence_container) return true;
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
    path_buffer << "sts-minute15-path-history";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sts_minute15_path_time_line_instances != nullptr)
    {
        _children["sts-minute15-path-time-line-instances"] = sts_minute15_path_time_line_instances;
    }

    return _children;
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
    :
    sts_minute15_path_time_line_instance(this, {"number"})
{

    yang_name = "sts-minute15-path-time-line-instances"; yang_parent_name = "sts-minute15-path-history"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::~StsMinute15PathTimeLineInstances()
{
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sts_minute15_path_time_line_instance.len(); index++)
    {
        if(sts_minute15_path_time_line_instance[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::has_operation() const
{
    for (std::size_t index=0; index<sts_minute15_path_time_line_instance.len(); index++)
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

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sts-minute15-path-time-line-instance")
    {
        auto ent_ = std::make_shared<PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance>();
        ent_->parent = this;
        sts_minute15_path_time_line_instance.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sts_minute15_path_time_line_instance.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    number{YType::uint32, "number"},
    index_{YType::uint32, "index"},
    valid{YType::boolean, "valid"},
    timestamp{YType::str, "timestamp"},
    last_clear_time{YType::str, "last-clear-time"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"}
        ,
    path(std::make_shared<PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path>())
    , fe_path(std::make_shared<PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::FePath>())
{
    path->parent = this;
    fe_path->parent = this;

    yang_name = "sts-minute15-path-time-line-instance"; yang_parent_name = "sts-minute15-path-time-line-instances"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::~StsMinute15PathTimeLineInstance()
{
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| index_.is_set
	|| valid.is_set
	|| timestamp.is_set
	|| last_clear_time.is_set
	|| last_clear15_min_time.is_set
	|| last_clear24_hr_time.is_set
	|| (path !=  nullptr && path->has_data())
	|| (fe_path !=  nullptr && fe_path->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(last_clear_time.yfilter)
	|| ydk::is_set(last_clear15_min_time.yfilter)
	|| ydk::is_set(last_clear24_hr_time.yfilter)
	|| (path !=  nullptr && path->has_operation())
	|| (fe_path !=  nullptr && fe_path->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sts-minute15-path-time-line-instance";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.yfilter)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (last_clear15_min_time.is_set || is_set(last_clear15_min_time.yfilter)) leaf_name_data.push_back(last_clear15_min_time.get_name_leafdata());
    if (last_clear24_hr_time.is_set || is_set(last_clear24_hr_time.yfilter)) leaf_name_data.push_back(last_clear24_hr_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path")
    {
        if(path == nullptr)
        {
            path = std::make_shared<PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path>();
        }
        return path;
    }

    if(child_yang_name == "fe-path")
    {
        if(fe_path == nullptr)
        {
            fe_path = std::make_shared<PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::FePath>();
        }
        return fe_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(path != nullptr)
    {
        _children["path"] = path;
    }

    if(fe_path != nullptr)
    {
        _children["fe-path"] = fe_path;
    }

    return _children;
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
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time = value;
        last_clear24_hr_time.value_namespace = name_space;
        last_clear24_hr_time.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "fe-path" || name == "number" || name == "index" || name == "valid" || name == "timestamp" || name == "last-clear-time" || name == "last-clear15-min-time" || name == "last-clear24-hr-time")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::Path()
    :
    path_width{YType::enumeration, "path-width"},
    path_status{YType::int32, "path-status"}
        ,
    path_e_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathESs>())
    , path_se_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathSeSs>())
    , path_c_vs(std::make_shared<PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathCVs>())
    , path_ua_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathUaSs>())
{
    path_e_ss->parent = this;
    path_se_ss->parent = this;
    path_c_vs->parent = this;
    path_ua_ss->parent = this;

    yang_name = "path"; yang_parent_name = "sts-minute15-path-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::~Path()
{
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::has_data() const
{
    if (is_presence_container) return true;
    return path_width.is_set
	|| path_status.is_set
	|| (path_e_ss !=  nullptr && path_e_ss->has_data())
	|| (path_se_ss !=  nullptr && path_se_ss->has_data())
	|| (path_c_vs !=  nullptr && path_c_vs->has_data())
	|| (path_ua_ss !=  nullptr && path_ua_ss->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_width.yfilter)
	|| ydk::is_set(path_status.yfilter)
	|| (path_e_ss !=  nullptr && path_e_ss->has_operation())
	|| (path_se_ss !=  nullptr && path_se_ss->has_operation())
	|| (path_c_vs !=  nullptr && path_c_vs->has_operation())
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

    if (path_width.is_set || is_set(path_width.yfilter)) leaf_name_data.push_back(path_width.get_name_leafdata());
    if (path_status.is_set || is_set(path_status.yfilter)) leaf_name_data.push_back(path_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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

    if(child_yang_name == "path-c-vs")
    {
        if(path_c_vs == nullptr)
        {
            path_c_vs = std::make_shared<PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathCVs>();
        }
        return path_c_vs;
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

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(path_e_ss != nullptr)
    {
        _children["path-e-ss"] = path_e_ss;
    }

    if(path_se_ss != nullptr)
    {
        _children["path-se-ss"] = path_se_ss;
    }

    if(path_c_vs != nullptr)
    {
        _children["path-c-vs"] = path_c_vs;
    }

    if(path_ua_ss != nullptr)
    {
        _children["path-ua-ss"] = path_ua_ss;
    }

    return _children;
}

void PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-width")
    {
        path_width = value;
        path_width.value_namespace = name_space;
        path_width.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-status")
    {
        path_status = value;
        path_status.value_namespace = name_space;
        path_status.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-width")
    {
        path_width.yfilter = yfilter;
    }
    if(value_path == "path-status")
    {
        path_status.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-e-ss" || name == "path-se-ss" || name == "path-c-vs" || name == "path-ua-ss" || name == "path-width" || name == "path-status")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathESs::PathESs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "path-e-ss"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathESs::~PathESs()
{
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathESs::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathESs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathESs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathESs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathESs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathESs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathSeSs::PathSeSs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "path-se-ss"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathSeSs::~PathSeSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathSeSs::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathSeSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathSeSs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathSeSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathSeSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathSeSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathCVs::PathCVs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "path-c-vs"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathCVs::~PathCVs()
{
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathCVs::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathCVs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathCVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathCVs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathCVs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathCVs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathCVs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathUaSs::PathUaSs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "path-ua-ss"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathUaSs::~PathUaSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathUaSs::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathUaSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathUaSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathUaSs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathUaSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathUaSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathUaSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::FePath::FePath()
    :
    far_end_path_e_ss{YType::uint32, "far-end-path-e-ss"},
    far_end_path_se_ss{YType::uint32, "far-end-path-se-ss"},
    far_end_path_c_vs{YType::uint32, "far-end-path-c-vs"},
    far_end_path_ua_ss{YType::uint32, "far-end-path-ua-ss"}
{

    yang_name = "fe-path"; yang_parent_name = "sts-minute15-path-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::FePath::~FePath()
{
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::FePath::has_data() const
{
    if (is_presence_container) return true;
    return far_end_path_e_ss.is_set
	|| far_end_path_se_ss.is_set
	|| far_end_path_c_vs.is_set
	|| far_end_path_ua_ss.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::FePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(far_end_path_e_ss.yfilter)
	|| ydk::is_set(far_end_path_se_ss.yfilter)
	|| ydk::is_set(far_end_path_c_vs.yfilter)
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

    if (far_end_path_e_ss.is_set || is_set(far_end_path_e_ss.yfilter)) leaf_name_data.push_back(far_end_path_e_ss.get_name_leafdata());
    if (far_end_path_se_ss.is_set || is_set(far_end_path_se_ss.yfilter)) leaf_name_data.push_back(far_end_path_se_ss.get_name_leafdata());
    if (far_end_path_c_vs.is_set || is_set(far_end_path_c_vs.yfilter)) leaf_name_data.push_back(far_end_path_c_vs.get_name_leafdata());
    if (far_end_path_ua_ss.is_set || is_set(far_end_path_ua_ss.yfilter)) leaf_name_data.push_back(far_end_path_ua_ss.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::FePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::FePath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::FePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "far-end-path-c-vs")
    {
        far_end_path_c_vs = value;
        far_end_path_c_vs.value_namespace = name_space;
        far_end_path_c_vs.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "far-end-path-e-ss")
    {
        far_end_path_e_ss.yfilter = yfilter;
    }
    if(value_path == "far-end-path-se-ss")
    {
        far_end_path_se_ss.yfilter = yfilter;
    }
    if(value_path == "far-end-path-c-vs")
    {
        far_end_path_c_vs.yfilter = yfilter;
    }
    if(value_path == "far-end-path-ua-ss")
    {
        far_end_path_ua_ss.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::FePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "far-end-path-e-ss" || name == "far-end-path-se-ss" || name == "far-end-path-c-vs" || name == "far-end-path-ua-ss")
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
    if (is_presence_container) return true;
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

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sts_hour24_path_histories != nullptr)
    {
        _children["sts-hour24-path-histories"] = sts_hour24_path_histories;
    }

    return _children;
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
    :
    sts_hour24_path_history(this, {"number"})
{

    yang_name = "sts-hour24-path-histories"; yang_parent_name = "sts-hour24-history"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::~StsHour24PathHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sts_hour24_path_history.len(); index++)
    {
        if(sts_hour24_path_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::has_operation() const
{
    for (std::size_t index=0; index<sts_hour24_path_history.len(); index++)
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

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sts-hour24-path-history")
    {
        auto ent_ = std::make_shared<PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory>();
        ent_->parent = this;
        sts_hour24_path_history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sts_hour24_path_history.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    number{YType::uint32, "number"}
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
    if (is_presence_container) return true;
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
    path_buffer << "sts-hour24-path-history";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sts_hour24_path_time_line_instances != nullptr)
    {
        _children["sts-hour24-path-time-line-instances"] = sts_hour24_path_time_line_instances;
    }

    return _children;
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
    :
    sts_hour24_path_time_line_instance(this, {"number"})
{

    yang_name = "sts-hour24-path-time-line-instances"; yang_parent_name = "sts-hour24-path-history"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::~StsHour24PathTimeLineInstances()
{
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sts_hour24_path_time_line_instance.len(); index++)
    {
        if(sts_hour24_path_time_line_instance[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::has_operation() const
{
    for (std::size_t index=0; index<sts_hour24_path_time_line_instance.len(); index++)
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

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sts-hour24-path-time-line-instance")
    {
        auto ent_ = std::make_shared<PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance>();
        ent_->parent = this;
        sts_hour24_path_time_line_instance.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sts_hour24_path_time_line_instance.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    number{YType::uint32, "number"},
    index_{YType::uint32, "index"},
    valid{YType::boolean, "valid"},
    timestamp{YType::str, "timestamp"},
    last_clear_time{YType::str, "last-clear-time"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"}
        ,
    path(std::make_shared<PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path>())
    , fe_path(std::make_shared<PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::FePath>())
{
    path->parent = this;
    fe_path->parent = this;

    yang_name = "sts-hour24-path-time-line-instance"; yang_parent_name = "sts-hour24-path-time-line-instances"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::~StsHour24PathTimeLineInstance()
{
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| index_.is_set
	|| valid.is_set
	|| timestamp.is_set
	|| last_clear_time.is_set
	|| last_clear15_min_time.is_set
	|| last_clear24_hr_time.is_set
	|| (path !=  nullptr && path->has_data())
	|| (fe_path !=  nullptr && fe_path->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(last_clear_time.yfilter)
	|| ydk::is_set(last_clear15_min_time.yfilter)
	|| ydk::is_set(last_clear24_hr_time.yfilter)
	|| (path !=  nullptr && path->has_operation())
	|| (fe_path !=  nullptr && fe_path->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sts-hour24-path-time-line-instance";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.yfilter)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (last_clear15_min_time.is_set || is_set(last_clear15_min_time.yfilter)) leaf_name_data.push_back(last_clear15_min_time.get_name_leafdata());
    if (last_clear24_hr_time.is_set || is_set(last_clear24_hr_time.yfilter)) leaf_name_data.push_back(last_clear24_hr_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path")
    {
        if(path == nullptr)
        {
            path = std::make_shared<PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path>();
        }
        return path;
    }

    if(child_yang_name == "fe-path")
    {
        if(fe_path == nullptr)
        {
            fe_path = std::make_shared<PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::FePath>();
        }
        return fe_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(path != nullptr)
    {
        _children["path"] = path;
    }

    if(fe_path != nullptr)
    {
        _children["fe-path"] = fe_path;
    }

    return _children;
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
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time = value;
        last_clear24_hr_time.value_namespace = name_space;
        last_clear24_hr_time.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "fe-path" || name == "number" || name == "index" || name == "valid" || name == "timestamp" || name == "last-clear-time" || name == "last-clear15-min-time" || name == "last-clear24-hr-time")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::Path()
    :
    path_width{YType::enumeration, "path-width"},
    path_status{YType::int32, "path-status"}
        ,
    path_e_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathESs>())
    , path_se_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathSeSs>())
    , path_c_vs(std::make_shared<PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathCVs>())
    , path_ua_ss(std::make_shared<PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathUaSs>())
{
    path_e_ss->parent = this;
    path_se_ss->parent = this;
    path_c_vs->parent = this;
    path_ua_ss->parent = this;

    yang_name = "path"; yang_parent_name = "sts-hour24-path-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::~Path()
{
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::has_data() const
{
    if (is_presence_container) return true;
    return path_width.is_set
	|| path_status.is_set
	|| (path_e_ss !=  nullptr && path_e_ss->has_data())
	|| (path_se_ss !=  nullptr && path_se_ss->has_data())
	|| (path_c_vs !=  nullptr && path_c_vs->has_data())
	|| (path_ua_ss !=  nullptr && path_ua_ss->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_width.yfilter)
	|| ydk::is_set(path_status.yfilter)
	|| (path_e_ss !=  nullptr && path_e_ss->has_operation())
	|| (path_se_ss !=  nullptr && path_se_ss->has_operation())
	|| (path_c_vs !=  nullptr && path_c_vs->has_operation())
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

    if (path_width.is_set || is_set(path_width.yfilter)) leaf_name_data.push_back(path_width.get_name_leafdata());
    if (path_status.is_set || is_set(path_status.yfilter)) leaf_name_data.push_back(path_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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

    if(child_yang_name == "path-c-vs")
    {
        if(path_c_vs == nullptr)
        {
            path_c_vs = std::make_shared<PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathCVs>();
        }
        return path_c_vs;
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

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(path_e_ss != nullptr)
    {
        _children["path-e-ss"] = path_e_ss;
    }

    if(path_se_ss != nullptr)
    {
        _children["path-se-ss"] = path_se_ss;
    }

    if(path_c_vs != nullptr)
    {
        _children["path-c-vs"] = path_c_vs;
    }

    if(path_ua_ss != nullptr)
    {
        _children["path-ua-ss"] = path_ua_ss;
    }

    return _children;
}

void PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-width")
    {
        path_width = value;
        path_width.value_namespace = name_space;
        path_width.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-status")
    {
        path_status = value;
        path_status.value_namespace = name_space;
        path_status.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-width")
    {
        path_width.yfilter = yfilter;
    }
    if(value_path == "path-status")
    {
        path_status.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-e-ss" || name == "path-se-ss" || name == "path-c-vs" || name == "path-ua-ss" || name == "path-width" || name == "path-status")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathESs::PathESs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "path-e-ss"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathESs::~PathESs()
{
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathESs::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathESs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathESs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathESs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathESs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathESs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathSeSs::PathSeSs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "path-se-ss"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathSeSs::~PathSeSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathSeSs::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathSeSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathSeSs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathSeSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathSeSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathSeSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathCVs::PathCVs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "path-c-vs"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathCVs::~PathCVs()
{
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathCVs::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathCVs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathCVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathCVs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathCVs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathCVs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathCVs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathUaSs::PathUaSs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "path-ua-ss"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathUaSs::~PathUaSs()
{
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathUaSs::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathUaSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathUaSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathUaSs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathUaSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathUaSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathUaSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::FePath::FePath()
    :
    far_end_path_e_ss{YType::uint32, "far-end-path-e-ss"},
    far_end_path_se_ss{YType::uint32, "far-end-path-se-ss"},
    far_end_path_c_vs{YType::uint32, "far-end-path-c-vs"},
    far_end_path_ua_ss{YType::uint32, "far-end-path-ua-ss"}
{

    yang_name = "fe-path"; yang_parent_name = "sts-hour24-path-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::FePath::~FePath()
{
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::FePath::has_data() const
{
    if (is_presence_container) return true;
    return far_end_path_e_ss.is_set
	|| far_end_path_se_ss.is_set
	|| far_end_path_c_vs.is_set
	|| far_end_path_ua_ss.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::FePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(far_end_path_e_ss.yfilter)
	|| ydk::is_set(far_end_path_se_ss.yfilter)
	|| ydk::is_set(far_end_path_c_vs.yfilter)
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

    if (far_end_path_e_ss.is_set || is_set(far_end_path_e_ss.yfilter)) leaf_name_data.push_back(far_end_path_e_ss.get_name_leafdata());
    if (far_end_path_se_ss.is_set || is_set(far_end_path_se_ss.yfilter)) leaf_name_data.push_back(far_end_path_se_ss.get_name_leafdata());
    if (far_end_path_c_vs.is_set || is_set(far_end_path_c_vs.yfilter)) leaf_name_data.push_back(far_end_path_c_vs.get_name_leafdata());
    if (far_end_path_ua_ss.is_set || is_set(far_end_path_ua_ss.yfilter)) leaf_name_data.push_back(far_end_path_ua_ss.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::FePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::FePath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::FePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "far-end-path-c-vs")
    {
        far_end_path_c_vs = value;
        far_end_path_c_vs.value_namespace = name_space;
        far_end_path_c_vs.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "far-end-path-e-ss")
    {
        far_end_path_e_ss.yfilter = yfilter;
    }
    if(value_path == "far-end-path-se-ss")
    {
        far_end_path_se_ss.yfilter = yfilter;
    }
    if(value_path == "far-end-path-c-vs")
    {
        far_end_path_c_vs.yfilter = yfilter;
    }
    if(value_path == "far-end-path-ua-ss")
    {
        far_end_path_ua_ss.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::FePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "far-end-path-e-ss" || name == "far-end-path-se-ss" || name == "far-end-path-c-vs" || name == "far-end-path-ua-ss")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetHistory()
    :
    ethernet_port_histories(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories>())
{
    ethernet_port_histories->parent = this;

    yang_name = "ethernet-history"; yang_parent_name = "periodic"; is_top_level_class = false; has_list_ancestor = false; 
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::~EthernetHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::has_data() const
{
    if (is_presence_container) return true;
    return (ethernet_port_histories !=  nullptr && ethernet_port_histories->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::has_operation() const
{
    return is_set(yfilter)
	|| (ethernet_port_histories !=  nullptr && ethernet_port_histories->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management-history/global/periodic/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet-port-histories")
    {
        if(ethernet_port_histories == nullptr)
        {
            ethernet_port_histories = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories>();
        }
        return ethernet_port_histories;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ethernet_port_histories != nullptr)
    {
        _children["ethernet-port-histories"] = ethernet_port_histories;
    }

    return _children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet-port-histories")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistories()
    :
    ethernet_port_history(this, {"name"})
{

    yang_name = "ethernet-port-histories"; yang_parent_name = "ethernet-history"; is_top_level_class = false; has_list_ancestor = false; 
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::~EthernetPortHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ethernet_port_history.len(); index++)
    {
        if(ethernet_port_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::has_operation() const
{
    for (std::size_t index=0; index<ethernet_port_history.len(); index++)
    {
        if(ethernet_port_history[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management-history/global/periodic/ethernet-history/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-port-histories";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet-port-history")
    {
        auto ent_ = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory>();
        ent_->parent = this;
        ethernet_port_history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ethernet_port_history.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet-port-history")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetPortHistory()
    :
    name{YType::str, "name"}
        ,
    ethernet_second30_history(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History>())
    , ethernet_hour24_history(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History>())
    , ethernet_minute15_history(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History>())
{
    ethernet_second30_history->parent = this;
    ethernet_hour24_history->parent = this;
    ethernet_minute15_history->parent = this;

    yang_name = "ethernet-port-history"; yang_parent_name = "ethernet-port-histories"; is_top_level_class = false; has_list_ancestor = false; 
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::~EthernetPortHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (ethernet_second30_history !=  nullptr && ethernet_second30_history->has_data())
	|| (ethernet_hour24_history !=  nullptr && ethernet_hour24_history->has_data())
	|| (ethernet_minute15_history !=  nullptr && ethernet_minute15_history->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (ethernet_second30_history !=  nullptr && ethernet_second30_history->has_operation())
	|| (ethernet_hour24_history !=  nullptr && ethernet_hour24_history->has_operation())
	|| (ethernet_minute15_history !=  nullptr && ethernet_minute15_history->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management-history/global/periodic/ethernet-history/ethernet-port-histories/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-port-history";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet-second30-history")
    {
        if(ethernet_second30_history == nullptr)
        {
            ethernet_second30_history = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History>();
        }
        return ethernet_second30_history;
    }

    if(child_yang_name == "ethernet-hour24-history")
    {
        if(ethernet_hour24_history == nullptr)
        {
            ethernet_hour24_history = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History>();
        }
        return ethernet_hour24_history;
    }

    if(child_yang_name == "ethernet-minute15-history")
    {
        if(ethernet_minute15_history == nullptr)
        {
            ethernet_minute15_history = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History>();
        }
        return ethernet_minute15_history;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ethernet_second30_history != nullptr)
    {
        _children["ethernet-second30-history"] = ethernet_second30_history;
    }

    if(ethernet_hour24_history != nullptr)
    {
        _children["ethernet-hour24-history"] = ethernet_hour24_history;
    }

    if(ethernet_minute15_history != nullptr)
    {
        _children["ethernet-minute15-history"] = ethernet_minute15_history;
    }

    return _children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet-second30-history" || name == "ethernet-hour24-history" || name == "ethernet-minute15-history" || name == "name")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::EthernetSecond30History()
    :
    second30pcs_histories(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories>())
    , second30_ether_histories(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories>())
    , second30_fec_histories(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30FecHistories>())
{
    second30pcs_histories->parent = this;
    second30_ether_histories->parent = this;
    second30_fec_histories->parent = this;

    yang_name = "ethernet-second30-history"; yang_parent_name = "ethernet-port-history"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::~EthernetSecond30History()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::has_data() const
{
    if (is_presence_container) return true;
    return (second30pcs_histories !=  nullptr && second30pcs_histories->has_data())
	|| (second30_ether_histories !=  nullptr && second30_ether_histories->has_data())
	|| (second30_fec_histories !=  nullptr && second30_fec_histories->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::has_operation() const
{
    return is_set(yfilter)
	|| (second30pcs_histories !=  nullptr && second30pcs_histories->has_operation())
	|| (second30_ether_histories !=  nullptr && second30_ether_histories->has_operation())
	|| (second30_fec_histories !=  nullptr && second30_fec_histories->has_operation());
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

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "second30pcs-histories")
    {
        if(second30pcs_histories == nullptr)
        {
            second30pcs_histories = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories>();
        }
        return second30pcs_histories;
    }

    if(child_yang_name == "second30-ether-histories")
    {
        if(second30_ether_histories == nullptr)
        {
            second30_ether_histories = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories>();
        }
        return second30_ether_histories;
    }

    if(child_yang_name == "second30-fec-histories")
    {
        if(second30_fec_histories == nullptr)
        {
            second30_fec_histories = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30FecHistories>();
        }
        return second30_fec_histories;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(second30pcs_histories != nullptr)
    {
        _children["second30pcs-histories"] = second30pcs_histories;
    }

    if(second30_ether_histories != nullptr)
    {
        _children["second30-ether-histories"] = second30_ether_histories;
    }

    if(second30_fec_histories != nullptr)
    {
        _children["second30-fec-histories"] = second30_fec_histories;
    }

    return _children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second30pcs-histories" || name == "second30-ether-histories" || name == "second30-fec-histories")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories::Second30pcsHistories()
    :
    second30pcs_history(this, {"slot_number"})
{

    yang_name = "second30pcs-histories"; yang_parent_name = "ethernet-second30-history"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories::~Second30pcsHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<second30pcs_history.len(); index++)
    {
        if(second30pcs_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories::has_operation() const
{
    for (std::size_t index=0; index<second30pcs_history.len(); index++)
    {
        if(second30pcs_history[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30pcs-histories";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "second30pcs-history")
    {
        auto ent_ = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories::Second30pcsHistory>();
        ent_->parent = this;
        second30pcs_history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : second30pcs_history.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second30pcs-history")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories::Second30pcsHistory::Second30pcsHistory()
    :
    slot_number{YType::uint32, "slot-number"}
        ,
    second30pcs_time_line_instances(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories::Second30pcsHistory::Second30pcsTimeLineInstances>())
{
    second30pcs_time_line_instances->parent = this;

    yang_name = "second30pcs-history"; yang_parent_name = "second30pcs-histories"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories::Second30pcsHistory::~Second30pcsHistory()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories::Second30pcsHistory::has_data() const
{
    if (is_presence_container) return true;
    return slot_number.is_set
	|| (second30pcs_time_line_instances !=  nullptr && second30pcs_time_line_instances->has_data());
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories::Second30pcsHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(slot_number.yfilter)
	|| (second30pcs_time_line_instances !=  nullptr && second30pcs_time_line_instances->has_operation());
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories::Second30pcsHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30pcs-history";
    ADD_KEY_TOKEN(slot_number, "slot-number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories::Second30pcsHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (slot_number.is_set || is_set(slot_number.yfilter)) leaf_name_data.push_back(slot_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories::Second30pcsHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "second30pcs-time-line-instances")
    {
        if(second30pcs_time_line_instances == nullptr)
        {
            second30pcs_time_line_instances = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories::Second30pcsHistory::Second30pcsTimeLineInstances>();
        }
        return second30pcs_time_line_instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories::Second30pcsHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(second30pcs_time_line_instances != nullptr)
    {
        _children["second30pcs-time-line-instances"] = second30pcs_time_line_instances;
    }

    return _children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories::Second30pcsHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "slot-number")
    {
        slot_number = value;
        slot_number.value_namespace = name_space;
        slot_number.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories::Second30pcsHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "slot-number")
    {
        slot_number.yfilter = yfilter;
    }
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories::Second30pcsHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second30pcs-time-line-instances" || name == "slot-number")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories::Second30pcsHistory::Second30pcsTimeLineInstances::Second30pcsTimeLineInstances()
    :
    second30pcs_time_line_instance(this, {"number"})
{

    yang_name = "second30pcs-time-line-instances"; yang_parent_name = "second30pcs-history"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories::Second30pcsHistory::Second30pcsTimeLineInstances::~Second30pcsTimeLineInstances()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories::Second30pcsHistory::Second30pcsTimeLineInstances::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<second30pcs_time_line_instance.len(); index++)
    {
        if(second30pcs_time_line_instance[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories::Second30pcsHistory::Second30pcsTimeLineInstances::has_operation() const
{
    for (std::size_t index=0; index<second30pcs_time_line_instance.len(); index++)
    {
        if(second30pcs_time_line_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories::Second30pcsHistory::Second30pcsTimeLineInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30pcs-time-line-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories::Second30pcsHistory::Second30pcsTimeLineInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories::Second30pcsHistory::Second30pcsTimeLineInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "second30pcs-time-line-instance")
    {
        auto ent_ = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories::Second30pcsHistory::Second30pcsTimeLineInstances::Second30pcsTimeLineInstance>();
        ent_->parent = this;
        second30pcs_time_line_instance.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories::Second30pcsHistory::Second30pcsTimeLineInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : second30pcs_time_line_instance.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories::Second30pcsHistory::Second30pcsTimeLineInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories::Second30pcsHistory::Second30pcsTimeLineInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories::Second30pcsHistory::Second30pcsTimeLineInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second30pcs-time-line-instance")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories::Second30pcsHistory::Second30pcsTimeLineInstances::Second30pcsTimeLineInstance::Second30pcsTimeLineInstance()
    :
    number{YType::uint32, "number"},
    index_{YType::uint32, "index"},
    valid{YType::boolean, "valid"},
    timestamp{YType::str, "timestamp"},
    last_clear_time{YType::str, "last-clear-time"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear30_sec_time{YType::str, "last-clear30-sec-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"}
        ,
    bip(this, {})
    , frm_err(this, {})
{

    yang_name = "second30pcs-time-line-instance"; yang_parent_name = "second30pcs-time-line-instances"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories::Second30pcsHistory::Second30pcsTimeLineInstances::Second30pcsTimeLineInstance::~Second30pcsTimeLineInstance()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories::Second30pcsHistory::Second30pcsTimeLineInstances::Second30pcsTimeLineInstance::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bip.len(); index++)
    {
        if(bip[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<frm_err.len(); index++)
    {
        if(frm_err[index]->has_data())
            return true;
    }
    return number.is_set
	|| index_.is_set
	|| valid.is_set
	|| timestamp.is_set
	|| last_clear_time.is_set
	|| last_clear15_min_time.is_set
	|| last_clear30_sec_time.is_set
	|| last_clear24_hr_time.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories::Second30pcsHistory::Second30pcsTimeLineInstances::Second30pcsTimeLineInstance::has_operation() const
{
    for (std::size_t index=0; index<bip.len(); index++)
    {
        if(bip[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<frm_err.len(); index++)
    {
        if(frm_err[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(last_clear_time.yfilter)
	|| ydk::is_set(last_clear15_min_time.yfilter)
	|| ydk::is_set(last_clear30_sec_time.yfilter)
	|| ydk::is_set(last_clear24_hr_time.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories::Second30pcsHistory::Second30pcsTimeLineInstances::Second30pcsTimeLineInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30pcs-time-line-instance";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories::Second30pcsHistory::Second30pcsTimeLineInstances::Second30pcsTimeLineInstance::get_name_leaf_data() const
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

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories::Second30pcsHistory::Second30pcsTimeLineInstances::Second30pcsTimeLineInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bip")
    {
        auto ent_ = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories::Second30pcsHistory::Second30pcsTimeLineInstances::Second30pcsTimeLineInstance::Bip>();
        ent_->parent = this;
        bip.append(ent_);
        return ent_;
    }

    if(child_yang_name == "frm-err")
    {
        auto ent_ = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories::Second30pcsHistory::Second30pcsTimeLineInstances::Second30pcsTimeLineInstance::FrmErr>();
        ent_->parent = this;
        frm_err.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories::Second30pcsHistory::Second30pcsTimeLineInstances::Second30pcsTimeLineInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bip.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : frm_err.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories::Second30pcsHistory::Second30pcsTimeLineInstances::Second30pcsTimeLineInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories::Second30pcsHistory::Second30pcsTimeLineInstances::Second30pcsTimeLineInstance::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories::Second30pcsHistory::Second30pcsTimeLineInstances::Second30pcsTimeLineInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bip" || name == "frm-err" || name == "number" || name == "index" || name == "valid" || name == "timestamp" || name == "last-clear-time" || name == "last-clear15-min-time" || name == "last-clear30-sec-time" || name == "last-clear24-hr-time")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories::Second30pcsHistory::Second30pcsTimeLineInstances::Second30pcsTimeLineInstance::Bip::Bip()
    :
    name{YType::str, "name"},
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "bip"; yang_parent_name = "second30pcs-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories::Second30pcsHistory::Second30pcsTimeLineInstances::Second30pcsTimeLineInstance::Bip::~Bip()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories::Second30pcsHistory::Second30pcsTimeLineInstances::Second30pcsTimeLineInstance::Bip::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories::Second30pcsHistory::Second30pcsTimeLineInstances::Second30pcsTimeLineInstance::Bip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories::Second30pcsHistory::Second30pcsTimeLineInstances::Second30pcsTimeLineInstance::Bip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories::Second30pcsHistory::Second30pcsTimeLineInstances::Second30pcsTimeLineInstance::Bip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories::Second30pcsHistory::Second30pcsTimeLineInstances::Second30pcsTimeLineInstance::Bip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories::Second30pcsHistory::Second30pcsTimeLineInstances::Second30pcsTimeLineInstance::Bip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories::Second30pcsHistory::Second30pcsTimeLineInstances::Second30pcsTimeLineInstance::Bip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories::Second30pcsHistory::Second30pcsTimeLineInstances::Second30pcsTimeLineInstance::Bip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories::Second30pcsHistory::Second30pcsTimeLineInstances::Second30pcsTimeLineInstance::Bip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories::Second30pcsHistory::Second30pcsTimeLineInstances::Second30pcsTimeLineInstance::FrmErr::FrmErr()
    :
    name{YType::str, "name"},
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "frm-err"; yang_parent_name = "second30pcs-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories::Second30pcsHistory::Second30pcsTimeLineInstances::Second30pcsTimeLineInstance::FrmErr::~FrmErr()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories::Second30pcsHistory::Second30pcsTimeLineInstances::Second30pcsTimeLineInstance::FrmErr::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories::Second30pcsHistory::Second30pcsTimeLineInstances::Second30pcsTimeLineInstance::FrmErr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories::Second30pcsHistory::Second30pcsTimeLineInstances::Second30pcsTimeLineInstance::FrmErr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frm-err";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories::Second30pcsHistory::Second30pcsTimeLineInstances::Second30pcsTimeLineInstance::FrmErr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories::Second30pcsHistory::Second30pcsTimeLineInstances::Second30pcsTimeLineInstance::FrmErr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories::Second30pcsHistory::Second30pcsTimeLineInstances::Second30pcsTimeLineInstance::FrmErr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories::Second30pcsHistory::Second30pcsTimeLineInstances::Second30pcsTimeLineInstance::FrmErr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories::Second30pcsHistory::Second30pcsTimeLineInstances::Second30pcsTimeLineInstance::FrmErr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories::Second30pcsHistory::Second30pcsTimeLineInstances::Second30pcsTimeLineInstance::FrmErr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistories()
    :
    second30_ether_history(this, {"slot_number"})
{

    yang_name = "second30-ether-histories"; yang_parent_name = "ethernet-second30-history"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::~Second30EtherHistories()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<second30_ether_history.len(); index++)
    {
        if(second30_ether_history[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::has_operation() const
{
    for (std::size_t index=0; index<second30_ether_history.len(); index++)
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

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "second30-ether-history")
    {
        auto ent_ = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory>();
        ent_->parent = this;
        second30_ether_history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : second30_ether_history.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    slot_number{YType::uint32, "slot-number"}
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
    if (is_presence_container) return true;
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
    path_buffer << "second30-ether-history";
    ADD_KEY_TOKEN(slot_number, "slot-number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (slot_number.is_set || is_set(slot_number.yfilter)) leaf_name_data.push_back(slot_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(second30_ether_time_line_instances != nullptr)
    {
        _children["second30-ether-time-line-instances"] = second30_ether_time_line_instances;
    }

    return _children;
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
    :
    second30_ether_time_line_instance(this, {"number"})
{

    yang_name = "second30-ether-time-line-instances"; yang_parent_name = "second30-ether-history"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::~Second30EtherTimeLineInstances()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<second30_ether_time_line_instance.len(); index++)
    {
        if(second30_ether_time_line_instance[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::has_operation() const
{
    for (std::size_t index=0; index<second30_ether_time_line_instance.len(); index++)
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

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "second30-ether-time-line-instance")
    {
        auto ent_ = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance>();
        ent_->parent = this;
        second30_ether_time_line_instance.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : second30_ether_time_line_instance.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    number{YType::uint32, "number"},
    index_{YType::uint32, "index"},
    valid{YType::boolean, "valid"},
    timestamp{YType::str, "timestamp"},
    last_clear_time{YType::str, "last-clear-time"},
    last_clear30_sec_time{YType::str, "last-clear30-sec-time"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    sec30_support{YType::boolean, "sec30-support"}
        ,
    rx_pkt(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::RxPkt>())
    , stat_pkt(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::StatPkt>())
    , octet_stat(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OctetStat>())
    , oversize_pkt_stat(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OversizePktStat>())
    , fcs_errors_stat(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::FcsErrorsStat>())
    , long_frames_stat(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::LongFramesStat>())
    , jabber_stat(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::JabberStat>())
    , ether64_octets(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether64Octets>())
    , ether65127_octet(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether65127Octet>())
    , ether128255_octet(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether128255Octet>())
    , ether256511_octet(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether256511Octet>())
    , ether5121023_octet(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether5121023Octet>())
    , ether10241518_octet(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether10241518Octet>())
    , in_ucast_pkt(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InUcastPkt>())
    , in_mcast_pkt(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMcastPkt>())
    , in_bcast_pkt(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InBcastPkt>())
    , out_ucast_pkt(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutUcastPkt>())
    , out_bcast_pkt(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutBcastPkt>())
    , out_mcast_pkt(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutMcastPkt>())
    , tx_pkt(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxPkt>())
    , if_in_errors(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::IfInErrors>())
    , if_in_octets(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::IfInOctets>())
    , ether_stat_multicast_pkt(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatMulticastPkt>())
    , ether_stat_broadcast_pkt(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatBroadcastPkt>())
    , ether_stat_undersized_pkt(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatUndersizedPkt>())
    , out_octets(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutOctets>())
    , in_pause_frame(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPauseFrame>())
    , in_good_bytes(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InGoodBytes>())
    , in8021q_frames(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::In8021qFrames>())
    , in_pkts1519_max_octets(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts1519MaxOctets>())
    , in_good_pkts(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InGoodPkts>())
    , in_drop_overrun(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropOverrun>())
    , in_drop_abort(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropAbort>())
    , in_drop_invalid_vlan(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidVlan>())
    , in_drop_invalid_dmac(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidDmac>())
    , in_drop_invalid_encap(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidEncap>())
    , in_drop_other(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropOther>())
    , in_mib_giant(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibGiant>())
    , in_mib_jabber(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibJabber>())
    , in_mibcrc(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibcrc>())
    , in_error_collisions(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorCollisions>())
    , in_error_symbol(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorSymbol>())
    , out_good_bytes(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutGoodBytes>())
    , out8021q_frames(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Out8021qFrames>())
    , out_pause_frames(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPauseFrames>())
    , out_pkts1519_max_octets(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts1519MaxOctets>())
    , out_good_pkts(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutGoodPkts>())
    , out_drop_underrun(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropUnderrun>())
    , out_drop_abort(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropAbort>())
    , out_drop_other(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropOther>())
    , out_error_other(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutErrorOther>())
    , in_error_giant(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorGiant>())
    , in_error_runt(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorRunt>())
    , in_error_jabbers(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorJabbers>())
    , in_error_fragments(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorFragments>())
    , in_error_other(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorOther>())
    , in_pkt64_octet(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkt64Octet>())
    , in_pkts65_to127_octets(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts65To127Octets>())
    , in_pkts128_to255_octets(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts128To255Octets>())
    , in_pkts256_to511_octets(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts256To511Octets>())
    , in_pkts512_to1023_octets(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts512To1023Octets>())
    , in_pkts1024_to1518_octets(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts1024To1518Octets>())
    , outpkt64octet(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Outpkt64octet>())
    , out_pkts65127_octets(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts65127Octets>())
    , out_pkts128255_octets(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts128255Octets>())
    , out_pkts256511_octets(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts256511Octets>())
    , out_pkts5121023_octets(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts5121023Octets>())
    , out_pkts10241518_octets(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts10241518Octets>())
    , rx_util(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::RxUtil>())
    , tx_util(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxUtil>())
    , tx_undersized_pkt(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxUndersizedPkt>())
    , tx_oversized_pkt(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxOversizedPkt>())
    , tx_fragments(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxFragments>())
    , tx_jabber(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxJabber>())
    , tx_bad_fcs(std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxBadFcs>())
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

    yang_name = "second30-ether-time-line-instance"; yang_parent_name = "second30-ether-time-line-instances"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::~Second30EtherTimeLineInstance()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::has_data() const
{
    if (is_presence_container) return true;
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::has_operation() const
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

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30-ether-time-line-instance";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rx-pkt")
    {
        if(rx_pkt == nullptr)
        {
            rx_pkt = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::RxPkt>();
        }
        return rx_pkt;
    }

    if(child_yang_name == "stat-pkt")
    {
        if(stat_pkt == nullptr)
        {
            stat_pkt = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::StatPkt>();
        }
        return stat_pkt;
    }

    if(child_yang_name == "octet-stat")
    {
        if(octet_stat == nullptr)
        {
            octet_stat = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OctetStat>();
        }
        return octet_stat;
    }

    if(child_yang_name == "oversize-pkt-stat")
    {
        if(oversize_pkt_stat == nullptr)
        {
            oversize_pkt_stat = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OversizePktStat>();
        }
        return oversize_pkt_stat;
    }

    if(child_yang_name == "fcs-errors-stat")
    {
        if(fcs_errors_stat == nullptr)
        {
            fcs_errors_stat = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::FcsErrorsStat>();
        }
        return fcs_errors_stat;
    }

    if(child_yang_name == "long-frames-stat")
    {
        if(long_frames_stat == nullptr)
        {
            long_frames_stat = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::LongFramesStat>();
        }
        return long_frames_stat;
    }

    if(child_yang_name == "jabber-stat")
    {
        if(jabber_stat == nullptr)
        {
            jabber_stat = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::JabberStat>();
        }
        return jabber_stat;
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

    if(child_yang_name == "ether10241518-octet")
    {
        if(ether10241518_octet == nullptr)
        {
            ether10241518_octet = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether10241518Octet>();
        }
        return ether10241518_octet;
    }

    if(child_yang_name == "in-ucast-pkt")
    {
        if(in_ucast_pkt == nullptr)
        {
            in_ucast_pkt = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InUcastPkt>();
        }
        return in_ucast_pkt;
    }

    if(child_yang_name == "in-mcast-pkt")
    {
        if(in_mcast_pkt == nullptr)
        {
            in_mcast_pkt = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMcastPkt>();
        }
        return in_mcast_pkt;
    }

    if(child_yang_name == "in-bcast-pkt")
    {
        if(in_bcast_pkt == nullptr)
        {
            in_bcast_pkt = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InBcastPkt>();
        }
        return in_bcast_pkt;
    }

    if(child_yang_name == "out-ucast-pkt")
    {
        if(out_ucast_pkt == nullptr)
        {
            out_ucast_pkt = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutUcastPkt>();
        }
        return out_ucast_pkt;
    }

    if(child_yang_name == "out-bcast-pkt")
    {
        if(out_bcast_pkt == nullptr)
        {
            out_bcast_pkt = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutBcastPkt>();
        }
        return out_bcast_pkt;
    }

    if(child_yang_name == "out-mcast-pkt")
    {
        if(out_mcast_pkt == nullptr)
        {
            out_mcast_pkt = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutMcastPkt>();
        }
        return out_mcast_pkt;
    }

    if(child_yang_name == "tx-pkt")
    {
        if(tx_pkt == nullptr)
        {
            tx_pkt = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxPkt>();
        }
        return tx_pkt;
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

    if(child_yang_name == "ether-stat-multicast-pkt")
    {
        if(ether_stat_multicast_pkt == nullptr)
        {
            ether_stat_multicast_pkt = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatMulticastPkt>();
        }
        return ether_stat_multicast_pkt;
    }

    if(child_yang_name == "ether-stat-broadcast-pkt")
    {
        if(ether_stat_broadcast_pkt == nullptr)
        {
            ether_stat_broadcast_pkt = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatBroadcastPkt>();
        }
        return ether_stat_broadcast_pkt;
    }

    if(child_yang_name == "ether-stat-undersized-pkt")
    {
        if(ether_stat_undersized_pkt == nullptr)
        {
            ether_stat_undersized_pkt = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatUndersizedPkt>();
        }
        return ether_stat_undersized_pkt;
    }

    if(child_yang_name == "out-octets")
    {
        if(out_octets == nullptr)
        {
            out_octets = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutOctets>();
        }
        return out_octets;
    }

    if(child_yang_name == "in-pause-frame")
    {
        if(in_pause_frame == nullptr)
        {
            in_pause_frame = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPauseFrame>();
        }
        return in_pause_frame;
    }

    if(child_yang_name == "in-good-bytes")
    {
        if(in_good_bytes == nullptr)
        {
            in_good_bytes = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InGoodBytes>();
        }
        return in_good_bytes;
    }

    if(child_yang_name == "in8021q-frames")
    {
        if(in8021q_frames == nullptr)
        {
            in8021q_frames = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::In8021qFrames>();
        }
        return in8021q_frames;
    }

    if(child_yang_name == "in-pkts1519-max-octets")
    {
        if(in_pkts1519_max_octets == nullptr)
        {
            in_pkts1519_max_octets = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts1519MaxOctets>();
        }
        return in_pkts1519_max_octets;
    }

    if(child_yang_name == "in-good-pkts")
    {
        if(in_good_pkts == nullptr)
        {
            in_good_pkts = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InGoodPkts>();
        }
        return in_good_pkts;
    }

    if(child_yang_name == "in-drop-overrun")
    {
        if(in_drop_overrun == nullptr)
        {
            in_drop_overrun = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropOverrun>();
        }
        return in_drop_overrun;
    }

    if(child_yang_name == "in-drop-abort")
    {
        if(in_drop_abort == nullptr)
        {
            in_drop_abort = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropAbort>();
        }
        return in_drop_abort;
    }

    if(child_yang_name == "in-drop-invalid-vlan")
    {
        if(in_drop_invalid_vlan == nullptr)
        {
            in_drop_invalid_vlan = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidVlan>();
        }
        return in_drop_invalid_vlan;
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

    if(child_yang_name == "in-drop-other")
    {
        if(in_drop_other == nullptr)
        {
            in_drop_other = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropOther>();
        }
        return in_drop_other;
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

    if(child_yang_name == "in-error-collisions")
    {
        if(in_error_collisions == nullptr)
        {
            in_error_collisions = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorCollisions>();
        }
        return in_error_collisions;
    }

    if(child_yang_name == "in-error-symbol")
    {
        if(in_error_symbol == nullptr)
        {
            in_error_symbol = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorSymbol>();
        }
        return in_error_symbol;
    }

    if(child_yang_name == "out-good-bytes")
    {
        if(out_good_bytes == nullptr)
        {
            out_good_bytes = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutGoodBytes>();
        }
        return out_good_bytes;
    }

    if(child_yang_name == "out8021q-frames")
    {
        if(out8021q_frames == nullptr)
        {
            out8021q_frames = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Out8021qFrames>();
        }
        return out8021q_frames;
    }

    if(child_yang_name == "out-pause-frames")
    {
        if(out_pause_frames == nullptr)
        {
            out_pause_frames = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPauseFrames>();
        }
        return out_pause_frames;
    }

    if(child_yang_name == "out-pkts1519-max-octets")
    {
        if(out_pkts1519_max_octets == nullptr)
        {
            out_pkts1519_max_octets = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts1519MaxOctets>();
        }
        return out_pkts1519_max_octets;
    }

    if(child_yang_name == "out-good-pkts")
    {
        if(out_good_pkts == nullptr)
        {
            out_good_pkts = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutGoodPkts>();
        }
        return out_good_pkts;
    }

    if(child_yang_name == "out-drop-underrun")
    {
        if(out_drop_underrun == nullptr)
        {
            out_drop_underrun = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropUnderrun>();
        }
        return out_drop_underrun;
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

    if(child_yang_name == "out-error-other")
    {
        if(out_error_other == nullptr)
        {
            out_error_other = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutErrorOther>();
        }
        return out_error_other;
    }

    if(child_yang_name == "in-error-giant")
    {
        if(in_error_giant == nullptr)
        {
            in_error_giant = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorGiant>();
        }
        return in_error_giant;
    }

    if(child_yang_name == "in-error-runt")
    {
        if(in_error_runt == nullptr)
        {
            in_error_runt = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorRunt>();
        }
        return in_error_runt;
    }

    if(child_yang_name == "in-error-jabbers")
    {
        if(in_error_jabbers == nullptr)
        {
            in_error_jabbers = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorJabbers>();
        }
        return in_error_jabbers;
    }

    if(child_yang_name == "in-error-fragments")
    {
        if(in_error_fragments == nullptr)
        {
            in_error_fragments = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorFragments>();
        }
        return in_error_fragments;
    }

    if(child_yang_name == "in-error-other")
    {
        if(in_error_other == nullptr)
        {
            in_error_other = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorOther>();
        }
        return in_error_other;
    }

    if(child_yang_name == "in-pkt64-octet")
    {
        if(in_pkt64_octet == nullptr)
        {
            in_pkt64_octet = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkt64Octet>();
        }
        return in_pkt64_octet;
    }

    if(child_yang_name == "in-pkts65-to127-octets")
    {
        if(in_pkts65_to127_octets == nullptr)
        {
            in_pkts65_to127_octets = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts65To127Octets>();
        }
        return in_pkts65_to127_octets;
    }

    if(child_yang_name == "in-pkts128-to255-octets")
    {
        if(in_pkts128_to255_octets == nullptr)
        {
            in_pkts128_to255_octets = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts128To255Octets>();
        }
        return in_pkts128_to255_octets;
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

    if(child_yang_name == "in-pkts1024-to1518-octets")
    {
        if(in_pkts1024_to1518_octets == nullptr)
        {
            in_pkts1024_to1518_octets = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts1024To1518Octets>();
        }
        return in_pkts1024_to1518_octets;
    }

    if(child_yang_name == "outpkt64octet")
    {
        if(outpkt64octet == nullptr)
        {
            outpkt64octet = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Outpkt64octet>();
        }
        return outpkt64octet;
    }

    if(child_yang_name == "out-pkts65127-octets")
    {
        if(out_pkts65127_octets == nullptr)
        {
            out_pkts65127_octets = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts65127Octets>();
        }
        return out_pkts65127_octets;
    }

    if(child_yang_name == "out-pkts128255-octets")
    {
        if(out_pkts128255_octets == nullptr)
        {
            out_pkts128255_octets = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts128255Octets>();
        }
        return out_pkts128255_octets;
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

    if(child_yang_name == "out-pkts10241518-octets")
    {
        if(out_pkts10241518_octets == nullptr)
        {
            out_pkts10241518_octets = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts10241518Octets>();
        }
        return out_pkts10241518_octets;
    }

    if(child_yang_name == "rx-util")
    {
        if(rx_util == nullptr)
        {
            rx_util = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::RxUtil>();
        }
        return rx_util;
    }

    if(child_yang_name == "tx-util")
    {
        if(tx_util == nullptr)
        {
            tx_util = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxUtil>();
        }
        return tx_util;
    }

    if(child_yang_name == "tx-undersized-pkt")
    {
        if(tx_undersized_pkt == nullptr)
        {
            tx_undersized_pkt = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxUndersizedPkt>();
        }
        return tx_undersized_pkt;
    }

    if(child_yang_name == "tx-oversized-pkt")
    {
        if(tx_oversized_pkt == nullptr)
        {
            tx_oversized_pkt = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxOversizedPkt>();
        }
        return tx_oversized_pkt;
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

    if(child_yang_name == "tx-bad-fcs")
    {
        if(tx_bad_fcs == nullptr)
        {
            tx_bad_fcs = std::make_shared<PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxBadFcs>();
        }
        return tx_bad_fcs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rx_pkt != nullptr)
    {
        _children["rx-pkt"] = rx_pkt;
    }

    if(stat_pkt != nullptr)
    {
        _children["stat-pkt"] = stat_pkt;
    }

    if(octet_stat != nullptr)
    {
        _children["octet-stat"] = octet_stat;
    }

    if(oversize_pkt_stat != nullptr)
    {
        _children["oversize-pkt-stat"] = oversize_pkt_stat;
    }

    if(fcs_errors_stat != nullptr)
    {
        _children["fcs-errors-stat"] = fcs_errors_stat;
    }

    if(long_frames_stat != nullptr)
    {
        _children["long-frames-stat"] = long_frames_stat;
    }

    if(jabber_stat != nullptr)
    {
        _children["jabber-stat"] = jabber_stat;
    }

    if(ether64_octets != nullptr)
    {
        _children["ether64-octets"] = ether64_octets;
    }

    if(ether65127_octet != nullptr)
    {
        _children["ether65127-octet"] = ether65127_octet;
    }

    if(ether128255_octet != nullptr)
    {
        _children["ether128255-octet"] = ether128255_octet;
    }

    if(ether256511_octet != nullptr)
    {
        _children["ether256511-octet"] = ether256511_octet;
    }

    if(ether5121023_octet != nullptr)
    {
        _children["ether5121023-octet"] = ether5121023_octet;
    }

    if(ether10241518_octet != nullptr)
    {
        _children["ether10241518-octet"] = ether10241518_octet;
    }

    if(in_ucast_pkt != nullptr)
    {
        _children["in-ucast-pkt"] = in_ucast_pkt;
    }

    if(in_mcast_pkt != nullptr)
    {
        _children["in-mcast-pkt"] = in_mcast_pkt;
    }

    if(in_bcast_pkt != nullptr)
    {
        _children["in-bcast-pkt"] = in_bcast_pkt;
    }

    if(out_ucast_pkt != nullptr)
    {
        _children["out-ucast-pkt"] = out_ucast_pkt;
    }

    if(out_bcast_pkt != nullptr)
    {
        _children["out-bcast-pkt"] = out_bcast_pkt;
    }

    if(out_mcast_pkt != nullptr)
    {
        _children["out-mcast-pkt"] = out_mcast_pkt;
    }

    if(tx_pkt != nullptr)
    {
        _children["tx-pkt"] = tx_pkt;
    }

    if(if_in_errors != nullptr)
    {
        _children["if-in-errors"] = if_in_errors;
    }

    if(if_in_octets != nullptr)
    {
        _children["if-in-octets"] = if_in_octets;
    }

    if(ether_stat_multicast_pkt != nullptr)
    {
        _children["ether-stat-multicast-pkt"] = ether_stat_multicast_pkt;
    }

    if(ether_stat_broadcast_pkt != nullptr)
    {
        _children["ether-stat-broadcast-pkt"] = ether_stat_broadcast_pkt;
    }

    if(ether_stat_undersized_pkt != nullptr)
    {
        _children["ether-stat-undersized-pkt"] = ether_stat_undersized_pkt;
    }

    if(out_octets != nullptr)
    {
        _children["out-octets"] = out_octets;
    }

    if(in_pause_frame != nullptr)
    {
        _children["in-pause-frame"] = in_pause_frame;
    }

    if(in_good_bytes != nullptr)
    {
        _children["in-good-bytes"] = in_good_bytes;
    }

    if(in8021q_frames != nullptr)
    {
        _children["in8021q-frames"] = in8021q_frames;
    }

    if(in_pkts1519_max_octets != nullptr)
    {
        _children["in-pkts1519-max-octets"] = in_pkts1519_max_octets;
    }

    if(in_good_pkts != nullptr)
    {
        _children["in-good-pkts"] = in_good_pkts;
    }

    if(in_drop_overrun != nullptr)
    {
        _children["in-drop-overrun"] = in_drop_overrun;
    }

    if(in_drop_abort != nullptr)
    {
        _children["in-drop-abort"] = in_drop_abort;
    }

    if(in_drop_invalid_vlan != nullptr)
    {
        _children["in-drop-invalid-vlan"] = in_drop_invalid_vlan;
    }

    if(in_drop_invalid_dmac != nullptr)
    {
        _children["in-drop-invalid-dmac"] = in_drop_invalid_dmac;
    }

    if(in_drop_invalid_encap != nullptr)
    {
        _children["in-drop-invalid-encap"] = in_drop_invalid_encap;
    }

    if(in_drop_other != nullptr)
    {
        _children["in-drop-other"] = in_drop_other;
    }

    if(in_mib_giant != nullptr)
    {
        _children["in-mib-giant"] = in_mib_giant;
    }

    if(in_mib_jabber != nullptr)
    {
        _children["in-mib-jabber"] = in_mib_jabber;
    }

    if(in_mibcrc != nullptr)
    {
        _children["in-mibcrc"] = in_mibcrc;
    }

    if(in_error_collisions != nullptr)
    {
        _children["in-error-collisions"] = in_error_collisions;
    }

    if(in_error_symbol != nullptr)
    {
        _children["in-error-symbol"] = in_error_symbol;
    }

    if(out_good_bytes != nullptr)
    {
        _children["out-good-bytes"] = out_good_bytes;
    }

    if(out8021q_frames != nullptr)
    {
        _children["out8021q-frames"] = out8021q_frames;
    }

    if(out_pause_frames != nullptr)
    {
        _children["out-pause-frames"] = out_pause_frames;
    }

    if(out_pkts1519_max_octets != nullptr)
    {
        _children["out-pkts1519-max-octets"] = out_pkts1519_max_octets;
    }

    if(out_good_pkts != nullptr)
    {
        _children["out-good-pkts"] = out_good_pkts;
    }

    if(out_drop_underrun != nullptr)
    {
        _children["out-drop-underrun"] = out_drop_underrun;
    }

    if(out_drop_abort != nullptr)
    {
        _children["out-drop-abort"] = out_drop_abort;
    }

    if(out_drop_other != nullptr)
    {
        _children["out-drop-other"] = out_drop_other;
    }

    if(out_error_other != nullptr)
    {
        _children["out-error-other"] = out_error_other;
    }

    if(in_error_giant != nullptr)
    {
        _children["in-error-giant"] = in_error_giant;
    }

    if(in_error_runt != nullptr)
    {
        _children["in-error-runt"] = in_error_runt;
    }

    if(in_error_jabbers != nullptr)
    {
        _children["in-error-jabbers"] = in_error_jabbers;
    }

    if(in_error_fragments != nullptr)
    {
        _children["in-error-fragments"] = in_error_fragments;
    }

    if(in_error_other != nullptr)
    {
        _children["in-error-other"] = in_error_other;
    }

    if(in_pkt64_octet != nullptr)
    {
        _children["in-pkt64-octet"] = in_pkt64_octet;
    }

    if(in_pkts65_to127_octets != nullptr)
    {
        _children["in-pkts65-to127-octets"] = in_pkts65_to127_octets;
    }

    if(in_pkts128_to255_octets != nullptr)
    {
        _children["in-pkts128-to255-octets"] = in_pkts128_to255_octets;
    }

    if(in_pkts256_to511_octets != nullptr)
    {
        _children["in-pkts256-to511-octets"] = in_pkts256_to511_octets;
    }

    if(in_pkts512_to1023_octets != nullptr)
    {
        _children["in-pkts512-to1023-octets"] = in_pkts512_to1023_octets;
    }

    if(in_pkts1024_to1518_octets != nullptr)
    {
        _children["in-pkts1024-to1518-octets"] = in_pkts1024_to1518_octets;
    }

    if(outpkt64octet != nullptr)
    {
        _children["outpkt64octet"] = outpkt64octet;
    }

    if(out_pkts65127_octets != nullptr)
    {
        _children["out-pkts65127-octets"] = out_pkts65127_octets;
    }

    if(out_pkts128255_octets != nullptr)
    {
        _children["out-pkts128255-octets"] = out_pkts128255_octets;
    }

    if(out_pkts256511_octets != nullptr)
    {
        _children["out-pkts256511-octets"] = out_pkts256511_octets;
    }

    if(out_pkts5121023_octets != nullptr)
    {
        _children["out-pkts5121023-octets"] = out_pkts5121023_octets;
    }

    if(out_pkts10241518_octets != nullptr)
    {
        _children["out-pkts10241518-octets"] = out_pkts10241518_octets;
    }

    if(rx_util != nullptr)
    {
        _children["rx-util"] = rx_util;
    }

    if(tx_util != nullptr)
    {
        _children["tx-util"] = tx_util;
    }

    if(tx_undersized_pkt != nullptr)
    {
        _children["tx-undersized-pkt"] = tx_undersized_pkt;
    }

    if(tx_oversized_pkt != nullptr)
    {
        _children["tx-oversized-pkt"] = tx_oversized_pkt;
    }

    if(tx_fragments != nullptr)
    {
        _children["tx-fragments"] = tx_fragments;
    }

    if(tx_jabber != nullptr)
    {
        _children["tx-jabber"] = tx_jabber;
    }

    if(tx_bad_fcs != nullptr)
    {
        _children["tx-bad-fcs"] = tx_bad_fcs;
    }

    return _children;
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rx-pkt" || name == "stat-pkt" || name == "octet-stat" || name == "oversize-pkt-stat" || name == "fcs-errors-stat" || name == "long-frames-stat" || name == "jabber-stat" || name == "ether64-octets" || name == "ether65127-octet" || name == "ether128255-octet" || name == "ether256511-octet" || name == "ether5121023-octet" || name == "ether10241518-octet" || name == "in-ucast-pkt" || name == "in-mcast-pkt" || name == "in-bcast-pkt" || name == "out-ucast-pkt" || name == "out-bcast-pkt" || name == "out-mcast-pkt" || name == "tx-pkt" || name == "if-in-errors" || name == "if-in-octets" || name == "ether-stat-multicast-pkt" || name == "ether-stat-broadcast-pkt" || name == "ether-stat-undersized-pkt" || name == "out-octets" || name == "in-pause-frame" || name == "in-good-bytes" || name == "in8021q-frames" || name == "in-pkts1519-max-octets" || name == "in-good-pkts" || name == "in-drop-overrun" || name == "in-drop-abort" || name == "in-drop-invalid-vlan" || name == "in-drop-invalid-dmac" || name == "in-drop-invalid-encap" || name == "in-drop-other" || name == "in-mib-giant" || name == "in-mib-jabber" || name == "in-mibcrc" || name == "in-error-collisions" || name == "in-error-symbol" || name == "out-good-bytes" || name == "out8021q-frames" || name == "out-pause-frames" || name == "out-pkts1519-max-octets" || name == "out-good-pkts" || name == "out-drop-underrun" || name == "out-drop-abort" || name == "out-drop-other" || name == "out-error-other" || name == "in-error-giant" || name == "in-error-runt" || name == "in-error-jabbers" || name == "in-error-fragments" || name == "in-error-other" || name == "in-pkt64-octet" || name == "in-pkts65-to127-octets" || name == "in-pkts128-to255-octets" || name == "in-pkts256-to511-octets" || name == "in-pkts512-to1023-octets" || name == "in-pkts1024-to1518-octets" || name == "outpkt64octet" || name == "out-pkts65127-octets" || name == "out-pkts128255-octets" || name == "out-pkts256511-octets" || name == "out-pkts5121023-octets" || name == "out-pkts10241518-octets" || name == "rx-util" || name == "tx-util" || name == "tx-undersized-pkt" || name == "tx-oversized-pkt" || name == "tx-fragments" || name == "tx-jabber" || name == "tx-bad-fcs" || name == "number" || name == "index" || name == "valid" || name == "timestamp" || name == "last-clear-time" || name == "last-clear30-sec-time" || name == "last-clear15-min-time" || name == "last-clear24-hr-time" || name == "sec30-support")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::RxPkt::RxPkt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "rx-pkt"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::RxPkt::~RxPkt()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::RxPkt::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::RxPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::RxPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::RxPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::RxPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::RxPkt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::RxPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::StatPkt::StatPkt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "stat-pkt"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::StatPkt::~StatPkt()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::StatPkt::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::StatPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::StatPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::StatPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::StatPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::StatPkt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::StatPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OctetStat::OctetStat()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "octet-stat"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OctetStat::~OctetStat()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OctetStat::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OctetStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OctetStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OctetStat::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OctetStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OctetStat::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OctetStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OversizePktStat::OversizePktStat()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "oversize-pkt-stat"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OversizePktStat::~OversizePktStat()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OversizePktStat::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OversizePktStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OversizePktStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OversizePktStat::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OversizePktStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OversizePktStat::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OversizePktStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::FcsErrorsStat::FcsErrorsStat()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "fcs-errors-stat"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::FcsErrorsStat::~FcsErrorsStat()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::FcsErrorsStat::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::FcsErrorsStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::FcsErrorsStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::FcsErrorsStat::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::FcsErrorsStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::FcsErrorsStat::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::FcsErrorsStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::LongFramesStat::LongFramesStat()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "long-frames-stat"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::LongFramesStat::~LongFramesStat()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::LongFramesStat::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::LongFramesStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::LongFramesStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::LongFramesStat::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::LongFramesStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::LongFramesStat::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::LongFramesStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::JabberStat::JabberStat()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "jabber-stat"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::JabberStat::~JabberStat()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::JabberStat::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::JabberStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::JabberStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::JabberStat::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::JabberStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::JabberStat::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::JabberStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether64Octets::Ether64Octets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ether64-octets"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether64Octets::~Ether64Octets()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether64Octets::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether64Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether64Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether64Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether64Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether64Octets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether64Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether65127Octet::Ether65127Octet()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ether65127-octet"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether65127Octet::~Ether65127Octet()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether65127Octet::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether65127Octet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether65127Octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether65127Octet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether65127Octet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether65127Octet::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether65127Octet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether128255Octet::Ether128255Octet()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ether128255-octet"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether128255Octet::~Ether128255Octet()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether128255Octet::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether128255Octet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether128255Octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether128255Octet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether128255Octet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether128255Octet::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether128255Octet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether256511Octet::Ether256511Octet()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ether256511-octet"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether256511Octet::~Ether256511Octet()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether256511Octet::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether256511Octet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether256511Octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether256511Octet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether256511Octet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether256511Octet::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether256511Octet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether5121023Octet::Ether5121023Octet()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ether5121023-octet"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether5121023Octet::~Ether5121023Octet()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether5121023Octet::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether5121023Octet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether5121023Octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether5121023Octet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether5121023Octet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether5121023Octet::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether5121023Octet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether10241518Octet::Ether10241518Octet()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ether10241518-octet"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether10241518Octet::~Ether10241518Octet()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether10241518Octet::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether10241518Octet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether10241518Octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether10241518Octet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether10241518Octet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether10241518Octet::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether10241518Octet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InUcastPkt::InUcastPkt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-ucast-pkt"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InUcastPkt::~InUcastPkt()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InUcastPkt::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InUcastPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InUcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InUcastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InUcastPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InUcastPkt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InUcastPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMcastPkt::InMcastPkt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-mcast-pkt"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMcastPkt::~InMcastPkt()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMcastPkt::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMcastPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMcastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMcastPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMcastPkt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMcastPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InBcastPkt::InBcastPkt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-bcast-pkt"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InBcastPkt::~InBcastPkt()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InBcastPkt::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InBcastPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InBcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InBcastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InBcastPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InBcastPkt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InBcastPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutUcastPkt::OutUcastPkt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-ucast-pkt"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutUcastPkt::~OutUcastPkt()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutUcastPkt::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutUcastPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutUcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutUcastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutUcastPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutUcastPkt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutUcastPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutBcastPkt::OutBcastPkt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-bcast-pkt"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutBcastPkt::~OutBcastPkt()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutBcastPkt::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutBcastPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutBcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutBcastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutBcastPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutBcastPkt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutBcastPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutMcastPkt::OutMcastPkt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-mcast-pkt"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutMcastPkt::~OutMcastPkt()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutMcastPkt::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutMcastPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutMcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutMcastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutMcastPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutMcastPkt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutMcastPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxPkt::TxPkt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "tx-pkt"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxPkt::~TxPkt()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxPkt::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxPkt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::IfInErrors::IfInErrors()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "if-in-errors"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::IfInErrors::~IfInErrors()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::IfInErrors::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::IfInErrors::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::IfInErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::IfInErrors::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::IfInErrors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::IfInErrors::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::IfInErrors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::IfInOctets::IfInOctets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "if-in-octets"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::IfInOctets::~IfInOctets()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::IfInOctets::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::IfInOctets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::IfInOctets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::IfInOctets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::IfInOctets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::IfInOctets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::IfInOctets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatMulticastPkt::EtherStatMulticastPkt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ether-stat-multicast-pkt"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatMulticastPkt::~EtherStatMulticastPkt()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatMulticastPkt::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatMulticastPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatMulticastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatMulticastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatMulticastPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatMulticastPkt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatMulticastPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatBroadcastPkt::EtherStatBroadcastPkt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ether-stat-broadcast-pkt"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatBroadcastPkt::~EtherStatBroadcastPkt()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatBroadcastPkt::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatBroadcastPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatBroadcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatBroadcastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatBroadcastPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatBroadcastPkt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatBroadcastPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatUndersizedPkt::EtherStatUndersizedPkt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ether-stat-undersized-pkt"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatUndersizedPkt::~EtherStatUndersizedPkt()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatUndersizedPkt::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatUndersizedPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatUndersizedPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatUndersizedPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatUndersizedPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatUndersizedPkt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatUndersizedPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutOctets::OutOctets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-octets"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutOctets::~OutOctets()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutOctets::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutOctets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutOctets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutOctets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutOctets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutOctets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutOctets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPauseFrame::InPauseFrame()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pause-frame"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPauseFrame::~InPauseFrame()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPauseFrame::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPauseFrame::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPauseFrame::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPauseFrame::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPauseFrame::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPauseFrame::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPauseFrame::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InGoodBytes::InGoodBytes()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-good-bytes"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InGoodBytes::~InGoodBytes()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InGoodBytes::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InGoodBytes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InGoodBytes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InGoodBytes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InGoodBytes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InGoodBytes::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InGoodBytes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::In8021qFrames::In8021qFrames()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in8021q-frames"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::In8021qFrames::~In8021qFrames()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::In8021qFrames::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::In8021qFrames::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::In8021qFrames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in8021q-frames";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::In8021qFrames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::In8021qFrames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::In8021qFrames::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::In8021qFrames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::In8021qFrames::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::In8021qFrames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts1519MaxOctets::InPkts1519MaxOctets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts1519-max-octets"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts1519MaxOctets::~InPkts1519MaxOctets()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts1519MaxOctets::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts1519MaxOctets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts1519MaxOctets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts1519MaxOctets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts1519MaxOctets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts1519MaxOctets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts1519MaxOctets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InGoodPkts::InGoodPkts()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-good-pkts"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InGoodPkts::~InGoodPkts()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InGoodPkts::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InGoodPkts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InGoodPkts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InGoodPkts::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InGoodPkts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InGoodPkts::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InGoodPkts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropOverrun::InDropOverrun()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-drop-overrun"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropOverrun::~InDropOverrun()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropOverrun::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropOverrun::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropOverrun::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropOverrun::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropOverrun::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropOverrun::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropOverrun::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropAbort::InDropAbort()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-drop-abort"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropAbort::~InDropAbort()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropAbort::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropAbort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropAbort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropAbort::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropAbort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropAbort::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropAbort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidVlan::InDropInvalidVlan()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-drop-invalid-vlan"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidVlan::~InDropInvalidVlan()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidVlan::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidVlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidVlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidVlan::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidVlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidVlan::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidVlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidDmac::InDropInvalidDmac()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-drop-invalid-dmac"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidDmac::~InDropInvalidDmac()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidDmac::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidDmac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidDmac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidDmac::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidDmac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidDmac::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidDmac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidEncap::InDropInvalidEncap()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-drop-invalid-encap"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidEncap::~InDropInvalidEncap()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidEncap::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidEncap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidEncap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidEncap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidEncap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidEncap::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidEncap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropOther::InDropOther()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-drop-other"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropOther::~InDropOther()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropOther::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropOther::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropOther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropOther::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropOther::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropOther::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropOther::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibGiant::InMibGiant()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-mib-giant"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibGiant::~InMibGiant()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibGiant::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibGiant::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibGiant::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibGiant::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibGiant::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibGiant::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibGiant::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibJabber::InMibJabber()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-mib-jabber"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibJabber::~InMibJabber()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibJabber::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibJabber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibJabber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibJabber::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibJabber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibJabber::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibJabber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibcrc::InMibcrc()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-mibcrc"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibcrc::~InMibcrc()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibcrc::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibcrc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibcrc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibcrc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibcrc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibcrc::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibcrc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorCollisions::InErrorCollisions()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-error-collisions"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorCollisions::~InErrorCollisions()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorCollisions::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorCollisions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorCollisions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorCollisions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorCollisions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorCollisions::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorCollisions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorSymbol::InErrorSymbol()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-error-symbol"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorSymbol::~InErrorSymbol()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorSymbol::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorSymbol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorSymbol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorSymbol::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorSymbol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorSymbol::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorSymbol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutGoodBytes::OutGoodBytes()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-good-bytes"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutGoodBytes::~OutGoodBytes()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutGoodBytes::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutGoodBytes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutGoodBytes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutGoodBytes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutGoodBytes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutGoodBytes::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutGoodBytes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Out8021qFrames::Out8021qFrames()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out8021q-frames"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Out8021qFrames::~Out8021qFrames()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Out8021qFrames::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Out8021qFrames::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Out8021qFrames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out8021q-frames";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Out8021qFrames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Out8021qFrames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Out8021qFrames::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Out8021qFrames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Out8021qFrames::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Out8021qFrames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPauseFrames::OutPauseFrames()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pause-frames"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPauseFrames::~OutPauseFrames()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPauseFrames::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPauseFrames::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPauseFrames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPauseFrames::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPauseFrames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPauseFrames::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPauseFrames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts1519MaxOctets::OutPkts1519MaxOctets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts1519-max-octets"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts1519MaxOctets::~OutPkts1519MaxOctets()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts1519MaxOctets::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts1519MaxOctets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts1519MaxOctets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts1519MaxOctets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts1519MaxOctets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts1519MaxOctets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts1519MaxOctets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutGoodPkts::OutGoodPkts()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-good-pkts"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutGoodPkts::~OutGoodPkts()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutGoodPkts::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutGoodPkts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutGoodPkts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutGoodPkts::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutGoodPkts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutGoodPkts::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutGoodPkts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropUnderrun::OutDropUnderrun()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-drop-underrun"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropUnderrun::~OutDropUnderrun()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropUnderrun::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropUnderrun::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropUnderrun::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropUnderrun::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropUnderrun::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropUnderrun::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropUnderrun::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropAbort::OutDropAbort()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-drop-abort"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropAbort::~OutDropAbort()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropAbort::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropAbort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropAbort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropAbort::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropAbort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropAbort::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropAbort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropOther::OutDropOther()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-drop-other"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropOther::~OutDropOther()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropOther::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropOther::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropOther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropOther::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropOther::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropOther::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropOther::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutErrorOther::OutErrorOther()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-error-other"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutErrorOther::~OutErrorOther()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutErrorOther::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutErrorOther::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutErrorOther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutErrorOther::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutErrorOther::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutErrorOther::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutErrorOther::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorGiant::InErrorGiant()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-error-giant"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorGiant::~InErrorGiant()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorGiant::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorGiant::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorGiant::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorGiant::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorGiant::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorGiant::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorGiant::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorRunt::InErrorRunt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-error-runt"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorRunt::~InErrorRunt()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorRunt::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorRunt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorRunt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorRunt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorRunt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorRunt::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorRunt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorJabbers::InErrorJabbers()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-error-jabbers"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorJabbers::~InErrorJabbers()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorJabbers::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorJabbers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorJabbers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorJabbers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorJabbers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorJabbers::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorJabbers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorFragments::InErrorFragments()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-error-fragments"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorFragments::~InErrorFragments()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorFragments::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorFragments::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorFragments::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorFragments::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorFragments::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorFragments::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorFragments::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorOther::InErrorOther()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-error-other"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorOther::~InErrorOther()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorOther::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorOther::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorOther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorOther::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorOther::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorOther::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorOther::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkt64Octet::InPkt64Octet()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkt64-octet"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkt64Octet::~InPkt64Octet()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkt64Octet::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkt64Octet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkt64Octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkt64Octet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkt64Octet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkt64Octet::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkt64Octet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts65To127Octets::InPkts65To127Octets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts65-to127-octets"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts65To127Octets::~InPkts65To127Octets()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts65To127Octets::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts65To127Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts65To127Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts65To127Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts65To127Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts65To127Octets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts65To127Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts128To255Octets::InPkts128To255Octets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts128-to255-octets"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts128To255Octets::~InPkts128To255Octets()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts128To255Octets::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts128To255Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts128To255Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts128To255Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts128To255Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts128To255Octets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts128To255Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts256To511Octets::InPkts256To511Octets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts256-to511-octets"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts256To511Octets::~InPkts256To511Octets()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts256To511Octets::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts256To511Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts256To511Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts256To511Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts256To511Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts256To511Octets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts256To511Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts512To1023Octets::InPkts512To1023Octets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts512-to1023-octets"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts512To1023Octets::~InPkts512To1023Octets()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts512To1023Octets::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts512To1023Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts512To1023Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts512To1023Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts512To1023Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts512To1023Octets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts512To1023Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts1024To1518Octets::InPkts1024To1518Octets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts1024-to1518-octets"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts1024To1518Octets::~InPkts1024To1518Octets()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts1024To1518Octets::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts1024To1518Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
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
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts1024To1518Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts1024To1518Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts1024To1518Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts1024To1518Octets::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts1024To1518Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Outpkt64octet::Outpkt64octet()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "outpkt64octet"; yang_parent_name = "second30-ether-time-line-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Outpkt64octet::~Outpkt64octet()
{
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Outpkt64octet::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Outpkt64octet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Outpkt64octet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outpkt64octet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Outpkt64octet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Outpkt64octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Outpkt64octet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Outpkt64octet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Outpkt64octet::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Outpkt64octet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}


}
}

