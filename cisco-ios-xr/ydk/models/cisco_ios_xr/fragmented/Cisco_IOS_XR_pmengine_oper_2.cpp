
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_pmengine_oper_2.hpp"
#include "Cisco_IOS_XR_pmengine_oper_3.hpp"

namespace ydk {
namespace Cisco_IOS_XR_pmengine_oper {

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::SonetHour24Path()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    last_clear_time{YType::str, "last-clear-time"},
    timestamp{YType::str, "timestamp"},
    valid{YType::boolean, "valid"}
    	,
    fe_path(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::FePath>())
	,path(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path>())
{
    fe_path->parent = this;
    children["fe-path"] = fe_path;

    path->parent = this;
    children["path"] = path;

    yang_name = "sonet-hour24-path"; yang_parent_name = "sonet-hour24-paths";
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::~SonetHour24Path()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::has_data() const
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| is_set(index_.operation)
	|| is_set(last_clear15_min_time.operation)
	|| is_set(last_clear24_hr_time.operation)
	|| is_set(last_clear_time.operation)
	|| is_set(timestamp.operation)
	|| is_set(valid.operation)
	|| (fe_path !=  nullptr && fe_path->has_operation())
	|| (path !=  nullptr && path->has_operation());
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-hour24-path" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SonetHour24Path' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (last_clear15_min_time.is_set || is_set(last_clear15_min_time.operation)) leaf_name_data.push_back(last_clear15_min_time.get_name_leafdata());
    if (last_clear24_hr_time.is_set || is_set(last_clear24_hr_time.operation)) leaf_name_data.push_back(last_clear24_hr_time.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.operation)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.operation)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "fe-path")
    {
        if(fe_path != nullptr)
        {
            children["fe-path"] = fe_path;
        }
        else
        {
            fe_path = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::FePath>();
            fe_path->parent = this;
            children["fe-path"] = fe_path;
        }
        return children.at("fe-path");
    }

    if(child_yang_name == "path")
    {
        if(path != nullptr)
        {
            children["path"] = path;
        }
        else
        {
            path = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path>();
            path->parent = this;
            children["path"] = path;
        }
        return children.at("path");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::get_children()
{
    if(children.find("fe-path") == children.end())
    {
        if(fe_path != nullptr)
        {
            children["fe-path"] = fe_path;
        }
    }

    if(children.find("path") == children.end())
    {
        if(path != nullptr)
        {
            children["path"] = path;
        }
    }

    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time = value;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time = value;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time = value;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::Path()
    :
    path_status{YType::int32, "path-status"},
    path_width{YType::enumeration, "path-width"}
    	,
    path_c_vs(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathCVs>())
	,path_e_ss(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathESs>())
	,path_se_ss(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathSeSs>())
	,path_ua_ss(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathUaSs>())
{
    path_c_vs->parent = this;
    children["path-c-vs"] = path_c_vs;

    path_e_ss->parent = this;
    children["path-e-ss"] = path_e_ss;

    path_se_ss->parent = this;
    children["path-se-ss"] = path_se_ss;

    path_ua_ss->parent = this;
    children["path-ua-ss"] = path_ua_ss;

    yang_name = "path"; yang_parent_name = "sonet-hour24-path";
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::~Path()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::has_data() const
{
    return path_status.is_set
	|| path_width.is_set
	|| (path_c_vs !=  nullptr && path_c_vs->has_data())
	|| (path_e_ss !=  nullptr && path_e_ss->has_data())
	|| (path_se_ss !=  nullptr && path_se_ss->has_data())
	|| (path_ua_ss !=  nullptr && path_ua_ss->has_data());
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::has_operation() const
{
    return is_set(operation)
	|| is_set(path_status.operation)
	|| is_set(path_width.operation)
	|| (path_c_vs !=  nullptr && path_c_vs->has_operation())
	|| (path_e_ss !=  nullptr && path_e_ss->has_operation())
	|| (path_se_ss !=  nullptr && path_se_ss->has_operation())
	|| (path_ua_ss !=  nullptr && path_ua_ss->has_operation());
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Path' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_status.is_set || is_set(path_status.operation)) leaf_name_data.push_back(path_status.get_name_leafdata());
    if (path_width.is_set || is_set(path_width.operation)) leaf_name_data.push_back(path_width.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "path-c-vs")
    {
        if(path_c_vs != nullptr)
        {
            children["path-c-vs"] = path_c_vs;
        }
        else
        {
            path_c_vs = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathCVs>();
            path_c_vs->parent = this;
            children["path-c-vs"] = path_c_vs;
        }
        return children.at("path-c-vs");
    }

    if(child_yang_name == "path-e-ss")
    {
        if(path_e_ss != nullptr)
        {
            children["path-e-ss"] = path_e_ss;
        }
        else
        {
            path_e_ss = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathESs>();
            path_e_ss->parent = this;
            children["path-e-ss"] = path_e_ss;
        }
        return children.at("path-e-ss");
    }

    if(child_yang_name == "path-se-ss")
    {
        if(path_se_ss != nullptr)
        {
            children["path-se-ss"] = path_se_ss;
        }
        else
        {
            path_se_ss = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathSeSs>();
            path_se_ss->parent = this;
            children["path-se-ss"] = path_se_ss;
        }
        return children.at("path-se-ss");
    }

    if(child_yang_name == "path-ua-ss")
    {
        if(path_ua_ss != nullptr)
        {
            children["path-ua-ss"] = path_ua_ss;
        }
        else
        {
            path_ua_ss = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathUaSs>();
            path_ua_ss->parent = this;
            children["path-ua-ss"] = path_ua_ss;
        }
        return children.at("path-ua-ss");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::get_children()
{
    if(children.find("path-c-vs") == children.end())
    {
        if(path_c_vs != nullptr)
        {
            children["path-c-vs"] = path_c_vs;
        }
    }

    if(children.find("path-e-ss") == children.end())
    {
        if(path_e_ss != nullptr)
        {
            children["path-e-ss"] = path_e_ss;
        }
    }

    if(children.find("path-se-ss") == children.end())
    {
        if(path_se_ss != nullptr)
        {
            children["path-se-ss"] = path_se_ss;
        }
    }

    if(children.find("path-ua-ss") == children.end())
    {
        if(path_ua_ss != nullptr)
        {
            children["path-ua-ss"] = path_ua_ss;
        }
    }

    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "path-status")
    {
        path_status = value;
    }
    if(value_path == "path-width")
    {
        path_width = value;
    }
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathESs::PathESs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "path-e-ss"; yang_parent_name = "path";
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathESs::~PathESs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathESs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathESs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-e-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathESs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathESs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathESs::get_children()
{
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathESs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathSeSs::PathSeSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "path-se-ss"; yang_parent_name = "path";
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathSeSs::~PathSeSs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathSeSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathSeSs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-se-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathSeSs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathSeSs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathSeSs::get_children()
{
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathSeSs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathCVs::PathCVs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "path-c-vs"; yang_parent_name = "path";
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathCVs::~PathCVs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathCVs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathCVs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathCVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-c-vs";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathCVs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathCVs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathCVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathCVs::get_children()
{
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathCVs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathUaSs::PathUaSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "path-ua-ss"; yang_parent_name = "path";
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathUaSs::~PathUaSs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathUaSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathUaSs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathUaSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-ua-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathUaSs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathUaSs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathUaSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathUaSs::get_children()
{
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathUaSs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::FePath::FePath()
    :
    far_end_path_c_vs{YType::uint32, "far-end-path-c-vs"},
    far_end_path_e_ss{YType::uint32, "far-end-path-e-ss"},
    far_end_path_se_ss{YType::uint32, "far-end-path-se-ss"},
    far_end_path_ua_ss{YType::uint32, "far-end-path-ua-ss"}
{
    yang_name = "fe-path"; yang_parent_name = "sonet-hour24-path";
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::FePath::~FePath()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::FePath::has_data() const
{
    return far_end_path_c_vs.is_set
	|| far_end_path_e_ss.is_set
	|| far_end_path_se_ss.is_set
	|| far_end_path_ua_ss.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::FePath::has_operation() const
{
    return is_set(operation)
	|| is_set(far_end_path_c_vs.operation)
	|| is_set(far_end_path_e_ss.operation)
	|| is_set(far_end_path_se_ss.operation)
	|| is_set(far_end_path_ua_ss.operation);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::FePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fe-path";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::FePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FePath' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (far_end_path_c_vs.is_set || is_set(far_end_path_c_vs.operation)) leaf_name_data.push_back(far_end_path_c_vs.get_name_leafdata());
    if (far_end_path_e_ss.is_set || is_set(far_end_path_e_ss.operation)) leaf_name_data.push_back(far_end_path_e_ss.get_name_leafdata());
    if (far_end_path_se_ss.is_set || is_set(far_end_path_se_ss.operation)) leaf_name_data.push_back(far_end_path_se_ss.get_name_leafdata());
    if (far_end_path_ua_ss.is_set || is_set(far_end_path_ua_ss.operation)) leaf_name_data.push_back(far_end_path_ua_ss.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::FePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::FePath::get_children()
{
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::FePath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "far-end-path-c-vs")
    {
        far_end_path_c_vs = value;
    }
    if(value_path == "far-end-path-e-ss")
    {
        far_end_path_e_ss = value;
    }
    if(value_path == "far-end-path-se-ss")
    {
        far_end_path_se_ss = value;
    }
    if(value_path == "far-end-path-ua-ss")
    {
        far_end_path_ua_ss = value;
    }
}

PerformanceManagement::Optics::Optics()
    :
    optics_ports(std::make_shared<PerformanceManagement::Optics::OpticsPorts>())
{
    optics_ports->parent = this;
    children["optics-ports"] = optics_ports;

    yang_name = "optics"; yang_parent_name = "performance-management";
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
    return is_set(operation)
	|| (optics_ports !=  nullptr && optics_ports->has_operation());
}

std::string PerformanceManagement::Optics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Optics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "optics-ports")
    {
        if(optics_ports != nullptr)
        {
            children["optics-ports"] = optics_ports;
        }
        else
        {
            optics_ports = std::make_shared<PerformanceManagement::Optics::OpticsPorts>();
            optics_ports->parent = this;
            children["optics-ports"] = optics_ports;
        }
        return children.at("optics-ports");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Optics::get_children()
{
    if(children.find("optics-ports") == children.end())
    {
        if(optics_ports != nullptr)
        {
            children["optics-ports"] = optics_ports;
        }
    }

    return children;
}

void PerformanceManagement::Optics::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Optics::OpticsPorts::OpticsPorts()
{
    yang_name = "optics-ports"; yang_parent_name = "optics";
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
    return is_set(operation);
}

std::string PerformanceManagement::Optics::OpticsPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-ports";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Optics::OpticsPorts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management/optics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "optics-port")
    {
        for(auto const & c : optics_port)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort>();
        c->parent = this;
        optics_port.push_back(std::move(c));
        children[segment_path] = optics_port.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Optics::OpticsPorts::get_children()
{
    for (auto const & c : optics_port)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PerformanceManagement::Optics::OpticsPorts::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsPort()
    :
    name{YType::str, "name"}
    	,
    optics_current(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent>())
{
    optics_current->parent = this;
    children["optics-current"] = optics_current;

    yang_name = "optics-port"; yang_parent_name = "optics-ports";
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
    return is_set(operation)
	|| is_set(name.operation)
	|| (optics_current !=  nullptr && optics_current->has_operation());
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-port" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Optics::OpticsPorts::OpticsPort::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management/optics/optics-ports/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "optics-current")
    {
        if(optics_current != nullptr)
        {
            children["optics-current"] = optics_current;
        }
        else
        {
            optics_current = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent>();
            optics_current->parent = this;
            children["optics-current"] = optics_current;
        }
        return children.at("optics-current");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Optics::OpticsPorts::OpticsPort::get_children()
{
    if(children.find("optics-current") == children.end())
    {
        if(optics_current != nullptr)
        {
            children["optics-current"] = optics_current;
        }
    }

    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsCurrent()
    :
    optics_hour24(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24>())
	,optics_minute15(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15>())
	,optics_second30(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30>())
{
    optics_hour24->parent = this;
    children["optics-hour24"] = optics_hour24;

    optics_minute15->parent = this;
    children["optics-minute15"] = optics_minute15;

    optics_second30->parent = this;
    children["optics-second30"] = optics_second30;

    yang_name = "optics-current"; yang_parent_name = "optics-port";
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
    return is_set(operation)
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

EntityPath PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OpticsCurrent' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "optics-hour24")
    {
        if(optics_hour24 != nullptr)
        {
            children["optics-hour24"] = optics_hour24;
        }
        else
        {
            optics_hour24 = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24>();
            optics_hour24->parent = this;
            children["optics-hour24"] = optics_hour24;
        }
        return children.at("optics-hour24");
    }

    if(child_yang_name == "optics-minute15")
    {
        if(optics_minute15 != nullptr)
        {
            children["optics-minute15"] = optics_minute15;
        }
        else
        {
            optics_minute15 = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15>();
            optics_minute15->parent = this;
            children["optics-minute15"] = optics_minute15;
        }
        return children.at("optics-minute15");
    }

    if(child_yang_name == "optics-second30")
    {
        if(optics_second30 != nullptr)
        {
            children["optics-second30"] = optics_second30;
        }
        else
        {
            optics_second30 = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30>();
            optics_second30->parent = this;
            children["optics-second30"] = optics_second30;
        }
        return children.at("optics-second30");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::get_children()
{
    if(children.find("optics-hour24") == children.end())
    {
        if(optics_hour24 != nullptr)
        {
            children["optics-hour24"] = optics_hour24;
        }
    }

    if(children.find("optics-minute15") == children.end())
    {
        if(optics_minute15 != nullptr)
        {
            children["optics-minute15"] = optics_minute15;
        }
    }

    if(children.find("optics-second30") == children.end())
    {
        if(optics_second30 != nullptr)
        {
            children["optics-second30"] = optics_second30;
        }
    }

    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24()
    :
    optics_hour24_optics(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics>())
	,optics_hour24fecs(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs>())
{
    optics_hour24_optics->parent = this;
    children["optics-hour24-optics"] = optics_hour24_optics;

    optics_hour24fecs->parent = this;
    children["optics-hour24fecs"] = optics_hour24fecs;

    yang_name = "optics-hour24"; yang_parent_name = "optics-current";
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
    return is_set(operation)
	|| (optics_hour24_optics !=  nullptr && optics_hour24_optics->has_operation())
	|| (optics_hour24fecs !=  nullptr && optics_hour24fecs->has_operation());
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-hour24";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OpticsHour24' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "optics-hour24-optics")
    {
        if(optics_hour24_optics != nullptr)
        {
            children["optics-hour24-optics"] = optics_hour24_optics;
        }
        else
        {
            optics_hour24_optics = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics>();
            optics_hour24_optics->parent = this;
            children["optics-hour24-optics"] = optics_hour24_optics;
        }
        return children.at("optics-hour24-optics");
    }

    if(child_yang_name == "optics-hour24fecs")
    {
        if(optics_hour24fecs != nullptr)
        {
            children["optics-hour24fecs"] = optics_hour24fecs;
        }
        else
        {
            optics_hour24fecs = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs>();
            optics_hour24fecs->parent = this;
            children["optics-hour24fecs"] = optics_hour24fecs;
        }
        return children.at("optics-hour24fecs");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::get_children()
{
    if(children.find("optics-hour24-optics") == children.end())
    {
        if(optics_hour24_optics != nullptr)
        {
            children["optics-hour24-optics"] = optics_hour24_optics;
        }
    }

    if(children.find("optics-hour24fecs") == children.end())
    {
        if(optics_hour24fecs != nullptr)
        {
            children["optics-hour24fecs"] = optics_hour24fecs;
        }
    }

    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optics()
{
    yang_name = "optics-hour24-optics"; yang_parent_name = "optics-hour24";
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
    return is_set(operation);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-hour24-optics";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OpticsHour24Optics' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "optics-hour24-optic")
    {
        for(auto const & c : optics_hour24_optic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic>();
        c->parent = this;
        optics_hour24_optic.push_back(std::move(c));
        children[segment_path] = optics_hour24_optic.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::get_children()
{
    for (auto const & c : optics_hour24_optic)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::OpticsHour24Optic()
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
    cd(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Cd>())
	,center_wavelength(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::CenterWavelength>())
	,dgd(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Dgd>())
	,lbc(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Lbc>())
	,lbc_pc(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::LbcPc>())
	,low_sig_freq_off(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::LowSigFreqOff>())
	,opr(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Opr>())
	,opt(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Opt>())
	,osnr(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Osnr>())
	,pcr(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pcr>())
	,pdl(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pdl>())
	,pmd(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pmd>())
	,pn(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pn>())
	,rx_sig_pow(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::RxSigPow>())
{
    cd->parent = this;
    children["cd"] = cd;

    center_wavelength->parent = this;
    children["center-wavelength"] = center_wavelength;

    dgd->parent = this;
    children["dgd"] = dgd;

    lbc->parent = this;
    children["lbc"] = lbc;

    lbc_pc->parent = this;
    children["lbc-pc"] = lbc_pc;

    low_sig_freq_off->parent = this;
    children["low-sig-freq-off"] = low_sig_freq_off;

    opr->parent = this;
    children["opr"] = opr;

    opt->parent = this;
    children["opt"] = opt;

    osnr->parent = this;
    children["osnr"] = osnr;

    pcr->parent = this;
    children["pcr"] = pcr;

    pdl->parent = this;
    children["pdl"] = pdl;

    pmd->parent = this;
    children["pmd"] = pmd;

    pn->parent = this;
    children["pn"] = pn;

    rx_sig_pow->parent = this;
    children["rx-sig-pow"] = rx_sig_pow;

    yang_name = "optics-hour24-optic"; yang_parent_name = "optics-hour24-optics";
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::~OpticsHour24Optic()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::has_data() const
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
	|| (cd !=  nullptr && cd->has_data())
	|| (center_wavelength !=  nullptr && center_wavelength->has_data())
	|| (dgd !=  nullptr && dgd->has_data())
	|| (lbc !=  nullptr && lbc->has_data())
	|| (lbc_pc !=  nullptr && lbc_pc->has_data())
	|| (low_sig_freq_off !=  nullptr && low_sig_freq_off->has_data())
	|| (opr !=  nullptr && opr->has_data())
	|| (opt !=  nullptr && opt->has_data())
	|| (osnr !=  nullptr && osnr->has_data())
	|| (pcr !=  nullptr && pcr->has_data())
	|| (pdl !=  nullptr && pdl->has_data())
	|| (pmd !=  nullptr && pmd->has_data())
	|| (pn !=  nullptr && pn->has_data())
	|| (rx_sig_pow !=  nullptr && rx_sig_pow->has_data());
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| is_set(index_.operation)
	|| is_set(last_clear15_min_time.operation)
	|| is_set(last_clear24_hr_time.operation)
	|| is_set(last_clear30_sec_time.operation)
	|| is_set(last_clear_time.operation)
	|| is_set(sec30_support.operation)
	|| is_set(timestamp.operation)
	|| is_set(valid.operation)
	|| (cd !=  nullptr && cd->has_operation())
	|| (center_wavelength !=  nullptr && center_wavelength->has_operation())
	|| (dgd !=  nullptr && dgd->has_operation())
	|| (lbc !=  nullptr && lbc->has_operation())
	|| (lbc_pc !=  nullptr && lbc_pc->has_operation())
	|| (low_sig_freq_off !=  nullptr && low_sig_freq_off->has_operation())
	|| (opr !=  nullptr && opr->has_operation())
	|| (opt !=  nullptr && opt->has_operation())
	|| (osnr !=  nullptr && osnr->has_operation())
	|| (pcr !=  nullptr && pcr->has_operation())
	|| (pdl !=  nullptr && pdl->has_operation())
	|| (pmd !=  nullptr && pmd->has_operation())
	|| (pn !=  nullptr && pn->has_operation())
	|| (rx_sig_pow !=  nullptr && rx_sig_pow->has_operation());
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-hour24-optic" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OpticsHour24Optic' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (last_clear15_min_time.is_set || is_set(last_clear15_min_time.operation)) leaf_name_data.push_back(last_clear15_min_time.get_name_leafdata());
    if (last_clear24_hr_time.is_set || is_set(last_clear24_hr_time.operation)) leaf_name_data.push_back(last_clear24_hr_time.get_name_leafdata());
    if (last_clear30_sec_time.is_set || is_set(last_clear30_sec_time.operation)) leaf_name_data.push_back(last_clear30_sec_time.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.operation)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (sec30_support.is_set || is_set(sec30_support.operation)) leaf_name_data.push_back(sec30_support.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.operation)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "cd")
    {
        if(cd != nullptr)
        {
            children["cd"] = cd;
        }
        else
        {
            cd = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Cd>();
            cd->parent = this;
            children["cd"] = cd;
        }
        return children.at("cd");
    }

    if(child_yang_name == "center-wavelength")
    {
        if(center_wavelength != nullptr)
        {
            children["center-wavelength"] = center_wavelength;
        }
        else
        {
            center_wavelength = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::CenterWavelength>();
            center_wavelength->parent = this;
            children["center-wavelength"] = center_wavelength;
        }
        return children.at("center-wavelength");
    }

    if(child_yang_name == "dgd")
    {
        if(dgd != nullptr)
        {
            children["dgd"] = dgd;
        }
        else
        {
            dgd = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Dgd>();
            dgd->parent = this;
            children["dgd"] = dgd;
        }
        return children.at("dgd");
    }

    if(child_yang_name == "lbc")
    {
        if(lbc != nullptr)
        {
            children["lbc"] = lbc;
        }
        else
        {
            lbc = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Lbc>();
            lbc->parent = this;
            children["lbc"] = lbc;
        }
        return children.at("lbc");
    }

    if(child_yang_name == "lbc-pc")
    {
        if(lbc_pc != nullptr)
        {
            children["lbc-pc"] = lbc_pc;
        }
        else
        {
            lbc_pc = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::LbcPc>();
            lbc_pc->parent = this;
            children["lbc-pc"] = lbc_pc;
        }
        return children.at("lbc-pc");
    }

    if(child_yang_name == "low-sig-freq-off")
    {
        if(low_sig_freq_off != nullptr)
        {
            children["low-sig-freq-off"] = low_sig_freq_off;
        }
        else
        {
            low_sig_freq_off = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::LowSigFreqOff>();
            low_sig_freq_off->parent = this;
            children["low-sig-freq-off"] = low_sig_freq_off;
        }
        return children.at("low-sig-freq-off");
    }

    if(child_yang_name == "opr")
    {
        if(opr != nullptr)
        {
            children["opr"] = opr;
        }
        else
        {
            opr = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Opr>();
            opr->parent = this;
            children["opr"] = opr;
        }
        return children.at("opr");
    }

    if(child_yang_name == "opt")
    {
        if(opt != nullptr)
        {
            children["opt"] = opt;
        }
        else
        {
            opt = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Opt>();
            opt->parent = this;
            children["opt"] = opt;
        }
        return children.at("opt");
    }

    if(child_yang_name == "osnr")
    {
        if(osnr != nullptr)
        {
            children["osnr"] = osnr;
        }
        else
        {
            osnr = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Osnr>();
            osnr->parent = this;
            children["osnr"] = osnr;
        }
        return children.at("osnr");
    }

    if(child_yang_name == "pcr")
    {
        if(pcr != nullptr)
        {
            children["pcr"] = pcr;
        }
        else
        {
            pcr = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pcr>();
            pcr->parent = this;
            children["pcr"] = pcr;
        }
        return children.at("pcr");
    }

    if(child_yang_name == "pdl")
    {
        if(pdl != nullptr)
        {
            children["pdl"] = pdl;
        }
        else
        {
            pdl = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pdl>();
            pdl->parent = this;
            children["pdl"] = pdl;
        }
        return children.at("pdl");
    }

    if(child_yang_name == "pmd")
    {
        if(pmd != nullptr)
        {
            children["pmd"] = pmd;
        }
        else
        {
            pmd = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pmd>();
            pmd->parent = this;
            children["pmd"] = pmd;
        }
        return children.at("pmd");
    }

    if(child_yang_name == "pn")
    {
        if(pn != nullptr)
        {
            children["pn"] = pn;
        }
        else
        {
            pn = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pn>();
            pn->parent = this;
            children["pn"] = pn;
        }
        return children.at("pn");
    }

    if(child_yang_name == "rx-sig-pow")
    {
        if(rx_sig_pow != nullptr)
        {
            children["rx-sig-pow"] = rx_sig_pow;
        }
        else
        {
            rx_sig_pow = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::RxSigPow>();
            rx_sig_pow->parent = this;
            children["rx-sig-pow"] = rx_sig_pow;
        }
        return children.at("rx-sig-pow");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::get_children()
{
    if(children.find("cd") == children.end())
    {
        if(cd != nullptr)
        {
            children["cd"] = cd;
        }
    }

    if(children.find("center-wavelength") == children.end())
    {
        if(center_wavelength != nullptr)
        {
            children["center-wavelength"] = center_wavelength;
        }
    }

    if(children.find("dgd") == children.end())
    {
        if(dgd != nullptr)
        {
            children["dgd"] = dgd;
        }
    }

    if(children.find("lbc") == children.end())
    {
        if(lbc != nullptr)
        {
            children["lbc"] = lbc;
        }
    }

    if(children.find("lbc-pc") == children.end())
    {
        if(lbc_pc != nullptr)
        {
            children["lbc-pc"] = lbc_pc;
        }
    }

    if(children.find("low-sig-freq-off") == children.end())
    {
        if(low_sig_freq_off != nullptr)
        {
            children["low-sig-freq-off"] = low_sig_freq_off;
        }
    }

    if(children.find("opr") == children.end())
    {
        if(opr != nullptr)
        {
            children["opr"] = opr;
        }
    }

    if(children.find("opt") == children.end())
    {
        if(opt != nullptr)
        {
            children["opt"] = opt;
        }
    }

    if(children.find("osnr") == children.end())
    {
        if(osnr != nullptr)
        {
            children["osnr"] = osnr;
        }
    }

    if(children.find("pcr") == children.end())
    {
        if(pcr != nullptr)
        {
            children["pcr"] = pcr;
        }
    }

    if(children.find("pdl") == children.end())
    {
        if(pdl != nullptr)
        {
            children["pdl"] = pdl;
        }
    }

    if(children.find("pmd") == children.end())
    {
        if(pmd != nullptr)
        {
            children["pmd"] = pmd;
        }
    }

    if(children.find("pn") == children.end())
    {
        if(pn != nullptr)
        {
            children["pn"] = pn;
        }
    }

    if(children.find("rx-sig-pow") == children.end())
    {
        if(rx_sig_pow != nullptr)
        {
            children["rx-sig-pow"] = rx_sig_pow;
        }
    }

    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time = value;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time = value;
    }
    if(value_path == "last-clear30-sec-time")
    {
        last_clear30_sec_time = value;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time = value;
    }
    if(value_path == "sec30-support")
    {
        sec30_support = value;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Lbc::Lbc()
    :
    average{YType::int32, "average"},
    maximum{YType::int32, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::int32, "maximum-threshold"},
    minimum{YType::int32, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::int32, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "lbc"; yang_parent_name = "optics-hour24-optic";
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Lbc::~Lbc()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Lbc::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Lbc::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Lbc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lbc";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Lbc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lbc' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Lbc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Lbc::get_children()
{
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Lbc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::LbcPc::LbcPc()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "lbc-pc"; yang_parent_name = "optics-hour24-optic";
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::LbcPc::~LbcPc()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::LbcPc::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::LbcPc::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::LbcPc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lbc-pc";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::LbcPc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LbcPc' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::LbcPc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::LbcPc::get_children()
{
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::LbcPc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Opt::Opt()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "opt"; yang_parent_name = "optics-hour24-optic";
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Opt::~Opt()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Opt::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Opt::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Opt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opt";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Opt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Opt' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Opt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Opt::get_children()
{
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Opt::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Opr::Opr()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "opr"; yang_parent_name = "optics-hour24-optic";
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Opr::~Opr()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Opr::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Opr::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Opr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opr";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Opr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Opr' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Opr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Opr::get_children()
{
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Opr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Cd::Cd()
    :
    average{YType::int32, "average"},
    maximum{YType::int32, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::int32, "maximum-threshold"},
    minimum{YType::int32, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::int32, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "cd"; yang_parent_name = "optics-hour24-optic";
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Cd::~Cd()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Cd::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Cd::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Cd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cd";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Cd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cd' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Cd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Cd::get_children()
{
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Cd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Dgd::Dgd()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "dgd"; yang_parent_name = "optics-hour24-optic";
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Dgd::~Dgd()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Dgd::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Dgd::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Dgd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dgd";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Dgd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dgd' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Dgd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Dgd::get_children()
{
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Dgd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pmd::Pmd()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "pmd"; yang_parent_name = "optics-hour24-optic";
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pmd::~Pmd()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pmd::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pmd::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pmd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmd";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pmd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pmd' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pmd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pmd::get_children()
{
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pmd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Osnr::Osnr()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "osnr"; yang_parent_name = "optics-hour24-optic";
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Osnr::~Osnr()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Osnr::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Osnr::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Osnr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "osnr";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Osnr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Osnr' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Osnr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Osnr::get_children()
{
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Osnr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::CenterWavelength::CenterWavelength()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "center-wavelength"; yang_parent_name = "optics-hour24-optic";
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::CenterWavelength::~CenterWavelength()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::CenterWavelength::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::CenterWavelength::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::CenterWavelength::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "center-wavelength";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::CenterWavelength::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CenterWavelength' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::CenterWavelength::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::CenterWavelength::get_children()
{
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::CenterWavelength::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pdl::Pdl()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "pdl"; yang_parent_name = "optics-hour24-optic";
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pdl::~Pdl()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pdl::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pdl::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pdl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pdl";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pdl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pdl' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pdl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pdl::get_children()
{
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pdl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pcr::Pcr()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "pcr"; yang_parent_name = "optics-hour24-optic";
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pcr::~Pcr()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pcr::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pcr::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pcr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pcr";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pcr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pcr' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pcr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pcr::get_children()
{
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pcr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pn::Pn()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "pn"; yang_parent_name = "optics-hour24-optic";
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pn::~Pn()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pn::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pn::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pn";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pn' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pn::get_children()
{
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::RxSigPow::RxSigPow()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "rx-sig-pow"; yang_parent_name = "optics-hour24-optic";
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::RxSigPow::~RxSigPow()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::RxSigPow::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::RxSigPow::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::RxSigPow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-sig-pow";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::RxSigPow::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RxSigPow' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::RxSigPow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::RxSigPow::get_children()
{
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::RxSigPow::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::LowSigFreqOff::LowSigFreqOff()
    :
    average{YType::int32, "average"},
    maximum{YType::int32, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::int32, "maximum-threshold"},
    minimum{YType::int32, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::int32, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "low-sig-freq-off"; yang_parent_name = "optics-hour24-optic";
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::LowSigFreqOff::~LowSigFreqOff()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::LowSigFreqOff::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::LowSigFreqOff::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::LowSigFreqOff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "low-sig-freq-off";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::LowSigFreqOff::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LowSigFreqOff' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::LowSigFreqOff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::LowSigFreqOff::get_children()
{
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::LowSigFreqOff::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fecs()
{
    yang_name = "optics-hour24fecs"; yang_parent_name = "optics-hour24";
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
    return is_set(operation);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-hour24fecs";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OpticsHour24Fecs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "optics-hour24fec")
    {
        for(auto const & c : optics_hour24fec)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec>();
        c->parent = this;
        optics_hour24fec.push_back(std::move(c));
        children[segment_path] = optics_hour24fec.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::get_children()
{
    for (auto const & c : optics_hour24fec)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::OpticsHour24Fec()
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
    ec_bits(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::EcBits>())
	,post_fec_ber(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::PostFecBer>())
	,pre_fec_ber(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::PreFecBer>())
	,q(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::Q>())
	,qmargin(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::Qmargin>())
	,uc_words(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::UcWords>())
{
    ec_bits->parent = this;
    children["ec-bits"] = ec_bits;

    post_fec_ber->parent = this;
    children["post-fec-ber"] = post_fec_ber;

    pre_fec_ber->parent = this;
    children["pre-fec-ber"] = pre_fec_ber;

    q->parent = this;
    children["q"] = q;

    qmargin->parent = this;
    children["qmargin"] = qmargin;

    uc_words->parent = this;
    children["uc-words"] = uc_words;

    yang_name = "optics-hour24fec"; yang_parent_name = "optics-hour24fecs";
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::~OpticsHour24Fec()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::has_data() const
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
	|| (ec_bits !=  nullptr && ec_bits->has_data())
	|| (post_fec_ber !=  nullptr && post_fec_ber->has_data())
	|| (pre_fec_ber !=  nullptr && pre_fec_ber->has_data())
	|| (q !=  nullptr && q->has_data())
	|| (qmargin !=  nullptr && qmargin->has_data())
	|| (uc_words !=  nullptr && uc_words->has_data());
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| is_set(index_.operation)
	|| is_set(last_clear15_min_time.operation)
	|| is_set(last_clear24_hr_time.operation)
	|| is_set(last_clear30_sec_time.operation)
	|| is_set(last_clear_time.operation)
	|| is_set(sec30_support.operation)
	|| is_set(timestamp.operation)
	|| is_set(valid.operation)
	|| (ec_bits !=  nullptr && ec_bits->has_operation())
	|| (post_fec_ber !=  nullptr && post_fec_ber->has_operation())
	|| (pre_fec_ber !=  nullptr && pre_fec_ber->has_operation())
	|| (q !=  nullptr && q->has_operation())
	|| (qmargin !=  nullptr && qmargin->has_operation())
	|| (uc_words !=  nullptr && uc_words->has_operation());
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-hour24fec" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OpticsHour24Fec' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (last_clear15_min_time.is_set || is_set(last_clear15_min_time.operation)) leaf_name_data.push_back(last_clear15_min_time.get_name_leafdata());
    if (last_clear24_hr_time.is_set || is_set(last_clear24_hr_time.operation)) leaf_name_data.push_back(last_clear24_hr_time.get_name_leafdata());
    if (last_clear30_sec_time.is_set || is_set(last_clear30_sec_time.operation)) leaf_name_data.push_back(last_clear30_sec_time.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.operation)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (sec30_support.is_set || is_set(sec30_support.operation)) leaf_name_data.push_back(sec30_support.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.operation)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ec-bits")
    {
        if(ec_bits != nullptr)
        {
            children["ec-bits"] = ec_bits;
        }
        else
        {
            ec_bits = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::EcBits>();
            ec_bits->parent = this;
            children["ec-bits"] = ec_bits;
        }
        return children.at("ec-bits");
    }

    if(child_yang_name == "post-fec-ber")
    {
        if(post_fec_ber != nullptr)
        {
            children["post-fec-ber"] = post_fec_ber;
        }
        else
        {
            post_fec_ber = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::PostFecBer>();
            post_fec_ber->parent = this;
            children["post-fec-ber"] = post_fec_ber;
        }
        return children.at("post-fec-ber");
    }

    if(child_yang_name == "pre-fec-ber")
    {
        if(pre_fec_ber != nullptr)
        {
            children["pre-fec-ber"] = pre_fec_ber;
        }
        else
        {
            pre_fec_ber = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::PreFecBer>();
            pre_fec_ber->parent = this;
            children["pre-fec-ber"] = pre_fec_ber;
        }
        return children.at("pre-fec-ber");
    }

    if(child_yang_name == "q")
    {
        if(q != nullptr)
        {
            children["q"] = q;
        }
        else
        {
            q = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::Q>();
            q->parent = this;
            children["q"] = q;
        }
        return children.at("q");
    }

    if(child_yang_name == "qmargin")
    {
        if(qmargin != nullptr)
        {
            children["qmargin"] = qmargin;
        }
        else
        {
            qmargin = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::Qmargin>();
            qmargin->parent = this;
            children["qmargin"] = qmargin;
        }
        return children.at("qmargin");
    }

    if(child_yang_name == "uc-words")
    {
        if(uc_words != nullptr)
        {
            children["uc-words"] = uc_words;
        }
        else
        {
            uc_words = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::UcWords>();
            uc_words->parent = this;
            children["uc-words"] = uc_words;
        }
        return children.at("uc-words");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::get_children()
{
    if(children.find("ec-bits") == children.end())
    {
        if(ec_bits != nullptr)
        {
            children["ec-bits"] = ec_bits;
        }
    }

    if(children.find("post-fec-ber") == children.end())
    {
        if(post_fec_ber != nullptr)
        {
            children["post-fec-ber"] = post_fec_ber;
        }
    }

    if(children.find("pre-fec-ber") == children.end())
    {
        if(pre_fec_ber != nullptr)
        {
            children["pre-fec-ber"] = pre_fec_ber;
        }
    }

    if(children.find("q") == children.end())
    {
        if(q != nullptr)
        {
            children["q"] = q;
        }
    }

    if(children.find("qmargin") == children.end())
    {
        if(qmargin != nullptr)
        {
            children["qmargin"] = qmargin;
        }
    }

    if(children.find("uc-words") == children.end())
    {
        if(uc_words != nullptr)
        {
            children["uc-words"] = uc_words;
        }
    }

    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time = value;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time = value;
    }
    if(value_path == "last-clear30-sec-time")
    {
        last_clear30_sec_time = value;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time = value;
    }
    if(value_path == "sec30-support")
    {
        sec30_support = value;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::EcBits::EcBits()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "ec-bits"; yang_parent_name = "optics-hour24fec";
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::EcBits::~EcBits()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::EcBits::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::EcBits::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::EcBits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ec-bits";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::EcBits::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EcBits' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::EcBits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::EcBits::get_children()
{
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::EcBits::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::UcWords::UcWords()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "uc-words"; yang_parent_name = "optics-hour24fec";
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::UcWords::~UcWords()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::UcWords::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::UcWords::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::UcWords::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uc-words";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::UcWords::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UcWords' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::UcWords::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::UcWords::get_children()
{
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::UcWords::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::PreFecBer::PreFecBer()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "pre-fec-ber"; yang_parent_name = "optics-hour24fec";
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::PreFecBer::~PreFecBer()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::PreFecBer::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::PreFecBer::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::PreFecBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-fec-ber";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::PreFecBer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PreFecBer' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::PreFecBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::PreFecBer::get_children()
{
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::PreFecBer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::PostFecBer::PostFecBer()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "post-fec-ber"; yang_parent_name = "optics-hour24fec";
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::PostFecBer::~PostFecBer()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::PostFecBer::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::PostFecBer::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::PostFecBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "post-fec-ber";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::PostFecBer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PostFecBer' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::PostFecBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::PostFecBer::get_children()
{
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::PostFecBer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::Q::Q()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "q"; yang_parent_name = "optics-hour24fec";
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::Q::~Q()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::Q::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::Q::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::Q::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "q";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::Q::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Q' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::Q::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::Q::get_children()
{
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::Q::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::Qmargin::Qmargin()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "qmargin"; yang_parent_name = "optics-hour24fec";
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::Qmargin::~Qmargin()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::Qmargin::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::Qmargin::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::Qmargin::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qmargin";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::Qmargin::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Qmargin' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::Qmargin::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::Qmargin::get_children()
{
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::Qmargin::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15()
    :
    optics_minute15_optics(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics>())
	,optics_minute15fecs(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs>())
{
    optics_minute15_optics->parent = this;
    children["optics-minute15-optics"] = optics_minute15_optics;

    optics_minute15fecs->parent = this;
    children["optics-minute15fecs"] = optics_minute15fecs;

    yang_name = "optics-minute15"; yang_parent_name = "optics-current";
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
    return is_set(operation)
	|| (optics_minute15_optics !=  nullptr && optics_minute15_optics->has_operation())
	|| (optics_minute15fecs !=  nullptr && optics_minute15fecs->has_operation());
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-minute15";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OpticsMinute15' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "optics-minute15-optics")
    {
        if(optics_minute15_optics != nullptr)
        {
            children["optics-minute15-optics"] = optics_minute15_optics;
        }
        else
        {
            optics_minute15_optics = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics>();
            optics_minute15_optics->parent = this;
            children["optics-minute15-optics"] = optics_minute15_optics;
        }
        return children.at("optics-minute15-optics");
    }

    if(child_yang_name == "optics-minute15fecs")
    {
        if(optics_minute15fecs != nullptr)
        {
            children["optics-minute15fecs"] = optics_minute15fecs;
        }
        else
        {
            optics_minute15fecs = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs>();
            optics_minute15fecs->parent = this;
            children["optics-minute15fecs"] = optics_minute15fecs;
        }
        return children.at("optics-minute15fecs");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::get_children()
{
    if(children.find("optics-minute15-optics") == children.end())
    {
        if(optics_minute15_optics != nullptr)
        {
            children["optics-minute15-optics"] = optics_minute15_optics;
        }
    }

    if(children.find("optics-minute15fecs") == children.end())
    {
        if(optics_minute15fecs != nullptr)
        {
            children["optics-minute15fecs"] = optics_minute15fecs;
        }
    }

    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optics()
{
    yang_name = "optics-minute15-optics"; yang_parent_name = "optics-minute15";
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
    return is_set(operation);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-minute15-optics";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OpticsMinute15Optics' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "optics-minute15-optic")
    {
        for(auto const & c : optics_minute15_optic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic>();
        c->parent = this;
        optics_minute15_optic.push_back(std::move(c));
        children[segment_path] = optics_minute15_optic.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::get_children()
{
    for (auto const & c : optics_minute15_optic)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::OpticsMinute15Optic()
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
    cd(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Cd>())
	,center_wavelength(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::CenterWavelength>())
	,dgd(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Dgd>())
	,lbc(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Lbc>())
	,lbc_pc(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::LbcPc>())
	,low_sig_freq_off(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::LowSigFreqOff>())
	,opr(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Opr>())
	,opt(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Opt>())
	,osnr(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Osnr>())
	,pcr(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pcr>())
	,pdl(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pdl>())
	,pmd(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pmd>())
	,pn(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pn>())
	,rx_sig_pow(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::RxSigPow>())
{
    cd->parent = this;
    children["cd"] = cd;

    center_wavelength->parent = this;
    children["center-wavelength"] = center_wavelength;

    dgd->parent = this;
    children["dgd"] = dgd;

    lbc->parent = this;
    children["lbc"] = lbc;

    lbc_pc->parent = this;
    children["lbc-pc"] = lbc_pc;

    low_sig_freq_off->parent = this;
    children["low-sig-freq-off"] = low_sig_freq_off;

    opr->parent = this;
    children["opr"] = opr;

    opt->parent = this;
    children["opt"] = opt;

    osnr->parent = this;
    children["osnr"] = osnr;

    pcr->parent = this;
    children["pcr"] = pcr;

    pdl->parent = this;
    children["pdl"] = pdl;

    pmd->parent = this;
    children["pmd"] = pmd;

    pn->parent = this;
    children["pn"] = pn;

    rx_sig_pow->parent = this;
    children["rx-sig-pow"] = rx_sig_pow;

    yang_name = "optics-minute15-optic"; yang_parent_name = "optics-minute15-optics";
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::~OpticsMinute15Optic()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::has_data() const
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
	|| (cd !=  nullptr && cd->has_data())
	|| (center_wavelength !=  nullptr && center_wavelength->has_data())
	|| (dgd !=  nullptr && dgd->has_data())
	|| (lbc !=  nullptr && lbc->has_data())
	|| (lbc_pc !=  nullptr && lbc_pc->has_data())
	|| (low_sig_freq_off !=  nullptr && low_sig_freq_off->has_data())
	|| (opr !=  nullptr && opr->has_data())
	|| (opt !=  nullptr && opt->has_data())
	|| (osnr !=  nullptr && osnr->has_data())
	|| (pcr !=  nullptr && pcr->has_data())
	|| (pdl !=  nullptr && pdl->has_data())
	|| (pmd !=  nullptr && pmd->has_data())
	|| (pn !=  nullptr && pn->has_data())
	|| (rx_sig_pow !=  nullptr && rx_sig_pow->has_data());
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| is_set(index_.operation)
	|| is_set(last_clear15_min_time.operation)
	|| is_set(last_clear24_hr_time.operation)
	|| is_set(last_clear30_sec_time.operation)
	|| is_set(last_clear_time.operation)
	|| is_set(sec30_support.operation)
	|| is_set(timestamp.operation)
	|| is_set(valid.operation)
	|| (cd !=  nullptr && cd->has_operation())
	|| (center_wavelength !=  nullptr && center_wavelength->has_operation())
	|| (dgd !=  nullptr && dgd->has_operation())
	|| (lbc !=  nullptr && lbc->has_operation())
	|| (lbc_pc !=  nullptr && lbc_pc->has_operation())
	|| (low_sig_freq_off !=  nullptr && low_sig_freq_off->has_operation())
	|| (opr !=  nullptr && opr->has_operation())
	|| (opt !=  nullptr && opt->has_operation())
	|| (osnr !=  nullptr && osnr->has_operation())
	|| (pcr !=  nullptr && pcr->has_operation())
	|| (pdl !=  nullptr && pdl->has_operation())
	|| (pmd !=  nullptr && pmd->has_operation())
	|| (pn !=  nullptr && pn->has_operation())
	|| (rx_sig_pow !=  nullptr && rx_sig_pow->has_operation());
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-minute15-optic" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OpticsMinute15Optic' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (last_clear15_min_time.is_set || is_set(last_clear15_min_time.operation)) leaf_name_data.push_back(last_clear15_min_time.get_name_leafdata());
    if (last_clear24_hr_time.is_set || is_set(last_clear24_hr_time.operation)) leaf_name_data.push_back(last_clear24_hr_time.get_name_leafdata());
    if (last_clear30_sec_time.is_set || is_set(last_clear30_sec_time.operation)) leaf_name_data.push_back(last_clear30_sec_time.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.operation)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (sec30_support.is_set || is_set(sec30_support.operation)) leaf_name_data.push_back(sec30_support.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.operation)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "cd")
    {
        if(cd != nullptr)
        {
            children["cd"] = cd;
        }
        else
        {
            cd = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Cd>();
            cd->parent = this;
            children["cd"] = cd;
        }
        return children.at("cd");
    }

    if(child_yang_name == "center-wavelength")
    {
        if(center_wavelength != nullptr)
        {
            children["center-wavelength"] = center_wavelength;
        }
        else
        {
            center_wavelength = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::CenterWavelength>();
            center_wavelength->parent = this;
            children["center-wavelength"] = center_wavelength;
        }
        return children.at("center-wavelength");
    }

    if(child_yang_name == "dgd")
    {
        if(dgd != nullptr)
        {
            children["dgd"] = dgd;
        }
        else
        {
            dgd = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Dgd>();
            dgd->parent = this;
            children["dgd"] = dgd;
        }
        return children.at("dgd");
    }

    if(child_yang_name == "lbc")
    {
        if(lbc != nullptr)
        {
            children["lbc"] = lbc;
        }
        else
        {
            lbc = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Lbc>();
            lbc->parent = this;
            children["lbc"] = lbc;
        }
        return children.at("lbc");
    }

    if(child_yang_name == "lbc-pc")
    {
        if(lbc_pc != nullptr)
        {
            children["lbc-pc"] = lbc_pc;
        }
        else
        {
            lbc_pc = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::LbcPc>();
            lbc_pc->parent = this;
            children["lbc-pc"] = lbc_pc;
        }
        return children.at("lbc-pc");
    }

    if(child_yang_name == "low-sig-freq-off")
    {
        if(low_sig_freq_off != nullptr)
        {
            children["low-sig-freq-off"] = low_sig_freq_off;
        }
        else
        {
            low_sig_freq_off = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::LowSigFreqOff>();
            low_sig_freq_off->parent = this;
            children["low-sig-freq-off"] = low_sig_freq_off;
        }
        return children.at("low-sig-freq-off");
    }

    if(child_yang_name == "opr")
    {
        if(opr != nullptr)
        {
            children["opr"] = opr;
        }
        else
        {
            opr = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Opr>();
            opr->parent = this;
            children["opr"] = opr;
        }
        return children.at("opr");
    }

    if(child_yang_name == "opt")
    {
        if(opt != nullptr)
        {
            children["opt"] = opt;
        }
        else
        {
            opt = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Opt>();
            opt->parent = this;
            children["opt"] = opt;
        }
        return children.at("opt");
    }

    if(child_yang_name == "osnr")
    {
        if(osnr != nullptr)
        {
            children["osnr"] = osnr;
        }
        else
        {
            osnr = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Osnr>();
            osnr->parent = this;
            children["osnr"] = osnr;
        }
        return children.at("osnr");
    }

    if(child_yang_name == "pcr")
    {
        if(pcr != nullptr)
        {
            children["pcr"] = pcr;
        }
        else
        {
            pcr = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pcr>();
            pcr->parent = this;
            children["pcr"] = pcr;
        }
        return children.at("pcr");
    }

    if(child_yang_name == "pdl")
    {
        if(pdl != nullptr)
        {
            children["pdl"] = pdl;
        }
        else
        {
            pdl = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pdl>();
            pdl->parent = this;
            children["pdl"] = pdl;
        }
        return children.at("pdl");
    }

    if(child_yang_name == "pmd")
    {
        if(pmd != nullptr)
        {
            children["pmd"] = pmd;
        }
        else
        {
            pmd = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pmd>();
            pmd->parent = this;
            children["pmd"] = pmd;
        }
        return children.at("pmd");
    }

    if(child_yang_name == "pn")
    {
        if(pn != nullptr)
        {
            children["pn"] = pn;
        }
        else
        {
            pn = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pn>();
            pn->parent = this;
            children["pn"] = pn;
        }
        return children.at("pn");
    }

    if(child_yang_name == "rx-sig-pow")
    {
        if(rx_sig_pow != nullptr)
        {
            children["rx-sig-pow"] = rx_sig_pow;
        }
        else
        {
            rx_sig_pow = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::RxSigPow>();
            rx_sig_pow->parent = this;
            children["rx-sig-pow"] = rx_sig_pow;
        }
        return children.at("rx-sig-pow");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::get_children()
{
    if(children.find("cd") == children.end())
    {
        if(cd != nullptr)
        {
            children["cd"] = cd;
        }
    }

    if(children.find("center-wavelength") == children.end())
    {
        if(center_wavelength != nullptr)
        {
            children["center-wavelength"] = center_wavelength;
        }
    }

    if(children.find("dgd") == children.end())
    {
        if(dgd != nullptr)
        {
            children["dgd"] = dgd;
        }
    }

    if(children.find("lbc") == children.end())
    {
        if(lbc != nullptr)
        {
            children["lbc"] = lbc;
        }
    }

    if(children.find("lbc-pc") == children.end())
    {
        if(lbc_pc != nullptr)
        {
            children["lbc-pc"] = lbc_pc;
        }
    }

    if(children.find("low-sig-freq-off") == children.end())
    {
        if(low_sig_freq_off != nullptr)
        {
            children["low-sig-freq-off"] = low_sig_freq_off;
        }
    }

    if(children.find("opr") == children.end())
    {
        if(opr != nullptr)
        {
            children["opr"] = opr;
        }
    }

    if(children.find("opt") == children.end())
    {
        if(opt != nullptr)
        {
            children["opt"] = opt;
        }
    }

    if(children.find("osnr") == children.end())
    {
        if(osnr != nullptr)
        {
            children["osnr"] = osnr;
        }
    }

    if(children.find("pcr") == children.end())
    {
        if(pcr != nullptr)
        {
            children["pcr"] = pcr;
        }
    }

    if(children.find("pdl") == children.end())
    {
        if(pdl != nullptr)
        {
            children["pdl"] = pdl;
        }
    }

    if(children.find("pmd") == children.end())
    {
        if(pmd != nullptr)
        {
            children["pmd"] = pmd;
        }
    }

    if(children.find("pn") == children.end())
    {
        if(pn != nullptr)
        {
            children["pn"] = pn;
        }
    }

    if(children.find("rx-sig-pow") == children.end())
    {
        if(rx_sig_pow != nullptr)
        {
            children["rx-sig-pow"] = rx_sig_pow;
        }
    }

    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time = value;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time = value;
    }
    if(value_path == "last-clear30-sec-time")
    {
        last_clear30_sec_time = value;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time = value;
    }
    if(value_path == "sec30-support")
    {
        sec30_support = value;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Lbc::Lbc()
    :
    average{YType::int32, "average"},
    maximum{YType::int32, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::int32, "maximum-threshold"},
    minimum{YType::int32, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::int32, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "lbc"; yang_parent_name = "optics-minute15-optic";
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Lbc::~Lbc()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Lbc::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Lbc::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Lbc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lbc";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Lbc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lbc' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Lbc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Lbc::get_children()
{
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Lbc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::LbcPc::LbcPc()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "lbc-pc"; yang_parent_name = "optics-minute15-optic";
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::LbcPc::~LbcPc()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::LbcPc::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::LbcPc::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::LbcPc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lbc-pc";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::LbcPc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LbcPc' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::LbcPc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::LbcPc::get_children()
{
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::LbcPc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Opt::Opt()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "opt"; yang_parent_name = "optics-minute15-optic";
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Opt::~Opt()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Opt::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Opt::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Opt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opt";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Opt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Opt' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Opt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Opt::get_children()
{
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Opt::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Opr::Opr()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "opr"; yang_parent_name = "optics-minute15-optic";
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Opr::~Opr()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Opr::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Opr::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Opr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opr";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Opr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Opr' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Opr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Opr::get_children()
{
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Opr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Cd::Cd()
    :
    average{YType::int32, "average"},
    maximum{YType::int32, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::int32, "maximum-threshold"},
    minimum{YType::int32, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::int32, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "cd"; yang_parent_name = "optics-minute15-optic";
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Cd::~Cd()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Cd::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Cd::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Cd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cd";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Cd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cd' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Cd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Cd::get_children()
{
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Cd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Dgd::Dgd()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "dgd"; yang_parent_name = "optics-minute15-optic";
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Dgd::~Dgd()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Dgd::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Dgd::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Dgd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dgd";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Dgd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dgd' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Dgd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Dgd::get_children()
{
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Dgd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pmd::Pmd()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "pmd"; yang_parent_name = "optics-minute15-optic";
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pmd::~Pmd()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pmd::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pmd::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pmd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmd";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pmd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pmd' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pmd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pmd::get_children()
{
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pmd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Osnr::Osnr()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "osnr"; yang_parent_name = "optics-minute15-optic";
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Osnr::~Osnr()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Osnr::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Osnr::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Osnr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "osnr";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Osnr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Osnr' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Osnr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Osnr::get_children()
{
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Osnr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::CenterWavelength::CenterWavelength()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "center-wavelength"; yang_parent_name = "optics-minute15-optic";
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::CenterWavelength::~CenterWavelength()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::CenterWavelength::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::CenterWavelength::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::CenterWavelength::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "center-wavelength";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::CenterWavelength::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CenterWavelength' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::CenterWavelength::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::CenterWavelength::get_children()
{
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::CenterWavelength::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pdl::Pdl()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "pdl"; yang_parent_name = "optics-minute15-optic";
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pdl::~Pdl()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pdl::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pdl::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pdl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pdl";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pdl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pdl' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pdl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pdl::get_children()
{
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pdl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pcr::Pcr()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "pcr"; yang_parent_name = "optics-minute15-optic";
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pcr::~Pcr()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pcr::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pcr::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pcr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pcr";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pcr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pcr' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pcr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pcr::get_children()
{
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pcr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pn::Pn()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "pn"; yang_parent_name = "optics-minute15-optic";
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pn::~Pn()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pn::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pn::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pn";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pn' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pn::get_children()
{
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::RxSigPow::RxSigPow()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "rx-sig-pow"; yang_parent_name = "optics-minute15-optic";
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::RxSigPow::~RxSigPow()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::RxSigPow::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::RxSigPow::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::RxSigPow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-sig-pow";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::RxSigPow::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RxSigPow' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::RxSigPow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::RxSigPow::get_children()
{
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::RxSigPow::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::LowSigFreqOff::LowSigFreqOff()
    :
    average{YType::int32, "average"},
    maximum{YType::int32, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::int32, "maximum-threshold"},
    minimum{YType::int32, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::int32, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "low-sig-freq-off"; yang_parent_name = "optics-minute15-optic";
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::LowSigFreqOff::~LowSigFreqOff()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::LowSigFreqOff::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::LowSigFreqOff::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::LowSigFreqOff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "low-sig-freq-off";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::LowSigFreqOff::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LowSigFreqOff' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::LowSigFreqOff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::LowSigFreqOff::get_children()
{
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::LowSigFreqOff::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fecs()
{
    yang_name = "optics-minute15fecs"; yang_parent_name = "optics-minute15";
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
    return is_set(operation);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-minute15fecs";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OpticsMinute15Fecs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "optics-minute15fec")
    {
        for(auto const & c : optics_minute15fec)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec>();
        c->parent = this;
        optics_minute15fec.push_back(std::move(c));
        children[segment_path] = optics_minute15fec.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::get_children()
{
    for (auto const & c : optics_minute15fec)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::OpticsMinute15Fec()
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
    ec_bits(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::EcBits>())
	,post_fec_ber(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::PostFecBer>())
	,pre_fec_ber(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::PreFecBer>())
	,q(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::Q>())
	,qmargin(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::Qmargin>())
	,uc_words(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::UcWords>())
{
    ec_bits->parent = this;
    children["ec-bits"] = ec_bits;

    post_fec_ber->parent = this;
    children["post-fec-ber"] = post_fec_ber;

    pre_fec_ber->parent = this;
    children["pre-fec-ber"] = pre_fec_ber;

    q->parent = this;
    children["q"] = q;

    qmargin->parent = this;
    children["qmargin"] = qmargin;

    uc_words->parent = this;
    children["uc-words"] = uc_words;

    yang_name = "optics-minute15fec"; yang_parent_name = "optics-minute15fecs";
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::~OpticsMinute15Fec()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::has_data() const
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
	|| (ec_bits !=  nullptr && ec_bits->has_data())
	|| (post_fec_ber !=  nullptr && post_fec_ber->has_data())
	|| (pre_fec_ber !=  nullptr && pre_fec_ber->has_data())
	|| (q !=  nullptr && q->has_data())
	|| (qmargin !=  nullptr && qmargin->has_data())
	|| (uc_words !=  nullptr && uc_words->has_data());
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| is_set(index_.operation)
	|| is_set(last_clear15_min_time.operation)
	|| is_set(last_clear24_hr_time.operation)
	|| is_set(last_clear30_sec_time.operation)
	|| is_set(last_clear_time.operation)
	|| is_set(sec30_support.operation)
	|| is_set(timestamp.operation)
	|| is_set(valid.operation)
	|| (ec_bits !=  nullptr && ec_bits->has_operation())
	|| (post_fec_ber !=  nullptr && post_fec_ber->has_operation())
	|| (pre_fec_ber !=  nullptr && pre_fec_ber->has_operation())
	|| (q !=  nullptr && q->has_operation())
	|| (qmargin !=  nullptr && qmargin->has_operation())
	|| (uc_words !=  nullptr && uc_words->has_operation());
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-minute15fec" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OpticsMinute15Fec' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (last_clear15_min_time.is_set || is_set(last_clear15_min_time.operation)) leaf_name_data.push_back(last_clear15_min_time.get_name_leafdata());
    if (last_clear24_hr_time.is_set || is_set(last_clear24_hr_time.operation)) leaf_name_data.push_back(last_clear24_hr_time.get_name_leafdata());
    if (last_clear30_sec_time.is_set || is_set(last_clear30_sec_time.operation)) leaf_name_data.push_back(last_clear30_sec_time.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.operation)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (sec30_support.is_set || is_set(sec30_support.operation)) leaf_name_data.push_back(sec30_support.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.operation)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ec-bits")
    {
        if(ec_bits != nullptr)
        {
            children["ec-bits"] = ec_bits;
        }
        else
        {
            ec_bits = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::EcBits>();
            ec_bits->parent = this;
            children["ec-bits"] = ec_bits;
        }
        return children.at("ec-bits");
    }

    if(child_yang_name == "post-fec-ber")
    {
        if(post_fec_ber != nullptr)
        {
            children["post-fec-ber"] = post_fec_ber;
        }
        else
        {
            post_fec_ber = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::PostFecBer>();
            post_fec_ber->parent = this;
            children["post-fec-ber"] = post_fec_ber;
        }
        return children.at("post-fec-ber");
    }

    if(child_yang_name == "pre-fec-ber")
    {
        if(pre_fec_ber != nullptr)
        {
            children["pre-fec-ber"] = pre_fec_ber;
        }
        else
        {
            pre_fec_ber = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::PreFecBer>();
            pre_fec_ber->parent = this;
            children["pre-fec-ber"] = pre_fec_ber;
        }
        return children.at("pre-fec-ber");
    }

    if(child_yang_name == "q")
    {
        if(q != nullptr)
        {
            children["q"] = q;
        }
        else
        {
            q = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::Q>();
            q->parent = this;
            children["q"] = q;
        }
        return children.at("q");
    }

    if(child_yang_name == "qmargin")
    {
        if(qmargin != nullptr)
        {
            children["qmargin"] = qmargin;
        }
        else
        {
            qmargin = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::Qmargin>();
            qmargin->parent = this;
            children["qmargin"] = qmargin;
        }
        return children.at("qmargin");
    }

    if(child_yang_name == "uc-words")
    {
        if(uc_words != nullptr)
        {
            children["uc-words"] = uc_words;
        }
        else
        {
            uc_words = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::UcWords>();
            uc_words->parent = this;
            children["uc-words"] = uc_words;
        }
        return children.at("uc-words");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::get_children()
{
    if(children.find("ec-bits") == children.end())
    {
        if(ec_bits != nullptr)
        {
            children["ec-bits"] = ec_bits;
        }
    }

    if(children.find("post-fec-ber") == children.end())
    {
        if(post_fec_ber != nullptr)
        {
            children["post-fec-ber"] = post_fec_ber;
        }
    }

    if(children.find("pre-fec-ber") == children.end())
    {
        if(pre_fec_ber != nullptr)
        {
            children["pre-fec-ber"] = pre_fec_ber;
        }
    }

    if(children.find("q") == children.end())
    {
        if(q != nullptr)
        {
            children["q"] = q;
        }
    }

    if(children.find("qmargin") == children.end())
    {
        if(qmargin != nullptr)
        {
            children["qmargin"] = qmargin;
        }
    }

    if(children.find("uc-words") == children.end())
    {
        if(uc_words != nullptr)
        {
            children["uc-words"] = uc_words;
        }
    }

    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time = value;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time = value;
    }
    if(value_path == "last-clear30-sec-time")
    {
        last_clear30_sec_time = value;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time = value;
    }
    if(value_path == "sec30-support")
    {
        sec30_support = value;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::EcBits::EcBits()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "ec-bits"; yang_parent_name = "optics-minute15fec";
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::EcBits::~EcBits()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::EcBits::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::EcBits::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::EcBits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ec-bits";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::EcBits::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EcBits' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::EcBits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::EcBits::get_children()
{
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::EcBits::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::UcWords::UcWords()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "uc-words"; yang_parent_name = "optics-minute15fec";
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::UcWords::~UcWords()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::UcWords::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::UcWords::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::UcWords::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uc-words";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::UcWords::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UcWords' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::UcWords::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::UcWords::get_children()
{
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::UcWords::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::PreFecBer::PreFecBer()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "pre-fec-ber"; yang_parent_name = "optics-minute15fec";
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::PreFecBer::~PreFecBer()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::PreFecBer::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::PreFecBer::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::PreFecBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-fec-ber";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::PreFecBer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PreFecBer' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::PreFecBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::PreFecBer::get_children()
{
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::PreFecBer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::PostFecBer::PostFecBer()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "post-fec-ber"; yang_parent_name = "optics-minute15fec";
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::PostFecBer::~PostFecBer()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::PostFecBer::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::PostFecBer::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::PostFecBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "post-fec-ber";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::PostFecBer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PostFecBer' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::PostFecBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::PostFecBer::get_children()
{
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::PostFecBer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::Q::Q()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "q"; yang_parent_name = "optics-minute15fec";
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::Q::~Q()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::Q::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::Q::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::Q::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "q";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::Q::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Q' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::Q::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::Q::get_children()
{
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::Q::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::Qmargin::Qmargin()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "qmargin"; yang_parent_name = "optics-minute15fec";
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::Qmargin::~Qmargin()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::Qmargin::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::Qmargin::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::Qmargin::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qmargin";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::Qmargin::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Qmargin' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::Qmargin::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::Qmargin::get_children()
{
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::Qmargin::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30()
    :
    optics_second30_optics(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics>())
	,optics_second30fecs(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs>())
{
    optics_second30_optics->parent = this;
    children["optics-second30-optics"] = optics_second30_optics;

    optics_second30fecs->parent = this;
    children["optics-second30fecs"] = optics_second30fecs;

    yang_name = "optics-second30"; yang_parent_name = "optics-current";
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::~OpticsSecond30()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::has_data() const
{
    return (optics_second30_optics !=  nullptr && optics_second30_optics->has_data())
	|| (optics_second30fecs !=  nullptr && optics_second30fecs->has_data());
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::has_operation() const
{
    return is_set(operation)
	|| (optics_second30_optics !=  nullptr && optics_second30_optics->has_operation())
	|| (optics_second30fecs !=  nullptr && optics_second30fecs->has_operation());
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-second30";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OpticsSecond30' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "optics-second30-optics")
    {
        if(optics_second30_optics != nullptr)
        {
            children["optics-second30-optics"] = optics_second30_optics;
        }
        else
        {
            optics_second30_optics = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics>();
            optics_second30_optics->parent = this;
            children["optics-second30-optics"] = optics_second30_optics;
        }
        return children.at("optics-second30-optics");
    }

    if(child_yang_name == "optics-second30fecs")
    {
        if(optics_second30fecs != nullptr)
        {
            children["optics-second30fecs"] = optics_second30fecs;
        }
        else
        {
            optics_second30fecs = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs>();
            optics_second30fecs->parent = this;
            children["optics-second30fecs"] = optics_second30fecs;
        }
        return children.at("optics-second30fecs");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::get_children()
{
    if(children.find("optics-second30-optics") == children.end())
    {
        if(optics_second30_optics != nullptr)
        {
            children["optics-second30-optics"] = optics_second30_optics;
        }
    }

    if(children.find("optics-second30fecs") == children.end())
    {
        if(optics_second30fecs != nullptr)
        {
            children["optics-second30fecs"] = optics_second30fecs;
        }
    }

    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fecs()
{
    yang_name = "optics-second30fecs"; yang_parent_name = "optics-second30";
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
    return is_set(operation);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-second30fecs";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OpticsSecond30Fecs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "optics-second30fec")
    {
        for(auto const & c : optics_second30fec)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec>();
        c->parent = this;
        optics_second30fec.push_back(std::move(c));
        children[segment_path] = optics_second30fec.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::get_children()
{
    for (auto const & c : optics_second30fec)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::OpticsSecond30Fec()
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
    ec_bits(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::EcBits>())
	,post_fec_ber(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::PostFecBer>())
	,pre_fec_ber(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::PreFecBer>())
	,q(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::Q>())
	,qmargin(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::Qmargin>())
	,uc_words(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::UcWords>())
{
    ec_bits->parent = this;
    children["ec-bits"] = ec_bits;

    post_fec_ber->parent = this;
    children["post-fec-ber"] = post_fec_ber;

    pre_fec_ber->parent = this;
    children["pre-fec-ber"] = pre_fec_ber;

    q->parent = this;
    children["q"] = q;

    qmargin->parent = this;
    children["qmargin"] = qmargin;

    uc_words->parent = this;
    children["uc-words"] = uc_words;

    yang_name = "optics-second30fec"; yang_parent_name = "optics-second30fecs";
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::~OpticsSecond30Fec()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::has_data() const
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
	|| (ec_bits !=  nullptr && ec_bits->has_data())
	|| (post_fec_ber !=  nullptr && post_fec_ber->has_data())
	|| (pre_fec_ber !=  nullptr && pre_fec_ber->has_data())
	|| (q !=  nullptr && q->has_data())
	|| (qmargin !=  nullptr && qmargin->has_data())
	|| (uc_words !=  nullptr && uc_words->has_data());
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| is_set(index_.operation)
	|| is_set(last_clear15_min_time.operation)
	|| is_set(last_clear24_hr_time.operation)
	|| is_set(last_clear30_sec_time.operation)
	|| is_set(last_clear_time.operation)
	|| is_set(sec30_support.operation)
	|| is_set(timestamp.operation)
	|| is_set(valid.operation)
	|| (ec_bits !=  nullptr && ec_bits->has_operation())
	|| (post_fec_ber !=  nullptr && post_fec_ber->has_operation())
	|| (pre_fec_ber !=  nullptr && pre_fec_ber->has_operation())
	|| (q !=  nullptr && q->has_operation())
	|| (qmargin !=  nullptr && qmargin->has_operation())
	|| (uc_words !=  nullptr && uc_words->has_operation());
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-second30fec" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OpticsSecond30Fec' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (last_clear15_min_time.is_set || is_set(last_clear15_min_time.operation)) leaf_name_data.push_back(last_clear15_min_time.get_name_leafdata());
    if (last_clear24_hr_time.is_set || is_set(last_clear24_hr_time.operation)) leaf_name_data.push_back(last_clear24_hr_time.get_name_leafdata());
    if (last_clear30_sec_time.is_set || is_set(last_clear30_sec_time.operation)) leaf_name_data.push_back(last_clear30_sec_time.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.operation)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (sec30_support.is_set || is_set(sec30_support.operation)) leaf_name_data.push_back(sec30_support.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.operation)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ec-bits")
    {
        if(ec_bits != nullptr)
        {
            children["ec-bits"] = ec_bits;
        }
        else
        {
            ec_bits = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::EcBits>();
            ec_bits->parent = this;
            children["ec-bits"] = ec_bits;
        }
        return children.at("ec-bits");
    }

    if(child_yang_name == "post-fec-ber")
    {
        if(post_fec_ber != nullptr)
        {
            children["post-fec-ber"] = post_fec_ber;
        }
        else
        {
            post_fec_ber = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::PostFecBer>();
            post_fec_ber->parent = this;
            children["post-fec-ber"] = post_fec_ber;
        }
        return children.at("post-fec-ber");
    }

    if(child_yang_name == "pre-fec-ber")
    {
        if(pre_fec_ber != nullptr)
        {
            children["pre-fec-ber"] = pre_fec_ber;
        }
        else
        {
            pre_fec_ber = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::PreFecBer>();
            pre_fec_ber->parent = this;
            children["pre-fec-ber"] = pre_fec_ber;
        }
        return children.at("pre-fec-ber");
    }

    if(child_yang_name == "q")
    {
        if(q != nullptr)
        {
            children["q"] = q;
        }
        else
        {
            q = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::Q>();
            q->parent = this;
            children["q"] = q;
        }
        return children.at("q");
    }

    if(child_yang_name == "qmargin")
    {
        if(qmargin != nullptr)
        {
            children["qmargin"] = qmargin;
        }
        else
        {
            qmargin = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::Qmargin>();
            qmargin->parent = this;
            children["qmargin"] = qmargin;
        }
        return children.at("qmargin");
    }

    if(child_yang_name == "uc-words")
    {
        if(uc_words != nullptr)
        {
            children["uc-words"] = uc_words;
        }
        else
        {
            uc_words = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::UcWords>();
            uc_words->parent = this;
            children["uc-words"] = uc_words;
        }
        return children.at("uc-words");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::get_children()
{
    if(children.find("ec-bits") == children.end())
    {
        if(ec_bits != nullptr)
        {
            children["ec-bits"] = ec_bits;
        }
    }

    if(children.find("post-fec-ber") == children.end())
    {
        if(post_fec_ber != nullptr)
        {
            children["post-fec-ber"] = post_fec_ber;
        }
    }

    if(children.find("pre-fec-ber") == children.end())
    {
        if(pre_fec_ber != nullptr)
        {
            children["pre-fec-ber"] = pre_fec_ber;
        }
    }

    if(children.find("q") == children.end())
    {
        if(q != nullptr)
        {
            children["q"] = q;
        }
    }

    if(children.find("qmargin") == children.end())
    {
        if(qmargin != nullptr)
        {
            children["qmargin"] = qmargin;
        }
    }

    if(children.find("uc-words") == children.end())
    {
        if(uc_words != nullptr)
        {
            children["uc-words"] = uc_words;
        }
    }

    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time = value;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time = value;
    }
    if(value_path == "last-clear30-sec-time")
    {
        last_clear30_sec_time = value;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time = value;
    }
    if(value_path == "sec30-support")
    {
        sec30_support = value;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::EcBits::EcBits()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "ec-bits"; yang_parent_name = "optics-second30fec";
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::EcBits::~EcBits()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::EcBits::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::EcBits::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::EcBits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ec-bits";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::EcBits::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EcBits' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::EcBits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::EcBits::get_children()
{
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::EcBits::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::UcWords::UcWords()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "uc-words"; yang_parent_name = "optics-second30fec";
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::UcWords::~UcWords()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::UcWords::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::UcWords::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::UcWords::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uc-words";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::UcWords::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UcWords' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::UcWords::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::UcWords::get_children()
{
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::UcWords::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::PreFecBer::PreFecBer()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "pre-fec-ber"; yang_parent_name = "optics-second30fec";
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::PreFecBer::~PreFecBer()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::PreFecBer::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::PreFecBer::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::PreFecBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-fec-ber";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::PreFecBer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PreFecBer' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::PreFecBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::PreFecBer::get_children()
{
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::PreFecBer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::PostFecBer::PostFecBer()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "post-fec-ber"; yang_parent_name = "optics-second30fec";
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::PostFecBer::~PostFecBer()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::PostFecBer::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::PostFecBer::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::PostFecBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "post-fec-ber";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::PostFecBer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PostFecBer' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::PostFecBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::PostFecBer::get_children()
{
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::PostFecBer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::Q::Q()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "q"; yang_parent_name = "optics-second30fec";
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::Q::~Q()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::Q::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::Q::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::Q::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "q";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::Q::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Q' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::Q::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::Q::get_children()
{
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::Q::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::Qmargin::Qmargin()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "qmargin"; yang_parent_name = "optics-second30fec";
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::Qmargin::~Qmargin()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::Qmargin::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::Qmargin::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::Qmargin::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qmargin";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::Qmargin::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Qmargin' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::Qmargin::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::Qmargin::get_children()
{
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::Qmargin::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optics()
{
    yang_name = "optics-second30-optics"; yang_parent_name = "optics-second30";
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
    return is_set(operation);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-second30-optics";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OpticsSecond30Optics' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "optics-second30-optic")
    {
        for(auto const & c : optics_second30_optic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic>();
        c->parent = this;
        optics_second30_optic.push_back(std::move(c));
        children[segment_path] = optics_second30_optic.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::get_children()
{
    for (auto const & c : optics_second30_optic)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::OpticsSecond30Optic()
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
    cd(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Cd>())
	,center_wavelength(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::CenterWavelength>())
	,dgd(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Dgd>())
	,lbc(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Lbc>())
	,lbc_pc(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::LbcPc>())
	,low_sig_freq_off(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::LowSigFreqOff>())
	,opr(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Opr>())
	,opt(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Opt>())
	,osnr(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Osnr>())
	,pcr(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pcr>())
	,pdl(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pdl>())
	,pmd(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pmd>())
	,pn(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pn>())
	,rx_sig_pow(std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::RxSigPow>())
{
    cd->parent = this;
    children["cd"] = cd;

    center_wavelength->parent = this;
    children["center-wavelength"] = center_wavelength;

    dgd->parent = this;
    children["dgd"] = dgd;

    lbc->parent = this;
    children["lbc"] = lbc;

    lbc_pc->parent = this;
    children["lbc-pc"] = lbc_pc;

    low_sig_freq_off->parent = this;
    children["low-sig-freq-off"] = low_sig_freq_off;

    opr->parent = this;
    children["opr"] = opr;

    opt->parent = this;
    children["opt"] = opt;

    osnr->parent = this;
    children["osnr"] = osnr;

    pcr->parent = this;
    children["pcr"] = pcr;

    pdl->parent = this;
    children["pdl"] = pdl;

    pmd->parent = this;
    children["pmd"] = pmd;

    pn->parent = this;
    children["pn"] = pn;

    rx_sig_pow->parent = this;
    children["rx-sig-pow"] = rx_sig_pow;

    yang_name = "optics-second30-optic"; yang_parent_name = "optics-second30-optics";
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::~OpticsSecond30Optic()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::has_data() const
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
	|| (cd !=  nullptr && cd->has_data())
	|| (center_wavelength !=  nullptr && center_wavelength->has_data())
	|| (dgd !=  nullptr && dgd->has_data())
	|| (lbc !=  nullptr && lbc->has_data())
	|| (lbc_pc !=  nullptr && lbc_pc->has_data())
	|| (low_sig_freq_off !=  nullptr && low_sig_freq_off->has_data())
	|| (opr !=  nullptr && opr->has_data())
	|| (opt !=  nullptr && opt->has_data())
	|| (osnr !=  nullptr && osnr->has_data())
	|| (pcr !=  nullptr && pcr->has_data())
	|| (pdl !=  nullptr && pdl->has_data())
	|| (pmd !=  nullptr && pmd->has_data())
	|| (pn !=  nullptr && pn->has_data())
	|| (rx_sig_pow !=  nullptr && rx_sig_pow->has_data());
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| is_set(index_.operation)
	|| is_set(last_clear15_min_time.operation)
	|| is_set(last_clear24_hr_time.operation)
	|| is_set(last_clear30_sec_time.operation)
	|| is_set(last_clear_time.operation)
	|| is_set(sec30_support.operation)
	|| is_set(timestamp.operation)
	|| is_set(valid.operation)
	|| (cd !=  nullptr && cd->has_operation())
	|| (center_wavelength !=  nullptr && center_wavelength->has_operation())
	|| (dgd !=  nullptr && dgd->has_operation())
	|| (lbc !=  nullptr && lbc->has_operation())
	|| (lbc_pc !=  nullptr && lbc_pc->has_operation())
	|| (low_sig_freq_off !=  nullptr && low_sig_freq_off->has_operation())
	|| (opr !=  nullptr && opr->has_operation())
	|| (opt !=  nullptr && opt->has_operation())
	|| (osnr !=  nullptr && osnr->has_operation())
	|| (pcr !=  nullptr && pcr->has_operation())
	|| (pdl !=  nullptr && pdl->has_operation())
	|| (pmd !=  nullptr && pmd->has_operation())
	|| (pn !=  nullptr && pn->has_operation())
	|| (rx_sig_pow !=  nullptr && rx_sig_pow->has_operation());
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-second30-optic" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OpticsSecond30Optic' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (last_clear15_min_time.is_set || is_set(last_clear15_min_time.operation)) leaf_name_data.push_back(last_clear15_min_time.get_name_leafdata());
    if (last_clear24_hr_time.is_set || is_set(last_clear24_hr_time.operation)) leaf_name_data.push_back(last_clear24_hr_time.get_name_leafdata());
    if (last_clear30_sec_time.is_set || is_set(last_clear30_sec_time.operation)) leaf_name_data.push_back(last_clear30_sec_time.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.operation)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (sec30_support.is_set || is_set(sec30_support.operation)) leaf_name_data.push_back(sec30_support.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.operation)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "cd")
    {
        if(cd != nullptr)
        {
            children["cd"] = cd;
        }
        else
        {
            cd = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Cd>();
            cd->parent = this;
            children["cd"] = cd;
        }
        return children.at("cd");
    }

    if(child_yang_name == "center-wavelength")
    {
        if(center_wavelength != nullptr)
        {
            children["center-wavelength"] = center_wavelength;
        }
        else
        {
            center_wavelength = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::CenterWavelength>();
            center_wavelength->parent = this;
            children["center-wavelength"] = center_wavelength;
        }
        return children.at("center-wavelength");
    }

    if(child_yang_name == "dgd")
    {
        if(dgd != nullptr)
        {
            children["dgd"] = dgd;
        }
        else
        {
            dgd = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Dgd>();
            dgd->parent = this;
            children["dgd"] = dgd;
        }
        return children.at("dgd");
    }

    if(child_yang_name == "lbc")
    {
        if(lbc != nullptr)
        {
            children["lbc"] = lbc;
        }
        else
        {
            lbc = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Lbc>();
            lbc->parent = this;
            children["lbc"] = lbc;
        }
        return children.at("lbc");
    }

    if(child_yang_name == "lbc-pc")
    {
        if(lbc_pc != nullptr)
        {
            children["lbc-pc"] = lbc_pc;
        }
        else
        {
            lbc_pc = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::LbcPc>();
            lbc_pc->parent = this;
            children["lbc-pc"] = lbc_pc;
        }
        return children.at("lbc-pc");
    }

    if(child_yang_name == "low-sig-freq-off")
    {
        if(low_sig_freq_off != nullptr)
        {
            children["low-sig-freq-off"] = low_sig_freq_off;
        }
        else
        {
            low_sig_freq_off = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::LowSigFreqOff>();
            low_sig_freq_off->parent = this;
            children["low-sig-freq-off"] = low_sig_freq_off;
        }
        return children.at("low-sig-freq-off");
    }

    if(child_yang_name == "opr")
    {
        if(opr != nullptr)
        {
            children["opr"] = opr;
        }
        else
        {
            opr = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Opr>();
            opr->parent = this;
            children["opr"] = opr;
        }
        return children.at("opr");
    }

    if(child_yang_name == "opt")
    {
        if(opt != nullptr)
        {
            children["opt"] = opt;
        }
        else
        {
            opt = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Opt>();
            opt->parent = this;
            children["opt"] = opt;
        }
        return children.at("opt");
    }

    if(child_yang_name == "osnr")
    {
        if(osnr != nullptr)
        {
            children["osnr"] = osnr;
        }
        else
        {
            osnr = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Osnr>();
            osnr->parent = this;
            children["osnr"] = osnr;
        }
        return children.at("osnr");
    }

    if(child_yang_name == "pcr")
    {
        if(pcr != nullptr)
        {
            children["pcr"] = pcr;
        }
        else
        {
            pcr = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pcr>();
            pcr->parent = this;
            children["pcr"] = pcr;
        }
        return children.at("pcr");
    }

    if(child_yang_name == "pdl")
    {
        if(pdl != nullptr)
        {
            children["pdl"] = pdl;
        }
        else
        {
            pdl = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pdl>();
            pdl->parent = this;
            children["pdl"] = pdl;
        }
        return children.at("pdl");
    }

    if(child_yang_name == "pmd")
    {
        if(pmd != nullptr)
        {
            children["pmd"] = pmd;
        }
        else
        {
            pmd = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pmd>();
            pmd->parent = this;
            children["pmd"] = pmd;
        }
        return children.at("pmd");
    }

    if(child_yang_name == "pn")
    {
        if(pn != nullptr)
        {
            children["pn"] = pn;
        }
        else
        {
            pn = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pn>();
            pn->parent = this;
            children["pn"] = pn;
        }
        return children.at("pn");
    }

    if(child_yang_name == "rx-sig-pow")
    {
        if(rx_sig_pow != nullptr)
        {
            children["rx-sig-pow"] = rx_sig_pow;
        }
        else
        {
            rx_sig_pow = std::make_shared<PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::RxSigPow>();
            rx_sig_pow->parent = this;
            children["rx-sig-pow"] = rx_sig_pow;
        }
        return children.at("rx-sig-pow");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::get_children()
{
    if(children.find("cd") == children.end())
    {
        if(cd != nullptr)
        {
            children["cd"] = cd;
        }
    }

    if(children.find("center-wavelength") == children.end())
    {
        if(center_wavelength != nullptr)
        {
            children["center-wavelength"] = center_wavelength;
        }
    }

    if(children.find("dgd") == children.end())
    {
        if(dgd != nullptr)
        {
            children["dgd"] = dgd;
        }
    }

    if(children.find("lbc") == children.end())
    {
        if(lbc != nullptr)
        {
            children["lbc"] = lbc;
        }
    }

    if(children.find("lbc-pc") == children.end())
    {
        if(lbc_pc != nullptr)
        {
            children["lbc-pc"] = lbc_pc;
        }
    }

    if(children.find("low-sig-freq-off") == children.end())
    {
        if(low_sig_freq_off != nullptr)
        {
            children["low-sig-freq-off"] = low_sig_freq_off;
        }
    }

    if(children.find("opr") == children.end())
    {
        if(opr != nullptr)
        {
            children["opr"] = opr;
        }
    }

    if(children.find("opt") == children.end())
    {
        if(opt != nullptr)
        {
            children["opt"] = opt;
        }
    }

    if(children.find("osnr") == children.end())
    {
        if(osnr != nullptr)
        {
            children["osnr"] = osnr;
        }
    }

    if(children.find("pcr") == children.end())
    {
        if(pcr != nullptr)
        {
            children["pcr"] = pcr;
        }
    }

    if(children.find("pdl") == children.end())
    {
        if(pdl != nullptr)
        {
            children["pdl"] = pdl;
        }
    }

    if(children.find("pmd") == children.end())
    {
        if(pmd != nullptr)
        {
            children["pmd"] = pmd;
        }
    }

    if(children.find("pn") == children.end())
    {
        if(pn != nullptr)
        {
            children["pn"] = pn;
        }
    }

    if(children.find("rx-sig-pow") == children.end())
    {
        if(rx_sig_pow != nullptr)
        {
            children["rx-sig-pow"] = rx_sig_pow;
        }
    }

    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time = value;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time = value;
    }
    if(value_path == "last-clear30-sec-time")
    {
        last_clear30_sec_time = value;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time = value;
    }
    if(value_path == "sec30-support")
    {
        sec30_support = value;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Lbc::Lbc()
    :
    average{YType::int32, "average"},
    maximum{YType::int32, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::int32, "maximum-threshold"},
    minimum{YType::int32, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::int32, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "lbc"; yang_parent_name = "optics-second30-optic";
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Lbc::~Lbc()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Lbc::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Lbc::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Lbc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lbc";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Lbc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lbc' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Lbc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Lbc::get_children()
{
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Lbc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::LbcPc::LbcPc()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "lbc-pc"; yang_parent_name = "optics-second30-optic";
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::LbcPc::~LbcPc()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::LbcPc::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::LbcPc::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::LbcPc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lbc-pc";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::LbcPc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LbcPc' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::LbcPc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::LbcPc::get_children()
{
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::LbcPc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Opt::Opt()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "opt"; yang_parent_name = "optics-second30-optic";
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Opt::~Opt()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Opt::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Opt::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Opt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opt";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Opt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Opt' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Opt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Opt::get_children()
{
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Opt::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Opr::Opr()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "opr"; yang_parent_name = "optics-second30-optic";
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Opr::~Opr()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Opr::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Opr::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Opr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opr";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Opr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Opr' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Opr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Opr::get_children()
{
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Opr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Cd::Cd()
    :
    average{YType::int32, "average"},
    maximum{YType::int32, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::int32, "maximum-threshold"},
    minimum{YType::int32, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::int32, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "cd"; yang_parent_name = "optics-second30-optic";
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Cd::~Cd()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Cd::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Cd::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Cd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cd";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Cd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cd' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Cd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Cd::get_children()
{
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Cd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Dgd::Dgd()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "dgd"; yang_parent_name = "optics-second30-optic";
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Dgd::~Dgd()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Dgd::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Dgd::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Dgd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dgd";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Dgd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dgd' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Dgd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Dgd::get_children()
{
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Dgd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pmd::Pmd()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "pmd"; yang_parent_name = "optics-second30-optic";
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pmd::~Pmd()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pmd::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pmd::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pmd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmd";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pmd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pmd' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pmd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pmd::get_children()
{
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pmd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Osnr::Osnr()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "osnr"; yang_parent_name = "optics-second30-optic";
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Osnr::~Osnr()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Osnr::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Osnr::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Osnr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "osnr";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Osnr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Osnr' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Osnr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Osnr::get_children()
{
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Osnr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::CenterWavelength::CenterWavelength()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "center-wavelength"; yang_parent_name = "optics-second30-optic";
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::CenterWavelength::~CenterWavelength()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::CenterWavelength::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::CenterWavelength::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::CenterWavelength::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "center-wavelength";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::CenterWavelength::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CenterWavelength' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::CenterWavelength::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::CenterWavelength::get_children()
{
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::CenterWavelength::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pdl::Pdl()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "pdl"; yang_parent_name = "optics-second30-optic";
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pdl::~Pdl()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pdl::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pdl::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pdl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pdl";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pdl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pdl' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pdl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pdl::get_children()
{
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pdl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pcr::Pcr()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "pcr"; yang_parent_name = "optics-second30-optic";
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pcr::~Pcr()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pcr::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pcr::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pcr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pcr";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pcr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pcr' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pcr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pcr::get_children()
{
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pcr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pn::Pn()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "pn"; yang_parent_name = "optics-second30-optic";
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pn::~Pn()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pn::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pn::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pn";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pn' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pn::get_children()
{
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::RxSigPow::RxSigPow()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "rx-sig-pow"; yang_parent_name = "optics-second30-optic";
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::RxSigPow::~RxSigPow()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::RxSigPow::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::RxSigPow::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::RxSigPow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-sig-pow";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::RxSigPow::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RxSigPow' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::RxSigPow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::RxSigPow::get_children()
{
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::RxSigPow::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::LowSigFreqOff::LowSigFreqOff()
    :
    average{YType::int32, "average"},
    maximum{YType::int32, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::int32, "maximum-threshold"},
    minimum{YType::int32, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::int32, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "low-sig-freq-off"; yang_parent_name = "optics-second30-optic";
}

PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::LowSigFreqOff::~LowSigFreqOff()
{
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::LowSigFreqOff::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::LowSigFreqOff::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::LowSigFreqOff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "low-sig-freq-off";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::LowSigFreqOff::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LowSigFreqOff' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::LowSigFreqOff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::LowSigFreqOff::get_children()
{
    return children;
}

void PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::LowSigFreqOff::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Sts::Sts()
    :
    sts_ports(std::make_shared<PerformanceManagement::Sts::StsPorts>())
{
    sts_ports->parent = this;
    children["sts-ports"] = sts_ports;

    yang_name = "sts"; yang_parent_name = "performance-management";
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
    return is_set(operation)
	|| (sts_ports !=  nullptr && sts_ports->has_operation());
}

std::string PerformanceManagement::Sts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sts";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Sts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Sts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sts-ports")
    {
        if(sts_ports != nullptr)
        {
            children["sts-ports"] = sts_ports;
        }
        else
        {
            sts_ports = std::make_shared<PerformanceManagement::Sts::StsPorts>();
            sts_ports->parent = this;
            children["sts-ports"] = sts_ports;
        }
        return children.at("sts-ports");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Sts::get_children()
{
    if(children.find("sts-ports") == children.end())
    {
        if(sts_ports != nullptr)
        {
            children["sts-ports"] = sts_ports;
        }
    }

    return children;
}

void PerformanceManagement::Sts::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Sts::StsPorts::StsPorts()
{
    yang_name = "sts-ports"; yang_parent_name = "sts";
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
    return is_set(operation);
}

std::string PerformanceManagement::Sts::StsPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sts-ports";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Sts::StsPorts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management/sts/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Sts::StsPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sts-port")
    {
        for(auto const & c : sts_port)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PerformanceManagement::Sts::StsPorts::StsPort>();
        c->parent = this;
        sts_port.push_back(std::move(c));
        children[segment_path] = sts_port.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Sts::StsPorts::get_children()
{
    for (auto const & c : sts_port)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PerformanceManagement::Sts::StsPorts::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Sts::StsPorts::StsPort::StsPort()
    :
    name{YType::str, "name"}
    	,
    sts_current(std::make_shared<PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent>())
{
    sts_current->parent = this;
    children["sts-current"] = sts_current;

    yang_name = "sts-port"; yang_parent_name = "sts-ports";
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
    return is_set(operation)
	|| is_set(name.operation)
	|| (sts_current !=  nullptr && sts_current->has_operation());
}

std::string PerformanceManagement::Sts::StsPorts::StsPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sts-port" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Sts::StsPorts::StsPort::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management/sts/sts-ports/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Sts::StsPorts::StsPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sts-current")
    {
        if(sts_current != nullptr)
        {
            children["sts-current"] = sts_current;
        }
        else
        {
            sts_current = std::make_shared<PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent>();
            sts_current->parent = this;
            children["sts-current"] = sts_current;
        }
        return children.at("sts-current");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Sts::StsPorts::StsPort::get_children()
{
    if(children.find("sts-current") == children.end())
    {
        if(sts_current != nullptr)
        {
            children["sts-current"] = sts_current;
        }
    }

    return children;
}

void PerformanceManagement::Sts::StsPorts::StsPort::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsCurrent()
    :
    sts_hour24(std::make_shared<PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24>())
	,sts_minute15(std::make_shared<PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15>())
{
    sts_hour24->parent = this;
    children["sts-hour24"] = sts_hour24;

    sts_minute15->parent = this;
    children["sts-minute15"] = sts_minute15;

    yang_name = "sts-current"; yang_parent_name = "sts-port";
}

PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::~StsCurrent()
{
}

bool PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::has_data() const
{
    return (sts_hour24 !=  nullptr && sts_hour24->has_data())
	|| (sts_minute15 !=  nullptr && sts_minute15->has_data());
}

bool PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::has_operation() const
{
    return is_set(operation)
	|| (sts_hour24 !=  nullptr && sts_hour24->has_operation())
	|| (sts_minute15 !=  nullptr && sts_minute15->has_operation());
}

std::string PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sts-current";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StsCurrent' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sts-hour24")
    {
        if(sts_hour24 != nullptr)
        {
            children["sts-hour24"] = sts_hour24;
        }
        else
        {
            sts_hour24 = std::make_shared<PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24>();
            sts_hour24->parent = this;
            children["sts-hour24"] = sts_hour24;
        }
        return children.at("sts-hour24");
    }

    if(child_yang_name == "sts-minute15")
    {
        if(sts_minute15 != nullptr)
        {
            children["sts-minute15"] = sts_minute15;
        }
        else
        {
            sts_minute15 = std::make_shared<PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15>();
            sts_minute15->parent = this;
            children["sts-minute15"] = sts_minute15;
        }
        return children.at("sts-minute15");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::get_children()
{
    if(children.find("sts-hour24") == children.end())
    {
        if(sts_hour24 != nullptr)
        {
            children["sts-hour24"] = sts_hour24;
        }
    }

    if(children.find("sts-minute15") == children.end())
    {
        if(sts_minute15 != nullptr)
        {
            children["sts-minute15"] = sts_minute15;
        }
    }

    return children;
}

void PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15()
    :
    sts_minute15_paths(std::make_shared<PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths>())
{
    sts_minute15_paths->parent = this;
    children["sts-minute15-paths"] = sts_minute15_paths;

    yang_name = "sts-minute15"; yang_parent_name = "sts-current";
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
    return is_set(operation)
	|| (sts_minute15_paths !=  nullptr && sts_minute15_paths->has_operation());
}

std::string PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sts-minute15";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StsMinute15' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sts-minute15-paths")
    {
        if(sts_minute15_paths != nullptr)
        {
            children["sts-minute15-paths"] = sts_minute15_paths;
        }
        else
        {
            sts_minute15_paths = std::make_shared<PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths>();
            sts_minute15_paths->parent = this;
            children["sts-minute15-paths"] = sts_minute15_paths;
        }
        return children.at("sts-minute15-paths");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::get_children()
{
    if(children.find("sts-minute15-paths") == children.end())
    {
        if(sts_minute15_paths != nullptr)
        {
            children["sts-minute15-paths"] = sts_minute15_paths;
        }
    }

    return children;
}

void PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Paths()
{
    yang_name = "sts-minute15-paths"; yang_parent_name = "sts-minute15";
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
    return is_set(operation);
}

std::string PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sts-minute15-paths";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StsMinute15Paths' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sts-minute15-path")
    {
        for(auto const & c : sts_minute15_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path>();
        c->parent = this;
        sts_minute15_path.push_back(std::move(c));
        children[segment_path] = sts_minute15_path.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::get_children()
{
    for (auto const & c : sts_minute15_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::StsMinute15Path()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    last_clear_time{YType::str, "last-clear-time"},
    timestamp{YType::str, "timestamp"},
    valid{YType::boolean, "valid"}
    	,
    fe_path(std::make_shared<PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::FePath>())
	,path(std::make_shared<PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path>())
{
    fe_path->parent = this;
    children["fe-path"] = fe_path;

    path->parent = this;
    children["path"] = path;

    yang_name = "sts-minute15-path"; yang_parent_name = "sts-minute15-paths";
}

PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::~StsMinute15Path()
{
}

bool PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::has_data() const
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

bool PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| is_set(index_.operation)
	|| is_set(last_clear15_min_time.operation)
	|| is_set(last_clear24_hr_time.operation)
	|| is_set(last_clear_time.operation)
	|| is_set(timestamp.operation)
	|| is_set(valid.operation)
	|| (fe_path !=  nullptr && fe_path->has_operation())
	|| (path !=  nullptr && path->has_operation());
}

std::string PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sts-minute15-path" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StsMinute15Path' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (last_clear15_min_time.is_set || is_set(last_clear15_min_time.operation)) leaf_name_data.push_back(last_clear15_min_time.get_name_leafdata());
    if (last_clear24_hr_time.is_set || is_set(last_clear24_hr_time.operation)) leaf_name_data.push_back(last_clear24_hr_time.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.operation)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.operation)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "fe-path")
    {
        if(fe_path != nullptr)
        {
            children["fe-path"] = fe_path;
        }
        else
        {
            fe_path = std::make_shared<PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::FePath>();
            fe_path->parent = this;
            children["fe-path"] = fe_path;
        }
        return children.at("fe-path");
    }

    if(child_yang_name == "path")
    {
        if(path != nullptr)
        {
            children["path"] = path;
        }
        else
        {
            path = std::make_shared<PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path>();
            path->parent = this;
            children["path"] = path;
        }
        return children.at("path");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::get_children()
{
    if(children.find("fe-path") == children.end())
    {
        if(fe_path != nullptr)
        {
            children["fe-path"] = fe_path;
        }
    }

    if(children.find("path") == children.end())
    {
        if(path != nullptr)
        {
            children["path"] = path;
        }
    }

    return children;
}

void PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time = value;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time = value;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time = value;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::Path()
    :
    path_status{YType::int32, "path-status"},
    path_width{YType::enumeration, "path-width"}
    	,
    path_c_vs(std::make_shared<PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathCVs>())
	,path_e_ss(std::make_shared<PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathESs>())
	,path_se_ss(std::make_shared<PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathSeSs>())
	,path_ua_ss(std::make_shared<PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathUaSs>())
{
    path_c_vs->parent = this;
    children["path-c-vs"] = path_c_vs;

    path_e_ss->parent = this;
    children["path-e-ss"] = path_e_ss;

    path_se_ss->parent = this;
    children["path-se-ss"] = path_se_ss;

    path_ua_ss->parent = this;
    children["path-ua-ss"] = path_ua_ss;

    yang_name = "path"; yang_parent_name = "sts-minute15-path";
}

PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::~Path()
{
}

bool PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::has_data() const
{
    return path_status.is_set
	|| path_width.is_set
	|| (path_c_vs !=  nullptr && path_c_vs->has_data())
	|| (path_e_ss !=  nullptr && path_e_ss->has_data())
	|| (path_se_ss !=  nullptr && path_se_ss->has_data())
	|| (path_ua_ss !=  nullptr && path_ua_ss->has_data());
}

bool PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::has_operation() const
{
    return is_set(operation)
	|| is_set(path_status.operation)
	|| is_set(path_width.operation)
	|| (path_c_vs !=  nullptr && path_c_vs->has_operation())
	|| (path_e_ss !=  nullptr && path_e_ss->has_operation())
	|| (path_se_ss !=  nullptr && path_se_ss->has_operation())
	|| (path_ua_ss !=  nullptr && path_ua_ss->has_operation());
}

std::string PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Path' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_status.is_set || is_set(path_status.operation)) leaf_name_data.push_back(path_status.get_name_leafdata());
    if (path_width.is_set || is_set(path_width.operation)) leaf_name_data.push_back(path_width.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "path-c-vs")
    {
        if(path_c_vs != nullptr)
        {
            children["path-c-vs"] = path_c_vs;
        }
        else
        {
            path_c_vs = std::make_shared<PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathCVs>();
            path_c_vs->parent = this;
            children["path-c-vs"] = path_c_vs;
        }
        return children.at("path-c-vs");
    }

    if(child_yang_name == "path-e-ss")
    {
        if(path_e_ss != nullptr)
        {
            children["path-e-ss"] = path_e_ss;
        }
        else
        {
            path_e_ss = std::make_shared<PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathESs>();
            path_e_ss->parent = this;
            children["path-e-ss"] = path_e_ss;
        }
        return children.at("path-e-ss");
    }

    if(child_yang_name == "path-se-ss")
    {
        if(path_se_ss != nullptr)
        {
            children["path-se-ss"] = path_se_ss;
        }
        else
        {
            path_se_ss = std::make_shared<PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathSeSs>();
            path_se_ss->parent = this;
            children["path-se-ss"] = path_se_ss;
        }
        return children.at("path-se-ss");
    }

    if(child_yang_name == "path-ua-ss")
    {
        if(path_ua_ss != nullptr)
        {
            children["path-ua-ss"] = path_ua_ss;
        }
        else
        {
            path_ua_ss = std::make_shared<PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathUaSs>();
            path_ua_ss->parent = this;
            children["path-ua-ss"] = path_ua_ss;
        }
        return children.at("path-ua-ss");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::get_children()
{
    if(children.find("path-c-vs") == children.end())
    {
        if(path_c_vs != nullptr)
        {
            children["path-c-vs"] = path_c_vs;
        }
    }

    if(children.find("path-e-ss") == children.end())
    {
        if(path_e_ss != nullptr)
        {
            children["path-e-ss"] = path_e_ss;
        }
    }

    if(children.find("path-se-ss") == children.end())
    {
        if(path_se_ss != nullptr)
        {
            children["path-se-ss"] = path_se_ss;
        }
    }

    if(children.find("path-ua-ss") == children.end())
    {
        if(path_ua_ss != nullptr)
        {
            children["path-ua-ss"] = path_ua_ss;
        }
    }

    return children;
}

void PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "path-status")
    {
        path_status = value;
    }
    if(value_path == "path-width")
    {
        path_width = value;
    }
}

PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathESs::PathESs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "path-e-ss"; yang_parent_name = "path";
}

PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathESs::~PathESs()
{
}

bool PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathESs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathESs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-e-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathESs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathESs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathESs::get_children()
{
    return children;
}

void PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathESs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathSeSs::PathSeSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "path-se-ss"; yang_parent_name = "path";
}

PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathSeSs::~PathSeSs()
{
}

bool PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathSeSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathSeSs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-se-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathSeSs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathSeSs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathSeSs::get_children()
{
    return children;
}

void PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathSeSs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathCVs::PathCVs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "path-c-vs"; yang_parent_name = "path";
}

PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathCVs::~PathCVs()
{
}

bool PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathCVs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathCVs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathCVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-c-vs";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathCVs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathCVs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathCVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathCVs::get_children()
{
    return children;
}

void PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathCVs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathUaSs::PathUaSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "path-ua-ss"; yang_parent_name = "path";
}

PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathUaSs::~PathUaSs()
{
}

bool PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathUaSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathUaSs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathUaSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-ua-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathUaSs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathUaSs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathUaSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathUaSs::get_children()
{
    return children;
}

void PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathUaSs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::FePath::FePath()
    :
    far_end_path_c_vs{YType::uint32, "far-end-path-c-vs"},
    far_end_path_e_ss{YType::uint32, "far-end-path-e-ss"},
    far_end_path_se_ss{YType::uint32, "far-end-path-se-ss"},
    far_end_path_ua_ss{YType::uint32, "far-end-path-ua-ss"}
{
    yang_name = "fe-path"; yang_parent_name = "sts-minute15-path";
}

PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::FePath::~FePath()
{
}

bool PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::FePath::has_data() const
{
    return far_end_path_c_vs.is_set
	|| far_end_path_e_ss.is_set
	|| far_end_path_se_ss.is_set
	|| far_end_path_ua_ss.is_set;
}

bool PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::FePath::has_operation() const
{
    return is_set(operation)
	|| is_set(far_end_path_c_vs.operation)
	|| is_set(far_end_path_e_ss.operation)
	|| is_set(far_end_path_se_ss.operation)
	|| is_set(far_end_path_ua_ss.operation);
}

std::string PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::FePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fe-path";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::FePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FePath' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (far_end_path_c_vs.is_set || is_set(far_end_path_c_vs.operation)) leaf_name_data.push_back(far_end_path_c_vs.get_name_leafdata());
    if (far_end_path_e_ss.is_set || is_set(far_end_path_e_ss.operation)) leaf_name_data.push_back(far_end_path_e_ss.get_name_leafdata());
    if (far_end_path_se_ss.is_set || is_set(far_end_path_se_ss.operation)) leaf_name_data.push_back(far_end_path_se_ss.get_name_leafdata());
    if (far_end_path_ua_ss.is_set || is_set(far_end_path_ua_ss.operation)) leaf_name_data.push_back(far_end_path_ua_ss.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::FePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::FePath::get_children()
{
    return children;
}

void PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::FePath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "far-end-path-c-vs")
    {
        far_end_path_c_vs = value;
    }
    if(value_path == "far-end-path-e-ss")
    {
        far_end_path_e_ss = value;
    }
    if(value_path == "far-end-path-se-ss")
    {
        far_end_path_se_ss = value;
    }
    if(value_path == "far-end-path-ua-ss")
    {
        far_end_path_ua_ss = value;
    }
}

PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24()
    :
    sts_hour24_paths(std::make_shared<PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths>())
{
    sts_hour24_paths->parent = this;
    children["sts-hour24-paths"] = sts_hour24_paths;

    yang_name = "sts-hour24"; yang_parent_name = "sts-current";
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
    return is_set(operation)
	|| (sts_hour24_paths !=  nullptr && sts_hour24_paths->has_operation());
}

std::string PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sts-hour24";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StsHour24' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sts-hour24-paths")
    {
        if(sts_hour24_paths != nullptr)
        {
            children["sts-hour24-paths"] = sts_hour24_paths;
        }
        else
        {
            sts_hour24_paths = std::make_shared<PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths>();
            sts_hour24_paths->parent = this;
            children["sts-hour24-paths"] = sts_hour24_paths;
        }
        return children.at("sts-hour24-paths");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::get_children()
{
    if(children.find("sts-hour24-paths") == children.end())
    {
        if(sts_hour24_paths != nullptr)
        {
            children["sts-hour24-paths"] = sts_hour24_paths;
        }
    }

    return children;
}

void PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Paths()
{
    yang_name = "sts-hour24-paths"; yang_parent_name = "sts-hour24";
}

PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::~StsHour24Paths()
{
}

bool PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::has_data() const
{
    for (std::size_t index=0; index<sts_hour24_path.size(); index++)
    {
        if(sts_hour24_path[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::has_operation() const
{
    for (std::size_t index=0; index<sts_hour24_path.size(); index++)
    {
        if(sts_hour24_path[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sts-hour24-paths";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StsHour24Paths' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sts-hour24-path")
    {
        for(auto const & c : sts_hour24_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path>();
        c->parent = this;
        sts_hour24_path.push_back(std::move(c));
        children[segment_path] = sts_hour24_path.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::get_children()
{
    for (auto const & c : sts_hour24_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::StsHour24Path()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    last_clear_time{YType::str, "last-clear-time"},
    timestamp{YType::str, "timestamp"},
    valid{YType::boolean, "valid"}
    	,
    fe_path(std::make_shared<PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::FePath>())
	,path(std::make_shared<PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::Path>())
{
    fe_path->parent = this;
    children["fe-path"] = fe_path;

    path->parent = this;
    children["path"] = path;

    yang_name = "sts-hour24-path"; yang_parent_name = "sts-hour24-paths";
}

PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::~StsHour24Path()
{
}

bool PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::has_data() const
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

bool PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| is_set(index_.operation)
	|| is_set(last_clear15_min_time.operation)
	|| is_set(last_clear24_hr_time.operation)
	|| is_set(last_clear_time.operation)
	|| is_set(timestamp.operation)
	|| is_set(valid.operation)
	|| (fe_path !=  nullptr && fe_path->has_operation())
	|| (path !=  nullptr && path->has_operation());
}

std::string PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sts-hour24-path" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StsHour24Path' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (last_clear15_min_time.is_set || is_set(last_clear15_min_time.operation)) leaf_name_data.push_back(last_clear15_min_time.get_name_leafdata());
    if (last_clear24_hr_time.is_set || is_set(last_clear24_hr_time.operation)) leaf_name_data.push_back(last_clear24_hr_time.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.operation)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.operation)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "fe-path")
    {
        if(fe_path != nullptr)
        {
            children["fe-path"] = fe_path;
        }
        else
        {
            fe_path = std::make_shared<PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::FePath>();
            fe_path->parent = this;
            children["fe-path"] = fe_path;
        }
        return children.at("fe-path");
    }

    if(child_yang_name == "path")
    {
        if(path != nullptr)
        {
            children["path"] = path;
        }
        else
        {
            path = std::make_shared<PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::Path>();
            path->parent = this;
            children["path"] = path;
        }
        return children.at("path");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::get_children()
{
    if(children.find("fe-path") == children.end())
    {
        if(fe_path != nullptr)
        {
            children["fe-path"] = fe_path;
        }
    }

    if(children.find("path") == children.end())
    {
        if(path != nullptr)
        {
            children["path"] = path;
        }
    }

    return children;
}

void PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time = value;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time = value;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time = value;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::Path::Path()
    :
    path_status{YType::int32, "path-status"},
    path_width{YType::enumeration, "path-width"}
    	,
    path_c_vs(std::make_shared<PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::Path::PathCVs>())
	,path_e_ss(std::make_shared<PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::Path::PathESs>())
	,path_se_ss(std::make_shared<PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::Path::PathSeSs>())
	,path_ua_ss(std::make_shared<PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::Path::PathUaSs>())
{
    path_c_vs->parent = this;
    children["path-c-vs"] = path_c_vs;

    path_e_ss->parent = this;
    children["path-e-ss"] = path_e_ss;

    path_se_ss->parent = this;
    children["path-se-ss"] = path_se_ss;

    path_ua_ss->parent = this;
    children["path-ua-ss"] = path_ua_ss;

    yang_name = "path"; yang_parent_name = "sts-hour24-path";
}

PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::Path::~Path()
{
}

bool PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::Path::has_data() const
{
    return path_status.is_set
	|| path_width.is_set
	|| (path_c_vs !=  nullptr && path_c_vs->has_data())
	|| (path_e_ss !=  nullptr && path_e_ss->has_data())
	|| (path_se_ss !=  nullptr && path_se_ss->has_data())
	|| (path_ua_ss !=  nullptr && path_ua_ss->has_data());
}

bool PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::Path::has_operation() const
{
    return is_set(operation)
	|| is_set(path_status.operation)
	|| is_set(path_width.operation)
	|| (path_c_vs !=  nullptr && path_c_vs->has_operation())
	|| (path_e_ss !=  nullptr && path_e_ss->has_operation())
	|| (path_se_ss !=  nullptr && path_se_ss->has_operation())
	|| (path_ua_ss !=  nullptr && path_ua_ss->has_operation());
}

std::string PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::Path::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Path' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_status.is_set || is_set(path_status.operation)) leaf_name_data.push_back(path_status.get_name_leafdata());
    if (path_width.is_set || is_set(path_width.operation)) leaf_name_data.push_back(path_width.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "path-c-vs")
    {
        if(path_c_vs != nullptr)
        {
            children["path-c-vs"] = path_c_vs;
        }
        else
        {
            path_c_vs = std::make_shared<PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::Path::PathCVs>();
            path_c_vs->parent = this;
            children["path-c-vs"] = path_c_vs;
        }
        return children.at("path-c-vs");
    }

    if(child_yang_name == "path-e-ss")
    {
        if(path_e_ss != nullptr)
        {
            children["path-e-ss"] = path_e_ss;
        }
        else
        {
            path_e_ss = std::make_shared<PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::Path::PathESs>();
            path_e_ss->parent = this;
            children["path-e-ss"] = path_e_ss;
        }
        return children.at("path-e-ss");
    }

    if(child_yang_name == "path-se-ss")
    {
        if(path_se_ss != nullptr)
        {
            children["path-se-ss"] = path_se_ss;
        }
        else
        {
            path_se_ss = std::make_shared<PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::Path::PathSeSs>();
            path_se_ss->parent = this;
            children["path-se-ss"] = path_se_ss;
        }
        return children.at("path-se-ss");
    }

    if(child_yang_name == "path-ua-ss")
    {
        if(path_ua_ss != nullptr)
        {
            children["path-ua-ss"] = path_ua_ss;
        }
        else
        {
            path_ua_ss = std::make_shared<PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::Path::PathUaSs>();
            path_ua_ss->parent = this;
            children["path-ua-ss"] = path_ua_ss;
        }
        return children.at("path-ua-ss");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::Path::get_children()
{
    if(children.find("path-c-vs") == children.end())
    {
        if(path_c_vs != nullptr)
        {
            children["path-c-vs"] = path_c_vs;
        }
    }

    if(children.find("path-e-ss") == children.end())
    {
        if(path_e_ss != nullptr)
        {
            children["path-e-ss"] = path_e_ss;
        }
    }

    if(children.find("path-se-ss") == children.end())
    {
        if(path_se_ss != nullptr)
        {
            children["path-se-ss"] = path_se_ss;
        }
    }

    if(children.find("path-ua-ss") == children.end())
    {
        if(path_ua_ss != nullptr)
        {
            children["path-ua-ss"] = path_ua_ss;
        }
    }

    return children;
}

void PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::Path::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "path-status")
    {
        path_status = value;
    }
    if(value_path == "path-width")
    {
        path_width = value;
    }
}

PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::Path::PathESs::PathESs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "path-e-ss"; yang_parent_name = "path";
}

PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::Path::PathESs::~PathESs()
{
}

bool PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::Path::PathESs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::Path::PathESs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::Path::PathESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-e-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::Path::PathESs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathESs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::Path::PathESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::Path::PathESs::get_children()
{
    return children;
}

void PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::Path::PathESs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::Path::PathSeSs::PathSeSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "path-se-ss"; yang_parent_name = "path";
}

PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::Path::PathSeSs::~PathSeSs()
{
}

bool PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::Path::PathSeSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::Path::PathSeSs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::Path::PathSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-se-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::Path::PathSeSs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathSeSs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::Path::PathSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::Path::PathSeSs::get_children()
{
    return children;
}

void PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::Path::PathSeSs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::Path::PathCVs::PathCVs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "path-c-vs"; yang_parent_name = "path";
}

PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::Path::PathCVs::~PathCVs()
{
}

bool PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::Path::PathCVs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::Path::PathCVs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::Path::PathCVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-c-vs";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::Path::PathCVs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathCVs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::Path::PathCVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::Path::PathCVs::get_children()
{
    return children;
}

void PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::Path::PathCVs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::Path::PathUaSs::PathUaSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "path-ua-ss"; yang_parent_name = "path";
}

PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::Path::PathUaSs::~PathUaSs()
{
}

bool PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::Path::PathUaSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::Path::PathUaSs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::Path::PathUaSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-ua-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::Path::PathUaSs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathUaSs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::Path::PathUaSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::Path::PathUaSs::get_children()
{
    return children;
}

void PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::Path::PathUaSs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::FePath::FePath()
    :
    far_end_path_c_vs{YType::uint32, "far-end-path-c-vs"},
    far_end_path_e_ss{YType::uint32, "far-end-path-e-ss"},
    far_end_path_se_ss{YType::uint32, "far-end-path-se-ss"},
    far_end_path_ua_ss{YType::uint32, "far-end-path-ua-ss"}
{
    yang_name = "fe-path"; yang_parent_name = "sts-hour24-path";
}

PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::FePath::~FePath()
{
}

bool PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::FePath::has_data() const
{
    return far_end_path_c_vs.is_set
	|| far_end_path_e_ss.is_set
	|| far_end_path_se_ss.is_set
	|| far_end_path_ua_ss.is_set;
}

bool PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::FePath::has_operation() const
{
    return is_set(operation)
	|| is_set(far_end_path_c_vs.operation)
	|| is_set(far_end_path_e_ss.operation)
	|| is_set(far_end_path_se_ss.operation)
	|| is_set(far_end_path_ua_ss.operation);
}

std::string PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::FePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fe-path";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::FePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FePath' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (far_end_path_c_vs.is_set || is_set(far_end_path_c_vs.operation)) leaf_name_data.push_back(far_end_path_c_vs.get_name_leafdata());
    if (far_end_path_e_ss.is_set || is_set(far_end_path_e_ss.operation)) leaf_name_data.push_back(far_end_path_e_ss.get_name_leafdata());
    if (far_end_path_se_ss.is_set || is_set(far_end_path_se_ss.operation)) leaf_name_data.push_back(far_end_path_se_ss.get_name_leafdata());
    if (far_end_path_ua_ss.is_set || is_set(far_end_path_ua_ss.operation)) leaf_name_data.push_back(far_end_path_ua_ss.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::FePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::FePath::get_children()
{
    return children;
}

void PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::FePath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "far-end-path-c-vs")
    {
        far_end_path_c_vs = value;
    }
    if(value_path == "far-end-path-e-ss")
    {
        far_end_path_e_ss = value;
    }
    if(value_path == "far-end-path-se-ss")
    {
        far_end_path_se_ss = value;
    }
    if(value_path == "far-end-path-ua-ss")
    {
        far_end_path_ua_ss = value;
    }
}

PerformanceManagement::Dwdm::Dwdm()
    :
    dwdm_ports(std::make_shared<PerformanceManagement::Dwdm::DwdmPorts>())
{
    dwdm_ports->parent = this;
    children["dwdm-ports"] = dwdm_ports;

    yang_name = "dwdm"; yang_parent_name = "performance-management";
}

PerformanceManagement::Dwdm::~Dwdm()
{
}

bool PerformanceManagement::Dwdm::has_data() const
{
    return (dwdm_ports !=  nullptr && dwdm_ports->has_data());
}

bool PerformanceManagement::Dwdm::has_operation() const
{
    return is_set(operation)
	|| (dwdm_ports !=  nullptr && dwdm_ports->has_operation());
}

std::string PerformanceManagement::Dwdm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dwdm";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Dwdm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "dwdm-ports")
    {
        if(dwdm_ports != nullptr)
        {
            children["dwdm-ports"] = dwdm_ports;
        }
        else
        {
            dwdm_ports = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts>();
            dwdm_ports->parent = this;
            children["dwdm-ports"] = dwdm_ports;
        }
        return children.at("dwdm-ports");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::get_children()
{
    if(children.find("dwdm-ports") == children.end())
    {
        if(dwdm_ports != nullptr)
        {
            children["dwdm-ports"] = dwdm_ports;
        }
    }

    return children;
}

void PerformanceManagement::Dwdm::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPorts()
{
    yang_name = "dwdm-ports"; yang_parent_name = "dwdm";
}

PerformanceManagement::Dwdm::DwdmPorts::~DwdmPorts()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::has_data() const
{
    for (std::size_t index=0; index<dwdm_port.size(); index++)
    {
        if(dwdm_port[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Dwdm::DwdmPorts::has_operation() const
{
    for (std::size_t index=0; index<dwdm_port.size(); index++)
    {
        if(dwdm_port[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerformanceManagement::Dwdm::DwdmPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dwdm-ports";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management/dwdm/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "dwdm-port")
    {
        for(auto const & c : dwdm_port)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort>();
        c->parent = this;
        dwdm_port.push_back(std::move(c));
        children[segment_path] = dwdm_port.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::get_children()
{
    for (auto const & c : dwdm_port)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PerformanceManagement::Dwdm::DwdmPorts::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmPort()
    :
    name{YType::str, "name"}
    	,
    dwdm_current(std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent>())
{
    dwdm_current->parent = this;
    children["dwdm-current"] = dwdm_current;

    yang_name = "dwdm-port"; yang_parent_name = "dwdm-ports";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::~DwdmPort()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::has_data() const
{
    return name.is_set
	|| (dwdm_current !=  nullptr && dwdm_current->has_data());
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (dwdm_current !=  nullptr && dwdm_current->has_operation());
}

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dwdm-port" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management/dwdm/dwdm-ports/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "dwdm-current")
    {
        if(dwdm_current != nullptr)
        {
            children["dwdm-current"] = dwdm_current;
        }
        else
        {
            dwdm_current = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent>();
            dwdm_current->parent = this;
            children["dwdm-current"] = dwdm_current;
        }
        return children.at("dwdm-current");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::get_children()
{
    if(children.find("dwdm-current") == children.end())
    {
        if(dwdm_current != nullptr)
        {
            children["dwdm-current"] = dwdm_current;
        }
    }

    return children;
}

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmCurrent()
    :
    dwdm_hour24(std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24>())
	,dwdm_minute15(std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15>())
{
    dwdm_hour24->parent = this;
    children["dwdm-hour24"] = dwdm_hour24;

    dwdm_minute15->parent = this;
    children["dwdm-minute15"] = dwdm_minute15;

    yang_name = "dwdm-current"; yang_parent_name = "dwdm-port";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::~DwdmCurrent()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::has_data() const
{
    return (dwdm_hour24 !=  nullptr && dwdm_hour24->has_data())
	|| (dwdm_minute15 !=  nullptr && dwdm_minute15->has_data());
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::has_operation() const
{
    return is_set(operation)
	|| (dwdm_hour24 !=  nullptr && dwdm_hour24->has_operation())
	|| (dwdm_minute15 !=  nullptr && dwdm_minute15->has_operation());
}

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dwdm-current";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DwdmCurrent' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "dwdm-hour24")
    {
        if(dwdm_hour24 != nullptr)
        {
            children["dwdm-hour24"] = dwdm_hour24;
        }
        else
        {
            dwdm_hour24 = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24>();
            dwdm_hour24->parent = this;
            children["dwdm-hour24"] = dwdm_hour24;
        }
        return children.at("dwdm-hour24");
    }

    if(child_yang_name == "dwdm-minute15")
    {
        if(dwdm_minute15 != nullptr)
        {
            children["dwdm-minute15"] = dwdm_minute15;
        }
        else
        {
            dwdm_minute15 = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15>();
            dwdm_minute15->parent = this;
            children["dwdm-minute15"] = dwdm_minute15;
        }
        return children.at("dwdm-minute15");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::get_children()
{
    if(children.find("dwdm-hour24") == children.end())
    {
        if(dwdm_hour24 != nullptr)
        {
            children["dwdm-hour24"] = dwdm_hour24;
        }
    }

    if(children.find("dwdm-minute15") == children.end())
    {
        if(dwdm_minute15 != nullptr)
        {
            children["dwdm-minute15"] = dwdm_minute15;
        }
    }

    return children;
}

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15()
    :
    dwdm_minute15_optics(std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics>())
	,dwdm_minute15fecs(std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs>())
	,dwdm_minute15otns(std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns>())
{
    dwdm_minute15_optics->parent = this;
    children["dwdm-minute15-optics"] = dwdm_minute15_optics;

    dwdm_minute15fecs->parent = this;
    children["dwdm-minute15fecs"] = dwdm_minute15fecs;

    dwdm_minute15otns->parent = this;
    children["dwdm-minute15otns"] = dwdm_minute15otns;

    yang_name = "dwdm-minute15"; yang_parent_name = "dwdm-current";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::~DwdmMinute15()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::has_data() const
{
    return (dwdm_minute15_optics !=  nullptr && dwdm_minute15_optics->has_data())
	|| (dwdm_minute15fecs !=  nullptr && dwdm_minute15fecs->has_data())
	|| (dwdm_minute15otns !=  nullptr && dwdm_minute15otns->has_data());
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::has_operation() const
{
    return is_set(operation)
	|| (dwdm_minute15_optics !=  nullptr && dwdm_minute15_optics->has_operation())
	|| (dwdm_minute15fecs !=  nullptr && dwdm_minute15fecs->has_operation())
	|| (dwdm_minute15otns !=  nullptr && dwdm_minute15otns->has_operation());
}

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dwdm-minute15";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DwdmMinute15' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "dwdm-minute15-optics")
    {
        if(dwdm_minute15_optics != nullptr)
        {
            children["dwdm-minute15-optics"] = dwdm_minute15_optics;
        }
        else
        {
            dwdm_minute15_optics = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics>();
            dwdm_minute15_optics->parent = this;
            children["dwdm-minute15-optics"] = dwdm_minute15_optics;
        }
        return children.at("dwdm-minute15-optics");
    }

    if(child_yang_name == "dwdm-minute15fecs")
    {
        if(dwdm_minute15fecs != nullptr)
        {
            children["dwdm-minute15fecs"] = dwdm_minute15fecs;
        }
        else
        {
            dwdm_minute15fecs = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs>();
            dwdm_minute15fecs->parent = this;
            children["dwdm-minute15fecs"] = dwdm_minute15fecs;
        }
        return children.at("dwdm-minute15fecs");
    }

    if(child_yang_name == "dwdm-minute15otns")
    {
        if(dwdm_minute15otns != nullptr)
        {
            children["dwdm-minute15otns"] = dwdm_minute15otns;
        }
        else
        {
            dwdm_minute15otns = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns>();
            dwdm_minute15otns->parent = this;
            children["dwdm-minute15otns"] = dwdm_minute15otns;
        }
        return children.at("dwdm-minute15otns");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::get_children()
{
    if(children.find("dwdm-minute15-optics") == children.end())
    {
        if(dwdm_minute15_optics != nullptr)
        {
            children["dwdm-minute15-optics"] = dwdm_minute15_optics;
        }
    }

    if(children.find("dwdm-minute15fecs") == children.end())
    {
        if(dwdm_minute15fecs != nullptr)
        {
            children["dwdm-minute15fecs"] = dwdm_minute15fecs;
        }
    }

    if(children.find("dwdm-minute15otns") == children.end())
    {
        if(dwdm_minute15otns != nullptr)
        {
            children["dwdm-minute15otns"] = dwdm_minute15otns;
        }
    }

    return children;
}

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fecs()
{
    yang_name = "dwdm-minute15fecs"; yang_parent_name = "dwdm-minute15";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::~DwdmMinute15Fecs()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::has_data() const
{
    for (std::size_t index=0; index<dwdm_minute15fec.size(); index++)
    {
        if(dwdm_minute15fec[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::has_operation() const
{
    for (std::size_t index=0; index<dwdm_minute15fec.size(); index++)
    {
        if(dwdm_minute15fec[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dwdm-minute15fecs";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DwdmMinute15Fecs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "dwdm-minute15fec")
    {
        for(auto const & c : dwdm_minute15fec)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec>();
        c->parent = this;
        dwdm_minute15fec.push_back(std::move(c));
        children[segment_path] = dwdm_minute15fec.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::get_children()
{
    for (auto const & c : dwdm_minute15fec)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::DwdmMinute15Fec()
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
    ec_bits(std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::EcBits>())
	,post_fec_ber(std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::PostFecBer>())
	,pre_fec_ber(std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::PreFecBer>())
	,q(std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::Q>())
	,qmargin(std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::Qmargin>())
	,uc_words(std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::UcWords>())
{
    ec_bits->parent = this;
    children["ec-bits"] = ec_bits;

    post_fec_ber->parent = this;
    children["post-fec-ber"] = post_fec_ber;

    pre_fec_ber->parent = this;
    children["pre-fec-ber"] = pre_fec_ber;

    q->parent = this;
    children["q"] = q;

    qmargin->parent = this;
    children["qmargin"] = qmargin;

    uc_words->parent = this;
    children["uc-words"] = uc_words;

    yang_name = "dwdm-minute15fec"; yang_parent_name = "dwdm-minute15fecs";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::~DwdmMinute15Fec()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::has_data() const
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
	|| (ec_bits !=  nullptr && ec_bits->has_data())
	|| (post_fec_ber !=  nullptr && post_fec_ber->has_data())
	|| (pre_fec_ber !=  nullptr && pre_fec_ber->has_data())
	|| (q !=  nullptr && q->has_data())
	|| (qmargin !=  nullptr && qmargin->has_data())
	|| (uc_words !=  nullptr && uc_words->has_data());
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| is_set(index_.operation)
	|| is_set(last_clear15_min_time.operation)
	|| is_set(last_clear24_hr_time.operation)
	|| is_set(last_clear30_sec_time.operation)
	|| is_set(last_clear_time.operation)
	|| is_set(sec30_support.operation)
	|| is_set(timestamp.operation)
	|| is_set(valid.operation)
	|| (ec_bits !=  nullptr && ec_bits->has_operation())
	|| (post_fec_ber !=  nullptr && post_fec_ber->has_operation())
	|| (pre_fec_ber !=  nullptr && pre_fec_ber->has_operation())
	|| (q !=  nullptr && q->has_operation())
	|| (qmargin !=  nullptr && qmargin->has_operation())
	|| (uc_words !=  nullptr && uc_words->has_operation());
}

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dwdm-minute15fec" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DwdmMinute15Fec' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (last_clear15_min_time.is_set || is_set(last_clear15_min_time.operation)) leaf_name_data.push_back(last_clear15_min_time.get_name_leafdata());
    if (last_clear24_hr_time.is_set || is_set(last_clear24_hr_time.operation)) leaf_name_data.push_back(last_clear24_hr_time.get_name_leafdata());
    if (last_clear30_sec_time.is_set || is_set(last_clear30_sec_time.operation)) leaf_name_data.push_back(last_clear30_sec_time.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.operation)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (sec30_support.is_set || is_set(sec30_support.operation)) leaf_name_data.push_back(sec30_support.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.operation)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ec-bits")
    {
        if(ec_bits != nullptr)
        {
            children["ec-bits"] = ec_bits;
        }
        else
        {
            ec_bits = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::EcBits>();
            ec_bits->parent = this;
            children["ec-bits"] = ec_bits;
        }
        return children.at("ec-bits");
    }

    if(child_yang_name == "post-fec-ber")
    {
        if(post_fec_ber != nullptr)
        {
            children["post-fec-ber"] = post_fec_ber;
        }
        else
        {
            post_fec_ber = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::PostFecBer>();
            post_fec_ber->parent = this;
            children["post-fec-ber"] = post_fec_ber;
        }
        return children.at("post-fec-ber");
    }

    if(child_yang_name == "pre-fec-ber")
    {
        if(pre_fec_ber != nullptr)
        {
            children["pre-fec-ber"] = pre_fec_ber;
        }
        else
        {
            pre_fec_ber = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::PreFecBer>();
            pre_fec_ber->parent = this;
            children["pre-fec-ber"] = pre_fec_ber;
        }
        return children.at("pre-fec-ber");
    }

    if(child_yang_name == "q")
    {
        if(q != nullptr)
        {
            children["q"] = q;
        }
        else
        {
            q = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::Q>();
            q->parent = this;
            children["q"] = q;
        }
        return children.at("q");
    }

    if(child_yang_name == "qmargin")
    {
        if(qmargin != nullptr)
        {
            children["qmargin"] = qmargin;
        }
        else
        {
            qmargin = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::Qmargin>();
            qmargin->parent = this;
            children["qmargin"] = qmargin;
        }
        return children.at("qmargin");
    }

    if(child_yang_name == "uc-words")
    {
        if(uc_words != nullptr)
        {
            children["uc-words"] = uc_words;
        }
        else
        {
            uc_words = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::UcWords>();
            uc_words->parent = this;
            children["uc-words"] = uc_words;
        }
        return children.at("uc-words");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::get_children()
{
    if(children.find("ec-bits") == children.end())
    {
        if(ec_bits != nullptr)
        {
            children["ec-bits"] = ec_bits;
        }
    }

    if(children.find("post-fec-ber") == children.end())
    {
        if(post_fec_ber != nullptr)
        {
            children["post-fec-ber"] = post_fec_ber;
        }
    }

    if(children.find("pre-fec-ber") == children.end())
    {
        if(pre_fec_ber != nullptr)
        {
            children["pre-fec-ber"] = pre_fec_ber;
        }
    }

    if(children.find("q") == children.end())
    {
        if(q != nullptr)
        {
            children["q"] = q;
        }
    }

    if(children.find("qmargin") == children.end())
    {
        if(qmargin != nullptr)
        {
            children["qmargin"] = qmargin;
        }
    }

    if(children.find("uc-words") == children.end())
    {
        if(uc_words != nullptr)
        {
            children["uc-words"] = uc_words;
        }
    }

    return children;
}

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time = value;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time = value;
    }
    if(value_path == "last-clear30-sec-time")
    {
        last_clear30_sec_time = value;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time = value;
    }
    if(value_path == "sec30-support")
    {
        sec30_support = value;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::EcBits::EcBits()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "ec-bits"; yang_parent_name = "dwdm-minute15fec";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::EcBits::~EcBits()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::EcBits::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::EcBits::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::EcBits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ec-bits";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::EcBits::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EcBits' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::EcBits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::EcBits::get_children()
{
    return children;
}

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::EcBits::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::UcWords::UcWords()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "uc-words"; yang_parent_name = "dwdm-minute15fec";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::UcWords::~UcWords()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::UcWords::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::UcWords::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::UcWords::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uc-words";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::UcWords::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UcWords' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::UcWords::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::UcWords::get_children()
{
    return children;
}

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::UcWords::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::PreFecBer::PreFecBer()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "pre-fec-ber"; yang_parent_name = "dwdm-minute15fec";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::PreFecBer::~PreFecBer()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::PreFecBer::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::PreFecBer::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::PreFecBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-fec-ber";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::PreFecBer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PreFecBer' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::PreFecBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::PreFecBer::get_children()
{
    return children;
}

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::PreFecBer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::PostFecBer::PostFecBer()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "post-fec-ber"; yang_parent_name = "dwdm-minute15fec";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::PostFecBer::~PostFecBer()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::PostFecBer::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::PostFecBer::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::PostFecBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "post-fec-ber";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::PostFecBer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PostFecBer' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::PostFecBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::PostFecBer::get_children()
{
    return children;
}

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::PostFecBer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::Q::Q()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "q"; yang_parent_name = "dwdm-minute15fec";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::Q::~Q()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::Q::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::Q::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::Q::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "q";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::Q::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Q' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::Q::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::Q::get_children()
{
    return children;
}

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::Q::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::Qmargin::Qmargin()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "qmargin"; yang_parent_name = "dwdm-minute15fec";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::Qmargin::~Qmargin()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::Qmargin::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::Qmargin::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::Qmargin::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qmargin";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::Qmargin::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Qmargin' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::Qmargin::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::Qmargin::get_children()
{
    return children;
}

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::Qmargin::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optics()
{
    yang_name = "dwdm-minute15-optics"; yang_parent_name = "dwdm-minute15";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::~DwdmMinute15Optics()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::has_data() const
{
    for (std::size_t index=0; index<dwdm_minute15_optic.size(); index++)
    {
        if(dwdm_minute15_optic[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::has_operation() const
{
    for (std::size_t index=0; index<dwdm_minute15_optic.size(); index++)
    {
        if(dwdm_minute15_optic[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dwdm-minute15-optics";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DwdmMinute15Optics' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "dwdm-minute15-optic")
    {
        for(auto const & c : dwdm_minute15_optic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic>();
        c->parent = this;
        dwdm_minute15_optic.push_back(std::move(c));
        children[segment_path] = dwdm_minute15_optic.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::get_children()
{
    for (auto const & c : dwdm_minute15_optic)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::DwdmMinute15Optic()
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
    cd(std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Cd>())
	,center_wavelength(std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::CenterWavelength>())
	,dgd(std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Dgd>())
	,lbc(std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Lbc>())
	,lbc_pc(std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::LbcPc>())
	,low_sig_freq_off(std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::LowSigFreqOff>())
	,opr(std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Opr>())
	,opt(std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Opt>())
	,osnr(std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Osnr>())
	,pcr(std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Pcr>())
	,pdl(std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Pdl>())
	,pmd(std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Pmd>())
	,pn(std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Pn>())
	,rx_sig_pow(std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::RxSigPow>())
{
    cd->parent = this;
    children["cd"] = cd;

    center_wavelength->parent = this;
    children["center-wavelength"] = center_wavelength;

    dgd->parent = this;
    children["dgd"] = dgd;

    lbc->parent = this;
    children["lbc"] = lbc;

    lbc_pc->parent = this;
    children["lbc-pc"] = lbc_pc;

    low_sig_freq_off->parent = this;
    children["low-sig-freq-off"] = low_sig_freq_off;

    opr->parent = this;
    children["opr"] = opr;

    opt->parent = this;
    children["opt"] = opt;

    osnr->parent = this;
    children["osnr"] = osnr;

    pcr->parent = this;
    children["pcr"] = pcr;

    pdl->parent = this;
    children["pdl"] = pdl;

    pmd->parent = this;
    children["pmd"] = pmd;

    pn->parent = this;
    children["pn"] = pn;

    rx_sig_pow->parent = this;
    children["rx-sig-pow"] = rx_sig_pow;

    yang_name = "dwdm-minute15-optic"; yang_parent_name = "dwdm-minute15-optics";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::~DwdmMinute15Optic()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::has_data() const
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
	|| (cd !=  nullptr && cd->has_data())
	|| (center_wavelength !=  nullptr && center_wavelength->has_data())
	|| (dgd !=  nullptr && dgd->has_data())
	|| (lbc !=  nullptr && lbc->has_data())
	|| (lbc_pc !=  nullptr && lbc_pc->has_data())
	|| (low_sig_freq_off !=  nullptr && low_sig_freq_off->has_data())
	|| (opr !=  nullptr && opr->has_data())
	|| (opt !=  nullptr && opt->has_data())
	|| (osnr !=  nullptr && osnr->has_data())
	|| (pcr !=  nullptr && pcr->has_data())
	|| (pdl !=  nullptr && pdl->has_data())
	|| (pmd !=  nullptr && pmd->has_data())
	|| (pn !=  nullptr && pn->has_data())
	|| (rx_sig_pow !=  nullptr && rx_sig_pow->has_data());
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| is_set(index_.operation)
	|| is_set(last_clear15_min_time.operation)
	|| is_set(last_clear24_hr_time.operation)
	|| is_set(last_clear30_sec_time.operation)
	|| is_set(last_clear_time.operation)
	|| is_set(sec30_support.operation)
	|| is_set(timestamp.operation)
	|| is_set(valid.operation)
	|| (cd !=  nullptr && cd->has_operation())
	|| (center_wavelength !=  nullptr && center_wavelength->has_operation())
	|| (dgd !=  nullptr && dgd->has_operation())
	|| (lbc !=  nullptr && lbc->has_operation())
	|| (lbc_pc !=  nullptr && lbc_pc->has_operation())
	|| (low_sig_freq_off !=  nullptr && low_sig_freq_off->has_operation())
	|| (opr !=  nullptr && opr->has_operation())
	|| (opt !=  nullptr && opt->has_operation())
	|| (osnr !=  nullptr && osnr->has_operation())
	|| (pcr !=  nullptr && pcr->has_operation())
	|| (pdl !=  nullptr && pdl->has_operation())
	|| (pmd !=  nullptr && pmd->has_operation())
	|| (pn !=  nullptr && pn->has_operation())
	|| (rx_sig_pow !=  nullptr && rx_sig_pow->has_operation());
}

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dwdm-minute15-optic" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DwdmMinute15Optic' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (last_clear15_min_time.is_set || is_set(last_clear15_min_time.operation)) leaf_name_data.push_back(last_clear15_min_time.get_name_leafdata());
    if (last_clear24_hr_time.is_set || is_set(last_clear24_hr_time.operation)) leaf_name_data.push_back(last_clear24_hr_time.get_name_leafdata());
    if (last_clear30_sec_time.is_set || is_set(last_clear30_sec_time.operation)) leaf_name_data.push_back(last_clear30_sec_time.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.operation)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (sec30_support.is_set || is_set(sec30_support.operation)) leaf_name_data.push_back(sec30_support.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.operation)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "cd")
    {
        if(cd != nullptr)
        {
            children["cd"] = cd;
        }
        else
        {
            cd = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Cd>();
            cd->parent = this;
            children["cd"] = cd;
        }
        return children.at("cd");
    }

    if(child_yang_name == "center-wavelength")
    {
        if(center_wavelength != nullptr)
        {
            children["center-wavelength"] = center_wavelength;
        }
        else
        {
            center_wavelength = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::CenterWavelength>();
            center_wavelength->parent = this;
            children["center-wavelength"] = center_wavelength;
        }
        return children.at("center-wavelength");
    }

    if(child_yang_name == "dgd")
    {
        if(dgd != nullptr)
        {
            children["dgd"] = dgd;
        }
        else
        {
            dgd = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Dgd>();
            dgd->parent = this;
            children["dgd"] = dgd;
        }
        return children.at("dgd");
    }

    if(child_yang_name == "lbc")
    {
        if(lbc != nullptr)
        {
            children["lbc"] = lbc;
        }
        else
        {
            lbc = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Lbc>();
            lbc->parent = this;
            children["lbc"] = lbc;
        }
        return children.at("lbc");
    }

    if(child_yang_name == "lbc-pc")
    {
        if(lbc_pc != nullptr)
        {
            children["lbc-pc"] = lbc_pc;
        }
        else
        {
            lbc_pc = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::LbcPc>();
            lbc_pc->parent = this;
            children["lbc-pc"] = lbc_pc;
        }
        return children.at("lbc-pc");
    }

    if(child_yang_name == "low-sig-freq-off")
    {
        if(low_sig_freq_off != nullptr)
        {
            children["low-sig-freq-off"] = low_sig_freq_off;
        }
        else
        {
            low_sig_freq_off = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::LowSigFreqOff>();
            low_sig_freq_off->parent = this;
            children["low-sig-freq-off"] = low_sig_freq_off;
        }
        return children.at("low-sig-freq-off");
    }

    if(child_yang_name == "opr")
    {
        if(opr != nullptr)
        {
            children["opr"] = opr;
        }
        else
        {
            opr = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Opr>();
            opr->parent = this;
            children["opr"] = opr;
        }
        return children.at("opr");
    }

    if(child_yang_name == "opt")
    {
        if(opt != nullptr)
        {
            children["opt"] = opt;
        }
        else
        {
            opt = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Opt>();
            opt->parent = this;
            children["opt"] = opt;
        }
        return children.at("opt");
    }

    if(child_yang_name == "osnr")
    {
        if(osnr != nullptr)
        {
            children["osnr"] = osnr;
        }
        else
        {
            osnr = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Osnr>();
            osnr->parent = this;
            children["osnr"] = osnr;
        }
        return children.at("osnr");
    }

    if(child_yang_name == "pcr")
    {
        if(pcr != nullptr)
        {
            children["pcr"] = pcr;
        }
        else
        {
            pcr = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Pcr>();
            pcr->parent = this;
            children["pcr"] = pcr;
        }
        return children.at("pcr");
    }

    if(child_yang_name == "pdl")
    {
        if(pdl != nullptr)
        {
            children["pdl"] = pdl;
        }
        else
        {
            pdl = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Pdl>();
            pdl->parent = this;
            children["pdl"] = pdl;
        }
        return children.at("pdl");
    }

    if(child_yang_name == "pmd")
    {
        if(pmd != nullptr)
        {
            children["pmd"] = pmd;
        }
        else
        {
            pmd = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Pmd>();
            pmd->parent = this;
            children["pmd"] = pmd;
        }
        return children.at("pmd");
    }

    if(child_yang_name == "pn")
    {
        if(pn != nullptr)
        {
            children["pn"] = pn;
        }
        else
        {
            pn = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Pn>();
            pn->parent = this;
            children["pn"] = pn;
        }
        return children.at("pn");
    }

    if(child_yang_name == "rx-sig-pow")
    {
        if(rx_sig_pow != nullptr)
        {
            children["rx-sig-pow"] = rx_sig_pow;
        }
        else
        {
            rx_sig_pow = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::RxSigPow>();
            rx_sig_pow->parent = this;
            children["rx-sig-pow"] = rx_sig_pow;
        }
        return children.at("rx-sig-pow");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::get_children()
{
    if(children.find("cd") == children.end())
    {
        if(cd != nullptr)
        {
            children["cd"] = cd;
        }
    }

    if(children.find("center-wavelength") == children.end())
    {
        if(center_wavelength != nullptr)
        {
            children["center-wavelength"] = center_wavelength;
        }
    }

    if(children.find("dgd") == children.end())
    {
        if(dgd != nullptr)
        {
            children["dgd"] = dgd;
        }
    }

    if(children.find("lbc") == children.end())
    {
        if(lbc != nullptr)
        {
            children["lbc"] = lbc;
        }
    }

    if(children.find("lbc-pc") == children.end())
    {
        if(lbc_pc != nullptr)
        {
            children["lbc-pc"] = lbc_pc;
        }
    }

    if(children.find("low-sig-freq-off") == children.end())
    {
        if(low_sig_freq_off != nullptr)
        {
            children["low-sig-freq-off"] = low_sig_freq_off;
        }
    }

    if(children.find("opr") == children.end())
    {
        if(opr != nullptr)
        {
            children["opr"] = opr;
        }
    }

    if(children.find("opt") == children.end())
    {
        if(opt != nullptr)
        {
            children["opt"] = opt;
        }
    }

    if(children.find("osnr") == children.end())
    {
        if(osnr != nullptr)
        {
            children["osnr"] = osnr;
        }
    }

    if(children.find("pcr") == children.end())
    {
        if(pcr != nullptr)
        {
            children["pcr"] = pcr;
        }
    }

    if(children.find("pdl") == children.end())
    {
        if(pdl != nullptr)
        {
            children["pdl"] = pdl;
        }
    }

    if(children.find("pmd") == children.end())
    {
        if(pmd != nullptr)
        {
            children["pmd"] = pmd;
        }
    }

    if(children.find("pn") == children.end())
    {
        if(pn != nullptr)
        {
            children["pn"] = pn;
        }
    }

    if(children.find("rx-sig-pow") == children.end())
    {
        if(rx_sig_pow != nullptr)
        {
            children["rx-sig-pow"] = rx_sig_pow;
        }
    }

    return children;
}

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time = value;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time = value;
    }
    if(value_path == "last-clear30-sec-time")
    {
        last_clear30_sec_time = value;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time = value;
    }
    if(value_path == "sec30-support")
    {
        sec30_support = value;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Lbc::Lbc()
    :
    average{YType::int32, "average"},
    maximum{YType::int32, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::int32, "maximum-threshold"},
    minimum{YType::int32, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::int32, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "lbc"; yang_parent_name = "dwdm-minute15-optic";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Lbc::~Lbc()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Lbc::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Lbc::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Lbc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lbc";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Lbc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lbc' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Lbc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Lbc::get_children()
{
    return children;
}

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Lbc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::LbcPc::LbcPc()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "lbc-pc"; yang_parent_name = "dwdm-minute15-optic";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::LbcPc::~LbcPc()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::LbcPc::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::LbcPc::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::LbcPc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lbc-pc";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::LbcPc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LbcPc' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::LbcPc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::LbcPc::get_children()
{
    return children;
}

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::LbcPc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Opt::Opt()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "opt"; yang_parent_name = "dwdm-minute15-optic";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Opt::~Opt()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Opt::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Opt::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Opt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opt";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Opt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Opt' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Opt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Opt::get_children()
{
    return children;
}

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Opt::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Opr::Opr()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "opr"; yang_parent_name = "dwdm-minute15-optic";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Opr::~Opr()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Opr::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Opr::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Opr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opr";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Opr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Opr' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Opr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Opr::get_children()
{
    return children;
}

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Opr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Cd::Cd()
    :
    average{YType::int32, "average"},
    maximum{YType::int32, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::int32, "maximum-threshold"},
    minimum{YType::int32, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::int32, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "cd"; yang_parent_name = "dwdm-minute15-optic";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Cd::~Cd()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Cd::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Cd::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Cd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cd";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Cd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cd' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Cd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Cd::get_children()
{
    return children;
}

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Cd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Dgd::Dgd()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "dgd"; yang_parent_name = "dwdm-minute15-optic";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Dgd::~Dgd()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Dgd::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Dgd::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Dgd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dgd";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Dgd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dgd' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Dgd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Dgd::get_children()
{
    return children;
}

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Dgd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Pmd::Pmd()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "pmd"; yang_parent_name = "dwdm-minute15-optic";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Pmd::~Pmd()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Pmd::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Pmd::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Pmd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmd";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Pmd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pmd' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Pmd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Pmd::get_children()
{
    return children;
}

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Pmd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Osnr::Osnr()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "osnr"; yang_parent_name = "dwdm-minute15-optic";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Osnr::~Osnr()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Osnr::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Osnr::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Osnr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "osnr";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Osnr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Osnr' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Osnr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Osnr::get_children()
{
    return children;
}

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Osnr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::CenterWavelength::CenterWavelength()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "center-wavelength"; yang_parent_name = "dwdm-minute15-optic";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::CenterWavelength::~CenterWavelength()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::CenterWavelength::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::CenterWavelength::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::CenterWavelength::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "center-wavelength";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::CenterWavelength::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CenterWavelength' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::CenterWavelength::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::CenterWavelength::get_children()
{
    return children;
}

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::CenterWavelength::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Pdl::Pdl()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "pdl"; yang_parent_name = "dwdm-minute15-optic";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Pdl::~Pdl()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Pdl::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Pdl::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Pdl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pdl";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Pdl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pdl' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Pdl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Pdl::get_children()
{
    return children;
}

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Pdl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Pcr::Pcr()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "pcr"; yang_parent_name = "dwdm-minute15-optic";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Pcr::~Pcr()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Pcr::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Pcr::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Pcr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pcr";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Pcr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pcr' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Pcr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Pcr::get_children()
{
    return children;
}

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Pcr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Pn::Pn()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "pn"; yang_parent_name = "dwdm-minute15-optic";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Pn::~Pn()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Pn::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Pn::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Pn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pn";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Pn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pn' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Pn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Pn::get_children()
{
    return children;
}

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Pn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::RxSigPow::RxSigPow()
    :
    average{YType::str, "average"},
    maximum{YType::str, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::str, "maximum-threshold"},
    minimum{YType::str, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::str, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "rx-sig-pow"; yang_parent_name = "dwdm-minute15-optic";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::RxSigPow::~RxSigPow()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::RxSigPow::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::RxSigPow::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::RxSigPow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-sig-pow";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::RxSigPow::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RxSigPow' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::RxSigPow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::RxSigPow::get_children()
{
    return children;
}

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::RxSigPow::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::LowSigFreqOff::LowSigFreqOff()
    :
    average{YType::int32, "average"},
    maximum{YType::int32, "maximum"},
    maximum_tca_report{YType::boolean, "maximum-tca-report"},
    maximum_threshold{YType::int32, "maximum-threshold"},
    minimum{YType::int32, "minimum"},
    minimum_tca_report{YType::boolean, "minimum-tca-report"},
    minimum_threshold{YType::int32, "minimum-threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "low-sig-freq-off"; yang_parent_name = "dwdm-minute15-optic";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::LowSigFreqOff::~LowSigFreqOff()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::LowSigFreqOff::has_data() const
{
    return average.is_set
	|| maximum.is_set
	|| maximum_tca_report.is_set
	|| maximum_threshold.is_set
	|| minimum.is_set
	|| minimum_tca_report.is_set
	|| minimum_threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::LowSigFreqOff::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(maximum.operation)
	|| is_set(maximum_tca_report.operation)
	|| is_set(maximum_threshold.operation)
	|| is_set(minimum.operation)
	|| is_set(minimum_tca_report.operation)
	|| is_set(minimum_threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::LowSigFreqOff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "low-sig-freq-off";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::LowSigFreqOff::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LowSigFreqOff' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (maximum_tca_report.is_set || is_set(maximum_tca_report.operation)) leaf_name_data.push_back(maximum_tca_report.get_name_leafdata());
    if (maximum_threshold.is_set || is_set(maximum_threshold.operation)) leaf_name_data.push_back(maximum_threshold.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (minimum_tca_report.is_set || is_set(minimum_tca_report.operation)) leaf_name_data.push_back(minimum_tca_report.get_name_leafdata());
    if (minimum_threshold.is_set || is_set(minimum_threshold.operation)) leaf_name_data.push_back(minimum_threshold.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::LowSigFreqOff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::LowSigFreqOff::get_children()
{
    return children;
}

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::LowSigFreqOff::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "maximum-tca-report")
    {
        maximum_tca_report = value;
    }
    if(value_path == "maximum-threshold")
    {
        maximum_threshold = value;
    }
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "minimum-tca-report")
    {
        minimum_tca_report = value;
    }
    if(value_path == "minimum-threshold")
    {
        minimum_threshold = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otns()
{
    yang_name = "dwdm-minute15otns"; yang_parent_name = "dwdm-minute15";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::~DwdmMinute15Otns()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::has_data() const
{
    for (std::size_t index=0; index<dwdm_minute15otn.size(); index++)
    {
        if(dwdm_minute15otn[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::has_operation() const
{
    for (std::size_t index=0; index<dwdm_minute15otn.size(); index++)
    {
        if(dwdm_minute15otn[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dwdm-minute15otns";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DwdmMinute15Otns' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "dwdm-minute15otn")
    {
        for(auto const & c : dwdm_minute15otn)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn>();
        c->parent = this;
        dwdm_minute15otn.push_back(std::move(c));
        children[segment_path] = dwdm_minute15otn.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::get_children()
{
    for (auto const & c : dwdm_minute15otn)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::DwdmMinute15Otn()
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
    bbe_fe(std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::BbeFe>())
	,bbe_ne(std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::BbeNe>())
	,bber_fe(std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::BberFe>())
	,bber_ne(std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::BberNe>())
	,es_fe(std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::EsFe>())
	,es_ne(std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::EsNe>())
	,esr_fe(std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::EsrFe>())
	,esr_ne(std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::EsrNe>())
	,fc_fe(std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::FcFe>())
	,fc_ne(std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::FcNe>())
	,lbc(std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::Lbc>())
	,ses_fe(std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::SesFe>())
	,ses_ne(std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::SesNe>())
	,sesr_fe(std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::SesrFe>())
	,sesr_ne(std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::SesrNe>())
	,uas_fe(std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::UasFe>())
	,uas_ne(std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::UasNe>())
{
    bbe_fe->parent = this;
    children["bbe-fe"] = bbe_fe;

    bbe_ne->parent = this;
    children["bbe-ne"] = bbe_ne;

    bber_fe->parent = this;
    children["bber-fe"] = bber_fe;

    bber_ne->parent = this;
    children["bber-ne"] = bber_ne;

    es_fe->parent = this;
    children["es-fe"] = es_fe;

    es_ne->parent = this;
    children["es-ne"] = es_ne;

    esr_fe->parent = this;
    children["esr-fe"] = esr_fe;

    esr_ne->parent = this;
    children["esr-ne"] = esr_ne;

    fc_fe->parent = this;
    children["fc-fe"] = fc_fe;

    fc_ne->parent = this;
    children["fc-ne"] = fc_ne;

    lbc->parent = this;
    children["lbc"] = lbc;

    ses_fe->parent = this;
    children["ses-fe"] = ses_fe;

    ses_ne->parent = this;
    children["ses-ne"] = ses_ne;

    sesr_fe->parent = this;
    children["sesr-fe"] = sesr_fe;

    sesr_ne->parent = this;
    children["sesr-ne"] = sesr_ne;

    uas_fe->parent = this;
    children["uas-fe"] = uas_fe;

    uas_ne->parent = this;
    children["uas-ne"] = uas_ne;

    yang_name = "dwdm-minute15otn"; yang_parent_name = "dwdm-minute15otns";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::~DwdmMinute15Otn()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::has_data() const
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
	|| (bbe_fe !=  nullptr && bbe_fe->has_data())
	|| (bbe_ne !=  nullptr && bbe_ne->has_data())
	|| (bber_fe !=  nullptr && bber_fe->has_data())
	|| (bber_ne !=  nullptr && bber_ne->has_data())
	|| (es_fe !=  nullptr && es_fe->has_data())
	|| (es_ne !=  nullptr && es_ne->has_data())
	|| (esr_fe !=  nullptr && esr_fe->has_data())
	|| (esr_ne !=  nullptr && esr_ne->has_data())
	|| (fc_fe !=  nullptr && fc_fe->has_data())
	|| (fc_ne !=  nullptr && fc_ne->has_data())
	|| (lbc !=  nullptr && lbc->has_data())
	|| (ses_fe !=  nullptr && ses_fe->has_data())
	|| (ses_ne !=  nullptr && ses_ne->has_data())
	|| (sesr_fe !=  nullptr && sesr_fe->has_data())
	|| (sesr_ne !=  nullptr && sesr_ne->has_data())
	|| (uas_fe !=  nullptr && uas_fe->has_data())
	|| (uas_ne !=  nullptr && uas_ne->has_data());
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| is_set(index_.operation)
	|| is_set(last_clear15_min_time.operation)
	|| is_set(last_clear24_hr_time.operation)
	|| is_set(last_clear30_sec_time.operation)
	|| is_set(last_clear_time.operation)
	|| is_set(sec30_support.operation)
	|| is_set(timestamp.operation)
	|| is_set(valid.operation)
	|| (bbe_fe !=  nullptr && bbe_fe->has_operation())
	|| (bbe_ne !=  nullptr && bbe_ne->has_operation())
	|| (bber_fe !=  nullptr && bber_fe->has_operation())
	|| (bber_ne !=  nullptr && bber_ne->has_operation())
	|| (es_fe !=  nullptr && es_fe->has_operation())
	|| (es_ne !=  nullptr && es_ne->has_operation())
	|| (esr_fe !=  nullptr && esr_fe->has_operation())
	|| (esr_ne !=  nullptr && esr_ne->has_operation())
	|| (fc_fe !=  nullptr && fc_fe->has_operation())
	|| (fc_ne !=  nullptr && fc_ne->has_operation())
	|| (lbc !=  nullptr && lbc->has_operation())
	|| (ses_fe !=  nullptr && ses_fe->has_operation())
	|| (ses_ne !=  nullptr && ses_ne->has_operation())
	|| (sesr_fe !=  nullptr && sesr_fe->has_operation())
	|| (sesr_ne !=  nullptr && sesr_ne->has_operation())
	|| (uas_fe !=  nullptr && uas_fe->has_operation())
	|| (uas_ne !=  nullptr && uas_ne->has_operation());
}

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dwdm-minute15otn" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DwdmMinute15Otn' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());
    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (last_clear15_min_time.is_set || is_set(last_clear15_min_time.operation)) leaf_name_data.push_back(last_clear15_min_time.get_name_leafdata());
    if (last_clear24_hr_time.is_set || is_set(last_clear24_hr_time.operation)) leaf_name_data.push_back(last_clear24_hr_time.get_name_leafdata());
    if (last_clear30_sec_time.is_set || is_set(last_clear30_sec_time.operation)) leaf_name_data.push_back(last_clear30_sec_time.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.operation)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (sec30_support.is_set || is_set(sec30_support.operation)) leaf_name_data.push_back(sec30_support.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.operation)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (valid.is_set || is_set(valid.operation)) leaf_name_data.push_back(valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bbe-fe")
    {
        if(bbe_fe != nullptr)
        {
            children["bbe-fe"] = bbe_fe;
        }
        else
        {
            bbe_fe = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::BbeFe>();
            bbe_fe->parent = this;
            children["bbe-fe"] = bbe_fe;
        }
        return children.at("bbe-fe");
    }

    if(child_yang_name == "bbe-ne")
    {
        if(bbe_ne != nullptr)
        {
            children["bbe-ne"] = bbe_ne;
        }
        else
        {
            bbe_ne = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::BbeNe>();
            bbe_ne->parent = this;
            children["bbe-ne"] = bbe_ne;
        }
        return children.at("bbe-ne");
    }

    if(child_yang_name == "bber-fe")
    {
        if(bber_fe != nullptr)
        {
            children["bber-fe"] = bber_fe;
        }
        else
        {
            bber_fe = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::BberFe>();
            bber_fe->parent = this;
            children["bber-fe"] = bber_fe;
        }
        return children.at("bber-fe");
    }

    if(child_yang_name == "bber-ne")
    {
        if(bber_ne != nullptr)
        {
            children["bber-ne"] = bber_ne;
        }
        else
        {
            bber_ne = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::BberNe>();
            bber_ne->parent = this;
            children["bber-ne"] = bber_ne;
        }
        return children.at("bber-ne");
    }

    if(child_yang_name == "es-fe")
    {
        if(es_fe != nullptr)
        {
            children["es-fe"] = es_fe;
        }
        else
        {
            es_fe = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::EsFe>();
            es_fe->parent = this;
            children["es-fe"] = es_fe;
        }
        return children.at("es-fe");
    }

    if(child_yang_name == "es-ne")
    {
        if(es_ne != nullptr)
        {
            children["es-ne"] = es_ne;
        }
        else
        {
            es_ne = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::EsNe>();
            es_ne->parent = this;
            children["es-ne"] = es_ne;
        }
        return children.at("es-ne");
    }

    if(child_yang_name == "esr-fe")
    {
        if(esr_fe != nullptr)
        {
            children["esr-fe"] = esr_fe;
        }
        else
        {
            esr_fe = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::EsrFe>();
            esr_fe->parent = this;
            children["esr-fe"] = esr_fe;
        }
        return children.at("esr-fe");
    }

    if(child_yang_name == "esr-ne")
    {
        if(esr_ne != nullptr)
        {
            children["esr-ne"] = esr_ne;
        }
        else
        {
            esr_ne = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::EsrNe>();
            esr_ne->parent = this;
            children["esr-ne"] = esr_ne;
        }
        return children.at("esr-ne");
    }

    if(child_yang_name == "fc-fe")
    {
        if(fc_fe != nullptr)
        {
            children["fc-fe"] = fc_fe;
        }
        else
        {
            fc_fe = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::FcFe>();
            fc_fe->parent = this;
            children["fc-fe"] = fc_fe;
        }
        return children.at("fc-fe");
    }

    if(child_yang_name == "fc-ne")
    {
        if(fc_ne != nullptr)
        {
            children["fc-ne"] = fc_ne;
        }
        else
        {
            fc_ne = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::FcNe>();
            fc_ne->parent = this;
            children["fc-ne"] = fc_ne;
        }
        return children.at("fc-ne");
    }

    if(child_yang_name == "lbc")
    {
        if(lbc != nullptr)
        {
            children["lbc"] = lbc;
        }
        else
        {
            lbc = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::Lbc>();
            lbc->parent = this;
            children["lbc"] = lbc;
        }
        return children.at("lbc");
    }

    if(child_yang_name == "ses-fe")
    {
        if(ses_fe != nullptr)
        {
            children["ses-fe"] = ses_fe;
        }
        else
        {
            ses_fe = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::SesFe>();
            ses_fe->parent = this;
            children["ses-fe"] = ses_fe;
        }
        return children.at("ses-fe");
    }

    if(child_yang_name == "ses-ne")
    {
        if(ses_ne != nullptr)
        {
            children["ses-ne"] = ses_ne;
        }
        else
        {
            ses_ne = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::SesNe>();
            ses_ne->parent = this;
            children["ses-ne"] = ses_ne;
        }
        return children.at("ses-ne");
    }

    if(child_yang_name == "sesr-fe")
    {
        if(sesr_fe != nullptr)
        {
            children["sesr-fe"] = sesr_fe;
        }
        else
        {
            sesr_fe = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::SesrFe>();
            sesr_fe->parent = this;
            children["sesr-fe"] = sesr_fe;
        }
        return children.at("sesr-fe");
    }

    if(child_yang_name == "sesr-ne")
    {
        if(sesr_ne != nullptr)
        {
            children["sesr-ne"] = sesr_ne;
        }
        else
        {
            sesr_ne = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::SesrNe>();
            sesr_ne->parent = this;
            children["sesr-ne"] = sesr_ne;
        }
        return children.at("sesr-ne");
    }

    if(child_yang_name == "uas-fe")
    {
        if(uas_fe != nullptr)
        {
            children["uas-fe"] = uas_fe;
        }
        else
        {
            uas_fe = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::UasFe>();
            uas_fe->parent = this;
            children["uas-fe"] = uas_fe;
        }
        return children.at("uas-fe");
    }

    if(child_yang_name == "uas-ne")
    {
        if(uas_ne != nullptr)
        {
            children["uas-ne"] = uas_ne;
        }
        else
        {
            uas_ne = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::UasNe>();
            uas_ne->parent = this;
            children["uas-ne"] = uas_ne;
        }
        return children.at("uas-ne");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::get_children()
{
    if(children.find("bbe-fe") == children.end())
    {
        if(bbe_fe != nullptr)
        {
            children["bbe-fe"] = bbe_fe;
        }
    }

    if(children.find("bbe-ne") == children.end())
    {
        if(bbe_ne != nullptr)
        {
            children["bbe-ne"] = bbe_ne;
        }
    }

    if(children.find("bber-fe") == children.end())
    {
        if(bber_fe != nullptr)
        {
            children["bber-fe"] = bber_fe;
        }
    }

    if(children.find("bber-ne") == children.end())
    {
        if(bber_ne != nullptr)
        {
            children["bber-ne"] = bber_ne;
        }
    }

    if(children.find("es-fe") == children.end())
    {
        if(es_fe != nullptr)
        {
            children["es-fe"] = es_fe;
        }
    }

    if(children.find("es-ne") == children.end())
    {
        if(es_ne != nullptr)
        {
            children["es-ne"] = es_ne;
        }
    }

    if(children.find("esr-fe") == children.end())
    {
        if(esr_fe != nullptr)
        {
            children["esr-fe"] = esr_fe;
        }
    }

    if(children.find("esr-ne") == children.end())
    {
        if(esr_ne != nullptr)
        {
            children["esr-ne"] = esr_ne;
        }
    }

    if(children.find("fc-fe") == children.end())
    {
        if(fc_fe != nullptr)
        {
            children["fc-fe"] = fc_fe;
        }
    }

    if(children.find("fc-ne") == children.end())
    {
        if(fc_ne != nullptr)
        {
            children["fc-ne"] = fc_ne;
        }
    }

    if(children.find("lbc") == children.end())
    {
        if(lbc != nullptr)
        {
            children["lbc"] = lbc;
        }
    }

    if(children.find("ses-fe") == children.end())
    {
        if(ses_fe != nullptr)
        {
            children["ses-fe"] = ses_fe;
        }
    }

    if(children.find("ses-ne") == children.end())
    {
        if(ses_ne != nullptr)
        {
            children["ses-ne"] = ses_ne;
        }
    }

    if(children.find("sesr-fe") == children.end())
    {
        if(sesr_fe != nullptr)
        {
            children["sesr-fe"] = sesr_fe;
        }
    }

    if(children.find("sesr-ne") == children.end())
    {
        if(sesr_ne != nullptr)
        {
            children["sesr-ne"] = sesr_ne;
        }
    }

    if(children.find("uas-fe") == children.end())
    {
        if(uas_fe != nullptr)
        {
            children["uas-fe"] = uas_fe;
        }
    }

    if(children.find("uas-ne") == children.end())
    {
        if(uas_ne != nullptr)
        {
            children["uas-ne"] = uas_ne;
        }
    }

    return children;
}

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time = value;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time = value;
    }
    if(value_path == "last-clear30-sec-time")
    {
        last_clear30_sec_time = value;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time = value;
    }
    if(value_path == "sec30-support")
    {
        sec30_support = value;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
    }
    if(value_path == "valid")
    {
        valid = value;
    }
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::Lbc::Lbc()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{
    yang_name = "lbc"; yang_parent_name = "dwdm-minute15otn";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::Lbc::~Lbc()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::Lbc::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::Lbc::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::Lbc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lbc";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::Lbc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lbc' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::Lbc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::Lbc::get_children()
{
    return children;
}

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::Lbc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::EsNe::EsNe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{
    yang_name = "es-ne"; yang_parent_name = "dwdm-minute15otn";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::EsNe::~EsNe()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::EsNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::EsNe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::EsNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es-ne";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::EsNe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EsNe' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::EsNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::EsNe::get_children()
{
    return children;
}

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::EsNe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::EsrNe::EsrNe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{
    yang_name = "esr-ne"; yang_parent_name = "dwdm-minute15otn";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::EsrNe::~EsrNe()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::EsrNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::EsrNe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::EsrNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esr-ne";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::EsrNe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EsrNe' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::EsrNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::EsrNe::get_children()
{
    return children;
}

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::EsrNe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::SesNe::SesNe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{
    yang_name = "ses-ne"; yang_parent_name = "dwdm-minute15otn";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::SesNe::~SesNe()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::SesNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::SesNe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::SesNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ses-ne";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::SesNe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SesNe' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::SesNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::SesNe::get_children()
{
    return children;
}

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::SesNe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::SesrNe::SesrNe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{
    yang_name = "sesr-ne"; yang_parent_name = "dwdm-minute15otn";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::SesrNe::~SesrNe()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::SesrNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::SesrNe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::SesrNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sesr-ne";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::SesrNe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SesrNe' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::SesrNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::SesrNe::get_children()
{
    return children;
}

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::SesrNe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::UasNe::UasNe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{
    yang_name = "uas-ne"; yang_parent_name = "dwdm-minute15otn";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::UasNe::~UasNe()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::UasNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::UasNe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::UasNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uas-ne";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::UasNe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UasNe' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::UasNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::UasNe::get_children()
{
    return children;
}

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::UasNe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::BbeNe::BbeNe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{
    yang_name = "bbe-ne"; yang_parent_name = "dwdm-minute15otn";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::BbeNe::~BbeNe()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::BbeNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::BbeNe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::BbeNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bbe-ne";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::BbeNe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BbeNe' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::BbeNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::BbeNe::get_children()
{
    return children;
}

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::BbeNe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::BberNe::BberNe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{
    yang_name = "bber-ne"; yang_parent_name = "dwdm-minute15otn";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::BberNe::~BberNe()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::BberNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::BberNe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::BberNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bber-ne";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::BberNe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BberNe' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::BberNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::BberNe::get_children()
{
    return children;
}

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::BberNe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::FcNe::FcNe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{
    yang_name = "fc-ne"; yang_parent_name = "dwdm-minute15otn";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::FcNe::~FcNe()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::FcNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::FcNe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::FcNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fc-ne";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::FcNe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FcNe' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::FcNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::FcNe::get_children()
{
    return children;
}

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::FcNe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::EsFe::EsFe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{
    yang_name = "es-fe"; yang_parent_name = "dwdm-minute15otn";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::EsFe::~EsFe()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::EsFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::EsFe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::EsFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es-fe";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::EsFe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EsFe' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::EsFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::EsFe::get_children()
{
    return children;
}

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::EsFe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::EsrFe::EsrFe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{
    yang_name = "esr-fe"; yang_parent_name = "dwdm-minute15otn";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::EsrFe::~EsrFe()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::EsrFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::EsrFe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::EsrFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esr-fe";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::EsrFe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EsrFe' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.operation)) leaf_name_data.push_back(data.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.operation)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::EsrFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::EsrFe::get_children()
{
    return children;
}

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::EsrFe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "data")
    {
        data = value;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}


}
}

