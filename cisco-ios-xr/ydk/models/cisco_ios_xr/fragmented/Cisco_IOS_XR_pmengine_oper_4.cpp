
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_pmengine_oper_4.hpp"
#include "Cisco_IOS_XR_pmengine_oper_5.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_pmengine_oper {

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetCurrent()
    :
    sonet_minute15(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15>())
	,sonet_hour24(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24>())
{
    sonet_minute15->parent = this;
    sonet_hour24->parent = this;

    yang_name = "sonet-current"; yang_parent_name = "sonet-port"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::~SonetCurrent()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::has_data() const
{
    return (sonet_minute15 !=  nullptr && sonet_minute15->has_data())
	|| (sonet_hour24 !=  nullptr && sonet_hour24->has_data());
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::has_operation() const
{
    return is_set(yfilter)
	|| (sonet_minute15 !=  nullptr && sonet_minute15->has_operation())
	|| (sonet_hour24 !=  nullptr && sonet_hour24->has_operation());
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-current";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-minute15")
    {
        if(sonet_minute15 == nullptr)
        {
            sonet_minute15 = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15>();
        }
        return sonet_minute15;
    }

    if(child_yang_name == "sonet-hour24")
    {
        if(sonet_hour24 == nullptr)
        {
            sonet_hour24 = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24>();
        }
        return sonet_hour24;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sonet_minute15 != nullptr)
    {
        children["sonet-minute15"] = sonet_minute15;
    }

    if(sonet_hour24 != nullptr)
    {
        children["sonet-hour24"] = sonet_hour24;
    }

    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonet-minute15" || name == "sonet-hour24")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15()
    :
    sonet_minute15_paths(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths>())
	,sonet_minute15ocns(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns>())
{
    sonet_minute15_paths->parent = this;
    sonet_minute15ocns->parent = this;

    yang_name = "sonet-minute15"; yang_parent_name = "sonet-current"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::~SonetMinute15()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::has_data() const
{
    return (sonet_minute15_paths !=  nullptr && sonet_minute15_paths->has_data())
	|| (sonet_minute15ocns !=  nullptr && sonet_minute15ocns->has_data());
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::has_operation() const
{
    return is_set(yfilter)
	|| (sonet_minute15_paths !=  nullptr && sonet_minute15_paths->has_operation())
	|| (sonet_minute15ocns !=  nullptr && sonet_minute15ocns->has_operation());
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-minute15";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-minute15-paths")
    {
        if(sonet_minute15_paths == nullptr)
        {
            sonet_minute15_paths = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths>();
        }
        return sonet_minute15_paths;
    }

    if(child_yang_name == "sonet-minute15ocns")
    {
        if(sonet_minute15ocns == nullptr)
        {
            sonet_minute15ocns = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns>();
        }
        return sonet_minute15ocns;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sonet_minute15_paths != nullptr)
    {
        children["sonet-minute15-paths"] = sonet_minute15_paths;
    }

    if(sonet_minute15ocns != nullptr)
    {
        children["sonet-minute15ocns"] = sonet_minute15ocns;
    }

    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonet-minute15-paths" || name == "sonet-minute15ocns")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Paths()
{

    yang_name = "sonet-minute15-paths"; yang_parent_name = "sonet-minute15"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::~SonetMinute15Paths()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::has_data() const
{
    for (std::size_t index=0; index<sonet_minute15_path.size(); index++)
    {
        if(sonet_minute15_path[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::has_operation() const
{
    for (std::size_t index=0; index<sonet_minute15_path.size(); index++)
    {
        if(sonet_minute15_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-minute15-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-minute15-path")
    {
        auto c = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path>();
        c->parent = this;
        sonet_minute15_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : sonet_minute15_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonet-minute15-path")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::SonetMinute15Path()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    valid{YType::boolean, "valid"},
    timestamp{YType::str, "timestamp"},
    last_clear_time{YType::str, "last-clear-time"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"}
    	,
    path(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path>())
	,fe_path(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::FePath>())
{
    path->parent = this;
    fe_path->parent = this;

    yang_name = "sonet-minute15-path"; yang_parent_name = "sonet-minute15-paths"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::~SonetMinute15Path()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::has_data() const
{
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::has_operation() const
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

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-minute15-path" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path")
    {
        if(path == nullptr)
        {
            path = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path>();
        }
        return path;
    }

    if(child_yang_name == "fe-path")
    {
        if(fe_path == nullptr)
        {
            fe_path = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::FePath>();
        }
        return fe_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(path != nullptr)
    {
        children["path"] = path;
    }

    if(fe_path != nullptr)
    {
        children["fe-path"] = fe_path;
    }

    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "fe-path" || name == "number" || name == "index" || name == "valid" || name == "timestamp" || name == "last-clear-time" || name == "last-clear15-min-time" || name == "last-clear24-hr-time")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::Path()
    :
    path_width{YType::enumeration, "path-width"},
    path_status{YType::int32, "path-status"}
    	,
    path_e_ss(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathESs>())
	,path_se_ss(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathSeSs>())
	,path_c_vs(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathCVs>())
	,path_ua_ss(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathUaSs>())
{
    path_e_ss->parent = this;
    path_se_ss->parent = this;
    path_c_vs->parent = this;
    path_ua_ss->parent = this;

    yang_name = "path"; yang_parent_name = "sonet-minute15-path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::~Path()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::has_data() const
{
    return path_width.is_set
	|| path_status.is_set
	|| (path_e_ss !=  nullptr && path_e_ss->has_data())
	|| (path_se_ss !=  nullptr && path_se_ss->has_data())
	|| (path_c_vs !=  nullptr && path_c_vs->has_data())
	|| (path_ua_ss !=  nullptr && path_ua_ss->has_data());
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_width.yfilter)
	|| ydk::is_set(path_status.yfilter)
	|| (path_e_ss !=  nullptr && path_e_ss->has_operation())
	|| (path_se_ss !=  nullptr && path_se_ss->has_operation())
	|| (path_c_vs !=  nullptr && path_c_vs->has_operation())
	|| (path_ua_ss !=  nullptr && path_ua_ss->has_operation());
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_width.is_set || is_set(path_width.yfilter)) leaf_name_data.push_back(path_width.get_name_leafdata());
    if (path_status.is_set || is_set(path_status.yfilter)) leaf_name_data.push_back(path_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-e-ss")
    {
        if(path_e_ss == nullptr)
        {
            path_e_ss = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathESs>();
        }
        return path_e_ss;
    }

    if(child_yang_name == "path-se-ss")
    {
        if(path_se_ss == nullptr)
        {
            path_se_ss = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathSeSs>();
        }
        return path_se_ss;
    }

    if(child_yang_name == "path-c-vs")
    {
        if(path_c_vs == nullptr)
        {
            path_c_vs = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathCVs>();
        }
        return path_c_vs;
    }

    if(child_yang_name == "path-ua-ss")
    {
        if(path_ua_ss == nullptr)
        {
            path_ua_ss = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathUaSs>();
        }
        return path_ua_ss;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(path_e_ss != nullptr)
    {
        children["path-e-ss"] = path_e_ss;
    }

    if(path_se_ss != nullptr)
    {
        children["path-se-ss"] = path_se_ss;
    }

    if(path_c_vs != nullptr)
    {
        children["path-c-vs"] = path_c_vs;
    }

    if(path_ua_ss != nullptr)
    {
        children["path-ua-ss"] = path_ua_ss;
    }

    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-e-ss" || name == "path-se-ss" || name == "path-c-vs" || name == "path-ua-ss" || name == "path-width" || name == "path-status")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathESs::PathESs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "path-e-ss"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathESs::~PathESs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathESs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathESs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-e-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathESs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathESs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathESs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathESs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathESs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathSeSs::PathSeSs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "path-se-ss"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathSeSs::~PathSeSs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathSeSs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathSeSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-se-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathSeSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathSeSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathSeSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathSeSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathSeSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathCVs::PathCVs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "path-c-vs"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathCVs::~PathCVs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathCVs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathCVs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathCVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-c-vs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathCVs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathCVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathCVs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathCVs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathCVs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathCVs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathUaSs::PathUaSs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "path-ua-ss"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathUaSs::~PathUaSs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathUaSs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathUaSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathUaSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-ua-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathUaSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathUaSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathUaSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathUaSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathUaSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathUaSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::FePath::FePath()
    :
    far_end_path_e_ss{YType::uint32, "far-end-path-e-ss"},
    far_end_path_se_ss{YType::uint32, "far-end-path-se-ss"},
    far_end_path_c_vs{YType::uint32, "far-end-path-c-vs"},
    far_end_path_ua_ss{YType::uint32, "far-end-path-ua-ss"}
{

    yang_name = "fe-path"; yang_parent_name = "sonet-minute15-path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::FePath::~FePath()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::FePath::has_data() const
{
    return far_end_path_e_ss.is_set
	|| far_end_path_se_ss.is_set
	|| far_end_path_c_vs.is_set
	|| far_end_path_ua_ss.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::FePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(far_end_path_e_ss.yfilter)
	|| ydk::is_set(far_end_path_se_ss.yfilter)
	|| ydk::is_set(far_end_path_c_vs.yfilter)
	|| ydk::is_set(far_end_path_ua_ss.yfilter);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::FePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fe-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::FePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (far_end_path_e_ss.is_set || is_set(far_end_path_e_ss.yfilter)) leaf_name_data.push_back(far_end_path_e_ss.get_name_leafdata());
    if (far_end_path_se_ss.is_set || is_set(far_end_path_se_ss.yfilter)) leaf_name_data.push_back(far_end_path_se_ss.get_name_leafdata());
    if (far_end_path_c_vs.is_set || is_set(far_end_path_c_vs.yfilter)) leaf_name_data.push_back(far_end_path_c_vs.get_name_leafdata());
    if (far_end_path_ua_ss.is_set || is_set(far_end_path_ua_ss.yfilter)) leaf_name_data.push_back(far_end_path_ua_ss.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::FePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::FePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::FePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::FePath::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::FePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "far-end-path-e-ss" || name == "far-end-path-se-ss" || name == "far-end-path-c-vs" || name == "far-end-path-ua-ss")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocns()
{

    yang_name = "sonet-minute15ocns"; yang_parent_name = "sonet-minute15"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::~SonetMinute15Ocns()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::has_data() const
{
    for (std::size_t index=0; index<sonet_minute15ocn.size(); index++)
    {
        if(sonet_minute15ocn[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::has_operation() const
{
    for (std::size_t index=0; index<sonet_minute15ocn.size(); index++)
    {
        if(sonet_minute15ocn[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-minute15ocns";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-minute15ocn")
    {
        auto c = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn>();
        c->parent = this;
        sonet_minute15ocn.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : sonet_minute15ocn)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonet-minute15ocn")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::SonetMinute15Ocn()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    valid{YType::boolean, "valid"},
    timestamp{YType::str, "timestamp"},
    last_clear_time{YType::str, "last-clear-time"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"}
    	,
    section(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section>())
	,line(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line>())
	,fe_line(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine>())
{
    section->parent = this;
    line->parent = this;
    fe_line->parent = this;

    yang_name = "sonet-minute15ocn"; yang_parent_name = "sonet-minute15ocns"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::~SonetMinute15Ocn()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::has_data() const
{
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::has_operation() const
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

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-minute15ocn" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "section")
    {
        if(section == nullptr)
        {
            section = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section>();
        }
        return section;
    }

    if(child_yang_name == "line")
    {
        if(line == nullptr)
        {
            line = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line>();
        }
        return line;
    }

    if(child_yang_name == "fe-line")
    {
        if(fe_line == nullptr)
        {
            fe_line = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine>();
        }
        return fe_line;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(section != nullptr)
    {
        children["section"] = section;
    }

    if(line != nullptr)
    {
        children["line"] = line;
    }

    if(fe_line != nullptr)
    {
        children["fe-line"] = fe_line;
    }

    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "section" || name == "line" || name == "fe-line" || name == "number" || name == "index" || name == "valid" || name == "timestamp" || name == "last-clear-time" || name == "last-clear15-min-time" || name == "last-clear24-hr-time")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::Section()
    :
    section_status{YType::int32, "section-status"}
    	,
    section_e_ss(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionESs>())
	,section_se_ss(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSeSs>())
	,section_sef_ss(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSefSs>())
	,section_c_vs(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionCVs>())
{
    section_e_ss->parent = this;
    section_se_ss->parent = this;
    section_sef_ss->parent = this;
    section_c_vs->parent = this;

    yang_name = "section"; yang_parent_name = "sonet-minute15ocn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::~Section()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::has_data() const
{
    return section_status.is_set
	|| (section_e_ss !=  nullptr && section_e_ss->has_data())
	|| (section_se_ss !=  nullptr && section_se_ss->has_data())
	|| (section_sef_ss !=  nullptr && section_sef_ss->has_data())
	|| (section_c_vs !=  nullptr && section_c_vs->has_data());
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(section_status.yfilter)
	|| (section_e_ss !=  nullptr && section_e_ss->has_operation())
	|| (section_se_ss !=  nullptr && section_se_ss->has_operation())
	|| (section_sef_ss !=  nullptr && section_sef_ss->has_operation())
	|| (section_c_vs !=  nullptr && section_c_vs->has_operation());
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (section_status.is_set || is_set(section_status.yfilter)) leaf_name_data.push_back(section_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "section-e-ss")
    {
        if(section_e_ss == nullptr)
        {
            section_e_ss = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionESs>();
        }
        return section_e_ss;
    }

    if(child_yang_name == "section-se-ss")
    {
        if(section_se_ss == nullptr)
        {
            section_se_ss = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSeSs>();
        }
        return section_se_ss;
    }

    if(child_yang_name == "section-sef-ss")
    {
        if(section_sef_ss == nullptr)
        {
            section_sef_ss = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSefSs>();
        }
        return section_sef_ss;
    }

    if(child_yang_name == "section-c-vs")
    {
        if(section_c_vs == nullptr)
        {
            section_c_vs = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionCVs>();
        }
        return section_c_vs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

    if(section_c_vs != nullptr)
    {
        children["section-c-vs"] = section_c_vs;
    }

    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "section-status")
    {
        section_status = value;
        section_status.value_namespace = name_space;
        section_status.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "section-status")
    {
        section_status.yfilter = yfilter;
    }
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "section-e-ss" || name == "section-se-ss" || name == "section-sef-ss" || name == "section-c-vs" || name == "section-status")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionESs::SectionESs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "section-e-ss"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionESs::~SectionESs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionESs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionESs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-e-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionESs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionESs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionESs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionESs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionESs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSeSs::SectionSeSs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "section-se-ss"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSeSs::~SectionSeSs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSeSs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSeSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-se-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSeSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSeSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSeSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSeSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSeSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSefSs::SectionSefSs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "section-sef-ss"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSefSs::~SectionSefSs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSefSs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSefSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSefSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-sef-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSefSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSefSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSefSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSefSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSefSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSefSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionCVs::SectionCVs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "section-c-vs"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionCVs::~SectionCVs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionCVs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionCVs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionCVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-c-vs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionCVs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionCVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionCVs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionCVs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionCVs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionCVs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::Line()
    :
    line_status{YType::int32, "line-status"}
    	,
    line_e_ss(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineESs>())
	,line_se_ss(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineSeSs>())
	,line_c_vs(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineCVs>())
	,line_ua_ss(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineUaSs>())
	,line_fc_ls(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineFcLs>())
{
    line_e_ss->parent = this;
    line_se_ss->parent = this;
    line_c_vs->parent = this;
    line_ua_ss->parent = this;
    line_fc_ls->parent = this;

    yang_name = "line"; yang_parent_name = "sonet-minute15ocn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::~Line()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::has_data() const
{
    return line_status.is_set
	|| (line_e_ss !=  nullptr && line_e_ss->has_data())
	|| (line_se_ss !=  nullptr && line_se_ss->has_data())
	|| (line_c_vs !=  nullptr && line_c_vs->has_data())
	|| (line_ua_ss !=  nullptr && line_ua_ss->has_data())
	|| (line_fc_ls !=  nullptr && line_fc_ls->has_data());
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(line_status.yfilter)
	|| (line_e_ss !=  nullptr && line_e_ss->has_operation())
	|| (line_se_ss !=  nullptr && line_se_ss->has_operation())
	|| (line_c_vs !=  nullptr && line_c_vs->has_operation())
	|| (line_ua_ss !=  nullptr && line_ua_ss->has_operation())
	|| (line_fc_ls !=  nullptr && line_fc_ls->has_operation());
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (line_status.is_set || is_set(line_status.yfilter)) leaf_name_data.push_back(line_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "line-e-ss")
    {
        if(line_e_ss == nullptr)
        {
            line_e_ss = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineESs>();
        }
        return line_e_ss;
    }

    if(child_yang_name == "line-se-ss")
    {
        if(line_se_ss == nullptr)
        {
            line_se_ss = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineSeSs>();
        }
        return line_se_ss;
    }

    if(child_yang_name == "line-c-vs")
    {
        if(line_c_vs == nullptr)
        {
            line_c_vs = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineCVs>();
        }
        return line_c_vs;
    }

    if(child_yang_name == "line-ua-ss")
    {
        if(line_ua_ss == nullptr)
        {
            line_ua_ss = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineUaSs>();
        }
        return line_ua_ss;
    }

    if(child_yang_name == "line-fc-ls")
    {
        if(line_fc_ls == nullptr)
        {
            line_fc_ls = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineFcLs>();
        }
        return line_fc_ls;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(line_e_ss != nullptr)
    {
        children["line-e-ss"] = line_e_ss;
    }

    if(line_se_ss != nullptr)
    {
        children["line-se-ss"] = line_se_ss;
    }

    if(line_c_vs != nullptr)
    {
        children["line-c-vs"] = line_c_vs;
    }

    if(line_ua_ss != nullptr)
    {
        children["line-ua-ss"] = line_ua_ss;
    }

    if(line_fc_ls != nullptr)
    {
        children["line-fc-ls"] = line_fc_ls;
    }

    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "line-status")
    {
        line_status = value;
        line_status.value_namespace = name_space;
        line_status.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "line-status")
    {
        line_status.yfilter = yfilter;
    }
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "line-e-ss" || name == "line-se-ss" || name == "line-c-vs" || name == "line-ua-ss" || name == "line-fc-ls" || name == "line-status")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineESs::LineESs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "line-e-ss"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineESs::~LineESs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineESs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineESs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-e-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineESs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineESs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineESs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineESs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineESs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineSeSs::LineSeSs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "line-se-ss"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineSeSs::~LineSeSs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineSeSs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineSeSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-se-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineSeSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineSeSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineSeSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineSeSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineSeSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineCVs::LineCVs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "line-c-vs"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineCVs::~LineCVs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineCVs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineCVs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineCVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-c-vs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineCVs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineCVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineCVs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineCVs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineCVs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineCVs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineUaSs::LineUaSs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "line-ua-ss"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineUaSs::~LineUaSs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineUaSs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineUaSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineUaSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-ua-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineUaSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineUaSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineUaSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineUaSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineUaSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineUaSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineFcLs::LineFcLs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "line-fc-ls"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineFcLs::~LineFcLs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineFcLs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineFcLs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineFcLs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-fc-ls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineFcLs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineFcLs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineFcLs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineFcLs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineFcLs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineFcLs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FeLine()
    :
    far_end_line_e_ss(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineESs>())
	,far_end_line_se_ss(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineSeSs>())
	,far_end_line_c_vs(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineCVs>())
	,far_end_line_ua_ss(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineUaSs>())
	,far_end_line_fc_ls(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineFcLs>())
{
    far_end_line_e_ss->parent = this;
    far_end_line_se_ss->parent = this;
    far_end_line_c_vs->parent = this;
    far_end_line_ua_ss->parent = this;
    far_end_line_fc_ls->parent = this;

    yang_name = "fe-line"; yang_parent_name = "sonet-minute15ocn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::~FeLine()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::has_data() const
{
    return (far_end_line_e_ss !=  nullptr && far_end_line_e_ss->has_data())
	|| (far_end_line_se_ss !=  nullptr && far_end_line_se_ss->has_data())
	|| (far_end_line_c_vs !=  nullptr && far_end_line_c_vs->has_data())
	|| (far_end_line_ua_ss !=  nullptr && far_end_line_ua_ss->has_data())
	|| (far_end_line_fc_ls !=  nullptr && far_end_line_fc_ls->has_data());
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::has_operation() const
{
    return is_set(yfilter)
	|| (far_end_line_e_ss !=  nullptr && far_end_line_e_ss->has_operation())
	|| (far_end_line_se_ss !=  nullptr && far_end_line_se_ss->has_operation())
	|| (far_end_line_c_vs !=  nullptr && far_end_line_c_vs->has_operation())
	|| (far_end_line_ua_ss !=  nullptr && far_end_line_ua_ss->has_operation())
	|| (far_end_line_fc_ls !=  nullptr && far_end_line_fc_ls->has_operation());
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fe-line";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "far-end-line-e-ss")
    {
        if(far_end_line_e_ss == nullptr)
        {
            far_end_line_e_ss = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineESs>();
        }
        return far_end_line_e_ss;
    }

    if(child_yang_name == "far-end-line-se-ss")
    {
        if(far_end_line_se_ss == nullptr)
        {
            far_end_line_se_ss = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineSeSs>();
        }
        return far_end_line_se_ss;
    }

    if(child_yang_name == "far-end-line-c-vs")
    {
        if(far_end_line_c_vs == nullptr)
        {
            far_end_line_c_vs = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineCVs>();
        }
        return far_end_line_c_vs;
    }

    if(child_yang_name == "far-end-line-ua-ss")
    {
        if(far_end_line_ua_ss == nullptr)
        {
            far_end_line_ua_ss = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineUaSs>();
        }
        return far_end_line_ua_ss;
    }

    if(child_yang_name == "far-end-line-fc-ls")
    {
        if(far_end_line_fc_ls == nullptr)
        {
            far_end_line_fc_ls = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineFcLs>();
        }
        return far_end_line_fc_ls;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(far_end_line_e_ss != nullptr)
    {
        children["far-end-line-e-ss"] = far_end_line_e_ss;
    }

    if(far_end_line_se_ss != nullptr)
    {
        children["far-end-line-se-ss"] = far_end_line_se_ss;
    }

    if(far_end_line_c_vs != nullptr)
    {
        children["far-end-line-c-vs"] = far_end_line_c_vs;
    }

    if(far_end_line_ua_ss != nullptr)
    {
        children["far-end-line-ua-ss"] = far_end_line_ua_ss;
    }

    if(far_end_line_fc_ls != nullptr)
    {
        children["far-end-line-fc-ls"] = far_end_line_fc_ls;
    }

    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "far-end-line-e-ss" || name == "far-end-line-se-ss" || name == "far-end-line-c-vs" || name == "far-end-line-ua-ss" || name == "far-end-line-fc-ls")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineESs::FarEndLineESs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "far-end-line-e-ss"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineESs::~FarEndLineESs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineESs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineESs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-e-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineESs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineESs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineESs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineESs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineESs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineSeSs::FarEndLineSeSs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "far-end-line-se-ss"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineSeSs::~FarEndLineSeSs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineSeSs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineSeSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-se-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineSeSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineSeSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineSeSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineSeSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineSeSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineCVs::FarEndLineCVs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "far-end-line-c-vs"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineCVs::~FarEndLineCVs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineCVs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineCVs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineCVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-c-vs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineCVs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineCVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineCVs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineCVs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineCVs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineCVs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineUaSs::FarEndLineUaSs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "far-end-line-ua-ss"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineUaSs::~FarEndLineUaSs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineUaSs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineUaSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineUaSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-ua-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineUaSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineUaSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineUaSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineUaSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineUaSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineUaSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineFcLs::FarEndLineFcLs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "far-end-line-fc-ls"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineFcLs::~FarEndLineFcLs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineFcLs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineFcLs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineFcLs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-fc-ls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineFcLs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineFcLs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineFcLs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineFcLs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineFcLs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineFcLs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24()
    :
    sonet_hour24ocns(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns>())
	,sonet_hour24_paths(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths>())
{
    sonet_hour24ocns->parent = this;
    sonet_hour24_paths->parent = this;

    yang_name = "sonet-hour24"; yang_parent_name = "sonet-current"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::~SonetHour24()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::has_data() const
{
    return (sonet_hour24ocns !=  nullptr && sonet_hour24ocns->has_data())
	|| (sonet_hour24_paths !=  nullptr && sonet_hour24_paths->has_data());
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::has_operation() const
{
    return is_set(yfilter)
	|| (sonet_hour24ocns !=  nullptr && sonet_hour24ocns->has_operation())
	|| (sonet_hour24_paths !=  nullptr && sonet_hour24_paths->has_operation());
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-hour24";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-hour24ocns")
    {
        if(sonet_hour24ocns == nullptr)
        {
            sonet_hour24ocns = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns>();
        }
        return sonet_hour24ocns;
    }

    if(child_yang_name == "sonet-hour24-paths")
    {
        if(sonet_hour24_paths == nullptr)
        {
            sonet_hour24_paths = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths>();
        }
        return sonet_hour24_paths;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sonet_hour24ocns != nullptr)
    {
        children["sonet-hour24ocns"] = sonet_hour24ocns;
    }

    if(sonet_hour24_paths != nullptr)
    {
        children["sonet-hour24-paths"] = sonet_hour24_paths;
    }

    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonet-hour24ocns" || name == "sonet-hour24-paths")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocns()
{

    yang_name = "sonet-hour24ocns"; yang_parent_name = "sonet-hour24"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::~SonetHour24Ocns()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::has_data() const
{
    for (std::size_t index=0; index<sonet_hour24ocn.size(); index++)
    {
        if(sonet_hour24ocn[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::has_operation() const
{
    for (std::size_t index=0; index<sonet_hour24ocn.size(); index++)
    {
        if(sonet_hour24ocn[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-hour24ocns";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-hour24ocn")
    {
        auto c = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn>();
        c->parent = this;
        sonet_hour24ocn.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : sonet_hour24ocn)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonet-hour24ocn")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::SonetHour24Ocn()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    valid{YType::boolean, "valid"},
    timestamp{YType::str, "timestamp"},
    last_clear_time{YType::str, "last-clear-time"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"}
    	,
    section(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section>())
	,line(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line>())
	,fe_line(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine>())
{
    section->parent = this;
    line->parent = this;
    fe_line->parent = this;

    yang_name = "sonet-hour24ocn"; yang_parent_name = "sonet-hour24ocns"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::~SonetHour24Ocn()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::has_data() const
{
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::has_operation() const
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

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-hour24ocn" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "section")
    {
        if(section == nullptr)
        {
            section = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section>();
        }
        return section;
    }

    if(child_yang_name == "line")
    {
        if(line == nullptr)
        {
            line = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line>();
        }
        return line;
    }

    if(child_yang_name == "fe-line")
    {
        if(fe_line == nullptr)
        {
            fe_line = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine>();
        }
        return fe_line;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(section != nullptr)
    {
        children["section"] = section;
    }

    if(line != nullptr)
    {
        children["line"] = line;
    }

    if(fe_line != nullptr)
    {
        children["fe-line"] = fe_line;
    }

    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "section" || name == "line" || name == "fe-line" || name == "number" || name == "index" || name == "valid" || name == "timestamp" || name == "last-clear-time" || name == "last-clear15-min-time" || name == "last-clear24-hr-time")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::Section()
    :
    section_status{YType::int32, "section-status"}
    	,
    section_e_ss(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionESs>())
	,section_se_ss(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSeSs>())
	,section_sef_ss(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSefSs>())
	,section_c_vs(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionCVs>())
{
    section_e_ss->parent = this;
    section_se_ss->parent = this;
    section_sef_ss->parent = this;
    section_c_vs->parent = this;

    yang_name = "section"; yang_parent_name = "sonet-hour24ocn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::~Section()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::has_data() const
{
    return section_status.is_set
	|| (section_e_ss !=  nullptr && section_e_ss->has_data())
	|| (section_se_ss !=  nullptr && section_se_ss->has_data())
	|| (section_sef_ss !=  nullptr && section_sef_ss->has_data())
	|| (section_c_vs !=  nullptr && section_c_vs->has_data());
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(section_status.yfilter)
	|| (section_e_ss !=  nullptr && section_e_ss->has_operation())
	|| (section_se_ss !=  nullptr && section_se_ss->has_operation())
	|| (section_sef_ss !=  nullptr && section_sef_ss->has_operation())
	|| (section_c_vs !=  nullptr && section_c_vs->has_operation());
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (section_status.is_set || is_set(section_status.yfilter)) leaf_name_data.push_back(section_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "section-e-ss")
    {
        if(section_e_ss == nullptr)
        {
            section_e_ss = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionESs>();
        }
        return section_e_ss;
    }

    if(child_yang_name == "section-se-ss")
    {
        if(section_se_ss == nullptr)
        {
            section_se_ss = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSeSs>();
        }
        return section_se_ss;
    }

    if(child_yang_name == "section-sef-ss")
    {
        if(section_sef_ss == nullptr)
        {
            section_sef_ss = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSefSs>();
        }
        return section_sef_ss;
    }

    if(child_yang_name == "section-c-vs")
    {
        if(section_c_vs == nullptr)
        {
            section_c_vs = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionCVs>();
        }
        return section_c_vs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

    if(section_c_vs != nullptr)
    {
        children["section-c-vs"] = section_c_vs;
    }

    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "section-status")
    {
        section_status = value;
        section_status.value_namespace = name_space;
        section_status.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "section-status")
    {
        section_status.yfilter = yfilter;
    }
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "section-e-ss" || name == "section-se-ss" || name == "section-sef-ss" || name == "section-c-vs" || name == "section-status")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionESs::SectionESs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "section-e-ss"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionESs::~SectionESs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionESs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionESs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-e-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionESs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionESs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionESs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionESs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionESs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSeSs::SectionSeSs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "section-se-ss"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSeSs::~SectionSeSs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSeSs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSeSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-se-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSeSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSeSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSeSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSeSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSeSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSefSs::SectionSefSs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "section-sef-ss"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSefSs::~SectionSefSs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSefSs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSefSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSefSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-sef-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSefSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSefSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSefSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSefSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSefSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSefSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionCVs::SectionCVs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "section-c-vs"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionCVs::~SectionCVs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionCVs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionCVs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionCVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-c-vs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionCVs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionCVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionCVs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionCVs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionCVs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionCVs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::Line()
    :
    line_status{YType::int32, "line-status"}
    	,
    line_e_ss(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineESs>())
	,line_se_ss(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineSeSs>())
	,line_c_vs(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineCVs>())
	,line_ua_ss(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineUaSs>())
	,line_fc_ls(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineFcLs>())
{
    line_e_ss->parent = this;
    line_se_ss->parent = this;
    line_c_vs->parent = this;
    line_ua_ss->parent = this;
    line_fc_ls->parent = this;

    yang_name = "line"; yang_parent_name = "sonet-hour24ocn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::~Line()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::has_data() const
{
    return line_status.is_set
	|| (line_e_ss !=  nullptr && line_e_ss->has_data())
	|| (line_se_ss !=  nullptr && line_se_ss->has_data())
	|| (line_c_vs !=  nullptr && line_c_vs->has_data())
	|| (line_ua_ss !=  nullptr && line_ua_ss->has_data())
	|| (line_fc_ls !=  nullptr && line_fc_ls->has_data());
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(line_status.yfilter)
	|| (line_e_ss !=  nullptr && line_e_ss->has_operation())
	|| (line_se_ss !=  nullptr && line_se_ss->has_operation())
	|| (line_c_vs !=  nullptr && line_c_vs->has_operation())
	|| (line_ua_ss !=  nullptr && line_ua_ss->has_operation())
	|| (line_fc_ls !=  nullptr && line_fc_ls->has_operation());
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (line_status.is_set || is_set(line_status.yfilter)) leaf_name_data.push_back(line_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "line-e-ss")
    {
        if(line_e_ss == nullptr)
        {
            line_e_ss = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineESs>();
        }
        return line_e_ss;
    }

    if(child_yang_name == "line-se-ss")
    {
        if(line_se_ss == nullptr)
        {
            line_se_ss = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineSeSs>();
        }
        return line_se_ss;
    }

    if(child_yang_name == "line-c-vs")
    {
        if(line_c_vs == nullptr)
        {
            line_c_vs = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineCVs>();
        }
        return line_c_vs;
    }

    if(child_yang_name == "line-ua-ss")
    {
        if(line_ua_ss == nullptr)
        {
            line_ua_ss = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineUaSs>();
        }
        return line_ua_ss;
    }

    if(child_yang_name == "line-fc-ls")
    {
        if(line_fc_ls == nullptr)
        {
            line_fc_ls = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineFcLs>();
        }
        return line_fc_ls;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(line_e_ss != nullptr)
    {
        children["line-e-ss"] = line_e_ss;
    }

    if(line_se_ss != nullptr)
    {
        children["line-se-ss"] = line_se_ss;
    }

    if(line_c_vs != nullptr)
    {
        children["line-c-vs"] = line_c_vs;
    }

    if(line_ua_ss != nullptr)
    {
        children["line-ua-ss"] = line_ua_ss;
    }

    if(line_fc_ls != nullptr)
    {
        children["line-fc-ls"] = line_fc_ls;
    }

    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "line-status")
    {
        line_status = value;
        line_status.value_namespace = name_space;
        line_status.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "line-status")
    {
        line_status.yfilter = yfilter;
    }
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "line-e-ss" || name == "line-se-ss" || name == "line-c-vs" || name == "line-ua-ss" || name == "line-fc-ls" || name == "line-status")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineESs::LineESs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "line-e-ss"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineESs::~LineESs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineESs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineESs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-e-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineESs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineESs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineESs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineESs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineESs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineSeSs::LineSeSs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "line-se-ss"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineSeSs::~LineSeSs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineSeSs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineSeSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-se-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineSeSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineSeSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineSeSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineSeSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineSeSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineCVs::LineCVs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "line-c-vs"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineCVs::~LineCVs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineCVs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineCVs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineCVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-c-vs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineCVs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineCVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineCVs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineCVs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineCVs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineCVs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineUaSs::LineUaSs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "line-ua-ss"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineUaSs::~LineUaSs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineUaSs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineUaSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineUaSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-ua-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineUaSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineUaSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineUaSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineUaSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineUaSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineUaSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineFcLs::LineFcLs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "line-fc-ls"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineFcLs::~LineFcLs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineFcLs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineFcLs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineFcLs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-fc-ls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineFcLs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineFcLs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineFcLs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineFcLs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineFcLs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineFcLs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FeLine()
    :
    far_end_line_e_ss(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineESs>())
	,far_end_line_se_ss(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineSeSs>())
	,far_end_line_c_vs(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineCVs>())
	,far_end_line_ua_ss(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineUaSs>())
	,far_end_line_fc_ls(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineFcLs>())
{
    far_end_line_e_ss->parent = this;
    far_end_line_se_ss->parent = this;
    far_end_line_c_vs->parent = this;
    far_end_line_ua_ss->parent = this;
    far_end_line_fc_ls->parent = this;

    yang_name = "fe-line"; yang_parent_name = "sonet-hour24ocn"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::~FeLine()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::has_data() const
{
    return (far_end_line_e_ss !=  nullptr && far_end_line_e_ss->has_data())
	|| (far_end_line_se_ss !=  nullptr && far_end_line_se_ss->has_data())
	|| (far_end_line_c_vs !=  nullptr && far_end_line_c_vs->has_data())
	|| (far_end_line_ua_ss !=  nullptr && far_end_line_ua_ss->has_data())
	|| (far_end_line_fc_ls !=  nullptr && far_end_line_fc_ls->has_data());
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::has_operation() const
{
    return is_set(yfilter)
	|| (far_end_line_e_ss !=  nullptr && far_end_line_e_ss->has_operation())
	|| (far_end_line_se_ss !=  nullptr && far_end_line_se_ss->has_operation())
	|| (far_end_line_c_vs !=  nullptr && far_end_line_c_vs->has_operation())
	|| (far_end_line_ua_ss !=  nullptr && far_end_line_ua_ss->has_operation())
	|| (far_end_line_fc_ls !=  nullptr && far_end_line_fc_ls->has_operation());
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fe-line";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "far-end-line-e-ss")
    {
        if(far_end_line_e_ss == nullptr)
        {
            far_end_line_e_ss = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineESs>();
        }
        return far_end_line_e_ss;
    }

    if(child_yang_name == "far-end-line-se-ss")
    {
        if(far_end_line_se_ss == nullptr)
        {
            far_end_line_se_ss = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineSeSs>();
        }
        return far_end_line_se_ss;
    }

    if(child_yang_name == "far-end-line-c-vs")
    {
        if(far_end_line_c_vs == nullptr)
        {
            far_end_line_c_vs = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineCVs>();
        }
        return far_end_line_c_vs;
    }

    if(child_yang_name == "far-end-line-ua-ss")
    {
        if(far_end_line_ua_ss == nullptr)
        {
            far_end_line_ua_ss = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineUaSs>();
        }
        return far_end_line_ua_ss;
    }

    if(child_yang_name == "far-end-line-fc-ls")
    {
        if(far_end_line_fc_ls == nullptr)
        {
            far_end_line_fc_ls = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineFcLs>();
        }
        return far_end_line_fc_ls;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(far_end_line_e_ss != nullptr)
    {
        children["far-end-line-e-ss"] = far_end_line_e_ss;
    }

    if(far_end_line_se_ss != nullptr)
    {
        children["far-end-line-se-ss"] = far_end_line_se_ss;
    }

    if(far_end_line_c_vs != nullptr)
    {
        children["far-end-line-c-vs"] = far_end_line_c_vs;
    }

    if(far_end_line_ua_ss != nullptr)
    {
        children["far-end-line-ua-ss"] = far_end_line_ua_ss;
    }

    if(far_end_line_fc_ls != nullptr)
    {
        children["far-end-line-fc-ls"] = far_end_line_fc_ls;
    }

    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "far-end-line-e-ss" || name == "far-end-line-se-ss" || name == "far-end-line-c-vs" || name == "far-end-line-ua-ss" || name == "far-end-line-fc-ls")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineESs::FarEndLineESs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "far-end-line-e-ss"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineESs::~FarEndLineESs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineESs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineESs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-e-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineESs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineESs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineESs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineESs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineESs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineSeSs::FarEndLineSeSs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "far-end-line-se-ss"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineSeSs::~FarEndLineSeSs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineSeSs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineSeSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-se-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineSeSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineSeSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineSeSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineSeSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineSeSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineCVs::FarEndLineCVs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "far-end-line-c-vs"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineCVs::~FarEndLineCVs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineCVs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineCVs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineCVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-c-vs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineCVs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineCVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineCVs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineCVs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineCVs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineCVs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineUaSs::FarEndLineUaSs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "far-end-line-ua-ss"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineUaSs::~FarEndLineUaSs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineUaSs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineUaSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineUaSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-ua-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineUaSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineUaSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineUaSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineUaSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineUaSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineUaSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineFcLs::FarEndLineFcLs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "far-end-line-fc-ls"; yang_parent_name = "fe-line"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineFcLs::~FarEndLineFcLs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineFcLs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineFcLs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineFcLs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-fc-ls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineFcLs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineFcLs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineFcLs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineFcLs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineFcLs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineFcLs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Paths()
{

    yang_name = "sonet-hour24-paths"; yang_parent_name = "sonet-hour24"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::~SonetHour24Paths()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::has_data() const
{
    for (std::size_t index=0; index<sonet_hour24_path.size(); index++)
    {
        if(sonet_hour24_path[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::has_operation() const
{
    for (std::size_t index=0; index<sonet_hour24_path.size(); index++)
    {
        if(sonet_hour24_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-hour24-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sonet-hour24-path")
    {
        auto c = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path>();
        c->parent = this;
        sonet_hour24_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : sonet_hour24_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sonet-hour24-path")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::SonetHour24Path()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    valid{YType::boolean, "valid"},
    timestamp{YType::str, "timestamp"},
    last_clear_time{YType::str, "last-clear-time"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"}
    	,
    path(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path>())
	,fe_path(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::FePath>())
{
    path->parent = this;
    fe_path->parent = this;

    yang_name = "sonet-hour24-path"; yang_parent_name = "sonet-hour24-paths"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::~SonetHour24Path()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::has_data() const
{
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::has_operation() const
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

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-hour24-path" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path")
    {
        if(path == nullptr)
        {
            path = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path>();
        }
        return path;
    }

    if(child_yang_name == "fe-path")
    {
        if(fe_path == nullptr)
        {
            fe_path = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::FePath>();
        }
        return fe_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(path != nullptr)
    {
        children["path"] = path;
    }

    if(fe_path != nullptr)
    {
        children["fe-path"] = fe_path;
    }

    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "fe-path" || name == "number" || name == "index" || name == "valid" || name == "timestamp" || name == "last-clear-time" || name == "last-clear15-min-time" || name == "last-clear24-hr-time")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::Path()
    :
    path_width{YType::enumeration, "path-width"},
    path_status{YType::int32, "path-status"}
    	,
    path_e_ss(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathESs>())
	,path_se_ss(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathSeSs>())
	,path_c_vs(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathCVs>())
	,path_ua_ss(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathUaSs>())
{
    path_e_ss->parent = this;
    path_se_ss->parent = this;
    path_c_vs->parent = this;
    path_ua_ss->parent = this;

    yang_name = "path"; yang_parent_name = "sonet-hour24-path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::~Path()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::has_data() const
{
    return path_width.is_set
	|| path_status.is_set
	|| (path_e_ss !=  nullptr && path_e_ss->has_data())
	|| (path_se_ss !=  nullptr && path_se_ss->has_data())
	|| (path_c_vs !=  nullptr && path_c_vs->has_data())
	|| (path_ua_ss !=  nullptr && path_ua_ss->has_data());
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_width.yfilter)
	|| ydk::is_set(path_status.yfilter)
	|| (path_e_ss !=  nullptr && path_e_ss->has_operation())
	|| (path_se_ss !=  nullptr && path_se_ss->has_operation())
	|| (path_c_vs !=  nullptr && path_c_vs->has_operation())
	|| (path_ua_ss !=  nullptr && path_ua_ss->has_operation());
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_width.is_set || is_set(path_width.yfilter)) leaf_name_data.push_back(path_width.get_name_leafdata());
    if (path_status.is_set || is_set(path_status.yfilter)) leaf_name_data.push_back(path_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-e-ss")
    {
        if(path_e_ss == nullptr)
        {
            path_e_ss = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathESs>();
        }
        return path_e_ss;
    }

    if(child_yang_name == "path-se-ss")
    {
        if(path_se_ss == nullptr)
        {
            path_se_ss = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathSeSs>();
        }
        return path_se_ss;
    }

    if(child_yang_name == "path-c-vs")
    {
        if(path_c_vs == nullptr)
        {
            path_c_vs = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathCVs>();
        }
        return path_c_vs;
    }

    if(child_yang_name == "path-ua-ss")
    {
        if(path_ua_ss == nullptr)
        {
            path_ua_ss = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathUaSs>();
        }
        return path_ua_ss;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(path_e_ss != nullptr)
    {
        children["path-e-ss"] = path_e_ss;
    }

    if(path_se_ss != nullptr)
    {
        children["path-se-ss"] = path_se_ss;
    }

    if(path_c_vs != nullptr)
    {
        children["path-c-vs"] = path_c_vs;
    }

    if(path_ua_ss != nullptr)
    {
        children["path-ua-ss"] = path_ua_ss;
    }

    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-e-ss" || name == "path-se-ss" || name == "path-c-vs" || name == "path-ua-ss" || name == "path-width" || name == "path-status")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathESs::PathESs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "path-e-ss"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathESs::~PathESs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathESs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathESs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-e-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathESs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathESs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathESs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathESs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathESs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathSeSs::PathSeSs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "path-se-ss"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathSeSs::~PathSeSs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathSeSs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathSeSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-se-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathSeSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathSeSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathSeSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathSeSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathSeSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathCVs::PathCVs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "path-c-vs"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathCVs::~PathCVs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathCVs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathCVs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathCVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-c-vs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathCVs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathCVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathCVs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathCVs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathCVs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathCVs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathUaSs::PathUaSs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "path-ua-ss"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathUaSs::~PathUaSs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathUaSs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathUaSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathUaSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-ua-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathUaSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathUaSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathUaSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathUaSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathUaSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathUaSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::FePath::FePath()
    :
    far_end_path_e_ss{YType::uint32, "far-end-path-e-ss"},
    far_end_path_se_ss{YType::uint32, "far-end-path-se-ss"},
    far_end_path_c_vs{YType::uint32, "far-end-path-c-vs"},
    far_end_path_ua_ss{YType::uint32, "far-end-path-ua-ss"}
{

    yang_name = "fe-path"; yang_parent_name = "sonet-hour24-path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::FePath::~FePath()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::FePath::has_data() const
{
    return far_end_path_e_ss.is_set
	|| far_end_path_se_ss.is_set
	|| far_end_path_c_vs.is_set
	|| far_end_path_ua_ss.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::FePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(far_end_path_e_ss.yfilter)
	|| ydk::is_set(far_end_path_se_ss.yfilter)
	|| ydk::is_set(far_end_path_c_vs.yfilter)
	|| ydk::is_set(far_end_path_ua_ss.yfilter);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::FePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fe-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::FePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (far_end_path_e_ss.is_set || is_set(far_end_path_e_ss.yfilter)) leaf_name_data.push_back(far_end_path_e_ss.get_name_leafdata());
    if (far_end_path_se_ss.is_set || is_set(far_end_path_se_ss.yfilter)) leaf_name_data.push_back(far_end_path_se_ss.get_name_leafdata());
    if (far_end_path_c_vs.is_set || is_set(far_end_path_c_vs.yfilter)) leaf_name_data.push_back(far_end_path_c_vs.get_name_leafdata());
    if (far_end_path_ua_ss.is_set || is_set(far_end_path_ua_ss.yfilter)) leaf_name_data.push_back(far_end_path_ua_ss.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::FePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::FePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::FePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::FePath::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::FePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "far-end-path-e-ss" || name == "far-end-path-se-ss" || name == "far-end-path-c-vs" || name == "far-end-path-ua-ss")
        return true;
    return false;
}

PerformanceManagement::Optics::Optics()
    :
    optics_ports(std::make_shared<PerformanceManagement::Optics::OpticsPorts>())
{
    optics_ports->parent = this;

    yang_name = "optics"; yang_parent_name = "performance-management"; is_top_level_class = false; has_list_ancestor = false;
}

PerformanceManagement::Optics::~Optics()
{
}

bool PerformanceManagement::Optics::has_data() const
{
    return (optics_ports !=  nullptr && optics_ports->has_data());
}

bool PerformanceManagement::Optics::has_operation() const
{
    return is_set(yfilter)
	|| (optics_ports !=  nullptr && optics_ports->has_operation());
}

std::string PerformanceManagement::Optics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceManagement::Optics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "optics-ports")
    {
        if(optics_ports == nullptr)
        {
            optics_ports = std::make_shared<PerformanceManagement::Optics::OpticsPorts>();
        }
        return optics_ports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(optics_ports != nullptr)
    {
        children["optics-ports"] = optics_ports;
    }

    return children;
}

void PerformanceManagement::Optics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Optics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Optics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optics-ports")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPorts()
{

    yang_name = "optics-ports"; yang_parent_name = "optics"; is_top_level_class = false; has_list_ancestor = false;
}

PerformanceManagement::Optics::OpticsPorts::~OpticsPorts()
{
}

bool PerformanceManagement::Optics::OpticsPorts::has_data() const
{
    for (std::size_t index=0; index<optics_port.size(); index++)
    {
        if(optics_port[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Optics::OpticsPorts::has_operation() const
{
    for (std::size_t index=0; index<optics_port.size(); index++)
    {
        if(optics_port[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagement::Optics::OpticsPorts::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management/optics/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceManagement::Optics::OpticsPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "optics-port")
    {
        auto c = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort>();
        c->parent = this;
        optics_port.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : optics_port)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerformanceManagement::Optics::OpticsPorts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Optics::OpticsPorts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Optics::OpticsPorts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optics-port")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsPort()
    :
    name{YType::str, "name"}
    	,
    optics_current(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent>())
{
    optics_current->parent = this;

    yang_name = "optics-port"; yang_parent_name = "optics-ports"; is_top_level_class = false; has_list_ancestor = false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::~OpticsPort()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::has_data() const
{
    return name.is_set
	|| (optics_current !=  nullptr && optics_current->has_data());
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (optics_current !=  nullptr && optics_current->has_operation());
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management/optics/optics-ports/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-port" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "optics-current")
    {
        if(optics_current == nullptr)
        {
            optics_current = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent>();
        }
        return optics_current;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(optics_current != nullptr)
    {
        children["optics-current"] = optics_current;
    }

    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optics-current" || name == "name")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsCurrent()
    :
    optics_hour24(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24>())
	,optics_minute15(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15>())
	,optics_second30(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30>())
{
    optics_hour24->parent = this;
    optics_minute15->parent = this;
    optics_second30->parent = this;

    yang_name = "optics-current"; yang_parent_name = "optics-port"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::~OpticsCurrent()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::has_data() const
{
    return (optics_hour24 !=  nullptr && optics_hour24->has_data())
	|| (optics_minute15 !=  nullptr && optics_minute15->has_data())
	|| (optics_second30 !=  nullptr && optics_second30->has_data());
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::has_operation() const
{
    return is_set(yfilter)
	|| (optics_hour24 !=  nullptr && optics_hour24->has_operation())
	|| (optics_minute15 !=  nullptr && optics_minute15->has_operation())
	|| (optics_second30 !=  nullptr && optics_second30->has_operation());
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-current";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "optics-hour24")
    {
        if(optics_hour24 == nullptr)
        {
            optics_hour24 = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24>();
        }
        return optics_hour24;
    }

    if(child_yang_name == "optics-minute15")
    {
        if(optics_minute15 == nullptr)
        {
            optics_minute15 = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15>();
        }
        return optics_minute15;
    }

    if(child_yang_name == "optics-second30")
    {
        if(optics_second30 == nullptr)
        {
            optics_second30 = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30>();
        }
        return optics_second30;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(optics_hour24 != nullptr)
    {
        children["optics-hour24"] = optics_hour24;
    }

    if(optics_minute15 != nullptr)
    {
        children["optics-minute15"] = optics_minute15;
    }

    if(optics_second30 != nullptr)
    {
        children["optics-second30"] = optics_second30;
    }

    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optics-hour24" || name == "optics-minute15" || name == "optics-second30")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24()
    :
    optics_hour24_optics(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics>())
	,optics_hour24fecs(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs>())
{
    optics_hour24_optics->parent = this;
    optics_hour24fecs->parent = this;

    yang_name = "optics-hour24"; yang_parent_name = "optics-current"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::~OpticsHour24()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::has_data() const
{
    return (optics_hour24_optics !=  nullptr && optics_hour24_optics->has_data())
	|| (optics_hour24fecs !=  nullptr && optics_hour24fecs->has_data());
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::has_operation() const
{
    return is_set(yfilter)
	|| (optics_hour24_optics !=  nullptr && optics_hour24_optics->has_operation())
	|| (optics_hour24fecs !=  nullptr && optics_hour24fecs->has_operation());
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-hour24";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "optics-hour24-optics")
    {
        if(optics_hour24_optics == nullptr)
        {
            optics_hour24_optics = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics>();
        }
        return optics_hour24_optics;
    }

    if(child_yang_name == "optics-hour24fecs")
    {
        if(optics_hour24fecs == nullptr)
        {
            optics_hour24fecs = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs>();
        }
        return optics_hour24fecs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(optics_hour24_optics != nullptr)
    {
        children["optics-hour24-optics"] = optics_hour24_optics;
    }

    if(optics_hour24fecs != nullptr)
    {
        children["optics-hour24fecs"] = optics_hour24fecs;
    }

    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optics-hour24-optics" || name == "optics-hour24fecs")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optics()
{

    yang_name = "optics-hour24-optics"; yang_parent_name = "optics-hour24"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::~OpticsHour24Optics()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::has_data() const
{
    for (std::size_t index=0; index<optics_hour24_optic.size(); index++)
    {
        if(optics_hour24_optic[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::has_operation() const
{
    for (std::size_t index=0; index<optics_hour24_optic.size(); index++)
    {
        if(optics_hour24_optic[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-hour24-optics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "optics-hour24-optic")
    {
        auto c = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic>();
        c->parent = this;
        optics_hour24_optic.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : optics_hour24_optic)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optics-hour24-optic")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::OpticsHour24Optic()
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
    lbc(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Lbc>())
	,lbc_pc(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::LbcPc>())
	,opt(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Opt>())
	,opr(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Opr>())
	,cd(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Cd>())
	,dgd(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Dgd>())
	,pmd(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pmd>())
	,osnr(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Osnr>())
	,center_wavelength(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::CenterWavelength>())
	,pdl(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pdl>())
	,pcr(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pcr>())
	,pn(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pn>())
	,rx_sig_pow(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::RxSigPow>())
	,low_sig_freq_off(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::LowSigFreqOff>())
{
    lbc->parent = this;
    lbc_pc->parent = this;
    opt->parent = this;
    opr->parent = this;
    cd->parent = this;
    dgd->parent = this;
    pmd->parent = this;
    osnr->parent = this;
    center_wavelength->parent = this;
    pdl->parent = this;
    pcr->parent = this;
    pn->parent = this;
    rx_sig_pow->parent = this;
    low_sig_freq_off->parent = this;

    yang_name = "optics-hour24-optic"; yang_parent_name = "optics-hour24-optics"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::~OpticsHour24Optic()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::has_data() const
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
	|| (lbc_pc !=  nullptr && lbc_pc->has_data())
	|| (opt !=  nullptr && opt->has_data())
	|| (opr !=  nullptr && opr->has_data())
	|| (cd !=  nullptr && cd->has_data())
	|| (dgd !=  nullptr && dgd->has_data())
	|| (pmd !=  nullptr && pmd->has_data())
	|| (osnr !=  nullptr && osnr->has_data())
	|| (center_wavelength !=  nullptr && center_wavelength->has_data())
	|| (pdl !=  nullptr && pdl->has_data())
	|| (pcr !=  nullptr && pcr->has_data())
	|| (pn !=  nullptr && pn->has_data())
	|| (rx_sig_pow !=  nullptr && rx_sig_pow->has_data())
	|| (low_sig_freq_off !=  nullptr && low_sig_freq_off->has_data());
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::has_operation() const
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
	|| (lbc_pc !=  nullptr && lbc_pc->has_operation())
	|| (opt !=  nullptr && opt->has_operation())
	|| (opr !=  nullptr && opr->has_operation())
	|| (cd !=  nullptr && cd->has_operation())
	|| (dgd !=  nullptr && dgd->has_operation())
	|| (pmd !=  nullptr && pmd->has_operation())
	|| (osnr !=  nullptr && osnr->has_operation())
	|| (center_wavelength !=  nullptr && center_wavelength->has_operation())
	|| (pdl !=  nullptr && pdl->has_operation())
	|| (pcr !=  nullptr && pcr->has_operation())
	|| (pn !=  nullptr && pn->has_operation())
	|| (rx_sig_pow !=  nullptr && rx_sig_pow->has_operation())
	|| (low_sig_freq_off !=  nullptr && low_sig_freq_off->has_operation());
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-hour24-optic" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lbc")
    {
        if(lbc == nullptr)
        {
            lbc = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Lbc>();
        }
        return lbc;
    }

    if(child_yang_name == "lbc-pc")
    {
        if(lbc_pc == nullptr)
        {
            lbc_pc = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::LbcPc>();
        }
        return lbc_pc;
    }

    if(child_yang_name == "opt")
    {
        if(opt == nullptr)
        {
            opt = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Opt>();
        }
        return opt;
    }

    if(child_yang_name == "opr")
    {
        if(opr == nullptr)
        {
            opr = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Opr>();
        }
        return opr;
    }

    if(child_yang_name == "cd")
    {
        if(cd == nullptr)
        {
            cd = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Cd>();
        }
        return cd;
    }

    if(child_yang_name == "dgd")
    {
        if(dgd == nullptr)
        {
            dgd = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Dgd>();
        }
        return dgd;
    }

    if(child_yang_name == "pmd")
    {
        if(pmd == nullptr)
        {
            pmd = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pmd>();
        }
        return pmd;
    }

    if(child_yang_name == "osnr")
    {
        if(osnr == nullptr)
        {
            osnr = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Osnr>();
        }
        return osnr;
    }

    if(child_yang_name == "center-wavelength")
    {
        if(center_wavelength == nullptr)
        {
            center_wavelength = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::CenterWavelength>();
        }
        return center_wavelength;
    }

    if(child_yang_name == "pdl")
    {
        if(pdl == nullptr)
        {
            pdl = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pdl>();
        }
        return pdl;
    }

    if(child_yang_name == "pcr")
    {
        if(pcr == nullptr)
        {
            pcr = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pcr>();
        }
        return pcr;
    }

    if(child_yang_name == "pn")
    {
        if(pn == nullptr)
        {
            pn = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pn>();
        }
        return pn;
    }

    if(child_yang_name == "rx-sig-pow")
    {
        if(rx_sig_pow == nullptr)
        {
            rx_sig_pow = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::RxSigPow>();
        }
        return rx_sig_pow;
    }

    if(child_yang_name == "low-sig-freq-off")
    {
        if(low_sig_freq_off == nullptr)
        {
            low_sig_freq_off = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::LowSigFreqOff>();
        }
        return low_sig_freq_off;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lbc != nullptr)
    {
        children["lbc"] = lbc;
    }

    if(lbc_pc != nullptr)
    {
        children["lbc-pc"] = lbc_pc;
    }

    if(opt != nullptr)
    {
        children["opt"] = opt;
    }

    if(opr != nullptr)
    {
        children["opr"] = opr;
    }

    if(cd != nullptr)
    {
        children["cd"] = cd;
    }

    if(dgd != nullptr)
    {
        children["dgd"] = dgd;
    }

    if(pmd != nullptr)
    {
        children["pmd"] = pmd;
    }

    if(osnr != nullptr)
    {
        children["osnr"] = osnr;
    }

    if(center_wavelength != nullptr)
    {
        children["center-wavelength"] = center_wavelength;
    }

    if(pdl != nullptr)
    {
        children["pdl"] = pdl;
    }

    if(pcr != nullptr)
    {
        children["pcr"] = pcr;
    }

    if(pn != nullptr)
    {
        children["pn"] = pn;
    }

    if(rx_sig_pow != nullptr)
    {
        children["rx-sig-pow"] = rx_sig_pow;
    }

    if(low_sig_freq_off != nullptr)
    {
        children["low-sig-freq-off"] = low_sig_freq_off;
    }

    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lbc" || name == "lbc-pc" || name == "opt" || name == "opr" || name == "cd" || name == "dgd" || name == "pmd" || name == "osnr" || name == "center-wavelength" || name == "pdl" || name == "pcr" || name == "pn" || name == "rx-sig-pow" || name == "low-sig-freq-off" || name == "number" || name == "index" || name == "valid" || name == "timestamp" || name == "last-clear-time" || name == "last-clear15-min-time" || name == "last-clear30-sec-time" || name == "last-clear24-hr-time" || name == "sec30-support")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Lbc::Lbc()
    :
    valid{YType::boolean, "valid"},
    minimum{YType::int32, "minimum"},
    average{YType::int32, "average"},
    maximum{YType::int32, "maximum"},
    minimum_threshold{YType::int32, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::int32, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"}
{

    yang_name = "lbc"; yang_parent_name = "optics-hour24-optic"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Lbc::~Lbc()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Lbc::has_data() const
{
    return valid.is_set
	|| minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Lbc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Lbc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lbc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Lbc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Lbc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Lbc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Lbc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Lbc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Lbc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::LbcPc::LbcPc()
    :
    valid{YType::boolean, "valid"},
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"}
{

    yang_name = "lbc-pc"; yang_parent_name = "optics-hour24-optic"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::LbcPc::~LbcPc()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::LbcPc::has_data() const
{
    return valid.is_set
	|| minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::LbcPc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::LbcPc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lbc-pc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::LbcPc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::LbcPc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::LbcPc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::LbcPc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::LbcPc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::LbcPc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Opt::Opt()
    :
    valid{YType::boolean, "valid"},
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"}
{

    yang_name = "opt"; yang_parent_name = "optics-hour24-optic"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Opt::~Opt()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Opt::has_data() const
{
    return valid.is_set
	|| minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Opt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Opt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Opt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Opt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Opt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Opt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Opt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Opt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Opr::Opr()
    :
    valid{YType::boolean, "valid"},
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"}
{

    yang_name = "opr"; yang_parent_name = "optics-hour24-optic"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Opr::~Opr()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Opr::has_data() const
{
    return valid.is_set
	|| minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Opr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Opr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Opr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Opr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Opr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Opr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Opr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Opr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Cd::Cd()
    :
    valid{YType::boolean, "valid"},
    minimum{YType::int32, "minimum"},
    average{YType::int32, "average"},
    maximum{YType::int32, "maximum"},
    minimum_threshold{YType::int32, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::int32, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"}
{

    yang_name = "cd"; yang_parent_name = "optics-hour24-optic"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Cd::~Cd()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Cd::has_data() const
{
    return valid.is_set
	|| minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Cd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Cd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Cd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Cd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Cd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Cd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Cd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Cd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Dgd::Dgd()
    :
    valid{YType::boolean, "valid"},
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"}
{

    yang_name = "dgd"; yang_parent_name = "optics-hour24-optic"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Dgd::~Dgd()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Dgd::has_data() const
{
    return valid.is_set
	|| minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Dgd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Dgd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dgd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Dgd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Dgd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Dgd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Dgd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Dgd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Dgd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pmd::Pmd()
    :
    valid{YType::boolean, "valid"},
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"}
{

    yang_name = "pmd"; yang_parent_name = "optics-hour24-optic"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pmd::~Pmd()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pmd::has_data() const
{
    return valid.is_set
	|| minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pmd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pmd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pmd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pmd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pmd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pmd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pmd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pmd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Osnr::Osnr()
    :
    valid{YType::boolean, "valid"},
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"}
{

    yang_name = "osnr"; yang_parent_name = "optics-hour24-optic"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Osnr::~Osnr()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Osnr::has_data() const
{
    return valid.is_set
	|| minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Osnr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Osnr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "osnr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Osnr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Osnr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Osnr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Osnr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Osnr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Osnr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::CenterWavelength::CenterWavelength()
    :
    valid{YType::boolean, "valid"},
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"}
{

    yang_name = "center-wavelength"; yang_parent_name = "optics-hour24-optic"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::CenterWavelength::~CenterWavelength()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::CenterWavelength::has_data() const
{
    return valid.is_set
	|| minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::CenterWavelength::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::CenterWavelength::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "center-wavelength";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::CenterWavelength::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::CenterWavelength::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::CenterWavelength::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::CenterWavelength::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::CenterWavelength::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::CenterWavelength::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pdl::Pdl()
    :
    valid{YType::boolean, "valid"},
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"}
{

    yang_name = "pdl"; yang_parent_name = "optics-hour24-optic"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pdl::~Pdl()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pdl::has_data() const
{
    return valid.is_set
	|| minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pdl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pdl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pdl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pdl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pdl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pdl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pdl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pdl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pdl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pcr::Pcr()
    :
    valid{YType::boolean, "valid"},
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"}
{

    yang_name = "pcr"; yang_parent_name = "optics-hour24-optic"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pcr::~Pcr()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pcr::has_data() const
{
    return valid.is_set
	|| minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pcr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pcr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pcr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pcr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pcr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pcr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pcr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pcr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pcr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pn::Pn()
    :
    valid{YType::boolean, "valid"},
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"}
{

    yang_name = "pn"; yang_parent_name = "optics-hour24-optic"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pn::~Pn()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pn::has_data() const
{
    return valid.is_set
	|| minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::RxSigPow::RxSigPow()
    :
    valid{YType::boolean, "valid"},
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"}
{

    yang_name = "rx-sig-pow"; yang_parent_name = "optics-hour24-optic"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::RxSigPow::~RxSigPow()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::RxSigPow::has_data() const
{
    return valid.is_set
	|| minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::RxSigPow::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::RxSigPow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-sig-pow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::RxSigPow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::RxSigPow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::RxSigPow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::RxSigPow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::RxSigPow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::RxSigPow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::LowSigFreqOff::LowSigFreqOff()
    :
    valid{YType::boolean, "valid"},
    minimum{YType::int32, "minimum"},
    average{YType::int32, "average"},
    maximum{YType::int32, "maximum"},
    minimum_threshold{YType::int32, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::int32, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"}
{

    yang_name = "low-sig-freq-off"; yang_parent_name = "optics-hour24-optic"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::LowSigFreqOff::~LowSigFreqOff()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::LowSigFreqOff::has_data() const
{
    return valid.is_set
	|| minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::LowSigFreqOff::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::LowSigFreqOff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "low-sig-freq-off";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::LowSigFreqOff::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::LowSigFreqOff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::LowSigFreqOff::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::LowSigFreqOff::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::LowSigFreqOff::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::LowSigFreqOff::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fecs()
{

    yang_name = "optics-hour24fecs"; yang_parent_name = "optics-hour24"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::~OpticsHour24Fecs()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::has_data() const
{
    for (std::size_t index=0; index<optics_hour24fec.size(); index++)
    {
        if(optics_hour24fec[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::has_operation() const
{
    for (std::size_t index=0; index<optics_hour24fec.size(); index++)
    {
        if(optics_hour24fec[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-hour24fecs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "optics-hour24fec")
    {
        auto c = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec>();
        c->parent = this;
        optics_hour24fec.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : optics_hour24fec)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optics-hour24fec")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::OpticsHour24Fec()
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
    ec_bits(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::EcBits>())
	,uc_words(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::UcWords>())
	,pre_fec_ber(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::PreFecBer>())
	,post_fec_ber(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::PostFecBer>())
	,q(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::Q>())
	,qmargin(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::Qmargin>())
{
    ec_bits->parent = this;
    uc_words->parent = this;
    pre_fec_ber->parent = this;
    post_fec_ber->parent = this;
    q->parent = this;
    qmargin->parent = this;

    yang_name = "optics-hour24fec"; yang_parent_name = "optics-hour24fecs"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::~OpticsHour24Fec()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::has_data() const
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::has_operation() const
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

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-hour24fec" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ec-bits")
    {
        if(ec_bits == nullptr)
        {
            ec_bits = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::EcBits>();
        }
        return ec_bits;
    }

    if(child_yang_name == "uc-words")
    {
        if(uc_words == nullptr)
        {
            uc_words = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::UcWords>();
        }
        return uc_words;
    }

    if(child_yang_name == "pre-fec-ber")
    {
        if(pre_fec_ber == nullptr)
        {
            pre_fec_ber = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::PreFecBer>();
        }
        return pre_fec_ber;
    }

    if(child_yang_name == "post-fec-ber")
    {
        if(post_fec_ber == nullptr)
        {
            post_fec_ber = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::PostFecBer>();
        }
        return post_fec_ber;
    }

    if(child_yang_name == "q")
    {
        if(q == nullptr)
        {
            q = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::Q>();
        }
        return q;
    }

    if(child_yang_name == "qmargin")
    {
        if(qmargin == nullptr)
        {
            qmargin = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::Qmargin>();
        }
        return qmargin;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ec-bits" || name == "uc-words" || name == "pre-fec-ber" || name == "post-fec-ber" || name == "q" || name == "qmargin" || name == "number" || name == "index" || name == "valid" || name == "timestamp" || name == "last-clear-time" || name == "last-clear15-min-time" || name == "last-clear30-sec-time" || name == "last-clear24-hr-time" || name == "sec30-support")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::EcBits::EcBits()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ec-bits"; yang_parent_name = "optics-hour24fec"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::EcBits::~EcBits()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::EcBits::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::EcBits::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::EcBits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ec-bits";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::EcBits::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::EcBits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::EcBits::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::EcBits::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::EcBits::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::EcBits::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::UcWords::UcWords()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "uc-words"; yang_parent_name = "optics-hour24fec"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::UcWords::~UcWords()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::UcWords::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::UcWords::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::UcWords::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uc-words";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::UcWords::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::UcWords::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::UcWords::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::UcWords::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::UcWords::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::UcWords::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::PreFecBer::PreFecBer()
    :
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "pre-fec-ber"; yang_parent_name = "optics-hour24fec"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::PreFecBer::~PreFecBer()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::PreFecBer::has_data() const
{
    return minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::PreFecBer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::PreFecBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-fec-ber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::PreFecBer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::PreFecBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::PreFecBer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::PreFecBer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::PreFecBer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::PreFecBer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::PostFecBer::PostFecBer()
    :
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "post-fec-ber"; yang_parent_name = "optics-hour24fec"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::PostFecBer::~PostFecBer()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::PostFecBer::has_data() const
{
    return minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::PostFecBer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::PostFecBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "post-fec-ber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::PostFecBer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::PostFecBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::PostFecBer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::PostFecBer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::PostFecBer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::PostFecBer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::Q::Q()
    :
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "q"; yang_parent_name = "optics-hour24fec"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::Q::~Q()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::Q::has_data() const
{
    return minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::Q::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::Q::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "q";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::Q::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::Q::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::Q::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::Q::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::Q::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::Q::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::Qmargin::Qmargin()
    :
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "qmargin"; yang_parent_name = "optics-hour24fec"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::Qmargin::~Qmargin()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::Qmargin::has_data() const
{
    return minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::Qmargin::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::Qmargin::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qmargin";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::Qmargin::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::Qmargin::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::Qmargin::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::Qmargin::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::Qmargin::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::Qmargin::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15()
    :
    optics_minute15_optics(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics>())
	,optics_minute15fecs(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs>())
{
    optics_minute15_optics->parent = this;
    optics_minute15fecs->parent = this;

    yang_name = "optics-minute15"; yang_parent_name = "optics-current"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::~OpticsMinute15()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::has_data() const
{
    return (optics_minute15_optics !=  nullptr && optics_minute15_optics->has_data())
	|| (optics_minute15fecs !=  nullptr && optics_minute15fecs->has_data());
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::has_operation() const
{
    return is_set(yfilter)
	|| (optics_minute15_optics !=  nullptr && optics_minute15_optics->has_operation())
	|| (optics_minute15fecs !=  nullptr && optics_minute15fecs->has_operation());
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-minute15";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "optics-minute15-optics")
    {
        if(optics_minute15_optics == nullptr)
        {
            optics_minute15_optics = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics>();
        }
        return optics_minute15_optics;
    }

    if(child_yang_name == "optics-minute15fecs")
    {
        if(optics_minute15fecs == nullptr)
        {
            optics_minute15fecs = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs>();
        }
        return optics_minute15fecs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(optics_minute15_optics != nullptr)
    {
        children["optics-minute15-optics"] = optics_minute15_optics;
    }

    if(optics_minute15fecs != nullptr)
    {
        children["optics-minute15fecs"] = optics_minute15fecs;
    }

    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optics-minute15-optics" || name == "optics-minute15fecs")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optics()
{

    yang_name = "optics-minute15-optics"; yang_parent_name = "optics-minute15"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::~OpticsMinute15Optics()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::has_data() const
{
    for (std::size_t index=0; index<optics_minute15_optic.size(); index++)
    {
        if(optics_minute15_optic[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::has_operation() const
{
    for (std::size_t index=0; index<optics_minute15_optic.size(); index++)
    {
        if(optics_minute15_optic[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-minute15-optics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "optics-minute15-optic")
    {
        auto c = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic>();
        c->parent = this;
        optics_minute15_optic.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : optics_minute15_optic)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optics-minute15-optic")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::OpticsMinute15Optic()
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
    lbc(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Lbc>())
	,lbc_pc(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::LbcPc>())
	,opt(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Opt>())
	,opr(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Opr>())
	,cd(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Cd>())
	,dgd(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Dgd>())
	,pmd(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pmd>())
	,osnr(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Osnr>())
	,center_wavelength(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::CenterWavelength>())
	,pdl(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pdl>())
	,pcr(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pcr>())
	,pn(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pn>())
	,rx_sig_pow(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::RxSigPow>())
	,low_sig_freq_off(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::LowSigFreqOff>())
{
    lbc->parent = this;
    lbc_pc->parent = this;
    opt->parent = this;
    opr->parent = this;
    cd->parent = this;
    dgd->parent = this;
    pmd->parent = this;
    osnr->parent = this;
    center_wavelength->parent = this;
    pdl->parent = this;
    pcr->parent = this;
    pn->parent = this;
    rx_sig_pow->parent = this;
    low_sig_freq_off->parent = this;

    yang_name = "optics-minute15-optic"; yang_parent_name = "optics-minute15-optics"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::~OpticsMinute15Optic()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::has_data() const
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
	|| (lbc_pc !=  nullptr && lbc_pc->has_data())
	|| (opt !=  nullptr && opt->has_data())
	|| (opr !=  nullptr && opr->has_data())
	|| (cd !=  nullptr && cd->has_data())
	|| (dgd !=  nullptr && dgd->has_data())
	|| (pmd !=  nullptr && pmd->has_data())
	|| (osnr !=  nullptr && osnr->has_data())
	|| (center_wavelength !=  nullptr && center_wavelength->has_data())
	|| (pdl !=  nullptr && pdl->has_data())
	|| (pcr !=  nullptr && pcr->has_data())
	|| (pn !=  nullptr && pn->has_data())
	|| (rx_sig_pow !=  nullptr && rx_sig_pow->has_data())
	|| (low_sig_freq_off !=  nullptr && low_sig_freq_off->has_data());
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::has_operation() const
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
	|| (lbc_pc !=  nullptr && lbc_pc->has_operation())
	|| (opt !=  nullptr && opt->has_operation())
	|| (opr !=  nullptr && opr->has_operation())
	|| (cd !=  nullptr && cd->has_operation())
	|| (dgd !=  nullptr && dgd->has_operation())
	|| (pmd !=  nullptr && pmd->has_operation())
	|| (osnr !=  nullptr && osnr->has_operation())
	|| (center_wavelength !=  nullptr && center_wavelength->has_operation())
	|| (pdl !=  nullptr && pdl->has_operation())
	|| (pcr !=  nullptr && pcr->has_operation())
	|| (pn !=  nullptr && pn->has_operation())
	|| (rx_sig_pow !=  nullptr && rx_sig_pow->has_operation())
	|| (low_sig_freq_off !=  nullptr && low_sig_freq_off->has_operation());
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-minute15-optic" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lbc")
    {
        if(lbc == nullptr)
        {
            lbc = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Lbc>();
        }
        return lbc;
    }

    if(child_yang_name == "lbc-pc")
    {
        if(lbc_pc == nullptr)
        {
            lbc_pc = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::LbcPc>();
        }
        return lbc_pc;
    }

    if(child_yang_name == "opt")
    {
        if(opt == nullptr)
        {
            opt = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Opt>();
        }
        return opt;
    }

    if(child_yang_name == "opr")
    {
        if(opr == nullptr)
        {
            opr = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Opr>();
        }
        return opr;
    }

    if(child_yang_name == "cd")
    {
        if(cd == nullptr)
        {
            cd = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Cd>();
        }
        return cd;
    }

    if(child_yang_name == "dgd")
    {
        if(dgd == nullptr)
        {
            dgd = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Dgd>();
        }
        return dgd;
    }

    if(child_yang_name == "pmd")
    {
        if(pmd == nullptr)
        {
            pmd = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pmd>();
        }
        return pmd;
    }

    if(child_yang_name == "osnr")
    {
        if(osnr == nullptr)
        {
            osnr = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Osnr>();
        }
        return osnr;
    }

    if(child_yang_name == "center-wavelength")
    {
        if(center_wavelength == nullptr)
        {
            center_wavelength = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::CenterWavelength>();
        }
        return center_wavelength;
    }

    if(child_yang_name == "pdl")
    {
        if(pdl == nullptr)
        {
            pdl = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pdl>();
        }
        return pdl;
    }

    if(child_yang_name == "pcr")
    {
        if(pcr == nullptr)
        {
            pcr = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pcr>();
        }
        return pcr;
    }

    if(child_yang_name == "pn")
    {
        if(pn == nullptr)
        {
            pn = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pn>();
        }
        return pn;
    }

    if(child_yang_name == "rx-sig-pow")
    {
        if(rx_sig_pow == nullptr)
        {
            rx_sig_pow = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::RxSigPow>();
        }
        return rx_sig_pow;
    }

    if(child_yang_name == "low-sig-freq-off")
    {
        if(low_sig_freq_off == nullptr)
        {
            low_sig_freq_off = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::LowSigFreqOff>();
        }
        return low_sig_freq_off;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lbc != nullptr)
    {
        children["lbc"] = lbc;
    }

    if(lbc_pc != nullptr)
    {
        children["lbc-pc"] = lbc_pc;
    }

    if(opt != nullptr)
    {
        children["opt"] = opt;
    }

    if(opr != nullptr)
    {
        children["opr"] = opr;
    }

    if(cd != nullptr)
    {
        children["cd"] = cd;
    }

    if(dgd != nullptr)
    {
        children["dgd"] = dgd;
    }

    if(pmd != nullptr)
    {
        children["pmd"] = pmd;
    }

    if(osnr != nullptr)
    {
        children["osnr"] = osnr;
    }

    if(center_wavelength != nullptr)
    {
        children["center-wavelength"] = center_wavelength;
    }

    if(pdl != nullptr)
    {
        children["pdl"] = pdl;
    }

    if(pcr != nullptr)
    {
        children["pcr"] = pcr;
    }

    if(pn != nullptr)
    {
        children["pn"] = pn;
    }

    if(rx_sig_pow != nullptr)
    {
        children["rx-sig-pow"] = rx_sig_pow;
    }

    if(low_sig_freq_off != nullptr)
    {
        children["low-sig-freq-off"] = low_sig_freq_off;
    }

    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lbc" || name == "lbc-pc" || name == "opt" || name == "opr" || name == "cd" || name == "dgd" || name == "pmd" || name == "osnr" || name == "center-wavelength" || name == "pdl" || name == "pcr" || name == "pn" || name == "rx-sig-pow" || name == "low-sig-freq-off" || name == "number" || name == "index" || name == "valid" || name == "timestamp" || name == "last-clear-time" || name == "last-clear15-min-time" || name == "last-clear30-sec-time" || name == "last-clear24-hr-time" || name == "sec30-support")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Lbc::Lbc()
    :
    valid{YType::boolean, "valid"},
    minimum{YType::int32, "minimum"},
    average{YType::int32, "average"},
    maximum{YType::int32, "maximum"},
    minimum_threshold{YType::int32, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::int32, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"}
{

    yang_name = "lbc"; yang_parent_name = "optics-minute15-optic"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Lbc::~Lbc()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Lbc::has_data() const
{
    return valid.is_set
	|| minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Lbc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Lbc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lbc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Lbc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Lbc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Lbc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Lbc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Lbc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Lbc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::LbcPc::LbcPc()
    :
    valid{YType::boolean, "valid"},
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"}
{

    yang_name = "lbc-pc"; yang_parent_name = "optics-minute15-optic"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::LbcPc::~LbcPc()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::LbcPc::has_data() const
{
    return valid.is_set
	|| minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::LbcPc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::LbcPc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lbc-pc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::LbcPc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::LbcPc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::LbcPc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::LbcPc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::LbcPc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::LbcPc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Opt::Opt()
    :
    valid{YType::boolean, "valid"},
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"}
{

    yang_name = "opt"; yang_parent_name = "optics-minute15-optic"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Opt::~Opt()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Opt::has_data() const
{
    return valid.is_set
	|| minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Opt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Opt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Opt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Opt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Opt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Opt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Opt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Opt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Opr::Opr()
    :
    valid{YType::boolean, "valid"},
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"}
{

    yang_name = "opr"; yang_parent_name = "optics-minute15-optic"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Opr::~Opr()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Opr::has_data() const
{
    return valid.is_set
	|| minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Opr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Opr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Opr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Opr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Opr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Opr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Opr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Opr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Cd::Cd()
    :
    valid{YType::boolean, "valid"},
    minimum{YType::int32, "minimum"},
    average{YType::int32, "average"},
    maximum{YType::int32, "maximum"},
    minimum_threshold{YType::int32, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::int32, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"}
{

    yang_name = "cd"; yang_parent_name = "optics-minute15-optic"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Cd::~Cd()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Cd::has_data() const
{
    return valid.is_set
	|| minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Cd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Cd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Cd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Cd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Cd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Cd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Cd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Cd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Dgd::Dgd()
    :
    valid{YType::boolean, "valid"},
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"}
{

    yang_name = "dgd"; yang_parent_name = "optics-minute15-optic"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Dgd::~Dgd()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Dgd::has_data() const
{
    return valid.is_set
	|| minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Dgd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Dgd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dgd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Dgd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Dgd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Dgd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Dgd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Dgd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Dgd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pmd::Pmd()
    :
    valid{YType::boolean, "valid"},
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"}
{

    yang_name = "pmd"; yang_parent_name = "optics-minute15-optic"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pmd::~Pmd()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pmd::has_data() const
{
    return valid.is_set
	|| minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pmd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pmd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pmd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pmd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pmd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pmd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pmd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pmd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Osnr::Osnr()
    :
    valid{YType::boolean, "valid"},
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"}
{

    yang_name = "osnr"; yang_parent_name = "optics-minute15-optic"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Osnr::~Osnr()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Osnr::has_data() const
{
    return valid.is_set
	|| minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Osnr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Osnr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "osnr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Osnr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Osnr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Osnr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Osnr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Osnr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Osnr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::CenterWavelength::CenterWavelength()
    :
    valid{YType::boolean, "valid"},
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"}
{

    yang_name = "center-wavelength"; yang_parent_name = "optics-minute15-optic"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::CenterWavelength::~CenterWavelength()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::CenterWavelength::has_data() const
{
    return valid.is_set
	|| minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::CenterWavelength::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::CenterWavelength::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "center-wavelength";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::CenterWavelength::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::CenterWavelength::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::CenterWavelength::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::CenterWavelength::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::CenterWavelength::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::CenterWavelength::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pdl::Pdl()
    :
    valid{YType::boolean, "valid"},
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"}
{

    yang_name = "pdl"; yang_parent_name = "optics-minute15-optic"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pdl::~Pdl()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pdl::has_data() const
{
    return valid.is_set
	|| minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pdl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pdl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pdl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pdl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pdl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pdl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pdl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pdl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pdl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pcr::Pcr()
    :
    valid{YType::boolean, "valid"},
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"}
{

    yang_name = "pcr"; yang_parent_name = "optics-minute15-optic"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pcr::~Pcr()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pcr::has_data() const
{
    return valid.is_set
	|| minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pcr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pcr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pcr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pcr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pcr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pcr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pcr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pcr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pcr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pn::Pn()
    :
    valid{YType::boolean, "valid"},
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"}
{

    yang_name = "pn"; yang_parent_name = "optics-minute15-optic"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pn::~Pn()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pn::has_data() const
{
    return valid.is_set
	|| minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::RxSigPow::RxSigPow()
    :
    valid{YType::boolean, "valid"},
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"}
{

    yang_name = "rx-sig-pow"; yang_parent_name = "optics-minute15-optic"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::RxSigPow::~RxSigPow()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::RxSigPow::has_data() const
{
    return valid.is_set
	|| minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::RxSigPow::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::RxSigPow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-sig-pow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::RxSigPow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::RxSigPow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::RxSigPow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::RxSigPow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::RxSigPow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::RxSigPow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::LowSigFreqOff::LowSigFreqOff()
    :
    valid{YType::boolean, "valid"},
    minimum{YType::int32, "minimum"},
    average{YType::int32, "average"},
    maximum{YType::int32, "maximum"},
    minimum_threshold{YType::int32, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::int32, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"}
{

    yang_name = "low-sig-freq-off"; yang_parent_name = "optics-minute15-optic"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::LowSigFreqOff::~LowSigFreqOff()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::LowSigFreqOff::has_data() const
{
    return valid.is_set
	|| minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::LowSigFreqOff::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::LowSigFreqOff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "low-sig-freq-off";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::LowSigFreqOff::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::LowSigFreqOff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::LowSigFreqOff::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::LowSigFreqOff::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::LowSigFreqOff::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::LowSigFreqOff::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fecs()
{

    yang_name = "optics-minute15fecs"; yang_parent_name = "optics-minute15"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::~OpticsMinute15Fecs()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::has_data() const
{
    for (std::size_t index=0; index<optics_minute15fec.size(); index++)
    {
        if(optics_minute15fec[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::has_operation() const
{
    for (std::size_t index=0; index<optics_minute15fec.size(); index++)
    {
        if(optics_minute15fec[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-minute15fecs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "optics-minute15fec")
    {
        auto c = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec>();
        c->parent = this;
        optics_minute15fec.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : optics_minute15fec)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optics-minute15fec")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::OpticsMinute15Fec()
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
    ec_bits(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::EcBits>())
	,uc_words(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::UcWords>())
	,pre_fec_ber(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::PreFecBer>())
	,post_fec_ber(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::PostFecBer>())
	,q(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::Q>())
	,qmargin(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::Qmargin>())
{
    ec_bits->parent = this;
    uc_words->parent = this;
    pre_fec_ber->parent = this;
    post_fec_ber->parent = this;
    q->parent = this;
    qmargin->parent = this;

    yang_name = "optics-minute15fec"; yang_parent_name = "optics-minute15fecs"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::~OpticsMinute15Fec()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::has_data() const
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::has_operation() const
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

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-minute15fec" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ec-bits")
    {
        if(ec_bits == nullptr)
        {
            ec_bits = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::EcBits>();
        }
        return ec_bits;
    }

    if(child_yang_name == "uc-words")
    {
        if(uc_words == nullptr)
        {
            uc_words = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::UcWords>();
        }
        return uc_words;
    }

    if(child_yang_name == "pre-fec-ber")
    {
        if(pre_fec_ber == nullptr)
        {
            pre_fec_ber = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::PreFecBer>();
        }
        return pre_fec_ber;
    }

    if(child_yang_name == "post-fec-ber")
    {
        if(post_fec_ber == nullptr)
        {
            post_fec_ber = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::PostFecBer>();
        }
        return post_fec_ber;
    }

    if(child_yang_name == "q")
    {
        if(q == nullptr)
        {
            q = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::Q>();
        }
        return q;
    }

    if(child_yang_name == "qmargin")
    {
        if(qmargin == nullptr)
        {
            qmargin = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::Qmargin>();
        }
        return qmargin;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ec-bits" || name == "uc-words" || name == "pre-fec-ber" || name == "post-fec-ber" || name == "q" || name == "qmargin" || name == "number" || name == "index" || name == "valid" || name == "timestamp" || name == "last-clear-time" || name == "last-clear15-min-time" || name == "last-clear30-sec-time" || name == "last-clear24-hr-time" || name == "sec30-support")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::EcBits::EcBits()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ec-bits"; yang_parent_name = "optics-minute15fec"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::EcBits::~EcBits()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::EcBits::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::EcBits::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::EcBits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ec-bits";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::EcBits::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::EcBits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::EcBits::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::EcBits::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::EcBits::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::EcBits::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::UcWords::UcWords()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "uc-words"; yang_parent_name = "optics-minute15fec"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::UcWords::~UcWords()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::UcWords::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::UcWords::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::UcWords::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uc-words";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::UcWords::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::UcWords::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::UcWords::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::UcWords::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::UcWords::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::UcWords::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::PreFecBer::PreFecBer()
    :
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "pre-fec-ber"; yang_parent_name = "optics-minute15fec"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::PreFecBer::~PreFecBer()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::PreFecBer::has_data() const
{
    return minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::PreFecBer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::PreFecBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-fec-ber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::PreFecBer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::PreFecBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::PreFecBer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::PreFecBer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::PreFecBer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::PreFecBer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::PostFecBer::PostFecBer()
    :
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "post-fec-ber"; yang_parent_name = "optics-minute15fec"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::PostFecBer::~PostFecBer()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::PostFecBer::has_data() const
{
    return minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::PostFecBer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::PostFecBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "post-fec-ber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::PostFecBer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::PostFecBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::PostFecBer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::PostFecBer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::PostFecBer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::PostFecBer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::Q::Q()
    :
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "q"; yang_parent_name = "optics-minute15fec"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::Q::~Q()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::Q::has_data() const
{
    return minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::Q::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::Q::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "q";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::Q::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::Q::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::Q::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::Q::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::Q::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::Q::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::Qmargin::Qmargin()
    :
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "qmargin"; yang_parent_name = "optics-minute15fec"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::Qmargin::~Qmargin()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::Qmargin::has_data() const
{
    return minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::Qmargin::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::Qmargin::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qmargin";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::Qmargin::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::Qmargin::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::Qmargin::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::Qmargin::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::Qmargin::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::Qmargin::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30()
    :
    optics_second30fecs(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs>())
	,optics_second30_optics(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics>())
{
    optics_second30fecs->parent = this;
    optics_second30_optics->parent = this;

    yang_name = "optics-second30"; yang_parent_name = "optics-current"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::~OpticsSecond30()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::has_data() const
{
    return (optics_second30fecs !=  nullptr && optics_second30fecs->has_data())
	|| (optics_second30_optics !=  nullptr && optics_second30_optics->has_data());
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::has_operation() const
{
    return is_set(yfilter)
	|| (optics_second30fecs !=  nullptr && optics_second30fecs->has_operation())
	|| (optics_second30_optics !=  nullptr && optics_second30_optics->has_operation());
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-second30";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "optics-second30fecs")
    {
        if(optics_second30fecs == nullptr)
        {
            optics_second30fecs = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs>();
        }
        return optics_second30fecs;
    }

    if(child_yang_name == "optics-second30-optics")
    {
        if(optics_second30_optics == nullptr)
        {
            optics_second30_optics = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics>();
        }
        return optics_second30_optics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(optics_second30fecs != nullptr)
    {
        children["optics-second30fecs"] = optics_second30fecs;
    }

    if(optics_second30_optics != nullptr)
    {
        children["optics-second30-optics"] = optics_second30_optics;
    }

    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optics-second30fecs" || name == "optics-second30-optics")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fecs()
{

    yang_name = "optics-second30fecs"; yang_parent_name = "optics-second30"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::~OpticsSecond30Fecs()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::has_data() const
{
    for (std::size_t index=0; index<optics_second30fec.size(); index++)
    {
        if(optics_second30fec[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::has_operation() const
{
    for (std::size_t index=0; index<optics_second30fec.size(); index++)
    {
        if(optics_second30fec[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-second30fecs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "optics-second30fec")
    {
        auto c = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec>();
        c->parent = this;
        optics_second30fec.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : optics_second30fec)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optics-second30fec")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::OpticsSecond30Fec()
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
    ec_bits(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::EcBits>())
	,uc_words(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::UcWords>())
	,pre_fec_ber(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::PreFecBer>())
	,post_fec_ber(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::PostFecBer>())
	,q(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::Q>())
	,qmargin(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::Qmargin>())
{
    ec_bits->parent = this;
    uc_words->parent = this;
    pre_fec_ber->parent = this;
    post_fec_ber->parent = this;
    q->parent = this;
    qmargin->parent = this;

    yang_name = "optics-second30fec"; yang_parent_name = "optics-second30fecs"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::~OpticsSecond30Fec()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::has_data() const
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::has_operation() const
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

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-second30fec" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ec-bits")
    {
        if(ec_bits == nullptr)
        {
            ec_bits = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::EcBits>();
        }
        return ec_bits;
    }

    if(child_yang_name == "uc-words")
    {
        if(uc_words == nullptr)
        {
            uc_words = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::UcWords>();
        }
        return uc_words;
    }

    if(child_yang_name == "pre-fec-ber")
    {
        if(pre_fec_ber == nullptr)
        {
            pre_fec_ber = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::PreFecBer>();
        }
        return pre_fec_ber;
    }

    if(child_yang_name == "post-fec-ber")
    {
        if(post_fec_ber == nullptr)
        {
            post_fec_ber = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::PostFecBer>();
        }
        return post_fec_ber;
    }

    if(child_yang_name == "q")
    {
        if(q == nullptr)
        {
            q = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::Q>();
        }
        return q;
    }

    if(child_yang_name == "qmargin")
    {
        if(qmargin == nullptr)
        {
            qmargin = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::Qmargin>();
        }
        return qmargin;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ec-bits" || name == "uc-words" || name == "pre-fec-ber" || name == "post-fec-ber" || name == "q" || name == "qmargin" || name == "number" || name == "index" || name == "valid" || name == "timestamp" || name == "last-clear-time" || name == "last-clear15-min-time" || name == "last-clear30-sec-time" || name == "last-clear24-hr-time" || name == "sec30-support")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::EcBits::EcBits()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ec-bits"; yang_parent_name = "optics-second30fec"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::EcBits::~EcBits()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::EcBits::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::EcBits::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::EcBits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ec-bits";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::EcBits::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::EcBits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::EcBits::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::EcBits::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::EcBits::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::EcBits::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::UcWords::UcWords()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "uc-words"; yang_parent_name = "optics-second30fec"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::UcWords::~UcWords()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::UcWords::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::UcWords::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::UcWords::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uc-words";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::UcWords::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::UcWords::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::UcWords::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::UcWords::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::UcWords::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::UcWords::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::PreFecBer::PreFecBer()
    :
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "pre-fec-ber"; yang_parent_name = "optics-second30fec"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::PreFecBer::~PreFecBer()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::PreFecBer::has_data() const
{
    return minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::PreFecBer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::PreFecBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-fec-ber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::PreFecBer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::PreFecBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::PreFecBer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::PreFecBer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::PreFecBer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::PreFecBer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::PostFecBer::PostFecBer()
    :
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "post-fec-ber"; yang_parent_name = "optics-second30fec"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::PostFecBer::~PostFecBer()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::PostFecBer::has_data() const
{
    return minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::PostFecBer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::PostFecBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "post-fec-ber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::PostFecBer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::PostFecBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::PostFecBer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::PostFecBer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::PostFecBer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::PostFecBer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::Q::Q()
    :
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "q"; yang_parent_name = "optics-second30fec"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::Q::~Q()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::Q::has_data() const
{
    return minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::Q::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::Q::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "q";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::Q::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::Q::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::Q::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::Q::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::Q::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::Q::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::Qmargin::Qmargin()
    :
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "qmargin"; yang_parent_name = "optics-second30fec"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::Qmargin::~Qmargin()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::Qmargin::has_data() const
{
    return minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::Qmargin::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::Qmargin::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qmargin";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::Qmargin::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::Qmargin::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::Qmargin::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::Qmargin::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::Qmargin::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::Qmargin::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optics()
{

    yang_name = "optics-second30-optics"; yang_parent_name = "optics-second30"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::~OpticsSecond30Optics()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::has_data() const
{
    for (std::size_t index=0; index<optics_second30_optic.size(); index++)
    {
        if(optics_second30_optic[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::has_operation() const
{
    for (std::size_t index=0; index<optics_second30_optic.size(); index++)
    {
        if(optics_second30_optic[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-second30-optics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "optics-second30-optic")
    {
        auto c = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic>();
        c->parent = this;
        optics_second30_optic.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : optics_second30_optic)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optics-second30-optic")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::OpticsSecond30Optic()
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
    lbc(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Lbc>())
	,lbc_pc(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::LbcPc>())
	,opt(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Opt>())
	,opr(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Opr>())
	,cd(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Cd>())
	,dgd(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Dgd>())
	,pmd(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pmd>())
	,osnr(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Osnr>())
	,center_wavelength(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::CenterWavelength>())
	,pdl(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pdl>())
	,pcr(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pcr>())
	,pn(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pn>())
	,rx_sig_pow(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::RxSigPow>())
	,low_sig_freq_off(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::LowSigFreqOff>())
{
    lbc->parent = this;
    lbc_pc->parent = this;
    opt->parent = this;
    opr->parent = this;
    cd->parent = this;
    dgd->parent = this;
    pmd->parent = this;
    osnr->parent = this;
    center_wavelength->parent = this;
    pdl->parent = this;
    pcr->parent = this;
    pn->parent = this;
    rx_sig_pow->parent = this;
    low_sig_freq_off->parent = this;

    yang_name = "optics-second30-optic"; yang_parent_name = "optics-second30-optics"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::~OpticsSecond30Optic()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::has_data() const
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
	|| (lbc_pc !=  nullptr && lbc_pc->has_data())
	|| (opt !=  nullptr && opt->has_data())
	|| (opr !=  nullptr && opr->has_data())
	|| (cd !=  nullptr && cd->has_data())
	|| (dgd !=  nullptr && dgd->has_data())
	|| (pmd !=  nullptr && pmd->has_data())
	|| (osnr !=  nullptr && osnr->has_data())
	|| (center_wavelength !=  nullptr && center_wavelength->has_data())
	|| (pdl !=  nullptr && pdl->has_data())
	|| (pcr !=  nullptr && pcr->has_data())
	|| (pn !=  nullptr && pn->has_data())
	|| (rx_sig_pow !=  nullptr && rx_sig_pow->has_data())
	|| (low_sig_freq_off !=  nullptr && low_sig_freq_off->has_data());
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::has_operation() const
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
	|| (lbc_pc !=  nullptr && lbc_pc->has_operation())
	|| (opt !=  nullptr && opt->has_operation())
	|| (opr !=  nullptr && opr->has_operation())
	|| (cd !=  nullptr && cd->has_operation())
	|| (dgd !=  nullptr && dgd->has_operation())
	|| (pmd !=  nullptr && pmd->has_operation())
	|| (osnr !=  nullptr && osnr->has_operation())
	|| (center_wavelength !=  nullptr && center_wavelength->has_operation())
	|| (pdl !=  nullptr && pdl->has_operation())
	|| (pcr !=  nullptr && pcr->has_operation())
	|| (pn !=  nullptr && pn->has_operation())
	|| (rx_sig_pow !=  nullptr && rx_sig_pow->has_operation())
	|| (low_sig_freq_off !=  nullptr && low_sig_freq_off->has_operation());
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-second30-optic" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lbc")
    {
        if(lbc == nullptr)
        {
            lbc = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Lbc>();
        }
        return lbc;
    }

    if(child_yang_name == "lbc-pc")
    {
        if(lbc_pc == nullptr)
        {
            lbc_pc = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::LbcPc>();
        }
        return lbc_pc;
    }

    if(child_yang_name == "opt")
    {
        if(opt == nullptr)
        {
            opt = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Opt>();
        }
        return opt;
    }

    if(child_yang_name == "opr")
    {
        if(opr == nullptr)
        {
            opr = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Opr>();
        }
        return opr;
    }

    if(child_yang_name == "cd")
    {
        if(cd == nullptr)
        {
            cd = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Cd>();
        }
        return cd;
    }

    if(child_yang_name == "dgd")
    {
        if(dgd == nullptr)
        {
            dgd = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Dgd>();
        }
        return dgd;
    }

    if(child_yang_name == "pmd")
    {
        if(pmd == nullptr)
        {
            pmd = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pmd>();
        }
        return pmd;
    }

    if(child_yang_name == "osnr")
    {
        if(osnr == nullptr)
        {
            osnr = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Osnr>();
        }
        return osnr;
    }

    if(child_yang_name == "center-wavelength")
    {
        if(center_wavelength == nullptr)
        {
            center_wavelength = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::CenterWavelength>();
        }
        return center_wavelength;
    }

    if(child_yang_name == "pdl")
    {
        if(pdl == nullptr)
        {
            pdl = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pdl>();
        }
        return pdl;
    }

    if(child_yang_name == "pcr")
    {
        if(pcr == nullptr)
        {
            pcr = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pcr>();
        }
        return pcr;
    }

    if(child_yang_name == "pn")
    {
        if(pn == nullptr)
        {
            pn = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pn>();
        }
        return pn;
    }

    if(child_yang_name == "rx-sig-pow")
    {
        if(rx_sig_pow == nullptr)
        {
            rx_sig_pow = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::RxSigPow>();
        }
        return rx_sig_pow;
    }

    if(child_yang_name == "low-sig-freq-off")
    {
        if(low_sig_freq_off == nullptr)
        {
            low_sig_freq_off = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::LowSigFreqOff>();
        }
        return low_sig_freq_off;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lbc != nullptr)
    {
        children["lbc"] = lbc;
    }

    if(lbc_pc != nullptr)
    {
        children["lbc-pc"] = lbc_pc;
    }

    if(opt != nullptr)
    {
        children["opt"] = opt;
    }

    if(opr != nullptr)
    {
        children["opr"] = opr;
    }

    if(cd != nullptr)
    {
        children["cd"] = cd;
    }

    if(dgd != nullptr)
    {
        children["dgd"] = dgd;
    }

    if(pmd != nullptr)
    {
        children["pmd"] = pmd;
    }

    if(osnr != nullptr)
    {
        children["osnr"] = osnr;
    }

    if(center_wavelength != nullptr)
    {
        children["center-wavelength"] = center_wavelength;
    }

    if(pdl != nullptr)
    {
        children["pdl"] = pdl;
    }

    if(pcr != nullptr)
    {
        children["pcr"] = pcr;
    }

    if(pn != nullptr)
    {
        children["pn"] = pn;
    }

    if(rx_sig_pow != nullptr)
    {
        children["rx-sig-pow"] = rx_sig_pow;
    }

    if(low_sig_freq_off != nullptr)
    {
        children["low-sig-freq-off"] = low_sig_freq_off;
    }

    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lbc" || name == "lbc-pc" || name == "opt" || name == "opr" || name == "cd" || name == "dgd" || name == "pmd" || name == "osnr" || name == "center-wavelength" || name == "pdl" || name == "pcr" || name == "pn" || name == "rx-sig-pow" || name == "low-sig-freq-off" || name == "number" || name == "index" || name == "valid" || name == "timestamp" || name == "last-clear-time" || name == "last-clear15-min-time" || name == "last-clear30-sec-time" || name == "last-clear24-hr-time" || name == "sec30-support")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Lbc::Lbc()
    :
    valid{YType::boolean, "valid"},
    minimum{YType::int32, "minimum"},
    average{YType::int32, "average"},
    maximum{YType::int32, "maximum"},
    minimum_threshold{YType::int32, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::int32, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"}
{

    yang_name = "lbc"; yang_parent_name = "optics-second30-optic"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Lbc::~Lbc()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Lbc::has_data() const
{
    return valid.is_set
	|| minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Lbc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Lbc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lbc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Lbc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Lbc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Lbc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Lbc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Lbc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Lbc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::LbcPc::LbcPc()
    :
    valid{YType::boolean, "valid"},
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"}
{

    yang_name = "lbc-pc"; yang_parent_name = "optics-second30-optic"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::LbcPc::~LbcPc()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::LbcPc::has_data() const
{
    return valid.is_set
	|| minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::LbcPc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::LbcPc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lbc-pc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::LbcPc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::LbcPc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::LbcPc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::LbcPc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::LbcPc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::LbcPc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Opt::Opt()
    :
    valid{YType::boolean, "valid"},
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"}
{

    yang_name = "opt"; yang_parent_name = "optics-second30-optic"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Opt::~Opt()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Opt::has_data() const
{
    return valid.is_set
	|| minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Opt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Opt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Opt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Opt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Opt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Opt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Opt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Opt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Opr::Opr()
    :
    valid{YType::boolean, "valid"},
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"}
{

    yang_name = "opr"; yang_parent_name = "optics-second30-optic"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Opr::~Opr()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Opr::has_data() const
{
    return valid.is_set
	|| minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Opr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Opr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Opr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Opr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Opr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Opr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Opr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Opr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Cd::Cd()
    :
    valid{YType::boolean, "valid"},
    minimum{YType::int32, "minimum"},
    average{YType::int32, "average"},
    maximum{YType::int32, "maximum"},
    minimum_threshold{YType::int32, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::int32, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"}
{

    yang_name = "cd"; yang_parent_name = "optics-second30-optic"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Cd::~Cd()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Cd::has_data() const
{
    return valid.is_set
	|| minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Cd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Cd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Cd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Cd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Cd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Cd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Cd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Cd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Dgd::Dgd()
    :
    valid{YType::boolean, "valid"},
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"}
{

    yang_name = "dgd"; yang_parent_name = "optics-second30-optic"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Dgd::~Dgd()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Dgd::has_data() const
{
    return valid.is_set
	|| minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Dgd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Dgd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dgd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Dgd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Dgd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Dgd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Dgd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Dgd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Dgd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pmd::Pmd()
    :
    valid{YType::boolean, "valid"},
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"}
{

    yang_name = "pmd"; yang_parent_name = "optics-second30-optic"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pmd::~Pmd()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pmd::has_data() const
{
    return valid.is_set
	|| minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pmd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pmd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pmd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pmd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pmd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pmd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pmd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pmd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Osnr::Osnr()
    :
    valid{YType::boolean, "valid"},
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"}
{

    yang_name = "osnr"; yang_parent_name = "optics-second30-optic"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Osnr::~Osnr()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Osnr::has_data() const
{
    return valid.is_set
	|| minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Osnr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Osnr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "osnr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Osnr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Osnr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Osnr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Osnr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Osnr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Osnr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::CenterWavelength::CenterWavelength()
    :
    valid{YType::boolean, "valid"},
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"}
{

    yang_name = "center-wavelength"; yang_parent_name = "optics-second30-optic"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::CenterWavelength::~CenterWavelength()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::CenterWavelength::has_data() const
{
    return valid.is_set
	|| minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::CenterWavelength::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::CenterWavelength::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "center-wavelength";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::CenterWavelength::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::CenterWavelength::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::CenterWavelength::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::CenterWavelength::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::CenterWavelength::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::CenterWavelength::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pdl::Pdl()
    :
    valid{YType::boolean, "valid"},
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"}
{

    yang_name = "pdl"; yang_parent_name = "optics-second30-optic"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pdl::~Pdl()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pdl::has_data() const
{
    return valid.is_set
	|| minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pdl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pdl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pdl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pdl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pdl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pdl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pdl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pdl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pdl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pcr::Pcr()
    :
    valid{YType::boolean, "valid"},
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"}
{

    yang_name = "pcr"; yang_parent_name = "optics-second30-optic"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pcr::~Pcr()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pcr::has_data() const
{
    return valid.is_set
	|| minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pcr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pcr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pcr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pcr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pcr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pcr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pcr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pcr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pcr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pn::Pn()
    :
    valid{YType::boolean, "valid"},
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"}
{

    yang_name = "pn"; yang_parent_name = "optics-second30-optic"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pn::~Pn()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pn::has_data() const
{
    return valid.is_set
	|| minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::RxSigPow::RxSigPow()
    :
    valid{YType::boolean, "valid"},
    minimum{YType::str, "minimum"},
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    minimum_threshold{YType::str, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"}
{

    yang_name = "rx-sig-pow"; yang_parent_name = "optics-second30-optic"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::RxSigPow::~RxSigPow()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::RxSigPow::has_data() const
{
    return valid.is_set
	|| minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::RxSigPow::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::RxSigPow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-sig-pow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::RxSigPow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::RxSigPow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::RxSigPow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::RxSigPow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::RxSigPow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::RxSigPow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report")
        return true;
    return false;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::LowSigFreqOff::LowSigFreqOff()
    :
    valid{YType::boolean, "valid"},
    minimum{YType::int32, "minimum"},
    average{YType::int32, "average"},
    maximum{YType::int32, "maximum"},
    minimum_threshold{YType::int32, "minimum-threshold"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    maximum_threshold{YType::int32, "maximum-threshold"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"}
{

    yang_name = "low-sig-freq-off"; yang_parent_name = "optics-second30-optic"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::LowSigFreqOff::~LowSigFreqOff()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::LowSigFreqOff::has_data() const
{
    return valid.is_set
	|| minimum.is_set
	|| average.is_set
	|| maximum.is_set
	|| minimum_threshold.is_set
	|| minimum_tca_report.is_set
	|| maximum_threshold.is_set
	|| maximum_tca_report.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::LowSigFreqOff::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(average.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum_threshold.yfilter)
	|| ydk::is_set(minimum_tca_report.yfilter)
	|| ydk::is_set(maximum_threshold.yfilter)
	|| ydk::is_set(maximum_tca_report.yfilter);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::LowSigFreqOff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "low-sig-freq-off";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::LowSigFreqOff::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (average.is_set || is_set(average.yfilter)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.yfilter)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.yfilter)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.yfilter)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.yfilter)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::LowSigFreqOff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::LowSigFreqOff::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::LowSigFreqOff::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average")
    {
        average = value;
        average.value_namespace = name_space;
        average.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
        minimum_threshold.value_namespace = name_space;
        minimum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
        minimum_tca_report.value_namespace = name_space;
        minimum_tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
        maximum_threshold.value_namespace = name_space;
        maximum_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
        maximum_tca_report.value_namespace = name_space;
        maximum_tca_report.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::LowSigFreqOff::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "average")
    {
        average.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold.yfilter = yfilter;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report.yfilter = yfilter;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold.yfilter = yfilter;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report.yfilter = yfilter;
    }
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::LowSigFreqOff::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "valid" || name == "minimum" || name == "average" || name == "maximum" || name == "minimum-threshold" || name == "minimum-tca-report" || name == "maximum-threshold" || name == "maximum-tca-report")
        return true;
    return false;
}

PerformanceManagement::Sts::Sts()
    :
    sts_ports(std::make_shared<PerformanceManagement::Sts::StsPorts>())
{
    sts_ports->parent = this;

    yang_name = "sts"; yang_parent_name = "performance-management"; is_top_level_class = false; has_list_ancestor = false;
}

PerformanceManagement::Sts::~Sts()
{
}

bool PerformanceManagement::Sts::has_data() const
{
    return (sts_ports !=  nullptr && sts_ports->has_data());
}

bool PerformanceManagement::Sts::has_operation() const
{
    return is_set(yfilter)
	|| (sts_ports !=  nullptr && sts_ports->has_operation());
}

std::string PerformanceManagement::Sts::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceManagement::Sts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sts-ports")
    {
        if(sts_ports == nullptr)
        {
            sts_ports = std::make_shared<PerformanceManagement::Sts::StsPorts>();
        }
        return sts_ports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sts_ports != nullptr)
    {
        children["sts-ports"] = sts_ports;
    }

    return children;
}

void PerformanceManagement::Sts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Sts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Sts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sts-ports")
        return true;
    return false;
}

PerformanceManagement::Sts::StsPorts::StsPorts()
{

    yang_name = "sts-ports"; yang_parent_name = "sts"; is_top_level_class = false; has_list_ancestor = false;
}

PerformanceManagement::Sts::StsPorts::~StsPorts()
{
}

bool PerformanceManagement::Sts::StsPorts::has_data() const
{
    for (std::size_t index=0; index<sts_port.size(); index++)
    {
        if(sts_port[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Sts::StsPorts::has_operation() const
{
    for (std::size_t index=0; index<sts_port.size(); index++)
    {
        if(sts_port[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagement::Sts::StsPorts::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management/sts/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceManagement::Sts::StsPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sts-ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sts::StsPorts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sts::StsPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sts-port")
    {
        auto c = std::make_shared<PerformanceManagement::Sts::StsPorts::StsPort>();
        c->parent = this;
        sts_port.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sts::StsPorts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : sts_port)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerformanceManagement::Sts::StsPorts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Sts::StsPorts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Sts::StsPorts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sts-port")
        return true;
    return false;
}

PerformanceManagement::Sts::StsPorts::StsPort::StsPort()
    :
    name{YType::str, "name"}
    	,
    sts_current(std::make_shared<PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent>())
{
    sts_current->parent = this;

    yang_name = "sts-port"; yang_parent_name = "sts-ports"; is_top_level_class = false; has_list_ancestor = false;
}

PerformanceManagement::Sts::StsPorts::StsPort::~StsPort()
{
}

bool PerformanceManagement::Sts::StsPorts::StsPort::has_data() const
{
    return name.is_set
	|| (sts_current !=  nullptr && sts_current->has_data());
}

bool PerformanceManagement::Sts::StsPorts::StsPort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (sts_current !=  nullptr && sts_current->has_operation());
}

std::string PerformanceManagement::Sts::StsPorts::StsPort::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management/sts/sts-ports/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceManagement::Sts::StsPorts::StsPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sts-port" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sts::StsPorts::StsPort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sts::StsPorts::StsPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sts-current")
    {
        if(sts_current == nullptr)
        {
            sts_current = std::make_shared<PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent>();
        }
        return sts_current;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sts::StsPorts::StsPort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sts_current != nullptr)
    {
        children["sts-current"] = sts_current;
    }

    return children;
}

void PerformanceManagement::Sts::StsPorts::StsPort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Sts::StsPorts::StsPort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool PerformanceManagement::Sts::StsPorts::StsPort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sts-current" || name == "name")
        return true;
    return false;
}

PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsCurrent()
    :
    sts_minute15(std::make_shared<PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15>())
	,sts_hour24(std::make_shared<PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24>())
{
    sts_minute15->parent = this;
    sts_hour24->parent = this;

    yang_name = "sts-current"; yang_parent_name = "sts-port"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::~StsCurrent()
{
}

bool PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::has_data() const
{
    return (sts_minute15 !=  nullptr && sts_minute15->has_data())
	|| (sts_hour24 !=  nullptr && sts_hour24->has_data());
}

bool PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::has_operation() const
{
    return is_set(yfilter)
	|| (sts_minute15 !=  nullptr && sts_minute15->has_operation())
	|| (sts_hour24 !=  nullptr && sts_hour24->has_operation());
}

std::string PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sts-current";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sts-minute15")
    {
        if(sts_minute15 == nullptr)
        {
            sts_minute15 = std::make_shared<PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15>();
        }
        return sts_minute15;
    }

    if(child_yang_name == "sts-hour24")
    {
        if(sts_hour24 == nullptr)
        {
            sts_hour24 = std::make_shared<PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24>();
        }
        return sts_hour24;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sts_minute15 != nullptr)
    {
        children["sts-minute15"] = sts_minute15;
    }

    if(sts_hour24 != nullptr)
    {
        children["sts-hour24"] = sts_hour24;
    }

    return children;
}

void PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sts-minute15" || name == "sts-hour24")
        return true;
    return false;
}

PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15()
    :
    sts_minute15_paths(std::make_shared<PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths>())
{
    sts_minute15_paths->parent = this;

    yang_name = "sts-minute15"; yang_parent_name = "sts-current"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::~StsMinute15()
{
}

bool PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::has_data() const
{
    return (sts_minute15_paths !=  nullptr && sts_minute15_paths->has_data());
}

bool PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::has_operation() const
{
    return is_set(yfilter)
	|| (sts_minute15_paths !=  nullptr && sts_minute15_paths->has_operation());
}

std::string PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sts-minute15";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sts-minute15-paths")
    {
        if(sts_minute15_paths == nullptr)
        {
            sts_minute15_paths = std::make_shared<PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths>();
        }
        return sts_minute15_paths;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sts_minute15_paths != nullptr)
    {
        children["sts-minute15-paths"] = sts_minute15_paths;
    }

    return children;
}

void PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sts-minute15-paths")
        return true;
    return false;
}

PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Paths()
{

    yang_name = "sts-minute15-paths"; yang_parent_name = "sts-minute15"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::~StsMinute15Paths()
{
}

bool PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::has_data() const
{
    for (std::size_t index=0; index<sts_minute15_path.size(); index++)
    {
        if(sts_minute15_path[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::has_operation() const
{
    for (std::size_t index=0; index<sts_minute15_path.size(); index++)
    {
        if(sts_minute15_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sts-minute15-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sts-minute15-path")
    {
        auto c = std::make_shared<PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path>();
        c->parent = this;
        sts_minute15_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : sts_minute15_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sts-minute15-path")
        return true;
    return false;
}

PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::StsMinute15Path()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    valid{YType::boolean, "valid"},
    timestamp{YType::str, "timestamp"},
    last_clear_time{YType::str, "last-clear-time"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"}
    	,
    path(std::make_shared<PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path>())
	,fe_path(std::make_shared<PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::FePath>())
{
    path->parent = this;
    fe_path->parent = this;

    yang_name = "sts-minute15-path"; yang_parent_name = "sts-minute15-paths"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::~StsMinute15Path()
{
}

bool PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::has_data() const
{
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

bool PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::has_operation() const
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

std::string PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sts-minute15-path" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::get_name_leaf_data() const
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

std::shared_ptr<Entity> PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path")
    {
        if(path == nullptr)
        {
            path = std::make_shared<PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path>();
        }
        return path;
    }

    if(child_yang_name == "fe-path")
    {
        if(fe_path == nullptr)
        {
            fe_path = std::make_shared<PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::FePath>();
        }
        return fe_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(path != nullptr)
    {
        children["path"] = path;
    }

    if(fe_path != nullptr)
    {
        children["fe-path"] = fe_path;
    }

    return children;
}

void PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "fe-path" || name == "number" || name == "index" || name == "valid" || name == "timestamp" || name == "last-clear-time" || name == "last-clear15-min-time" || name == "last-clear24-hr-time")
        return true;
    return false;
}

PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::Path()
    :
    path_width{YType::enumeration, "path-width"},
    path_status{YType::int32, "path-status"}
    	,
    path_e_ss(std::make_shared<PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathESs>())
	,path_se_ss(std::make_shared<PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathSeSs>())
	,path_c_vs(std::make_shared<PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathCVs>())
	,path_ua_ss(std::make_shared<PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathUaSs>())
{
    path_e_ss->parent = this;
    path_se_ss->parent = this;
    path_c_vs->parent = this;
    path_ua_ss->parent = this;

    yang_name = "path"; yang_parent_name = "sts-minute15-path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::~Path()
{
}

bool PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::has_data() const
{
    return path_width.is_set
	|| path_status.is_set
	|| (path_e_ss !=  nullptr && path_e_ss->has_data())
	|| (path_se_ss !=  nullptr && path_se_ss->has_data())
	|| (path_c_vs !=  nullptr && path_c_vs->has_data())
	|| (path_ua_ss !=  nullptr && path_ua_ss->has_data());
}

bool PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_width.yfilter)
	|| ydk::is_set(path_status.yfilter)
	|| (path_e_ss !=  nullptr && path_e_ss->has_operation())
	|| (path_se_ss !=  nullptr && path_se_ss->has_operation())
	|| (path_c_vs !=  nullptr && path_c_vs->has_operation())
	|| (path_ua_ss !=  nullptr && path_ua_ss->has_operation());
}

std::string PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_width.is_set || is_set(path_width.yfilter)) leaf_name_data.push_back(path_width.get_name_leafdata());
    if (path_status.is_set || is_set(path_status.yfilter)) leaf_name_data.push_back(path_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-e-ss")
    {
        if(path_e_ss == nullptr)
        {
            path_e_ss = std::make_shared<PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathESs>();
        }
        return path_e_ss;
    }

    if(child_yang_name == "path-se-ss")
    {
        if(path_se_ss == nullptr)
        {
            path_se_ss = std::make_shared<PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathSeSs>();
        }
        return path_se_ss;
    }

    if(child_yang_name == "path-c-vs")
    {
        if(path_c_vs == nullptr)
        {
            path_c_vs = std::make_shared<PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathCVs>();
        }
        return path_c_vs;
    }

    if(child_yang_name == "path-ua-ss")
    {
        if(path_ua_ss == nullptr)
        {
            path_ua_ss = std::make_shared<PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathUaSs>();
        }
        return path_ua_ss;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(path_e_ss != nullptr)
    {
        children["path-e-ss"] = path_e_ss;
    }

    if(path_se_ss != nullptr)
    {
        children["path-se-ss"] = path_se_ss;
    }

    if(path_c_vs != nullptr)
    {
        children["path-c-vs"] = path_c_vs;
    }

    if(path_ua_ss != nullptr)
    {
        children["path-ua-ss"] = path_ua_ss;
    }

    return children;
}

void PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-e-ss" || name == "path-se-ss" || name == "path-c-vs" || name == "path-ua-ss" || name == "path-width" || name == "path-status")
        return true;
    return false;
}

PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathESs::PathESs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "path-e-ss"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathESs::~PathESs()
{
}

bool PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathESs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathESs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-e-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathESs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathESs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathESs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathESs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathESs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathSeSs::PathSeSs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "path-se-ss"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathSeSs::~PathSeSs()
{
}

bool PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathSeSs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathSeSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-se-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathSeSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathSeSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathSeSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathSeSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathSeSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathCVs::PathCVs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "path-c-vs"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathCVs::~PathCVs()
{
}

bool PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathCVs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathCVs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathCVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-c-vs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathCVs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathCVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathCVs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathCVs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathCVs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathCVs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathUaSs::PathUaSs()
    :
    data{YType::uint32, "data"},
    threshold{YType::uint32, "threshold"},
    tca_report{YType::boolean, "tca-report"}
{

    yang_name = "path-ua-ss"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathUaSs::~PathUaSs()
{
}

bool PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathUaSs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set;
}

bool PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathUaSs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter);
}

std::string PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathUaSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-ua-ss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathUaSs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathUaSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathUaSs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathUaSs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathUaSs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathUaSs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report")
        return true;
    return false;
}

PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::FePath::FePath()
    :
    far_end_path_e_ss{YType::uint32, "far-end-path-e-ss"},
    far_end_path_se_ss{YType::uint32, "far-end-path-se-ss"},
    far_end_path_c_vs{YType::uint32, "far-end-path-c-vs"},
    far_end_path_ua_ss{YType::uint32, "far-end-path-ua-ss"}
{

    yang_name = "fe-path"; yang_parent_name = "sts-minute15-path"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::FePath::~FePath()
{
}

bool PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::FePath::has_data() const
{
    return far_end_path_e_ss.is_set
	|| far_end_path_se_ss.is_set
	|| far_end_path_c_vs.is_set
	|| far_end_path_ua_ss.is_set;
}

bool PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::FePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(far_end_path_e_ss.yfilter)
	|| ydk::is_set(far_end_path_se_ss.yfilter)
	|| ydk::is_set(far_end_path_c_vs.yfilter)
	|| ydk::is_set(far_end_path_ua_ss.yfilter);
}

std::string PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::FePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fe-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::FePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (far_end_path_e_ss.is_set || is_set(far_end_path_e_ss.yfilter)) leaf_name_data.push_back(far_end_path_e_ss.get_name_leafdata());
    if (far_end_path_se_ss.is_set || is_set(far_end_path_se_ss.yfilter)) leaf_name_data.push_back(far_end_path_se_ss.get_name_leafdata());
    if (far_end_path_c_vs.is_set || is_set(far_end_path_c_vs.yfilter)) leaf_name_data.push_back(far_end_path_c_vs.get_name_leafdata());
    if (far_end_path_ua_ss.is_set || is_set(far_end_path_ua_ss.yfilter)) leaf_name_data.push_back(far_end_path_ua_ss.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::FePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::FePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::FePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::FePath::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::FePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "far-end-path-e-ss" || name == "far-end-path-se-ss" || name == "far-end-path-c-vs" || name == "far-end-path-ua-ss")
        return true;
    return false;
}

PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24()
    :
    sts_hour24_paths(std::make_shared<PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths>())
{
    sts_hour24_paths->parent = this;

    yang_name = "sts-hour24"; yang_parent_name = "sts-current"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::~StsHour24()
{
}

bool PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::has_data() const
{
    return (sts_hour24_paths !=  nullptr && sts_hour24_paths->has_data());
}

bool PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::has_operation() const
{
    return is_set(yfilter)
	|| (sts_hour24_paths !=  nullptr && sts_hour24_paths->has_operation());
}

std::string PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sts-hour24";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sts-hour24-paths")
    {
        if(sts_hour24_paths == nullptr)
        {
            sts_hour24_paths = std::make_shared<PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths>();
        }
        return sts_hour24_paths;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sts_hour24_paths != nullptr)
    {
        children["sts-hour24-paths"] = sts_hour24_paths;
    }

    return children;
}

void PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sts-hour24-paths")
        return true;
    return false;
}


}
}

