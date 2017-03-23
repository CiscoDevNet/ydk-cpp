
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ifmgr_cfg_3.hpp"
#include "Cisco_IOS_XR_ifmgr_cfg_4.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ifmgr_cfg {

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcThresholds::HoVcMinute15HoVcThreshold::HoVcMinute15HoVcThreshold()
    :
    ho_vc_threshold{YType::enumeration, "ho-vc-threshold"},
    ho_vc_threshold_value{YType::int32, "ho-vc-threshold-value"}
{
    yang_name = "ho-vc-minute15ho-vc-threshold"; yang_parent_name = "ho-vc-minute15ho-vc-thresholds";
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
    return is_set(operation)
	|| is_set(ho_vc_threshold.operation)
	|| is_set(ho_vc_threshold_value.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcThresholds::HoVcMinute15HoVcThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ho-vc-minute15ho-vc-threshold" <<"[ho-vc-threshold='" <<ho_vc_threshold <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcThresholds::HoVcMinute15HoVcThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HoVcMinute15HoVcThreshold' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ho_vc_threshold.is_set || is_set(ho_vc_threshold.operation)) leaf_name_data.push_back(ho_vc_threshold.get_name_leafdata());
    if (ho_vc_threshold_value.is_set || is_set(ho_vc_threshold_value.operation)) leaf_name_data.push_back(ho_vc_threshold_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcThresholds::HoVcMinute15HoVcThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcThresholds::HoVcMinute15HoVcThreshold::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::HoVcMinute15::HoVcMinute15HoVc::HoVcMinute15HoVcThresholds::HoVcMinute15HoVcThreshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ho-vc-threshold")
    {
        ho_vc_threshold = value;
    }
    if(value_path == "ho-vc-threshold-value")
    {
        ho_vc_threshold_value = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24()
    :
    sts_hour24_path(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path>())
{
    sts_hour24_path->parent = this;
    children["sts-hour24-path"] = sts_hour24_path;

    yang_name = "sts-hour24"; yang_parent_name = "performance-management";
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
    return is_set(operation)
	|| (sts_hour24_path !=  nullptr && sts_hour24_path->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sts-hour24";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StsHour24' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        if(sts_hour24_path != nullptr)
        {
            children["sts-hour24-path"] = sts_hour24_path;
        }
        else
        {
            sts_hour24_path = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path>();
            sts_hour24_path->parent = this;
            children["sts-hour24-path"] = sts_hour24_path;
        }
        return children.at("sts-hour24-path");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::get_children()
{
    if(children.find("sts-hour24-path") == children.end())
    {
        if(sts_hour24_path != nullptr)
        {
            children["sts-hour24-path"] = sts_hour24_path;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24Path()
    :
    sts_hour24_path_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathReports>())
	,sts_hour24_path_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathThresholds>())
{
    sts_hour24_path_reports->parent = this;
    children["sts-hour24-path-reports"] = sts_hour24_path_reports;

    sts_hour24_path_thresholds->parent = this;
    children["sts-hour24-path-thresholds"] = sts_hour24_path_thresholds;

    yang_name = "sts-hour24-path"; yang_parent_name = "sts-hour24";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::~StsHour24Path()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::has_data() const
{
    return (sts_hour24_path_reports !=  nullptr && sts_hour24_path_reports->has_data())
	|| (sts_hour24_path_thresholds !=  nullptr && sts_hour24_path_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::has_operation() const
{
    return is_set(operation)
	|| (sts_hour24_path_reports !=  nullptr && sts_hour24_path_reports->has_operation())
	|| (sts_hour24_path_thresholds !=  nullptr && sts_hour24_path_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sts-hour24-path";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StsHour24Path' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sts-hour24-path-reports")
    {
        if(sts_hour24_path_reports != nullptr)
        {
            children["sts-hour24-path-reports"] = sts_hour24_path_reports;
        }
        else
        {
            sts_hour24_path_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathReports>();
            sts_hour24_path_reports->parent = this;
            children["sts-hour24-path-reports"] = sts_hour24_path_reports;
        }
        return children.at("sts-hour24-path-reports");
    }

    if(child_yang_name == "sts-hour24-path-thresholds")
    {
        if(sts_hour24_path_thresholds != nullptr)
        {
            children["sts-hour24-path-thresholds"] = sts_hour24_path_thresholds;
        }
        else
        {
            sts_hour24_path_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathThresholds>();
            sts_hour24_path_thresholds->parent = this;
            children["sts-hour24-path-thresholds"] = sts_hour24_path_thresholds;
        }
        return children.at("sts-hour24-path-thresholds");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::get_children()
{
    if(children.find("sts-hour24-path-reports") == children.end())
    {
        if(sts_hour24_path_reports != nullptr)
        {
            children["sts-hour24-path-reports"] = sts_hour24_path_reports;
        }
    }

    if(children.find("sts-hour24-path-thresholds") == children.end())
    {
        if(sts_hour24_path_thresholds != nullptr)
        {
            children["sts-hour24-path-thresholds"] = sts_hour24_path_thresholds;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathThresholds::StsHour24PathThresholds()
{
    yang_name = "sts-hour24-path-thresholds"; yang_parent_name = "sts-hour24-path";
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
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sts-hour24-path-thresholds";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathThresholds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StsHour24PathThresholds' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sts-hour24-path-threshold")
    {
        for(auto const & c : sts_hour24_path_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathThresholds::StsHour24PathThreshold>();
        c->parent = this;
        sts_hour24_path_threshold.push_back(std::move(c));
        children[segment_path] = sts_hour24_path_threshold.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathThresholds::get_children()
{
    for (auto const & c : sts_hour24_path_threshold)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathThresholds::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathThresholds::StsHour24PathThreshold::StsHour24PathThreshold()
    :
    path_threshold{YType::enumeration, "path-threshold"},
    path_threshold_value{YType::int32, "path-threshold-value"}
{
    yang_name = "sts-hour24-path-threshold"; yang_parent_name = "sts-hour24-path-thresholds";
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
    return is_set(operation)
	|| is_set(path_threshold.operation)
	|| is_set(path_threshold_value.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathThresholds::StsHour24PathThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sts-hour24-path-threshold" <<"[path-threshold='" <<path_threshold <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathThresholds::StsHour24PathThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StsHour24PathThreshold' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_threshold.is_set || is_set(path_threshold.operation)) leaf_name_data.push_back(path_threshold.get_name_leafdata());
    if (path_threshold_value.is_set || is_set(path_threshold_value.operation)) leaf_name_data.push_back(path_threshold_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathThresholds::StsHour24PathThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathThresholds::StsHour24PathThreshold::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathThresholds::StsHour24PathThreshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "path-threshold")
    {
        path_threshold = value;
    }
    if(value_path == "path-threshold-value")
    {
        path_threshold_value = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathReports::StsHour24PathReports()
{
    yang_name = "sts-hour24-path-reports"; yang_parent_name = "sts-hour24-path";
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
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sts-hour24-path-reports";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathReports::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StsHour24PathReports' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sts-hour24-path-report")
    {
        for(auto const & c : sts_hour24_path_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathReports::StsHour24PathReport>();
        c->parent = this;
        sts_hour24_path_report.push_back(std::move(c));
        children[segment_path] = sts_hour24_path_report.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathReports::get_children()
{
    for (auto const & c : sts_hour24_path_report)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathReports::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathReports::StsHour24PathReport::StsHour24PathReport()
    :
    path_report{YType::enumeration, "path-report"},
    enable{YType::enumeration, "enable"}
{
    yang_name = "sts-hour24-path-report"; yang_parent_name = "sts-hour24-path-reports";
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
    return is_set(operation)
	|| is_set(path_report.operation)
	|| is_set(enable.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathReports::StsHour24PathReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sts-hour24-path-report" <<"[path-report='" <<path_report <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathReports::StsHour24PathReport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StsHour24PathReport' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_report.is_set || is_set(path_report.operation)) leaf_name_data.push_back(path_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathReports::StsHour24PathReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathReports::StsHour24PathReport::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StsHour24::StsHour24Path::StsHour24PathReports::StsHour24PathReport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "path-report")
    {
        path_report = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15()
    :
    stm_minute15_stm(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm>())
{
    stm_minute15_stm->parent = this;
    children["stm-minute15-stm"] = stm_minute15_stm;

    yang_name = "stm-minute15"; yang_parent_name = "performance-management";
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
    return is_set(operation)
	|| (stm_minute15_stm !=  nullptr && stm_minute15_stm->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stm-minute15";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StmMinute15' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "stm-minute15-stm")
    {
        if(stm_minute15_stm != nullptr)
        {
            children["stm-minute15-stm"] = stm_minute15_stm;
        }
        else
        {
            stm_minute15_stm = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm>();
            stm_minute15_stm->parent = this;
            children["stm-minute15-stm"] = stm_minute15_stm;
        }
        return children.at("stm-minute15-stm");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::get_children()
{
    if(children.find("stm-minute15-stm") == children.end())
    {
        if(stm_minute15_stm != nullptr)
        {
            children["stm-minute15-stm"] = stm_minute15_stm;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15Stm()
    :
    stm_minute15_stm_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmReports>())
	,stm_minute15_stm_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmThresholds>())
{
    stm_minute15_stm_reports->parent = this;
    children["stm-minute15-stm-reports"] = stm_minute15_stm_reports;

    stm_minute15_stm_thresholds->parent = this;
    children["stm-minute15-stm-thresholds"] = stm_minute15_stm_thresholds;

    yang_name = "stm-minute15-stm"; yang_parent_name = "stm-minute15";
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
    return is_set(operation)
	|| (stm_minute15_stm_reports !=  nullptr && stm_minute15_stm_reports->has_operation())
	|| (stm_minute15_stm_thresholds !=  nullptr && stm_minute15_stm_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stm-minute15-stm";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StmMinute15Stm' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "stm-minute15-stm-reports")
    {
        if(stm_minute15_stm_reports != nullptr)
        {
            children["stm-minute15-stm-reports"] = stm_minute15_stm_reports;
        }
        else
        {
            stm_minute15_stm_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmReports>();
            stm_minute15_stm_reports->parent = this;
            children["stm-minute15-stm-reports"] = stm_minute15_stm_reports;
        }
        return children.at("stm-minute15-stm-reports");
    }

    if(child_yang_name == "stm-minute15-stm-thresholds")
    {
        if(stm_minute15_stm_thresholds != nullptr)
        {
            children["stm-minute15-stm-thresholds"] = stm_minute15_stm_thresholds;
        }
        else
        {
            stm_minute15_stm_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmThresholds>();
            stm_minute15_stm_thresholds->parent = this;
            children["stm-minute15-stm-thresholds"] = stm_minute15_stm_thresholds;
        }
        return children.at("stm-minute15-stm-thresholds");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::get_children()
{
    if(children.find("stm-minute15-stm-reports") == children.end())
    {
        if(stm_minute15_stm_reports != nullptr)
        {
            children["stm-minute15-stm-reports"] = stm_minute15_stm_reports;
        }
    }

    if(children.find("stm-minute15-stm-thresholds") == children.end())
    {
        if(stm_minute15_stm_thresholds != nullptr)
        {
            children["stm-minute15-stm-thresholds"] = stm_minute15_stm_thresholds;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmReports::StmMinute15StmReports()
{
    yang_name = "stm-minute15-stm-reports"; yang_parent_name = "stm-minute15-stm";
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
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stm-minute15-stm-reports";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmReports::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StmMinute15StmReports' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "stm-minute15-stm-report")
    {
        for(auto const & c : stm_minute15_stm_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmReports::StmMinute15StmReport>();
        c->parent = this;
        stm_minute15_stm_report.push_back(std::move(c));
        children[segment_path] = stm_minute15_stm_report.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmReports::get_children()
{
    for (auto const & c : stm_minute15_stm_report)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmReports::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmReports::StmMinute15StmReport::StmMinute15StmReport()
    :
    stm_report{YType::enumeration, "stm-report"},
    enable{YType::enumeration, "enable"}
{
    yang_name = "stm-minute15-stm-report"; yang_parent_name = "stm-minute15-stm-reports";
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
    return is_set(operation)
	|| is_set(stm_report.operation)
	|| is_set(enable.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmReports::StmMinute15StmReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stm-minute15-stm-report" <<"[stm-report='" <<stm_report <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmReports::StmMinute15StmReport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StmMinute15StmReport' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stm_report.is_set || is_set(stm_report.operation)) leaf_name_data.push_back(stm_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmReports::StmMinute15StmReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmReports::StmMinute15StmReport::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmReports::StmMinute15StmReport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "stm-report")
    {
        stm_report = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmThresholds::StmMinute15StmThresholds()
{
    yang_name = "stm-minute15-stm-thresholds"; yang_parent_name = "stm-minute15-stm";
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
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stm-minute15-stm-thresholds";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmThresholds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StmMinute15StmThresholds' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "stm-minute15-stm-threshold")
    {
        for(auto const & c : stm_minute15_stm_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmThresholds::StmMinute15StmThreshold>();
        c->parent = this;
        stm_minute15_stm_threshold.push_back(std::move(c));
        children[segment_path] = stm_minute15_stm_threshold.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmThresholds::get_children()
{
    for (auto const & c : stm_minute15_stm_threshold)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmThresholds::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmThresholds::StmMinute15StmThreshold::StmMinute15StmThreshold()
    :
    stm_threshold{YType::enumeration, "stm-threshold"},
    stm_threshold_value{YType::int32, "stm-threshold-value"}
{
    yang_name = "stm-minute15-stm-threshold"; yang_parent_name = "stm-minute15-stm-thresholds";
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
    return is_set(operation)
	|| is_set(stm_threshold.operation)
	|| is_set(stm_threshold_value.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmThresholds::StmMinute15StmThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stm-minute15-stm-threshold" <<"[stm-threshold='" <<stm_threshold <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmThresholds::StmMinute15StmThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StmMinute15StmThreshold' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stm_threshold.is_set || is_set(stm_threshold.operation)) leaf_name_data.push_back(stm_threshold.get_name_leafdata());
    if (stm_threshold_value.is_set || is_set(stm_threshold_value.operation)) leaf_name_data.push_back(stm_threshold_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmThresholds::StmMinute15StmThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmThresholds::StmMinute15StmThreshold::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::StmMinute15::StmMinute15Stm::StmMinute15StmThresholds::StmMinute15StmThreshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "stm-threshold")
    {
        stm_threshold = value;
    }
    if(value_path == "stm-threshold-value")
    {
        stm_threshold_value = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24()
    :
    sonet_hour24_ocn(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn>())
	,sonet_hour24_path(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path>())
{
    sonet_hour24_ocn->parent = this;
    children["sonet-hour24-ocn"] = sonet_hour24_ocn;

    sonet_hour24_path->parent = this;
    children["sonet-hour24-path"] = sonet_hour24_path;

    yang_name = "sonet-hour24"; yang_parent_name = "performance-management";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::~SonetHour24()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::has_data() const
{
    return (sonet_hour24_ocn !=  nullptr && sonet_hour24_ocn->has_data())
	|| (sonet_hour24_path !=  nullptr && sonet_hour24_path->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::has_operation() const
{
    return is_set(operation)
	|| (sonet_hour24_ocn !=  nullptr && sonet_hour24_ocn->has_operation())
	|| (sonet_hour24_path !=  nullptr && sonet_hour24_path->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-hour24";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SonetHour24' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sonet-hour24-ocn")
    {
        if(sonet_hour24_ocn != nullptr)
        {
            children["sonet-hour24-ocn"] = sonet_hour24_ocn;
        }
        else
        {
            sonet_hour24_ocn = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn>();
            sonet_hour24_ocn->parent = this;
            children["sonet-hour24-ocn"] = sonet_hour24_ocn;
        }
        return children.at("sonet-hour24-ocn");
    }

    if(child_yang_name == "sonet-hour24-path")
    {
        if(sonet_hour24_path != nullptr)
        {
            children["sonet-hour24-path"] = sonet_hour24_path;
        }
        else
        {
            sonet_hour24_path = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path>();
            sonet_hour24_path->parent = this;
            children["sonet-hour24-path"] = sonet_hour24_path;
        }
        return children.at("sonet-hour24-path");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::get_children()
{
    if(children.find("sonet-hour24-ocn") == children.end())
    {
        if(sonet_hour24_ocn != nullptr)
        {
            children["sonet-hour24-ocn"] = sonet_hour24_ocn;
        }
    }

    if(children.find("sonet-hour24-path") == children.end())
    {
        if(sonet_hour24_path != nullptr)
        {
            children["sonet-hour24-path"] = sonet_hour24_path;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24Path()
    :
    sonet_hour24_path_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathReports>())
	,sonet_hour24_path_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathThresholds>())
{
    sonet_hour24_path_reports->parent = this;
    children["sonet-hour24-path-reports"] = sonet_hour24_path_reports;

    sonet_hour24_path_thresholds->parent = this;
    children["sonet-hour24-path-thresholds"] = sonet_hour24_path_thresholds;

    yang_name = "sonet-hour24-path"; yang_parent_name = "sonet-hour24";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::~SonetHour24Path()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::has_data() const
{
    return (sonet_hour24_path_reports !=  nullptr && sonet_hour24_path_reports->has_data())
	|| (sonet_hour24_path_thresholds !=  nullptr && sonet_hour24_path_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::has_operation() const
{
    return is_set(operation)
	|| (sonet_hour24_path_reports !=  nullptr && sonet_hour24_path_reports->has_operation())
	|| (sonet_hour24_path_thresholds !=  nullptr && sonet_hour24_path_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-hour24-path";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SonetHour24Path' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sonet-hour24-path-reports")
    {
        if(sonet_hour24_path_reports != nullptr)
        {
            children["sonet-hour24-path-reports"] = sonet_hour24_path_reports;
        }
        else
        {
            sonet_hour24_path_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathReports>();
            sonet_hour24_path_reports->parent = this;
            children["sonet-hour24-path-reports"] = sonet_hour24_path_reports;
        }
        return children.at("sonet-hour24-path-reports");
    }

    if(child_yang_name == "sonet-hour24-path-thresholds")
    {
        if(sonet_hour24_path_thresholds != nullptr)
        {
            children["sonet-hour24-path-thresholds"] = sonet_hour24_path_thresholds;
        }
        else
        {
            sonet_hour24_path_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathThresholds>();
            sonet_hour24_path_thresholds->parent = this;
            children["sonet-hour24-path-thresholds"] = sonet_hour24_path_thresholds;
        }
        return children.at("sonet-hour24-path-thresholds");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::get_children()
{
    if(children.find("sonet-hour24-path-reports") == children.end())
    {
        if(sonet_hour24_path_reports != nullptr)
        {
            children["sonet-hour24-path-reports"] = sonet_hour24_path_reports;
        }
    }

    if(children.find("sonet-hour24-path-thresholds") == children.end())
    {
        if(sonet_hour24_path_thresholds != nullptr)
        {
            children["sonet-hour24-path-thresholds"] = sonet_hour24_path_thresholds;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathThresholds::SonetHour24PathThresholds()
{
    yang_name = "sonet-hour24-path-thresholds"; yang_parent_name = "sonet-hour24-path";
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
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-hour24-path-thresholds";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathThresholds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SonetHour24PathThresholds' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sonet-hour24-path-threshold")
    {
        for(auto const & c : sonet_hour24_path_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathThresholds::SonetHour24PathThreshold>();
        c->parent = this;
        sonet_hour24_path_threshold.push_back(std::move(c));
        children[segment_path] = sonet_hour24_path_threshold.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathThresholds::get_children()
{
    for (auto const & c : sonet_hour24_path_threshold)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathThresholds::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathThresholds::SonetHour24PathThreshold::SonetHour24PathThreshold()
    :
    path_threshold{YType::enumeration, "path-threshold"},
    path_threshold_value{YType::int32, "path-threshold-value"}
{
    yang_name = "sonet-hour24-path-threshold"; yang_parent_name = "sonet-hour24-path-thresholds";
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
    return is_set(operation)
	|| is_set(path_threshold.operation)
	|| is_set(path_threshold_value.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathThresholds::SonetHour24PathThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-hour24-path-threshold" <<"[path-threshold='" <<path_threshold <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathThresholds::SonetHour24PathThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SonetHour24PathThreshold' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_threshold.is_set || is_set(path_threshold.operation)) leaf_name_data.push_back(path_threshold.get_name_leafdata());
    if (path_threshold_value.is_set || is_set(path_threshold_value.operation)) leaf_name_data.push_back(path_threshold_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathThresholds::SonetHour24PathThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathThresholds::SonetHour24PathThreshold::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathThresholds::SonetHour24PathThreshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "path-threshold")
    {
        path_threshold = value;
    }
    if(value_path == "path-threshold-value")
    {
        path_threshold_value = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathReports::SonetHour24PathReports()
{
    yang_name = "sonet-hour24-path-reports"; yang_parent_name = "sonet-hour24-path";
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
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-hour24-path-reports";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathReports::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SonetHour24PathReports' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sonet-hour24-path-report")
    {
        for(auto const & c : sonet_hour24_path_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathReports::SonetHour24PathReport>();
        c->parent = this;
        sonet_hour24_path_report.push_back(std::move(c));
        children[segment_path] = sonet_hour24_path_report.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathReports::get_children()
{
    for (auto const & c : sonet_hour24_path_report)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathReports::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathReports::SonetHour24PathReport::SonetHour24PathReport()
    :
    path_report{YType::enumeration, "path-report"}
{
    yang_name = "sonet-hour24-path-report"; yang_parent_name = "sonet-hour24-path-reports";
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
    return is_set(operation)
	|| is_set(path_report.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathReports::SonetHour24PathReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-hour24-path-report" <<"[path-report='" <<path_report <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathReports::SonetHour24PathReport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SonetHour24PathReport' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_report.is_set || is_set(path_report.operation)) leaf_name_data.push_back(path_report.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathReports::SonetHour24PathReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathReports::SonetHour24PathReport::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Path::SonetHour24PathReports::SonetHour24PathReport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "path-report")
    {
        path_report = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24Ocn()
    :
    sonet_hour24_ocn_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnReports>())
	,sonet_hour24_ocn_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnThresholds>())
{
    sonet_hour24_ocn_reports->parent = this;
    children["sonet-hour24-ocn-reports"] = sonet_hour24_ocn_reports;

    sonet_hour24_ocn_thresholds->parent = this;
    children["sonet-hour24-ocn-thresholds"] = sonet_hour24_ocn_thresholds;

    yang_name = "sonet-hour24-ocn"; yang_parent_name = "sonet-hour24";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::~SonetHour24Ocn()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::has_data() const
{
    return (sonet_hour24_ocn_reports !=  nullptr && sonet_hour24_ocn_reports->has_data())
	|| (sonet_hour24_ocn_thresholds !=  nullptr && sonet_hour24_ocn_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::has_operation() const
{
    return is_set(operation)
	|| (sonet_hour24_ocn_reports !=  nullptr && sonet_hour24_ocn_reports->has_operation())
	|| (sonet_hour24_ocn_thresholds !=  nullptr && sonet_hour24_ocn_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-hour24-ocn";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SonetHour24Ocn' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sonet-hour24-ocn-reports")
    {
        if(sonet_hour24_ocn_reports != nullptr)
        {
            children["sonet-hour24-ocn-reports"] = sonet_hour24_ocn_reports;
        }
        else
        {
            sonet_hour24_ocn_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnReports>();
            sonet_hour24_ocn_reports->parent = this;
            children["sonet-hour24-ocn-reports"] = sonet_hour24_ocn_reports;
        }
        return children.at("sonet-hour24-ocn-reports");
    }

    if(child_yang_name == "sonet-hour24-ocn-thresholds")
    {
        if(sonet_hour24_ocn_thresholds != nullptr)
        {
            children["sonet-hour24-ocn-thresholds"] = sonet_hour24_ocn_thresholds;
        }
        else
        {
            sonet_hour24_ocn_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnThresholds>();
            sonet_hour24_ocn_thresholds->parent = this;
            children["sonet-hour24-ocn-thresholds"] = sonet_hour24_ocn_thresholds;
        }
        return children.at("sonet-hour24-ocn-thresholds");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::get_children()
{
    if(children.find("sonet-hour24-ocn-reports") == children.end())
    {
        if(sonet_hour24_ocn_reports != nullptr)
        {
            children["sonet-hour24-ocn-reports"] = sonet_hour24_ocn_reports;
        }
    }

    if(children.find("sonet-hour24-ocn-thresholds") == children.end())
    {
        if(sonet_hour24_ocn_thresholds != nullptr)
        {
            children["sonet-hour24-ocn-thresholds"] = sonet_hour24_ocn_thresholds;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnThresholds::SonetHour24OcnThresholds()
{
    yang_name = "sonet-hour24-ocn-thresholds"; yang_parent_name = "sonet-hour24-ocn";
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
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-hour24-ocn-thresholds";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnThresholds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SonetHour24OcnThresholds' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sonet-hour24-ocn-threshold")
    {
        for(auto const & c : sonet_hour24_ocn_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnThresholds::SonetHour24OcnThreshold>();
        c->parent = this;
        sonet_hour24_ocn_threshold.push_back(std::move(c));
        children[segment_path] = sonet_hour24_ocn_threshold.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnThresholds::get_children()
{
    for (auto const & c : sonet_hour24_ocn_threshold)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnThresholds::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnThresholds::SonetHour24OcnThreshold::SonetHour24OcnThreshold()
    :
    ocn_threshold{YType::enumeration, "ocn-threshold"},
    ocn_threshold_value{YType::int32, "ocn-threshold-value"}
{
    yang_name = "sonet-hour24-ocn-threshold"; yang_parent_name = "sonet-hour24-ocn-thresholds";
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
    return is_set(operation)
	|| is_set(ocn_threshold.operation)
	|| is_set(ocn_threshold_value.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnThresholds::SonetHour24OcnThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-hour24-ocn-threshold" <<"[ocn-threshold='" <<ocn_threshold <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnThresholds::SonetHour24OcnThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SonetHour24OcnThreshold' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ocn_threshold.is_set || is_set(ocn_threshold.operation)) leaf_name_data.push_back(ocn_threshold.get_name_leafdata());
    if (ocn_threshold_value.is_set || is_set(ocn_threshold_value.operation)) leaf_name_data.push_back(ocn_threshold_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnThresholds::SonetHour24OcnThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnThresholds::SonetHour24OcnThreshold::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnThresholds::SonetHour24OcnThreshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ocn-threshold")
    {
        ocn_threshold = value;
    }
    if(value_path == "ocn-threshold-value")
    {
        ocn_threshold_value = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnReports::SonetHour24OcnReports()
{
    yang_name = "sonet-hour24-ocn-reports"; yang_parent_name = "sonet-hour24-ocn";
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
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-hour24-ocn-reports";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnReports::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SonetHour24OcnReports' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sonet-hour24-ocn-report")
    {
        for(auto const & c : sonet_hour24_ocn_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnReports::SonetHour24OcnReport>();
        c->parent = this;
        sonet_hour24_ocn_report.push_back(std::move(c));
        children[segment_path] = sonet_hour24_ocn_report.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnReports::get_children()
{
    for (auto const & c : sonet_hour24_ocn_report)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnReports::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnReports::SonetHour24OcnReport::SonetHour24OcnReport()
    :
    ocn_report{YType::enumeration, "ocn-report"}
{
    yang_name = "sonet-hour24-ocn-report"; yang_parent_name = "sonet-hour24-ocn-reports";
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
    return is_set(operation)
	|| is_set(ocn_report.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnReports::SonetHour24OcnReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-hour24-ocn-report" <<"[ocn-report='" <<ocn_report <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnReports::SonetHour24OcnReport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SonetHour24OcnReport' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ocn_report.is_set || is_set(ocn_report.operation)) leaf_name_data.push_back(ocn_report.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnReports::SonetHour24OcnReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnReports::SonetHour24OcnReport::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::SonetHour24::SonetHour24Ocn::SonetHour24OcnReports::SonetHour24OcnReport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ocn-report")
    {
        ocn_report = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15Path()
    :
    minute15otn_path(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath>())
{
    minute15otn_path->parent = this;
    children["minute15otn-path"] = minute15otn_path;

    yang_name = "minute15-path"; yang_parent_name = "performance-management";
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
    return is_set(operation)
	|| (minute15otn_path !=  nullptr && minute15otn_path->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-path";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Minute15Path' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "minute15otn-path")
    {
        if(minute15otn_path != nullptr)
        {
            children["minute15otn-path"] = minute15otn_path;
        }
        else
        {
            minute15otn_path = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath>();
            minute15otn_path->parent = this;
            children["minute15otn-path"] = minute15otn_path;
        }
        return children.at("minute15otn-path");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::get_children()
{
    if(children.find("minute15otn-path") == children.end())
    {
        if(minute15otn_path != nullptr)
        {
            children["minute15otn-path"] = minute15otn_path;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Minute15OtnPath()
    :
    min15_otn_path_threshes(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Min15OtnPathThreshes>())
	,minute15otn_path_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Minute15OtnPathReports>())
{
    min15_otn_path_threshes->parent = this;
    children["min15-otn-path-threshes"] = min15_otn_path_threshes;

    minute15otn_path_reports->parent = this;
    children["minute15otn-path-reports"] = minute15otn_path_reports;

    yang_name = "minute15otn-path"; yang_parent_name = "minute15-path";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::~Minute15OtnPath()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::has_data() const
{
    return (min15_otn_path_threshes !=  nullptr && min15_otn_path_threshes->has_data())
	|| (minute15otn_path_reports !=  nullptr && minute15otn_path_reports->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::has_operation() const
{
    return is_set(operation)
	|| (min15_otn_path_threshes !=  nullptr && min15_otn_path_threshes->has_operation())
	|| (minute15otn_path_reports !=  nullptr && minute15otn_path_reports->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15otn-path";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Minute15OtnPath' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "min15-otn-path-threshes")
    {
        if(min15_otn_path_threshes != nullptr)
        {
            children["min15-otn-path-threshes"] = min15_otn_path_threshes;
        }
        else
        {
            min15_otn_path_threshes = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Min15OtnPathThreshes>();
            min15_otn_path_threshes->parent = this;
            children["min15-otn-path-threshes"] = min15_otn_path_threshes;
        }
        return children.at("min15-otn-path-threshes");
    }

    if(child_yang_name == "minute15otn-path-reports")
    {
        if(minute15otn_path_reports != nullptr)
        {
            children["minute15otn-path-reports"] = minute15otn_path_reports;
        }
        else
        {
            minute15otn_path_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Minute15OtnPathReports>();
            minute15otn_path_reports->parent = this;
            children["minute15otn-path-reports"] = minute15otn_path_reports;
        }
        return children.at("minute15otn-path-reports");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::get_children()
{
    if(children.find("min15-otn-path-threshes") == children.end())
    {
        if(min15_otn_path_threshes != nullptr)
        {
            children["min15-otn-path-threshes"] = min15_otn_path_threshes;
        }
    }

    if(children.find("minute15otn-path-reports") == children.end())
    {
        if(minute15otn_path_reports != nullptr)
        {
            children["minute15otn-path-reports"] = minute15otn_path_reports;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Minute15OtnPathReports::Minute15OtnPathReports()
{
    yang_name = "minute15otn-path-reports"; yang_parent_name = "minute15otn-path";
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
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Minute15OtnPathReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15otn-path-reports";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Minute15OtnPathReports::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Minute15OtnPathReports' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Minute15OtnPathReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "minute15otn-path-report")
    {
        for(auto const & c : minute15otn_path_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Minute15OtnPathReports::Minute15OtnPathReport>();
        c->parent = this;
        minute15otn_path_report.push_back(std::move(c));
        children[segment_path] = minute15otn_path_report.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Minute15OtnPathReports::get_children()
{
    for (auto const & c : minute15otn_path_report)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Minute15OtnPathReports::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Minute15OtnPathReports::Minute15OtnPathReport::Minute15OtnPathReport()
    :
    otn_report{YType::enumeration, "otn-report"},
    enable{YType::enumeration, "enable"}
{
    yang_name = "minute15otn-path-report"; yang_parent_name = "minute15otn-path-reports";
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
    return is_set(operation)
	|| is_set(otn_report.operation)
	|| is_set(enable.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Minute15OtnPathReports::Minute15OtnPathReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15otn-path-report" <<"[otn-report='" <<otn_report <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Minute15OtnPathReports::Minute15OtnPathReport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Minute15OtnPathReport' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (otn_report.is_set || is_set(otn_report.operation)) leaf_name_data.push_back(otn_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Minute15OtnPathReports::Minute15OtnPathReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Minute15OtnPathReports::Minute15OtnPathReport::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Minute15OtnPathReports::Minute15OtnPathReport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "otn-report")
    {
        otn_report = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Min15OtnPathThreshes::Min15OtnPathThreshes()
{
    yang_name = "min15-otn-path-threshes"; yang_parent_name = "minute15otn-path";
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
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Min15OtnPathThreshes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min15-otn-path-threshes";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Min15OtnPathThreshes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Min15OtnPathThreshes' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Min15OtnPathThreshes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "min15-otn-path-thresh")
    {
        for(auto const & c : min15_otn_path_thresh)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Min15OtnPathThreshes::Min15OtnPathThresh>();
        c->parent = this;
        min15_otn_path_thresh.push_back(std::move(c));
        children[segment_path] = min15_otn_path_thresh.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Min15OtnPathThreshes::get_children()
{
    for (auto const & c : min15_otn_path_thresh)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Min15OtnPathThreshes::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Min15OtnPathThreshes::Min15OtnPathThresh::Min15OtnPathThresh()
    :
    otn_threshold{YType::enumeration, "otn-threshold"},
    otn_threshold_value{YType::int32, "otn-threshold-value"}
{
    yang_name = "min15-otn-path-thresh"; yang_parent_name = "min15-otn-path-threshes";
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
    return is_set(operation)
	|| is_set(otn_threshold.operation)
	|| is_set(otn_threshold_value.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Min15OtnPathThreshes::Min15OtnPathThresh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min15-otn-path-thresh" <<"[otn-threshold='" <<otn_threshold <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Min15OtnPathThreshes::Min15OtnPathThresh::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Min15OtnPathThresh' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (otn_threshold.is_set || is_set(otn_threshold.operation)) leaf_name_data.push_back(otn_threshold.get_name_leafdata());
    if (otn_threshold_value.is_set || is_set(otn_threshold_value.operation)) leaf_name_data.push_back(otn_threshold_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Min15OtnPathThreshes::Min15OtnPathThresh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Min15OtnPathThreshes::Min15OtnPathThresh::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15Path::Minute15OtnPath::Min15OtnPathThreshes::Min15OtnPathThresh::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "otn-threshold")
    {
        otn_threshold = value;
    }
    if(value_path == "otn-threshold-value")
    {
        otn_threshold_value = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15()
    :
    oc_minute15_ocn(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn>())
{
    oc_minute15_ocn->parent = this;
    children["oc-minute15-ocn"] = oc_minute15_ocn;

    yang_name = "oc-minute15"; yang_parent_name = "performance-management";
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
    return is_set(operation)
	|| (oc_minute15_ocn !=  nullptr && oc_minute15_ocn->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-minute15";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OcMinute15' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "oc-minute15-ocn")
    {
        if(oc_minute15_ocn != nullptr)
        {
            children["oc-minute15-ocn"] = oc_minute15_ocn;
        }
        else
        {
            oc_minute15_ocn = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn>();
            oc_minute15_ocn->parent = this;
            children["oc-minute15-ocn"] = oc_minute15_ocn;
        }
        return children.at("oc-minute15-ocn");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::get_children()
{
    if(children.find("oc-minute15-ocn") == children.end())
    {
        if(oc_minute15_ocn != nullptr)
        {
            children["oc-minute15-ocn"] = oc_minute15_ocn;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15Ocn()
    :
    oc_minute15_ocn_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnReports>())
	,oc_minute15_ocn_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnThresholds>())
{
    oc_minute15_ocn_reports->parent = this;
    children["oc-minute15-ocn-reports"] = oc_minute15_ocn_reports;

    oc_minute15_ocn_thresholds->parent = this;
    children["oc-minute15-ocn-thresholds"] = oc_minute15_ocn_thresholds;

    yang_name = "oc-minute15-ocn"; yang_parent_name = "oc-minute15";
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
    return is_set(operation)
	|| (oc_minute15_ocn_reports !=  nullptr && oc_minute15_ocn_reports->has_operation())
	|| (oc_minute15_ocn_thresholds !=  nullptr && oc_minute15_ocn_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-minute15-ocn";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OcMinute15Ocn' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "oc-minute15-ocn-reports")
    {
        if(oc_minute15_ocn_reports != nullptr)
        {
            children["oc-minute15-ocn-reports"] = oc_minute15_ocn_reports;
        }
        else
        {
            oc_minute15_ocn_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnReports>();
            oc_minute15_ocn_reports->parent = this;
            children["oc-minute15-ocn-reports"] = oc_minute15_ocn_reports;
        }
        return children.at("oc-minute15-ocn-reports");
    }

    if(child_yang_name == "oc-minute15-ocn-thresholds")
    {
        if(oc_minute15_ocn_thresholds != nullptr)
        {
            children["oc-minute15-ocn-thresholds"] = oc_minute15_ocn_thresholds;
        }
        else
        {
            oc_minute15_ocn_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnThresholds>();
            oc_minute15_ocn_thresholds->parent = this;
            children["oc-minute15-ocn-thresholds"] = oc_minute15_ocn_thresholds;
        }
        return children.at("oc-minute15-ocn-thresholds");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::get_children()
{
    if(children.find("oc-minute15-ocn-reports") == children.end())
    {
        if(oc_minute15_ocn_reports != nullptr)
        {
            children["oc-minute15-ocn-reports"] = oc_minute15_ocn_reports;
        }
    }

    if(children.find("oc-minute15-ocn-thresholds") == children.end())
    {
        if(oc_minute15_ocn_thresholds != nullptr)
        {
            children["oc-minute15-ocn-thresholds"] = oc_minute15_ocn_thresholds;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnReports::OcMinute15OcnReports()
{
    yang_name = "oc-minute15-ocn-reports"; yang_parent_name = "oc-minute15-ocn";
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
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-minute15-ocn-reports";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnReports::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OcMinute15OcnReports' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "oc-minute15-ocn-report")
    {
        for(auto const & c : oc_minute15_ocn_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnReports::OcMinute15OcnReport>();
        c->parent = this;
        oc_minute15_ocn_report.push_back(std::move(c));
        children[segment_path] = oc_minute15_ocn_report.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnReports::get_children()
{
    for (auto const & c : oc_minute15_ocn_report)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnReports::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnReports::OcMinute15OcnReport::OcMinute15OcnReport()
    :
    ocn_report{YType::enumeration, "ocn-report"},
    enable{YType::enumeration, "enable"}
{
    yang_name = "oc-minute15-ocn-report"; yang_parent_name = "oc-minute15-ocn-reports";
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
    return is_set(operation)
	|| is_set(ocn_report.operation)
	|| is_set(enable.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnReports::OcMinute15OcnReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-minute15-ocn-report" <<"[ocn-report='" <<ocn_report <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnReports::OcMinute15OcnReport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OcMinute15OcnReport' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ocn_report.is_set || is_set(ocn_report.operation)) leaf_name_data.push_back(ocn_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnReports::OcMinute15OcnReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnReports::OcMinute15OcnReport::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnReports::OcMinute15OcnReport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ocn-report")
    {
        ocn_report = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnThresholds::OcMinute15OcnThresholds()
{
    yang_name = "oc-minute15-ocn-thresholds"; yang_parent_name = "oc-minute15-ocn";
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
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-minute15-ocn-thresholds";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnThresholds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OcMinute15OcnThresholds' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "oc-minute15-ocn-threshold")
    {
        for(auto const & c : oc_minute15_ocn_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnThresholds::OcMinute15OcnThreshold>();
        c->parent = this;
        oc_minute15_ocn_threshold.push_back(std::move(c));
        children[segment_path] = oc_minute15_ocn_threshold.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnThresholds::get_children()
{
    for (auto const & c : oc_minute15_ocn_threshold)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnThresholds::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnThresholds::OcMinute15OcnThreshold::OcMinute15OcnThreshold()
    :
    ocn_threshold{YType::enumeration, "ocn-threshold"},
    ocn_threshold_value{YType::int32, "ocn-threshold-value"}
{
    yang_name = "oc-minute15-ocn-threshold"; yang_parent_name = "oc-minute15-ocn-thresholds";
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
    return is_set(operation)
	|| is_set(ocn_threshold.operation)
	|| is_set(ocn_threshold_value.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnThresholds::OcMinute15OcnThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-minute15-ocn-threshold" <<"[ocn-threshold='" <<ocn_threshold <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnThresholds::OcMinute15OcnThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OcMinute15OcnThreshold' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ocn_threshold.is_set || is_set(ocn_threshold.operation)) leaf_name_data.push_back(ocn_threshold.get_name_leafdata());
    if (ocn_threshold_value.is_set || is_set(ocn_threshold_value.operation)) leaf_name_data.push_back(ocn_threshold_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnThresholds::OcMinute15OcnThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnThresholds::OcMinute15OcnThreshold::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnThresholds::OcMinute15OcnThreshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ocn-threshold")
    {
        ocn_threshold = value;
    }
    if(value_path == "ocn-threshold-value")
    {
        ocn_threshold_value = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::EthernetSecond30()
    :
    second30_ether(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether>())
{
    second30_ether->parent = this;
    children["second30-ether"] = second30_ether;

    yang_name = "ethernet-second30"; yang_parent_name = "performance-management";
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
    return is_set(operation)
	|| (second30_ether !=  nullptr && second30_ether->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-second30";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EthernetSecond30' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "second30-ether")
    {
        if(second30_ether != nullptr)
        {
            children["second30-ether"] = second30_ether;
        }
        else
        {
            second30_ether = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether>();
            second30_ether->parent = this;
            children["second30-ether"] = second30_ether;
        }
        return children.at("second30-ether");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::get_children()
{
    if(children.find("second30-ether") == children.end())
    {
        if(second30_ether != nullptr)
        {
            children["second30-ether"] = second30_ether;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30Ether()
    :
    second30_ether_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports>())
	,second30_ether_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds>())
{
    second30_ether_reports->parent = this;
    children["second30-ether-reports"] = second30_ether_reports;

    second30_ether_thresholds->parent = this;
    children["second30-ether-thresholds"] = second30_ether_thresholds;

    yang_name = "second30-ether"; yang_parent_name = "ethernet-second30";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::~Second30Ether()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::has_data() const
{
    return (second30_ether_reports !=  nullptr && second30_ether_reports->has_data())
	|| (second30_ether_thresholds !=  nullptr && second30_ether_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::has_operation() const
{
    return is_set(operation)
	|| (second30_ether_reports !=  nullptr && second30_ether_reports->has_operation())
	|| (second30_ether_thresholds !=  nullptr && second30_ether_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30-ether";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Second30Ether' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "second30-ether-reports")
    {
        if(second30_ether_reports != nullptr)
        {
            children["second30-ether-reports"] = second30_ether_reports;
        }
        else
        {
            second30_ether_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports>();
            second30_ether_reports->parent = this;
            children["second30-ether-reports"] = second30_ether_reports;
        }
        return children.at("second30-ether-reports");
    }

    if(child_yang_name == "second30-ether-thresholds")
    {
        if(second30_ether_thresholds != nullptr)
        {
            children["second30-ether-thresholds"] = second30_ether_thresholds;
        }
        else
        {
            second30_ether_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds>();
            second30_ether_thresholds->parent = this;
            children["second30-ether-thresholds"] = second30_ether_thresholds;
        }
        return children.at("second30-ether-thresholds");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::get_children()
{
    if(children.find("second30-ether-reports") == children.end())
    {
        if(second30_ether_reports != nullptr)
        {
            children["second30-ether-reports"] = second30_ether_reports;
        }
    }

    if(children.find("second30-ether-thresholds") == children.end())
    {
        if(second30_ether_thresholds != nullptr)
        {
            children["second30-ether-thresholds"] = second30_ether_thresholds;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds::Second30EtherThresholds()
{
    yang_name = "second30-ether-thresholds"; yang_parent_name = "second30-ether";
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
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30-ether-thresholds";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Second30EtherThresholds' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "second30-ether-threshold")
    {
        for(auto const & c : second30_ether_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds::Second30EtherThreshold>();
        c->parent = this;
        second30_ether_threshold.push_back(std::move(c));
        children[segment_path] = second30_ether_threshold.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds::get_children()
{
    for (auto const & c : second30_ether_threshold)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds::Second30EtherThreshold::Second30EtherThreshold()
    :
    ether_threshold{YType::enumeration, "ether-threshold"},
    ether_threshold_value{YType::int32, "ether-threshold-value"}
{
    yang_name = "second30-ether-threshold"; yang_parent_name = "second30-ether-thresholds";
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
    return is_set(operation)
	|| is_set(ether_threshold.operation)
	|| is_set(ether_threshold_value.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds::Second30EtherThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30-ether-threshold" <<"[ether-threshold='" <<ether_threshold <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds::Second30EtherThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Second30EtherThreshold' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ether_threshold.is_set || is_set(ether_threshold.operation)) leaf_name_data.push_back(ether_threshold.get_name_leafdata());
    if (ether_threshold_value.is_set || is_set(ether_threshold_value.operation)) leaf_name_data.push_back(ether_threshold_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds::Second30EtherThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds::Second30EtherThreshold::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds::Second30EtherThreshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ether-threshold")
    {
        ether_threshold = value;
    }
    if(value_path == "ether-threshold-value")
    {
        ether_threshold_value = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports::Second30EtherReports()
{
    yang_name = "second30-ether-reports"; yang_parent_name = "second30-ether";
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
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30-ether-reports";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Second30EtherReports' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "second30-ether-report")
    {
        for(auto const & c : second30_ether_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports::Second30EtherReport>();
        c->parent = this;
        second30_ether_report.push_back(std::move(c));
        children[segment_path] = second30_ether_report.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports::get_children()
{
    for (auto const & c : second30_ether_report)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports::Second30EtherReport::Second30EtherReport()
    :
    ether_report{YType::enumeration, "ether-report"}
{
    yang_name = "second30-ether-report"; yang_parent_name = "second30-ether-reports";
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
    return is_set(operation)
	|| is_set(ether_report.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports::Second30EtherReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30-ether-report" <<"[ether-report='" <<ether_report <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports::Second30EtherReport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Second30EtherReport' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ether_report.is_set || is_set(ether_report.operation)) leaf_name_data.push_back(ether_report.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports::Second30EtherReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports::Second30EtherReport::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports::Second30EtherReport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ether-report")
    {
        ether_report = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24Path()
    :
    hour24otn_path(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath>())
{
    hour24otn_path->parent = this;
    children["hour24otn-path"] = hour24otn_path;

    yang_name = "hour24-path"; yang_parent_name = "performance-management";
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
    return is_set(operation)
	|| (hour24otn_path !=  nullptr && hour24otn_path->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24-path";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Hour24Path' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "hour24otn-path")
    {
        if(hour24otn_path != nullptr)
        {
            children["hour24otn-path"] = hour24otn_path;
        }
        else
        {
            hour24otn_path = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath>();
            hour24otn_path->parent = this;
            children["hour24otn-path"] = hour24otn_path;
        }
        return children.at("hour24otn-path");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::get_children()
{
    if(children.find("hour24otn-path") == children.end())
    {
        if(hour24otn_path != nullptr)
        {
            children["hour24otn-path"] = hour24otn_path;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPath()
    :
    hour24otn_path_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathReports>())
	,hour24otn_path_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathThresholds>())
{
    hour24otn_path_reports->parent = this;
    children["hour24otn-path-reports"] = hour24otn_path_reports;

    hour24otn_path_thresholds->parent = this;
    children["hour24otn-path-thresholds"] = hour24otn_path_thresholds;

    yang_name = "hour24otn-path"; yang_parent_name = "hour24-path";
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
    return is_set(operation)
	|| (hour24otn_path_reports !=  nullptr && hour24otn_path_reports->has_operation())
	|| (hour24otn_path_thresholds !=  nullptr && hour24otn_path_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24otn-path";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Hour24OtnPath' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "hour24otn-path-reports")
    {
        if(hour24otn_path_reports != nullptr)
        {
            children["hour24otn-path-reports"] = hour24otn_path_reports;
        }
        else
        {
            hour24otn_path_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathReports>();
            hour24otn_path_reports->parent = this;
            children["hour24otn-path-reports"] = hour24otn_path_reports;
        }
        return children.at("hour24otn-path-reports");
    }

    if(child_yang_name == "hour24otn-path-thresholds")
    {
        if(hour24otn_path_thresholds != nullptr)
        {
            children["hour24otn-path-thresholds"] = hour24otn_path_thresholds;
        }
        else
        {
            hour24otn_path_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathThresholds>();
            hour24otn_path_thresholds->parent = this;
            children["hour24otn-path-thresholds"] = hour24otn_path_thresholds;
        }
        return children.at("hour24otn-path-thresholds");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::get_children()
{
    if(children.find("hour24otn-path-reports") == children.end())
    {
        if(hour24otn_path_reports != nullptr)
        {
            children["hour24otn-path-reports"] = hour24otn_path_reports;
        }
    }

    if(children.find("hour24otn-path-thresholds") == children.end())
    {
        if(hour24otn_path_thresholds != nullptr)
        {
            children["hour24otn-path-thresholds"] = hour24otn_path_thresholds;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathReports::Hour24OtnPathReports()
{
    yang_name = "hour24otn-path-reports"; yang_parent_name = "hour24otn-path";
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
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24otn-path-reports";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathReports::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Hour24OtnPathReports' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "hour24otn-path-report")
    {
        for(auto const & c : hour24otn_path_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathReports::Hour24OtnPathReport>();
        c->parent = this;
        hour24otn_path_report.push_back(std::move(c));
        children[segment_path] = hour24otn_path_report.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathReports::get_children()
{
    for (auto const & c : hour24otn_path_report)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathReports::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathReports::Hour24OtnPathReport::Hour24OtnPathReport()
    :
    otn_report{YType::enumeration, "otn-report"},
    enable{YType::enumeration, "enable"}
{
    yang_name = "hour24otn-path-report"; yang_parent_name = "hour24otn-path-reports";
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
    return is_set(operation)
	|| is_set(otn_report.operation)
	|| is_set(enable.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathReports::Hour24OtnPathReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24otn-path-report" <<"[otn-report='" <<otn_report <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathReports::Hour24OtnPathReport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Hour24OtnPathReport' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (otn_report.is_set || is_set(otn_report.operation)) leaf_name_data.push_back(otn_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathReports::Hour24OtnPathReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathReports::Hour24OtnPathReport::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathReports::Hour24OtnPathReport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "otn-report")
    {
        otn_report = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathThresholds::Hour24OtnPathThresholds()
{
    yang_name = "hour24otn-path-thresholds"; yang_parent_name = "hour24otn-path";
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
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24otn-path-thresholds";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathThresholds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Hour24OtnPathThresholds' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "hour24otn-path-threshold")
    {
        for(auto const & c : hour24otn_path_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathThresholds::Hour24OtnPathThreshold>();
        c->parent = this;
        hour24otn_path_threshold.push_back(std::move(c));
        children[segment_path] = hour24otn_path_threshold.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathThresholds::get_children()
{
    for (auto const & c : hour24otn_path_threshold)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathThresholds::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathThresholds::Hour24OtnPathThreshold::Hour24OtnPathThreshold()
    :
    otn_threshold{YType::enumeration, "otn-threshold"},
    otn_threshold_value{YType::int32, "otn-threshold-value"}
{
    yang_name = "hour24otn-path-threshold"; yang_parent_name = "hour24otn-path-thresholds";
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
    return is_set(operation)
	|| is_set(otn_threshold.operation)
	|| is_set(otn_threshold_value.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathThresholds::Hour24OtnPathThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hour24otn-path-threshold" <<"[otn-threshold='" <<otn_threshold <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathThresholds::Hour24OtnPathThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Hour24OtnPathThreshold' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (otn_threshold.is_set || is_set(otn_threshold.operation)) leaf_name_data.push_back(otn_threshold.get_name_leafdata());
    if (otn_threshold_value.is_set || is_set(otn_threshold_value.operation)) leaf_name_data.push_back(otn_threshold_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathThresholds::Hour24OtnPathThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathThresholds::Hour24OtnPathThreshold::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24OtnPath::Hour24OtnPathThresholds::Hour24OtnPathThreshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "otn-threshold")
    {
        otn_threshold = value;
    }
    if(value_path == "otn-threshold-value")
    {
        otn_threshold_value = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15()
    :
    minute15_optics(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics>())
	,minute15fec(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec>())
	,minute15otn(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn>())
{
    minute15_optics->parent = this;
    children["minute15-optics"] = minute15_optics;

    minute15fec->parent = this;
    children["minute15fec"] = minute15fec;

    minute15otn->parent = this;
    children["minute15otn"] = minute15otn;

    yang_name = "minute15"; yang_parent_name = "performance-management";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::~Minute15()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::has_data() const
{
    return (minute15_optics !=  nullptr && minute15_optics->has_data())
	|| (minute15fec !=  nullptr && minute15fec->has_data())
	|| (minute15otn !=  nullptr && minute15otn->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::has_operation() const
{
    return is_set(operation)
	|| (minute15_optics !=  nullptr && minute15_optics->has_operation())
	|| (minute15fec !=  nullptr && minute15fec->has_operation())
	|| (minute15otn !=  nullptr && minute15otn->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Minute15' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "minute15-optics")
    {
        if(minute15_optics != nullptr)
        {
            children["minute15-optics"] = minute15_optics;
        }
        else
        {
            minute15_optics = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics>();
            minute15_optics->parent = this;
            children["minute15-optics"] = minute15_optics;
        }
        return children.at("minute15-optics");
    }

    if(child_yang_name == "minute15fec")
    {
        if(minute15fec != nullptr)
        {
            children["minute15fec"] = minute15fec;
        }
        else
        {
            minute15fec = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec>();
            minute15fec->parent = this;
            children["minute15fec"] = minute15fec;
        }
        return children.at("minute15fec");
    }

    if(child_yang_name == "minute15otn")
    {
        if(minute15otn != nullptr)
        {
            children["minute15otn"] = minute15otn;
        }
        else
        {
            minute15otn = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn>();
            minute15otn->parent = this;
            children["minute15otn"] = minute15otn;
        }
        return children.at("minute15otn");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::get_children()
{
    if(children.find("minute15-optics") == children.end())
    {
        if(minute15_optics != nullptr)
        {
            children["minute15-optics"] = minute15_optics;
        }
    }

    if(children.find("minute15fec") == children.end())
    {
        if(minute15fec != nullptr)
        {
            children["minute15fec"] = minute15fec;
        }
    }

    if(children.find("minute15otn") == children.end())
    {
        if(minute15otn != nullptr)
        {
            children["minute15otn"] = minute15otn;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15Optics()
    :
    minute15_optics_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports>())
	,minute15_optics_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds>())
{
    minute15_optics_reports->parent = this;
    children["minute15-optics-reports"] = minute15_optics_reports;

    minute15_optics_thresholds->parent = this;
    children["minute15-optics-thresholds"] = minute15_optics_thresholds;

    yang_name = "minute15-optics"; yang_parent_name = "minute15";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::~Minute15Optics()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::has_data() const
{
    return (minute15_optics_reports !=  nullptr && minute15_optics_reports->has_data())
	|| (minute15_optics_thresholds !=  nullptr && minute15_optics_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::has_operation() const
{
    return is_set(operation)
	|| (minute15_optics_reports !=  nullptr && minute15_optics_reports->has_operation())
	|| (minute15_optics_thresholds !=  nullptr && minute15_optics_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-optics";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Minute15Optics' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "minute15-optics-reports")
    {
        if(minute15_optics_reports != nullptr)
        {
            children["minute15-optics-reports"] = minute15_optics_reports;
        }
        else
        {
            minute15_optics_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports>();
            minute15_optics_reports->parent = this;
            children["minute15-optics-reports"] = minute15_optics_reports;
        }
        return children.at("minute15-optics-reports");
    }

    if(child_yang_name == "minute15-optics-thresholds")
    {
        if(minute15_optics_thresholds != nullptr)
        {
            children["minute15-optics-thresholds"] = minute15_optics_thresholds;
        }
        else
        {
            minute15_optics_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds>();
            minute15_optics_thresholds->parent = this;
            children["minute15-optics-thresholds"] = minute15_optics_thresholds;
        }
        return children.at("minute15-optics-thresholds");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::get_children()
{
    if(children.find("minute15-optics-reports") == children.end())
    {
        if(minute15_optics_reports != nullptr)
        {
            children["minute15-optics-reports"] = minute15_optics_reports;
        }
    }

    if(children.find("minute15-optics-thresholds") == children.end())
    {
        if(minute15_optics_thresholds != nullptr)
        {
            children["minute15-optics-thresholds"] = minute15_optics_thresholds;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds::Minute15OpticsThresholds()
{
    yang_name = "minute15-optics-thresholds"; yang_parent_name = "minute15-optics";
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
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-optics-thresholds";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Minute15OpticsThresholds' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "minute15-optics-threshold")
    {
        for(auto const & c : minute15_optics_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds::Minute15OpticsThreshold>();
        c->parent = this;
        minute15_optics_threshold.push_back(std::move(c));
        children[segment_path] = minute15_optics_threshold.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds::get_children()
{
    for (auto const & c : minute15_optics_threshold)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds::Minute15OpticsThreshold::Minute15OpticsThreshold()
    :
    optics_threshold{YType::enumeration, "optics-threshold"},
    dbm{YType::int32, "dbm"},
    optics_threshold_value{YType::int32, "optics-threshold-value"}
{
    yang_name = "minute15-optics-threshold"; yang_parent_name = "minute15-optics-thresholds";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds::Minute15OpticsThreshold::~Minute15OpticsThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds::Minute15OpticsThreshold::has_data() const
{
    return optics_threshold.is_set
	|| dbm.is_set
	|| optics_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds::Minute15OpticsThreshold::has_operation() const
{
    return is_set(operation)
	|| is_set(optics_threshold.operation)
	|| is_set(dbm.operation)
	|| is_set(optics_threshold_value.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds::Minute15OpticsThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-optics-threshold" <<"[optics-threshold='" <<optics_threshold <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds::Minute15OpticsThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Minute15OpticsThreshold' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (optics_threshold.is_set || is_set(optics_threshold.operation)) leaf_name_data.push_back(optics_threshold.get_name_leafdata());
    if (dbm.is_set || is_set(dbm.operation)) leaf_name_data.push_back(dbm.get_name_leafdata());
    if (optics_threshold_value.is_set || is_set(optics_threshold_value.operation)) leaf_name_data.push_back(optics_threshold_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds::Minute15OpticsThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds::Minute15OpticsThreshold::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds::Minute15OpticsThreshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "optics-threshold")
    {
        optics_threshold = value;
    }
    if(value_path == "dbm")
    {
        dbm = value;
    }
    if(value_path == "optics-threshold-value")
    {
        optics_threshold_value = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports::Minute15OpticsReports()
{
    yang_name = "minute15-optics-reports"; yang_parent_name = "minute15-optics";
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
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-optics-reports";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Minute15OpticsReports' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "minute15-optics-report")
    {
        for(auto const & c : minute15_optics_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports::Minute15OpticsReport>();
        c->parent = this;
        minute15_optics_report.push_back(std::move(c));
        children[segment_path] = minute15_optics_report.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports::get_children()
{
    for (auto const & c : minute15_optics_report)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports::Minute15OpticsReport::Minute15OpticsReport()
    :
    optics_report{YType::enumeration, "optics-report"}
{
    yang_name = "minute15-optics-report"; yang_parent_name = "minute15-optics-reports";
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
    return is_set(operation)
	|| is_set(optics_report.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports::Minute15OpticsReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-optics-report" <<"[optics-report='" <<optics_report <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports::Minute15OpticsReport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Minute15OpticsReport' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (optics_report.is_set || is_set(optics_report.operation)) leaf_name_data.push_back(optics_report.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports::Minute15OpticsReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports::Minute15OpticsReport::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports::Minute15OpticsReport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "optics-report")
    {
        optics_report = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15Fec()
    :
    minute15fec_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecReports>())
	,minute15fec_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecThresholds>())
{
    minute15fec_reports->parent = this;
    children["minute15fec-reports"] = minute15fec_reports;

    minute15fec_thresholds->parent = this;
    children["minute15fec-thresholds"] = minute15fec_thresholds;

    yang_name = "minute15fec"; yang_parent_name = "minute15";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::~Minute15Fec()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::has_data() const
{
    return (minute15fec_reports !=  nullptr && minute15fec_reports->has_data())
	|| (minute15fec_thresholds !=  nullptr && minute15fec_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::has_operation() const
{
    return is_set(operation)
	|| (minute15fec_reports !=  nullptr && minute15fec_reports->has_operation())
	|| (minute15fec_thresholds !=  nullptr && minute15fec_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15fec";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Minute15Fec' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "minute15fec-reports")
    {
        if(minute15fec_reports != nullptr)
        {
            children["minute15fec-reports"] = minute15fec_reports;
        }
        else
        {
            minute15fec_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecReports>();
            minute15fec_reports->parent = this;
            children["minute15fec-reports"] = minute15fec_reports;
        }
        return children.at("minute15fec-reports");
    }

    if(child_yang_name == "minute15fec-thresholds")
    {
        if(minute15fec_thresholds != nullptr)
        {
            children["minute15fec-thresholds"] = minute15fec_thresholds;
        }
        else
        {
            minute15fec_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecThresholds>();
            minute15fec_thresholds->parent = this;
            children["minute15fec-thresholds"] = minute15fec_thresholds;
        }
        return children.at("minute15fec-thresholds");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::get_children()
{
    if(children.find("minute15fec-reports") == children.end())
    {
        if(minute15fec_reports != nullptr)
        {
            children["minute15fec-reports"] = minute15fec_reports;
        }
    }

    if(children.find("minute15fec-thresholds") == children.end())
    {
        if(minute15fec_thresholds != nullptr)
        {
            children["minute15fec-thresholds"] = minute15fec_thresholds;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecThresholds::Minute15FecThresholds()
{
    yang_name = "minute15fec-thresholds"; yang_parent_name = "minute15fec";
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
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15fec-thresholds";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecThresholds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Minute15FecThresholds' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "minute15fec-threshold")
    {
        for(auto const & c : minute15fec_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecThresholds::Minute15FecThreshold>();
        c->parent = this;
        minute15fec_threshold.push_back(std::move(c));
        children[segment_path] = minute15fec_threshold.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecThresholds::get_children()
{
    for (auto const & c : minute15fec_threshold)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecThresholds::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecThresholds::Minute15FecThreshold::Minute15FecThreshold()
    :
    fec_threshold{YType::enumeration, "fec-threshold"},
    fec_threshold_value{YType::str, "fec-threshold-value"}
{
    yang_name = "minute15fec-threshold"; yang_parent_name = "minute15fec-thresholds";
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
    return is_set(operation)
	|| is_set(fec_threshold.operation)
	|| is_set(fec_threshold_value.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecThresholds::Minute15FecThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15fec-threshold" <<"[fec-threshold='" <<fec_threshold <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecThresholds::Minute15FecThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Minute15FecThreshold' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_threshold.is_set || is_set(fec_threshold.operation)) leaf_name_data.push_back(fec_threshold.get_name_leafdata());
    if (fec_threshold_value.is_set || is_set(fec_threshold_value.operation)) leaf_name_data.push_back(fec_threshold_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecThresholds::Minute15FecThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecThresholds::Minute15FecThreshold::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecThresholds::Minute15FecThreshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fec-threshold")
    {
        fec_threshold = value;
    }
    if(value_path == "fec-threshold-value")
    {
        fec_threshold_value = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecReports::Minute15FecReports()
{
    yang_name = "minute15fec-reports"; yang_parent_name = "minute15fec";
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
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15fec-reports";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecReports::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Minute15FecReports' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "minute15fec-report")
    {
        for(auto const & c : minute15fec_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecReports::Minute15FecReport>();
        c->parent = this;
        minute15fec_report.push_back(std::move(c));
        children[segment_path] = minute15fec_report.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecReports::get_children()
{
    for (auto const & c : minute15fec_report)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecReports::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecReports::Minute15FecReport::Minute15FecReport()
    :
    fec_report{YType::enumeration, "fec-report"},
    enable{YType::enumeration, "enable"}
{
    yang_name = "minute15fec-report"; yang_parent_name = "minute15fec-reports";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecReports::Minute15FecReport::~Minute15FecReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecReports::Minute15FecReport::has_data() const
{
    return fec_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecReports::Minute15FecReport::has_operation() const
{
    return is_set(operation)
	|| is_set(fec_report.operation)
	|| is_set(enable.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecReports::Minute15FecReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15fec-report" <<"[fec-report='" <<fec_report <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecReports::Minute15FecReport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Minute15FecReport' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_report.is_set || is_set(fec_report.operation)) leaf_name_data.push_back(fec_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecReports::Minute15FecReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecReports::Minute15FecReport::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Fec::Minute15FecReports::Minute15FecReport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fec-report")
    {
        fec_report = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Minute15Otn()
    :
    min15_otn_threshes(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Min15OtnThreshes>())
	,minute15otn_reports(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Minute15OtnReports>())
{
    min15_otn_threshes->parent = this;
    children["min15-otn-threshes"] = min15_otn_threshes;

    minute15otn_reports->parent = this;
    children["minute15otn-reports"] = minute15otn_reports;

    yang_name = "minute15otn"; yang_parent_name = "minute15";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::~Minute15Otn()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::has_data() const
{
    return (min15_otn_threshes !=  nullptr && min15_otn_threshes->has_data())
	|| (minute15otn_reports !=  nullptr && minute15otn_reports->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::has_operation() const
{
    return is_set(operation)
	|| (min15_otn_threshes !=  nullptr && min15_otn_threshes->has_operation())
	|| (minute15otn_reports !=  nullptr && minute15otn_reports->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15otn";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Minute15Otn' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "min15-otn-threshes")
    {
        if(min15_otn_threshes != nullptr)
        {
            children["min15-otn-threshes"] = min15_otn_threshes;
        }
        else
        {
            min15_otn_threshes = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Min15OtnThreshes>();
            min15_otn_threshes->parent = this;
            children["min15-otn-threshes"] = min15_otn_threshes;
        }
        return children.at("min15-otn-threshes");
    }

    if(child_yang_name == "minute15otn-reports")
    {
        if(minute15otn_reports != nullptr)
        {
            children["minute15otn-reports"] = minute15otn_reports;
        }
        else
        {
            minute15otn_reports = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Minute15OtnReports>();
            minute15otn_reports->parent = this;
            children["minute15otn-reports"] = minute15otn_reports;
        }
        return children.at("minute15otn-reports");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::get_children()
{
    if(children.find("min15-otn-threshes") == children.end())
    {
        if(min15_otn_threshes != nullptr)
        {
            children["min15-otn-threshes"] = min15_otn_threshes;
        }
    }

    if(children.find("minute15otn-reports") == children.end())
    {
        if(minute15otn_reports != nullptr)
        {
            children["minute15otn-reports"] = minute15otn_reports;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Min15OtnThreshes::Min15OtnThreshes()
{
    yang_name = "min15-otn-threshes"; yang_parent_name = "minute15otn";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Min15OtnThreshes::~Min15OtnThreshes()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Min15OtnThreshes::has_data() const
{
    for (std::size_t index=0; index<min15_otn_thresh.size(); index++)
    {
        if(min15_otn_thresh[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Min15OtnThreshes::has_operation() const
{
    for (std::size_t index=0; index<min15_otn_thresh.size(); index++)
    {
        if(min15_otn_thresh[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Min15OtnThreshes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min15-otn-threshes";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Min15OtnThreshes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Min15OtnThreshes' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Min15OtnThreshes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "min15-otn-thresh")
    {
        for(auto const & c : min15_otn_thresh)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Min15OtnThreshes::Min15OtnThresh>();
        c->parent = this;
        min15_otn_thresh.push_back(std::move(c));
        children[segment_path] = min15_otn_thresh.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Min15OtnThreshes::get_children()
{
    for (auto const & c : min15_otn_thresh)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Min15OtnThreshes::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Min15OtnThreshes::Min15OtnThresh::Min15OtnThresh()
    :
    otn_threshold{YType::enumeration, "otn-threshold"},
    otn_threshold_value{YType::int32, "otn-threshold-value"}
{
    yang_name = "min15-otn-thresh"; yang_parent_name = "min15-otn-threshes";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Min15OtnThreshes::Min15OtnThresh::~Min15OtnThresh()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Min15OtnThreshes::Min15OtnThresh::has_data() const
{
    return otn_threshold.is_set
	|| otn_threshold_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Min15OtnThreshes::Min15OtnThresh::has_operation() const
{
    return is_set(operation)
	|| is_set(otn_threshold.operation)
	|| is_set(otn_threshold_value.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Min15OtnThreshes::Min15OtnThresh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min15-otn-thresh" <<"[otn-threshold='" <<otn_threshold <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Min15OtnThreshes::Min15OtnThresh::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Min15OtnThresh' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (otn_threshold.is_set || is_set(otn_threshold.operation)) leaf_name_data.push_back(otn_threshold.get_name_leafdata());
    if (otn_threshold_value.is_set || is_set(otn_threshold_value.operation)) leaf_name_data.push_back(otn_threshold_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Min15OtnThreshes::Min15OtnThresh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Min15OtnThreshes::Min15OtnThresh::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Min15OtnThreshes::Min15OtnThresh::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "otn-threshold")
    {
        otn_threshold = value;
    }
    if(value_path == "otn-threshold-value")
    {
        otn_threshold_value = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Minute15OtnReports::Minute15OtnReports()
{
    yang_name = "minute15otn-reports"; yang_parent_name = "minute15otn";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Minute15OtnReports::~Minute15OtnReports()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Minute15OtnReports::has_data() const
{
    for (std::size_t index=0; index<minute15otn_report.size(); index++)
    {
        if(minute15otn_report[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Minute15OtnReports::has_operation() const
{
    for (std::size_t index=0; index<minute15otn_report.size(); index++)
    {
        if(minute15otn_report[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Minute15OtnReports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15otn-reports";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Minute15OtnReports::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Minute15OtnReports' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Minute15OtnReports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "minute15otn-report")
    {
        for(auto const & c : minute15otn_report)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Minute15OtnReports::Minute15OtnReport>();
        c->parent = this;
        minute15otn_report.push_back(std::move(c));
        children[segment_path] = minute15otn_report.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Minute15OtnReports::get_children()
{
    for (auto const & c : minute15otn_report)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Minute15OtnReports::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Minute15OtnReports::Minute15OtnReport::Minute15OtnReport()
    :
    otn_report{YType::enumeration, "otn-report"},
    enable{YType::enumeration, "enable"}
{
    yang_name = "minute15otn-report"; yang_parent_name = "minute15otn-reports";
}

InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Minute15OtnReports::Minute15OtnReport::~Minute15OtnReport()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Minute15OtnReports::Minute15OtnReport::has_data() const
{
    return otn_report.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Minute15OtnReports::Minute15OtnReport::has_operation() const
{
    return is_set(operation)
	|| is_set(otn_report.operation)
	|| is_set(enable.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Minute15OtnReports::Minute15OtnReport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15otn-report" <<"[otn-report='" <<otn_report <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Minute15OtnReports::Minute15OtnReport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Minute15OtnReport' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (otn_report.is_set || is_set(otn_report.operation)) leaf_name_data.push_back(otn_report.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Minute15OtnReports::Minute15OtnReport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Minute15OtnReports::Minute15OtnReport::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Otn::Minute15OtnReports::Minute15OtnReport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "otn-report")
    {
        otn_report = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Macsec::Macsec()
    :
    macsec_service(nullptr) // presence node
	,psk_key_chain(nullptr) // presence node
{
    yang_name = "macsec"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::Macsec::~Macsec()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Macsec::has_data() const
{
    return (macsec_service !=  nullptr && macsec_service->has_data())
	|| (psk_key_chain !=  nullptr && psk_key_chain->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Macsec::has_operation() const
{
    return is_set(operation)
	|| (macsec_service !=  nullptr && macsec_service->has_operation())
	|| (psk_key_chain !=  nullptr && psk_key_chain->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Macsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-macsec-mka-if-cfg:macsec";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Macsec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Macsec' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Macsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "macsec-service")
    {
        if(macsec_service != nullptr)
        {
            children["macsec-service"] = macsec_service;
        }
        else
        {
            macsec_service = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Macsec::MacsecService>();
            macsec_service->parent = this;
            children["macsec-service"] = macsec_service;
        }
        return children.at("macsec-service");
    }

    if(child_yang_name == "psk-key-chain")
    {
        if(psk_key_chain != nullptr)
        {
            children["psk-key-chain"] = psk_key_chain;
        }
        else
        {
            psk_key_chain = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Macsec::PskKeyChain>();
            psk_key_chain->parent = this;
            children["psk-key-chain"] = psk_key_chain;
        }
        return children.at("psk-key-chain");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Macsec::get_children()
{
    if(children.find("macsec-service") == children.end())
    {
        if(macsec_service != nullptr)
        {
            children["macsec-service"] = macsec_service;
        }
    }

    if(children.find("psk-key-chain") == children.end())
    {
        if(psk_key_chain != nullptr)
        {
            children["psk-key-chain"] = psk_key_chain;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Macsec::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Macsec::MacsecService::MacsecService()
    :
    decrypt_port{YType::str, "decrypt-port"},
    key_chain{YType::str, "key-chain"},
    policy{YType::str, "policy"}
{
    yang_name = "macsec-service"; yang_parent_name = "macsec";
}

InterfaceConfigurations::InterfaceConfiguration::Macsec::MacsecService::~MacsecService()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Macsec::MacsecService::has_data() const
{
    return decrypt_port.is_set
	|| key_chain.is_set
	|| policy.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Macsec::MacsecService::has_operation() const
{
    return is_set(operation)
	|| is_set(decrypt_port.operation)
	|| is_set(key_chain.operation)
	|| is_set(policy.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Macsec::MacsecService::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macsec-service";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Macsec::MacsecService::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MacsecService' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (decrypt_port.is_set || is_set(decrypt_port.operation)) leaf_name_data.push_back(decrypt_port.get_name_leafdata());
    if (key_chain.is_set || is_set(key_chain.operation)) leaf_name_data.push_back(key_chain.get_name_leafdata());
    if (policy.is_set || is_set(policy.operation)) leaf_name_data.push_back(policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Macsec::MacsecService::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Macsec::MacsecService::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Macsec::MacsecService::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "decrypt-port")
    {
        decrypt_port = value;
    }
    if(value_path == "key-chain")
    {
        key_chain = value;
    }
    if(value_path == "policy")
    {
        policy = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Macsec::PskKeyChain::PskKeyChain()
    :
    fallback_key_chain{YType::str, "fallback-key-chain"},
    key_chain_name{YType::str, "key-chain-name"},
    policy_name{YType::str, "policy-name"}
{
    yang_name = "psk-key-chain"; yang_parent_name = "macsec";
}

InterfaceConfigurations::InterfaceConfiguration::Macsec::PskKeyChain::~PskKeyChain()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Macsec::PskKeyChain::has_data() const
{
    return fallback_key_chain.is_set
	|| key_chain_name.is_set
	|| policy_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Macsec::PskKeyChain::has_operation() const
{
    return is_set(operation)
	|| is_set(fallback_key_chain.operation)
	|| is_set(key_chain_name.operation)
	|| is_set(policy_name.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Macsec::PskKeyChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "psk-key-chain";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Macsec::PskKeyChain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PskKeyChain' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fallback_key_chain.is_set || is_set(fallback_key_chain.operation)) leaf_name_data.push_back(fallback_key_chain.get_name_leafdata());
    if (key_chain_name.is_set || is_set(key_chain_name.operation)) leaf_name_data.push_back(key_chain_name.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.operation)) leaf_name_data.push_back(policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Macsec::PskKeyChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Macsec::PskKeyChain::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Macsec::PskKeyChain::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fallback-key-chain")
    {
        fallback_key_chain = value;
    }
    if(value_path == "key-chain-name")
    {
        key_chain_name = value;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Qos()
    :
    input(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Qos::Input>())
	,output(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Qos::Output>())
{
    input->parent = this;
    children["input"] = input;

    output->parent = this;
    children["output"] = output;

    yang_name = "qos"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::Qos::~Qos()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Qos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-qos-ma-cfg:qos";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Qos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Qos' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Qos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "input")
    {
        if(input != nullptr)
        {
            children["input"] = input;
        }
        else
        {
            input = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Qos::Input>();
            input->parent = this;
            children["input"] = input;
        }
        return children.at("input");
    }

    if(child_yang_name == "output")
    {
        if(output != nullptr)
        {
            children["output"] = output;
        }
        else
        {
            output = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Qos::Output>();
            output->parent = this;
            children["output"] = output;
        }
        return children.at("output");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Qos::get_children()
{
    if(children.find("input") == children.end())
    {
        if(input != nullptr)
        {
            children["input"] = input;
        }
    }

    if(children.find("output") == children.end())
    {
        if(output != nullptr)
        {
            children["output"] = output;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Qos::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Output::Output()
{
    yang_name = "output"; yang_parent_name = "qos";
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Output::~Output()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Output::has_data() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<service_policy_qos.size(); index++)
    {
        if(service_policy_qos[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Output::has_operation() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<service_policy_qos.size(); index++)
    {
        if(service_policy_qos[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Qos::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Qos::Output::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Output' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Qos::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "service-policy")
    {
        for(auto const & c : service_policy)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicy>();
        c->parent = this;
        service_policy.push_back(std::move(c));
        children[segment_path] = service_policy.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "service-policy-qos")
    {
        for(auto const & c : service_policy_qos)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos>();
        c->parent = this;
        service_policy_qos.push_back(std::move(c));
        children[segment_path] = service_policy_qos.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Qos::Output::get_children()
{
    for (auto const & c : service_policy)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : service_policy_qos)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Qos::Output::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicy::ServicePolicy()
    :
    service_policy_name{YType::str, "service-policy-name"},
    account_type{YType::enumeration, "account-type"},
    l1_user_defined{YType::int32, "l1-user-defined"},
    resource_id{YType::uint32, "resource-id"},
    service_fragment_parent_policy{YType::boolean, "service-fragment-parent-policy"},
    spi_name{YType::str, "spi-name"},
    subscriber_parent_policy{YType::boolean, "subscriber-parent-policy"}
{
    yang_name = "service-policy"; yang_parent_name = "output";
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicy::~ServicePolicy()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicy::has_data() const
{
    return service_policy_name.is_set
	|| account_type.is_set
	|| l1_user_defined.is_set
	|| resource_id.is_set
	|| service_fragment_parent_policy.is_set
	|| spi_name.is_set
	|| subscriber_parent_policy.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicy::has_operation() const
{
    return is_set(operation)
	|| is_set(service_policy_name.operation)
	|| is_set(account_type.operation)
	|| is_set(l1_user_defined.operation)
	|| is_set(resource_id.operation)
	|| is_set(service_fragment_parent_policy.operation)
	|| is_set(spi_name.operation)
	|| is_set(subscriber_parent_policy.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy" <<"[service-policy-name='" <<service_policy_name <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServicePolicy' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_name.is_set || is_set(service_policy_name.operation)) leaf_name_data.push_back(service_policy_name.get_name_leafdata());
    if (account_type.is_set || is_set(account_type.operation)) leaf_name_data.push_back(account_type.get_name_leafdata());
    if (l1_user_defined.is_set || is_set(l1_user_defined.operation)) leaf_name_data.push_back(l1_user_defined.get_name_leafdata());
    if (resource_id.is_set || is_set(resource_id.operation)) leaf_name_data.push_back(resource_id.get_name_leafdata());
    if (service_fragment_parent_policy.is_set || is_set(service_fragment_parent_policy.operation)) leaf_name_data.push_back(service_fragment_parent_policy.get_name_leafdata());
    if (spi_name.is_set || is_set(spi_name.operation)) leaf_name_data.push_back(spi_name.get_name_leafdata());
    if (subscriber_parent_policy.is_set || is_set(subscriber_parent_policy.operation)) leaf_name_data.push_back(subscriber_parent_policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicy::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name = value;
    }
    if(value_path == "account-type")
    {
        account_type = value;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined = value;
    }
    if(value_path == "resource-id")
    {
        resource_id = value;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy = value;
    }
    if(value_path == "spi-name")
    {
        spi_name = value;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::ServicePolicyQos()
    :
    service_policy_name{YType::str, "service-policy-name"}
    	,
    subscriber_group_names(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames>())
	,subscriber_parent(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberParent>())
{
    subscriber_group_names->parent = this;
    children["subscriber-group-names"] = subscriber_group_names;

    subscriber_parent->parent = this;
    children["subscriber-parent"] = subscriber_parent;

    yang_name = "service-policy-qos"; yang_parent_name = "output";
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::~ServicePolicyQos()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::has_data() const
{
    return service_policy_name.is_set
	|| (subscriber_group_names !=  nullptr && subscriber_group_names->has_data())
	|| (subscriber_parent !=  nullptr && subscriber_parent->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::has_operation() const
{
    return is_set(operation)
	|| is_set(service_policy_name.operation)
	|| (subscriber_group_names !=  nullptr && subscriber_group_names->has_operation())
	|| (subscriber_parent !=  nullptr && subscriber_parent->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy-qos" <<"[service-policy-name='" <<service_policy_name <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServicePolicyQos' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_name.is_set || is_set(service_policy_name.operation)) leaf_name_data.push_back(service_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "subscriber-group-names")
    {
        if(subscriber_group_names != nullptr)
        {
            children["subscriber-group-names"] = subscriber_group_names;
        }
        else
        {
            subscriber_group_names = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames>();
            subscriber_group_names->parent = this;
            children["subscriber-group-names"] = subscriber_group_names;
        }
        return children.at("subscriber-group-names");
    }

    if(child_yang_name == "subscriber-parent")
    {
        if(subscriber_parent != nullptr)
        {
            children["subscriber-parent"] = subscriber_parent;
        }
        else
        {
            subscriber_parent = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberParent>();
            subscriber_parent->parent = this;
            children["subscriber-parent"] = subscriber_parent;
        }
        return children.at("subscriber-parent");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::get_children()
{
    if(children.find("subscriber-group-names") == children.end())
    {
        if(subscriber_group_names != nullptr)
        {
            children["subscriber-group-names"] = subscriber_group_names;
        }
    }

    if(children.find("subscriber-parent") == children.end())
    {
        if(subscriber_parent != nullptr)
        {
            children["subscriber-parent"] = subscriber_parent;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupNames()
{
    yang_name = "subscriber-group-names"; yang_parent_name = "service-policy-qos";
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::~SubscriberGroupNames()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::has_data() const
{
    for (std::size_t index=0; index<subscriber_group_name.size(); index++)
    {
        if(subscriber_group_name[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::has_operation() const
{
    for (std::size_t index=0; index<subscriber_group_name.size(); index++)
    {
        if(subscriber_group_name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-group-names";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SubscriberGroupNames' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "subscriber-group-name")
    {
        for(auto const & c : subscriber_group_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName>();
        c->parent = this;
        subscriber_group_name.push_back(std::move(c));
        children[segment_path] = subscriber_group_name.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::get_children()
{
    for (auto const & c : subscriber_group_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::SubscriberGroupName()
    :
    subscriber_group_string{YType::str, "subscriber-group-string"},
    account_type{YType::enumeration, "account-type"},
    l1_user_defined{YType::int32, "l1-user-defined"},
    policy_merge{YType::enumeration, "policy-merge"},
    resource_id{YType::uint32, "resource-id"},
    service_fragment_parent_policy{YType::boolean, "service-fragment-parent-policy"},
    spi_name{YType::str, "spi-name"},
    subscriber_parent_policy{YType::boolean, "subscriber-parent-policy"}
{
    yang_name = "subscriber-group-name"; yang_parent_name = "subscriber-group-names";
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::~SubscriberGroupName()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::has_data() const
{
    return subscriber_group_string.is_set
	|| account_type.is_set
	|| l1_user_defined.is_set
	|| policy_merge.is_set
	|| resource_id.is_set
	|| service_fragment_parent_policy.is_set
	|| spi_name.is_set
	|| subscriber_parent_policy.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::has_operation() const
{
    return is_set(operation)
	|| is_set(subscriber_group_string.operation)
	|| is_set(account_type.operation)
	|| is_set(l1_user_defined.operation)
	|| is_set(policy_merge.operation)
	|| is_set(resource_id.operation)
	|| is_set(service_fragment_parent_policy.operation)
	|| is_set(spi_name.operation)
	|| is_set(subscriber_parent_policy.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-group-name" <<"[subscriber-group-string='" <<subscriber_group_string <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SubscriberGroupName' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscriber_group_string.is_set || is_set(subscriber_group_string.operation)) leaf_name_data.push_back(subscriber_group_string.get_name_leafdata());
    if (account_type.is_set || is_set(account_type.operation)) leaf_name_data.push_back(account_type.get_name_leafdata());
    if (l1_user_defined.is_set || is_set(l1_user_defined.operation)) leaf_name_data.push_back(l1_user_defined.get_name_leafdata());
    if (policy_merge.is_set || is_set(policy_merge.operation)) leaf_name_data.push_back(policy_merge.get_name_leafdata());
    if (resource_id.is_set || is_set(resource_id.operation)) leaf_name_data.push_back(resource_id.get_name_leafdata());
    if (service_fragment_parent_policy.is_set || is_set(service_fragment_parent_policy.operation)) leaf_name_data.push_back(service_fragment_parent_policy.get_name_leafdata());
    if (spi_name.is_set || is_set(spi_name.operation)) leaf_name_data.push_back(spi_name.get_name_leafdata());
    if (subscriber_parent_policy.is_set || is_set(subscriber_parent_policy.operation)) leaf_name_data.push_back(subscriber_parent_policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "subscriber-group-string")
    {
        subscriber_group_string = value;
    }
    if(value_path == "account-type")
    {
        account_type = value;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined = value;
    }
    if(value_path == "policy-merge")
    {
        policy_merge = value;
    }
    if(value_path == "resource-id")
    {
        resource_id = value;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy = value;
    }
    if(value_path == "spi-name")
    {
        spi_name = value;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberParent::SubscriberParent()
    :
    account_type{YType::enumeration, "account-type"},
    l1_user_defined{YType::int32, "l1-user-defined"},
    policy_merge{YType::enumeration, "policy-merge"},
    resource_id{YType::uint32, "resource-id"},
    service_fragment_parent_policy{YType::boolean, "service-fragment-parent-policy"},
    spi_name{YType::str, "spi-name"},
    subscriber_parent_policy{YType::boolean, "subscriber-parent-policy"}
{
    yang_name = "subscriber-parent"; yang_parent_name = "service-policy-qos";
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberParent::~SubscriberParent()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberParent::has_data() const
{
    return account_type.is_set
	|| l1_user_defined.is_set
	|| policy_merge.is_set
	|| resource_id.is_set
	|| service_fragment_parent_policy.is_set
	|| spi_name.is_set
	|| subscriber_parent_policy.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberParent::has_operation() const
{
    return is_set(operation)
	|| is_set(account_type.operation)
	|| is_set(l1_user_defined.operation)
	|| is_set(policy_merge.operation)
	|| is_set(resource_id.operation)
	|| is_set(service_fragment_parent_policy.operation)
	|| is_set(spi_name.operation)
	|| is_set(subscriber_parent_policy.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberParent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-parent";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberParent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SubscriberParent' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (account_type.is_set || is_set(account_type.operation)) leaf_name_data.push_back(account_type.get_name_leafdata());
    if (l1_user_defined.is_set || is_set(l1_user_defined.operation)) leaf_name_data.push_back(l1_user_defined.get_name_leafdata());
    if (policy_merge.is_set || is_set(policy_merge.operation)) leaf_name_data.push_back(policy_merge.get_name_leafdata());
    if (resource_id.is_set || is_set(resource_id.operation)) leaf_name_data.push_back(resource_id.get_name_leafdata());
    if (service_fragment_parent_policy.is_set || is_set(service_fragment_parent_policy.operation)) leaf_name_data.push_back(service_fragment_parent_policy.get_name_leafdata());
    if (spi_name.is_set || is_set(spi_name.operation)) leaf_name_data.push_back(spi_name.get_name_leafdata());
    if (subscriber_parent_policy.is_set || is_set(subscriber_parent_policy.operation)) leaf_name_data.push_back(subscriber_parent_policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberParent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberParent::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberParent::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "account-type")
    {
        account_type = value;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined = value;
    }
    if(value_path == "policy-merge")
    {
        policy_merge = value;
    }
    if(value_path == "resource-id")
    {
        resource_id = value;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy = value;
    }
    if(value_path == "spi-name")
    {
        spi_name = value;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Input::Input()
{
    yang_name = "input"; yang_parent_name = "qos";
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Input::~Input()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Input::has_data() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<service_policy_qos.size(); index++)
    {
        if(service_policy_qos[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Input::has_operation() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<service_policy_qos.size(); index++)
    {
        if(service_policy_qos[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Qos::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Qos::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Input' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Qos::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "service-policy")
    {
        for(auto const & c : service_policy)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicy>();
        c->parent = this;
        service_policy.push_back(std::move(c));
        children[segment_path] = service_policy.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "service-policy-qos")
    {
        for(auto const & c : service_policy_qos)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos>();
        c->parent = this;
        service_policy_qos.push_back(std::move(c));
        children[segment_path] = service_policy_qos.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Qos::Input::get_children()
{
    for (auto const & c : service_policy)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : service_policy_qos)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Qos::Input::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicy::ServicePolicy()
    :
    service_policy_name{YType::str, "service-policy-name"},
    account_type{YType::enumeration, "account-type"},
    l1_user_defined{YType::int32, "l1-user-defined"},
    resource_id{YType::uint32, "resource-id"},
    service_fragment_parent_policy{YType::boolean, "service-fragment-parent-policy"},
    spi_name{YType::str, "spi-name"},
    subscriber_parent_policy{YType::boolean, "subscriber-parent-policy"}
{
    yang_name = "service-policy"; yang_parent_name = "input";
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicy::~ServicePolicy()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicy::has_data() const
{
    return service_policy_name.is_set
	|| account_type.is_set
	|| l1_user_defined.is_set
	|| resource_id.is_set
	|| service_fragment_parent_policy.is_set
	|| spi_name.is_set
	|| subscriber_parent_policy.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicy::has_operation() const
{
    return is_set(operation)
	|| is_set(service_policy_name.operation)
	|| is_set(account_type.operation)
	|| is_set(l1_user_defined.operation)
	|| is_set(resource_id.operation)
	|| is_set(service_fragment_parent_policy.operation)
	|| is_set(spi_name.operation)
	|| is_set(subscriber_parent_policy.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy" <<"[service-policy-name='" <<service_policy_name <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServicePolicy' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_name.is_set || is_set(service_policy_name.operation)) leaf_name_data.push_back(service_policy_name.get_name_leafdata());
    if (account_type.is_set || is_set(account_type.operation)) leaf_name_data.push_back(account_type.get_name_leafdata());
    if (l1_user_defined.is_set || is_set(l1_user_defined.operation)) leaf_name_data.push_back(l1_user_defined.get_name_leafdata());
    if (resource_id.is_set || is_set(resource_id.operation)) leaf_name_data.push_back(resource_id.get_name_leafdata());
    if (service_fragment_parent_policy.is_set || is_set(service_fragment_parent_policy.operation)) leaf_name_data.push_back(service_fragment_parent_policy.get_name_leafdata());
    if (spi_name.is_set || is_set(spi_name.operation)) leaf_name_data.push_back(spi_name.get_name_leafdata());
    if (subscriber_parent_policy.is_set || is_set(subscriber_parent_policy.operation)) leaf_name_data.push_back(subscriber_parent_policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicy::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name = value;
    }
    if(value_path == "account-type")
    {
        account_type = value;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined = value;
    }
    if(value_path == "resource-id")
    {
        resource_id = value;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy = value;
    }
    if(value_path == "spi-name")
    {
        spi_name = value;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::ServicePolicyQos()
    :
    service_policy_name{YType::str, "service-policy-name"}
    	,
    subscriber_group_names(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames>())
	,subscriber_parent(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberParent>())
{
    subscriber_group_names->parent = this;
    children["subscriber-group-names"] = subscriber_group_names;

    subscriber_parent->parent = this;
    children["subscriber-parent"] = subscriber_parent;

    yang_name = "service-policy-qos"; yang_parent_name = "input";
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::~ServicePolicyQos()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::has_data() const
{
    return service_policy_name.is_set
	|| (subscriber_group_names !=  nullptr && subscriber_group_names->has_data())
	|| (subscriber_parent !=  nullptr && subscriber_parent->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::has_operation() const
{
    return is_set(operation)
	|| is_set(service_policy_name.operation)
	|| (subscriber_group_names !=  nullptr && subscriber_group_names->has_operation())
	|| (subscriber_parent !=  nullptr && subscriber_parent->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy-qos" <<"[service-policy-name='" <<service_policy_name <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServicePolicyQos' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_name.is_set || is_set(service_policy_name.operation)) leaf_name_data.push_back(service_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "subscriber-group-names")
    {
        if(subscriber_group_names != nullptr)
        {
            children["subscriber-group-names"] = subscriber_group_names;
        }
        else
        {
            subscriber_group_names = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames>();
            subscriber_group_names->parent = this;
            children["subscriber-group-names"] = subscriber_group_names;
        }
        return children.at("subscriber-group-names");
    }

    if(child_yang_name == "subscriber-parent")
    {
        if(subscriber_parent != nullptr)
        {
            children["subscriber-parent"] = subscriber_parent;
        }
        else
        {
            subscriber_parent = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberParent>();
            subscriber_parent->parent = this;
            children["subscriber-parent"] = subscriber_parent;
        }
        return children.at("subscriber-parent");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::get_children()
{
    if(children.find("subscriber-group-names") == children.end())
    {
        if(subscriber_group_names != nullptr)
        {
            children["subscriber-group-names"] = subscriber_group_names;
        }
    }

    if(children.find("subscriber-parent") == children.end())
    {
        if(subscriber_parent != nullptr)
        {
            children["subscriber-parent"] = subscriber_parent;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupNames()
{
    yang_name = "subscriber-group-names"; yang_parent_name = "service-policy-qos";
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::~SubscriberGroupNames()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::has_data() const
{
    for (std::size_t index=0; index<subscriber_group_name.size(); index++)
    {
        if(subscriber_group_name[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::has_operation() const
{
    for (std::size_t index=0; index<subscriber_group_name.size(); index++)
    {
        if(subscriber_group_name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-group-names";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SubscriberGroupNames' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "subscriber-group-name")
    {
        for(auto const & c : subscriber_group_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName>();
        c->parent = this;
        subscriber_group_name.push_back(std::move(c));
        children[segment_path] = subscriber_group_name.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::get_children()
{
    for (auto const & c : subscriber_group_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::SubscriberGroupName()
    :
    subscriber_group_string{YType::str, "subscriber-group-string"},
    account_type{YType::enumeration, "account-type"},
    l1_user_defined{YType::int32, "l1-user-defined"},
    policy_merge{YType::enumeration, "policy-merge"},
    resource_id{YType::uint32, "resource-id"},
    service_fragment_parent_policy{YType::boolean, "service-fragment-parent-policy"},
    spi_name{YType::str, "spi-name"},
    subscriber_parent_policy{YType::boolean, "subscriber-parent-policy"}
{
    yang_name = "subscriber-group-name"; yang_parent_name = "subscriber-group-names";
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::~SubscriberGroupName()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::has_data() const
{
    return subscriber_group_string.is_set
	|| account_type.is_set
	|| l1_user_defined.is_set
	|| policy_merge.is_set
	|| resource_id.is_set
	|| service_fragment_parent_policy.is_set
	|| spi_name.is_set
	|| subscriber_parent_policy.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::has_operation() const
{
    return is_set(operation)
	|| is_set(subscriber_group_string.operation)
	|| is_set(account_type.operation)
	|| is_set(l1_user_defined.operation)
	|| is_set(policy_merge.operation)
	|| is_set(resource_id.operation)
	|| is_set(service_fragment_parent_policy.operation)
	|| is_set(spi_name.operation)
	|| is_set(subscriber_parent_policy.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-group-name" <<"[subscriber-group-string='" <<subscriber_group_string <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SubscriberGroupName' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscriber_group_string.is_set || is_set(subscriber_group_string.operation)) leaf_name_data.push_back(subscriber_group_string.get_name_leafdata());
    if (account_type.is_set || is_set(account_type.operation)) leaf_name_data.push_back(account_type.get_name_leafdata());
    if (l1_user_defined.is_set || is_set(l1_user_defined.operation)) leaf_name_data.push_back(l1_user_defined.get_name_leafdata());
    if (policy_merge.is_set || is_set(policy_merge.operation)) leaf_name_data.push_back(policy_merge.get_name_leafdata());
    if (resource_id.is_set || is_set(resource_id.operation)) leaf_name_data.push_back(resource_id.get_name_leafdata());
    if (service_fragment_parent_policy.is_set || is_set(service_fragment_parent_policy.operation)) leaf_name_data.push_back(service_fragment_parent_policy.get_name_leafdata());
    if (spi_name.is_set || is_set(spi_name.operation)) leaf_name_data.push_back(spi_name.get_name_leafdata());
    if (subscriber_parent_policy.is_set || is_set(subscriber_parent_policy.operation)) leaf_name_data.push_back(subscriber_parent_policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "subscriber-group-string")
    {
        subscriber_group_string = value;
    }
    if(value_path == "account-type")
    {
        account_type = value;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined = value;
    }
    if(value_path == "policy-merge")
    {
        policy_merge = value;
    }
    if(value_path == "resource-id")
    {
        resource_id = value;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy = value;
    }
    if(value_path == "spi-name")
    {
        spi_name = value;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberParent::SubscriberParent()
    :
    account_type{YType::enumeration, "account-type"},
    l1_user_defined{YType::int32, "l1-user-defined"},
    policy_merge{YType::enumeration, "policy-merge"},
    resource_id{YType::uint32, "resource-id"},
    service_fragment_parent_policy{YType::boolean, "service-fragment-parent-policy"},
    spi_name{YType::str, "spi-name"},
    subscriber_parent_policy{YType::boolean, "subscriber-parent-policy"}
{
    yang_name = "subscriber-parent"; yang_parent_name = "service-policy-qos";
}

InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberParent::~SubscriberParent()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberParent::has_data() const
{
    return account_type.is_set
	|| l1_user_defined.is_set
	|| policy_merge.is_set
	|| resource_id.is_set
	|| service_fragment_parent_policy.is_set
	|| spi_name.is_set
	|| subscriber_parent_policy.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberParent::has_operation() const
{
    return is_set(operation)
	|| is_set(account_type.operation)
	|| is_set(l1_user_defined.operation)
	|| is_set(policy_merge.operation)
	|| is_set(resource_id.operation)
	|| is_set(service_fragment_parent_policy.operation)
	|| is_set(spi_name.operation)
	|| is_set(subscriber_parent_policy.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberParent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-parent";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberParent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SubscriberParent' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (account_type.is_set || is_set(account_type.operation)) leaf_name_data.push_back(account_type.get_name_leafdata());
    if (l1_user_defined.is_set || is_set(l1_user_defined.operation)) leaf_name_data.push_back(l1_user_defined.get_name_leafdata());
    if (policy_merge.is_set || is_set(policy_merge.operation)) leaf_name_data.push_back(policy_merge.get_name_leafdata());
    if (resource_id.is_set || is_set(resource_id.operation)) leaf_name_data.push_back(resource_id.get_name_leafdata());
    if (service_fragment_parent_policy.is_set || is_set(service_fragment_parent_policy.operation)) leaf_name_data.push_back(service_fragment_parent_policy.get_name_leafdata());
    if (spi_name.is_set || is_set(spi_name.operation)) leaf_name_data.push_back(spi_name.get_name_leafdata());
    if (subscriber_parent_policy.is_set || is_set(subscriber_parent_policy.operation)) leaf_name_data.push_back(subscriber_parent_policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberParent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberParent::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberParent::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "account-type")
    {
        account_type = value;
    }
    if(value_path == "l1-user-defined")
    {
        l1_user_defined = value;
    }
    if(value_path == "policy-merge")
    {
        policy_merge = value;
    }
    if(value_path == "resource-id")
    {
        resource_id = value;
    }
    if(value_path == "service-fragment-parent-policy")
    {
        service_fragment_parent_policy = value;
    }
    if(value_path == "spi-name")
    {
        spi_name = value;
    }
    if(value_path == "subscriber-parent-policy")
    {
        subscriber_parent_policy = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Optics::Optics()
    :
    breakout{YType::str, "Cisco-IOS-XR-optics-driver-cfg:breakout"},
    optics_cd_high_threshold{YType::int32, "optics-cd-high-threshold"},
    optics_cd_low_threshold{YType::int32, "optics-cd-low-threshold"},
    optics_cd_max{YType::int32, "optics-cd-max"},
    optics_cd_min{YType::int32, "optics-cd-min"},
    optics_description{YType::str, "optics-description"},
    optics_dgd_high_threshold{YType::int32, "optics-dgd-high-threshold"},
    optics_fec{YType::enumeration, "optics-fec"},
    optics_lbc_high_threshold{YType::int32, "optics-lbc-high-threshold"},
    optics_loopback{YType::enumeration, "optics-loopback"},
    optics_osnr_low_threshold{YType::int32, "optics-osnr-low-threshold"},
    optics_ots_amplifier_channel_power{YType::int32, "optics-ots-amplifier-channel-power"},
    optics_ots_amplifier_control_mode{YType::enumeration, "optics-ots-amplifier-control-mode"},
    optics_ots_amplifier_gain{YType::int32, "optics-ots-amplifier-gain"},
    optics_ots_amplifier_gain_degrade_high_threshold{YType::int32, "optics-ots-amplifier-gain-degrade-high-threshold"},
    optics_ots_amplifier_gain_degrade_low_threshold{YType::int32, "optics-ots-amplifier-gain-degrade-low-threshold"},
    optics_ots_amplifier_gain_range{YType::enumeration, "optics-ots-amplifier-gain-range"},
    optics_ots_amplifier_tilt{YType::int32, "optics-ots-amplifier-tilt"},
    optics_ots_channel_power_max_delta{YType::int32, "optics-ots-channel-power-max-delta"},
    optics_ots_osri{YType::boolean, "optics-ots-osri"},
    optics_ots_rx_voa_attenuation{YType::int32, "optics-ots-rx-voa-attenuation"},
    optics_ots_safety_control_mode{YType::enumeration, "optics-ots-safety-control-mode"},
    optics_ots_tx_voa_attenuation{YType::int32, "optics-ots-tx-voa-attenuation"},
    optics_performance_monitoring{YType::boolean, "optics-performance-monitoring"},
    optics_transmit_power{YType::int32, "optics-transmit-power"},
    optics_transmit_shutdown{YType::boolean, "optics-transmit-shutdown"}
    	,
    optics_dwdm_carrier(nullptr) // presence node
	,optics_lanes(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes>())
	,optics_network_srlgs(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs>())
	,rx_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds>())
	,tx_thresholds(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds>())
{
    optics_lanes->parent = this;
    children["optics-lanes"] = optics_lanes;

    optics_network_srlgs->parent = this;
    children["optics-network-srlgs"] = optics_network_srlgs;

    rx_thresholds->parent = this;
    children["rx-thresholds"] = rx_thresholds;

    tx_thresholds->parent = this;
    children["tx-thresholds"] = tx_thresholds;

    yang_name = "optics"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::Optics::~Optics()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::has_data() const
{
    return breakout.is_set
	|| optics_cd_high_threshold.is_set
	|| optics_cd_low_threshold.is_set
	|| optics_cd_max.is_set
	|| optics_cd_min.is_set
	|| optics_description.is_set
	|| optics_dgd_high_threshold.is_set
	|| optics_fec.is_set
	|| optics_lbc_high_threshold.is_set
	|| optics_loopback.is_set
	|| optics_osnr_low_threshold.is_set
	|| optics_ots_amplifier_channel_power.is_set
	|| optics_ots_amplifier_control_mode.is_set
	|| optics_ots_amplifier_gain.is_set
	|| optics_ots_amplifier_gain_degrade_high_threshold.is_set
	|| optics_ots_amplifier_gain_degrade_low_threshold.is_set
	|| optics_ots_amplifier_gain_range.is_set
	|| optics_ots_amplifier_tilt.is_set
	|| optics_ots_channel_power_max_delta.is_set
	|| optics_ots_osri.is_set
	|| optics_ots_rx_voa_attenuation.is_set
	|| optics_ots_safety_control_mode.is_set
	|| optics_ots_tx_voa_attenuation.is_set
	|| optics_performance_monitoring.is_set
	|| optics_transmit_power.is_set
	|| optics_transmit_shutdown.is_set
	|| (optics_dwdm_carrier !=  nullptr && optics_dwdm_carrier->has_data())
	|| (optics_lanes !=  nullptr && optics_lanes->has_data())
	|| (optics_network_srlgs !=  nullptr && optics_network_srlgs->has_data())
	|| (rx_thresholds !=  nullptr && rx_thresholds->has_data())
	|| (tx_thresholds !=  nullptr && tx_thresholds->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::has_operation() const
{
    return is_set(operation)
	|| is_set(breakout.operation)
	|| is_set(optics_cd_high_threshold.operation)
	|| is_set(optics_cd_low_threshold.operation)
	|| is_set(optics_cd_max.operation)
	|| is_set(optics_cd_min.operation)
	|| is_set(optics_description.operation)
	|| is_set(optics_dgd_high_threshold.operation)
	|| is_set(optics_fec.operation)
	|| is_set(optics_lbc_high_threshold.operation)
	|| is_set(optics_loopback.operation)
	|| is_set(optics_osnr_low_threshold.operation)
	|| is_set(optics_ots_amplifier_channel_power.operation)
	|| is_set(optics_ots_amplifier_control_mode.operation)
	|| is_set(optics_ots_amplifier_gain.operation)
	|| is_set(optics_ots_amplifier_gain_degrade_high_threshold.operation)
	|| is_set(optics_ots_amplifier_gain_degrade_low_threshold.operation)
	|| is_set(optics_ots_amplifier_gain_range.operation)
	|| is_set(optics_ots_amplifier_tilt.operation)
	|| is_set(optics_ots_channel_power_max_delta.operation)
	|| is_set(optics_ots_osri.operation)
	|| is_set(optics_ots_rx_voa_attenuation.operation)
	|| is_set(optics_ots_safety_control_mode.operation)
	|| is_set(optics_ots_tx_voa_attenuation.operation)
	|| is_set(optics_performance_monitoring.operation)
	|| is_set(optics_transmit_power.operation)
	|| is_set(optics_transmit_shutdown.operation)
	|| (optics_dwdm_carrier !=  nullptr && optics_dwdm_carrier->has_operation())
	|| (optics_lanes !=  nullptr && optics_lanes->has_operation())
	|| (optics_network_srlgs !=  nullptr && optics_network_srlgs->has_operation())
	|| (rx_thresholds !=  nullptr && rx_thresholds->has_operation())
	|| (tx_thresholds !=  nullptr && tx_thresholds->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Optics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-controller-optics-cfg:optics";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Optics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Optics' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (breakout.is_set || is_set(breakout.operation)) leaf_name_data.push_back(breakout.get_name_leafdata());
    if (optics_cd_high_threshold.is_set || is_set(optics_cd_high_threshold.operation)) leaf_name_data.push_back(optics_cd_high_threshold.get_name_leafdata());
    if (optics_cd_low_threshold.is_set || is_set(optics_cd_low_threshold.operation)) leaf_name_data.push_back(optics_cd_low_threshold.get_name_leafdata());
    if (optics_cd_max.is_set || is_set(optics_cd_max.operation)) leaf_name_data.push_back(optics_cd_max.get_name_leafdata());
    if (optics_cd_min.is_set || is_set(optics_cd_min.operation)) leaf_name_data.push_back(optics_cd_min.get_name_leafdata());
    if (optics_description.is_set || is_set(optics_description.operation)) leaf_name_data.push_back(optics_description.get_name_leafdata());
    if (optics_dgd_high_threshold.is_set || is_set(optics_dgd_high_threshold.operation)) leaf_name_data.push_back(optics_dgd_high_threshold.get_name_leafdata());
    if (optics_fec.is_set || is_set(optics_fec.operation)) leaf_name_data.push_back(optics_fec.get_name_leafdata());
    if (optics_lbc_high_threshold.is_set || is_set(optics_lbc_high_threshold.operation)) leaf_name_data.push_back(optics_lbc_high_threshold.get_name_leafdata());
    if (optics_loopback.is_set || is_set(optics_loopback.operation)) leaf_name_data.push_back(optics_loopback.get_name_leafdata());
    if (optics_osnr_low_threshold.is_set || is_set(optics_osnr_low_threshold.operation)) leaf_name_data.push_back(optics_osnr_low_threshold.get_name_leafdata());
    if (optics_ots_amplifier_channel_power.is_set || is_set(optics_ots_amplifier_channel_power.operation)) leaf_name_data.push_back(optics_ots_amplifier_channel_power.get_name_leafdata());
    if (optics_ots_amplifier_control_mode.is_set || is_set(optics_ots_amplifier_control_mode.operation)) leaf_name_data.push_back(optics_ots_amplifier_control_mode.get_name_leafdata());
    if (optics_ots_amplifier_gain.is_set || is_set(optics_ots_amplifier_gain.operation)) leaf_name_data.push_back(optics_ots_amplifier_gain.get_name_leafdata());
    if (optics_ots_amplifier_gain_degrade_high_threshold.is_set || is_set(optics_ots_amplifier_gain_degrade_high_threshold.operation)) leaf_name_data.push_back(optics_ots_amplifier_gain_degrade_high_threshold.get_name_leafdata());
    if (optics_ots_amplifier_gain_degrade_low_threshold.is_set || is_set(optics_ots_amplifier_gain_degrade_low_threshold.operation)) leaf_name_data.push_back(optics_ots_amplifier_gain_degrade_low_threshold.get_name_leafdata());
    if (optics_ots_amplifier_gain_range.is_set || is_set(optics_ots_amplifier_gain_range.operation)) leaf_name_data.push_back(optics_ots_amplifier_gain_range.get_name_leafdata());
    if (optics_ots_amplifier_tilt.is_set || is_set(optics_ots_amplifier_tilt.operation)) leaf_name_data.push_back(optics_ots_amplifier_tilt.get_name_leafdata());
    if (optics_ots_channel_power_max_delta.is_set || is_set(optics_ots_channel_power_max_delta.operation)) leaf_name_data.push_back(optics_ots_channel_power_max_delta.get_name_leafdata());
    if (optics_ots_osri.is_set || is_set(optics_ots_osri.operation)) leaf_name_data.push_back(optics_ots_osri.get_name_leafdata());
    if (optics_ots_rx_voa_attenuation.is_set || is_set(optics_ots_rx_voa_attenuation.operation)) leaf_name_data.push_back(optics_ots_rx_voa_attenuation.get_name_leafdata());
    if (optics_ots_safety_control_mode.is_set || is_set(optics_ots_safety_control_mode.operation)) leaf_name_data.push_back(optics_ots_safety_control_mode.get_name_leafdata());
    if (optics_ots_tx_voa_attenuation.is_set || is_set(optics_ots_tx_voa_attenuation.operation)) leaf_name_data.push_back(optics_ots_tx_voa_attenuation.get_name_leafdata());
    if (optics_performance_monitoring.is_set || is_set(optics_performance_monitoring.operation)) leaf_name_data.push_back(optics_performance_monitoring.get_name_leafdata());
    if (optics_transmit_power.is_set || is_set(optics_transmit_power.operation)) leaf_name_data.push_back(optics_transmit_power.get_name_leafdata());
    if (optics_transmit_shutdown.is_set || is_set(optics_transmit_shutdown.operation)) leaf_name_data.push_back(optics_transmit_shutdown.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Optics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "optics-dwdm-carrier")
    {
        if(optics_dwdm_carrier != nullptr)
        {
            children["optics-dwdm-carrier"] = optics_dwdm_carrier;
        }
        else
        {
            optics_dwdm_carrier = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsDwdmCarrier>();
            optics_dwdm_carrier->parent = this;
            children["optics-dwdm-carrier"] = optics_dwdm_carrier;
        }
        return children.at("optics-dwdm-carrier");
    }

    if(child_yang_name == "optics-lanes")
    {
        if(optics_lanes != nullptr)
        {
            children["optics-lanes"] = optics_lanes;
        }
        else
        {
            optics_lanes = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes>();
            optics_lanes->parent = this;
            children["optics-lanes"] = optics_lanes;
        }
        return children.at("optics-lanes");
    }

    if(child_yang_name == "optics-network-srlgs")
    {
        if(optics_network_srlgs != nullptr)
        {
            children["optics-network-srlgs"] = optics_network_srlgs;
        }
        else
        {
            optics_network_srlgs = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs>();
            optics_network_srlgs->parent = this;
            children["optics-network-srlgs"] = optics_network_srlgs;
        }
        return children.at("optics-network-srlgs");
    }

    if(child_yang_name == "rx-thresholds")
    {
        if(rx_thresholds != nullptr)
        {
            children["rx-thresholds"] = rx_thresholds;
        }
        else
        {
            rx_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds>();
            rx_thresholds->parent = this;
            children["rx-thresholds"] = rx_thresholds;
        }
        return children.at("rx-thresholds");
    }

    if(child_yang_name == "tx-thresholds")
    {
        if(tx_thresholds != nullptr)
        {
            children["tx-thresholds"] = tx_thresholds;
        }
        else
        {
            tx_thresholds = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds>();
            tx_thresholds->parent = this;
            children["tx-thresholds"] = tx_thresholds;
        }
        return children.at("tx-thresholds");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Optics::get_children()
{
    if(children.find("optics-dwdm-carrier") == children.end())
    {
        if(optics_dwdm_carrier != nullptr)
        {
            children["optics-dwdm-carrier"] = optics_dwdm_carrier;
        }
    }

    if(children.find("optics-lanes") == children.end())
    {
        if(optics_lanes != nullptr)
        {
            children["optics-lanes"] = optics_lanes;
        }
    }

    if(children.find("optics-network-srlgs") == children.end())
    {
        if(optics_network_srlgs != nullptr)
        {
            children["optics-network-srlgs"] = optics_network_srlgs;
        }
    }

    if(children.find("rx-thresholds") == children.end())
    {
        if(rx_thresholds != nullptr)
        {
            children["rx-thresholds"] = rx_thresholds;
        }
    }

    if(children.find("tx-thresholds") == children.end())
    {
        if(tx_thresholds != nullptr)
        {
            children["tx-thresholds"] = tx_thresholds;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Optics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "breakout")
    {
        breakout = value;
    }
    if(value_path == "optics-cd-high-threshold")
    {
        optics_cd_high_threshold = value;
    }
    if(value_path == "optics-cd-low-threshold")
    {
        optics_cd_low_threshold = value;
    }
    if(value_path == "optics-cd-max")
    {
        optics_cd_max = value;
    }
    if(value_path == "optics-cd-min")
    {
        optics_cd_min = value;
    }
    if(value_path == "optics-description")
    {
        optics_description = value;
    }
    if(value_path == "optics-dgd-high-threshold")
    {
        optics_dgd_high_threshold = value;
    }
    if(value_path == "optics-fec")
    {
        optics_fec = value;
    }
    if(value_path == "optics-lbc-high-threshold")
    {
        optics_lbc_high_threshold = value;
    }
    if(value_path == "optics-loopback")
    {
        optics_loopback = value;
    }
    if(value_path == "optics-osnr-low-threshold")
    {
        optics_osnr_low_threshold = value;
    }
    if(value_path == "optics-ots-amplifier-channel-power")
    {
        optics_ots_amplifier_channel_power = value;
    }
    if(value_path == "optics-ots-amplifier-control-mode")
    {
        optics_ots_amplifier_control_mode = value;
    }
    if(value_path == "optics-ots-amplifier-gain")
    {
        optics_ots_amplifier_gain = value;
    }
    if(value_path == "optics-ots-amplifier-gain-degrade-high-threshold")
    {
        optics_ots_amplifier_gain_degrade_high_threshold = value;
    }
    if(value_path == "optics-ots-amplifier-gain-degrade-low-threshold")
    {
        optics_ots_amplifier_gain_degrade_low_threshold = value;
    }
    if(value_path == "optics-ots-amplifier-gain-range")
    {
        optics_ots_amplifier_gain_range = value;
    }
    if(value_path == "optics-ots-amplifier-tilt")
    {
        optics_ots_amplifier_tilt = value;
    }
    if(value_path == "optics-ots-channel-power-max-delta")
    {
        optics_ots_channel_power_max_delta = value;
    }
    if(value_path == "optics-ots-osri")
    {
        optics_ots_osri = value;
    }
    if(value_path == "optics-ots-rx-voa-attenuation")
    {
        optics_ots_rx_voa_attenuation = value;
    }
    if(value_path == "optics-ots-safety-control-mode")
    {
        optics_ots_safety_control_mode = value;
    }
    if(value_path == "optics-ots-tx-voa-attenuation")
    {
        optics_ots_tx_voa_attenuation = value;
    }
    if(value_path == "optics-performance-monitoring")
    {
        optics_performance_monitoring = value;
    }
    if(value_path == "optics-transmit-power")
    {
        optics_transmit_power = value;
    }
    if(value_path == "optics-transmit-shutdown")
    {
        optics_transmit_shutdown = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::RxThresholds()
{
    yang_name = "rx-thresholds"; yang_parent_name = "optics";
}

InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::~RxThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::has_data() const
{
    for (std::size_t index=0; index<rx_threshold.size(); index++)
    {
        if(rx_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::has_operation() const
{
    for (std::size_t index=0; index<rx_threshold.size(); index++)
    {
        if(rx_threshold[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-thresholds";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RxThresholds' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rx-threshold")
    {
        for(auto const & c : rx_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::RxThreshold>();
        c->parent = this;
        rx_threshold.push_back(std::move(c));
        children[segment_path] = rx_threshold.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::get_children()
{
    for (auto const & c : rx_threshold)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::RxThreshold::RxThreshold()
    :
    rx_threshold_type{YType::enumeration, "rx-threshold-type"},
    rx_threshold{YType::int32, "rx-threshold"}
{
    yang_name = "rx-threshold"; yang_parent_name = "rx-thresholds";
}

InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::RxThreshold::~RxThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::RxThreshold::has_data() const
{
    return rx_threshold_type.is_set
	|| rx_threshold.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::RxThreshold::has_operation() const
{
    return is_set(operation)
	|| is_set(rx_threshold_type.operation)
	|| is_set(rx_threshold.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::RxThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-threshold" <<"[rx-threshold-type='" <<rx_threshold_type <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::RxThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RxThreshold' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rx_threshold_type.is_set || is_set(rx_threshold_type.operation)) leaf_name_data.push_back(rx_threshold_type.get_name_leafdata());
    if (rx_threshold.is_set || is_set(rx_threshold.operation)) leaf_name_data.push_back(rx_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::RxThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::RxThreshold::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::RxThreshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rx-threshold-type")
    {
        rx_threshold_type = value;
    }
    if(value_path == "rx-threshold")
    {
        rx_threshold = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::OpticsNetworkSrlgs()
{
    yang_name = "optics-network-srlgs"; yang_parent_name = "optics";
}

InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::~OpticsNetworkSrlgs()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::has_data() const
{
    for (std::size_t index=0; index<optics_network_srlg.size(); index++)
    {
        if(optics_network_srlg[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::has_operation() const
{
    for (std::size_t index=0; index<optics_network_srlg.size(); index++)
    {
        if(optics_network_srlg[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-network-srlgs";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OpticsNetworkSrlgs' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "optics-network-srlg")
    {
        for(auto const & c : optics_network_srlg)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::OpticsNetworkSrlg>();
        c->parent = this;
        optics_network_srlg.push_back(std::move(c));
        children[segment_path] = optics_network_srlg.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::get_children()
{
    for (auto const & c : optics_network_srlg)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::set_value(const std::string & value_path, std::string value)
{
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
    yang_name = "optics-network-srlg"; yang_parent_name = "optics-network-srlgs";
}

InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::OpticsNetworkSrlg::~OpticsNetworkSrlg()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::OpticsNetworkSrlg::has_data() const
{
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
    return is_set(operation)
	|| is_set(set_id.operation)
	|| is_set(srlg1.operation)
	|| is_set(srlg2.operation)
	|| is_set(srlg3.operation)
	|| is_set(srlg4.operation)
	|| is_set(srlg5.operation)
	|| is_set(srlg6.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::OpticsNetworkSrlg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-network-srlg" <<"[set-id='" <<set_id <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::OpticsNetworkSrlg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OpticsNetworkSrlg' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_id.is_set || is_set(set_id.operation)) leaf_name_data.push_back(set_id.get_name_leafdata());
    if (srlg1.is_set || is_set(srlg1.operation)) leaf_name_data.push_back(srlg1.get_name_leafdata());
    if (srlg2.is_set || is_set(srlg2.operation)) leaf_name_data.push_back(srlg2.get_name_leafdata());
    if (srlg3.is_set || is_set(srlg3.operation)) leaf_name_data.push_back(srlg3.get_name_leafdata());
    if (srlg4.is_set || is_set(srlg4.operation)) leaf_name_data.push_back(srlg4.get_name_leafdata());
    if (srlg5.is_set || is_set(srlg5.operation)) leaf_name_data.push_back(srlg5.get_name_leafdata());
    if (srlg6.is_set || is_set(srlg6.operation)) leaf_name_data.push_back(srlg6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::OpticsNetworkSrlg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::OpticsNetworkSrlg::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::OpticsNetworkSrlg::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set-id")
    {
        set_id = value;
    }
    if(value_path == "srlg1")
    {
        srlg1 = value;
    }
    if(value_path == "srlg2")
    {
        srlg2 = value;
    }
    if(value_path == "srlg3")
    {
        srlg3 = value;
    }
    if(value_path == "srlg4")
    {
        srlg4 = value;
    }
    if(value_path == "srlg5")
    {
        srlg5 = value;
    }
    if(value_path == "srlg6")
    {
        srlg6 = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsDwdmCarrier::OpticsDwdmCarrier()
    :
    grid_type{YType::enumeration, "grid-type"},
    param_type{YType::enumeration, "param-type"},
    param_value{YType::uint32, "param-value"}
{
    yang_name = "optics-dwdm-carrier"; yang_parent_name = "optics";
}

InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsDwdmCarrier::~OpticsDwdmCarrier()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsDwdmCarrier::has_data() const
{
    return grid_type.is_set
	|| param_type.is_set
	|| param_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsDwdmCarrier::has_operation() const
{
    return is_set(operation)
	|| is_set(grid_type.operation)
	|| is_set(param_type.operation)
	|| is_set(param_value.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsDwdmCarrier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-dwdm-carrier";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsDwdmCarrier::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OpticsDwdmCarrier' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (grid_type.is_set || is_set(grid_type.operation)) leaf_name_data.push_back(grid_type.get_name_leafdata());
    if (param_type.is_set || is_set(param_type.operation)) leaf_name_data.push_back(param_type.get_name_leafdata());
    if (param_value.is_set || is_set(param_value.operation)) leaf_name_data.push_back(param_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsDwdmCarrier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsDwdmCarrier::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsDwdmCarrier::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "grid-type")
    {
        grid_type = value;
    }
    if(value_path == "param-type")
    {
        param_type = value;
    }
    if(value_path == "param-value")
    {
        param_value = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::OpticsLanes()
{
    yang_name = "optics-lanes"; yang_parent_name = "optics";
}

InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::~OpticsLanes()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::has_data() const
{
    for (std::size_t index=0; index<optics_lane.size(); index++)
    {
        if(optics_lane[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::has_operation() const
{
    for (std::size_t index=0; index<optics_lane.size(); index++)
    {
        if(optics_lane[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-lanes";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OpticsLanes' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "optics-lane")
    {
        for(auto const & c : optics_lane)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::OpticsLane>();
        c->parent = this;
        optics_lane.push_back(std::move(c));
        children[segment_path] = optics_lane.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::get_children()
{
    for (auto const & c : optics_lane)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::OpticsLane::OpticsLane()
    :
    index_{YType::int32, "index"},
    description{YType::str, "description"}
{
    yang_name = "optics-lane"; yang_parent_name = "optics-lanes";
}

InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::OpticsLane::~OpticsLane()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::OpticsLane::has_data() const
{
    return index_.is_set
	|| description.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::OpticsLane::has_operation() const
{
    return is_set(operation)
	|| is_set(index_.operation)
	|| is_set(description.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::OpticsLane::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "optics-lane" <<"[index='" <<index_ <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::OpticsLane::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OpticsLane' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::OpticsLane::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::OpticsLane::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::OpticsLane::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::TxThresholds()
{
    yang_name = "tx-thresholds"; yang_parent_name = "optics";
}

InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::~TxThresholds()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::has_data() const
{
    for (std::size_t index=0; index<tx_threshold.size(); index++)
    {
        if(tx_threshold[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::has_operation() const
{
    for (std::size_t index=0; index<tx_threshold.size(); index++)
    {
        if(tx_threshold[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-thresholds";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TxThresholds' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tx-threshold")
    {
        for(auto const & c : tx_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::TxThreshold>();
        c->parent = this;
        tx_threshold.push_back(std::move(c));
        children[segment_path] = tx_threshold.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::get_children()
{
    for (auto const & c : tx_threshold)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::TxThreshold::TxThreshold()
    :
    tx_threshold_type{YType::enumeration, "tx-threshold-type"},
    tx_threshold{YType::int32, "tx-threshold"}
{
    yang_name = "tx-threshold"; yang_parent_name = "tx-thresholds";
}

InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::TxThreshold::~TxThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::TxThreshold::has_data() const
{
    return tx_threshold_type.is_set
	|| tx_threshold.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::TxThreshold::has_operation() const
{
    return is_set(operation)
	|| is_set(tx_threshold_type.operation)
	|| is_set(tx_threshold.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::TxThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-threshold" <<"[tx-threshold-type='" <<tx_threshold_type <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::TxThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TxThreshold' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tx_threshold_type.is_set || is_set(tx_threshold_type.operation)) leaf_name_data.push_back(tx_threshold_type.get_name_leafdata());
    if (tx_threshold.is_set || is_set(tx_threshold.operation)) leaf_name_data.push_back(tx_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::TxThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::TxThreshold::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::TxThreshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tx-threshold-type")
    {
        tx_threshold_type = value;
    }
    if(value_path == "tx-threshold")
    {
        tx_threshold = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Bfd::Bfd()
    :
    mode{YType::enumeration, "mode"}
    	,
    address_family(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily>())
{
    address_family->parent = this;
    children["address-family"] = address_family;

    yang_name = "bfd"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::Bfd::~Bfd()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Bfd::has_data() const
{
    return mode.is_set
	|| (address_family !=  nullptr && address_family->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Bfd::has_operation() const
{
    return is_set(operation)
	|| is_set(mode.operation)
	|| (address_family !=  nullptr && address_family->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-cfg:bfd";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Bfd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bfd' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "address-family")
    {
        if(address_family != nullptr)
        {
            children["address-family"] = address_family;
        }
        else
        {
            address_family = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily>();
            address_family->parent = this;
            children["address-family"] = address_family;
        }
        return children.at("address-family");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Bfd::get_children()
{
    if(children.find("address-family") == children.end())
    {
        if(address_family != nullptr)
        {
            children["address-family"] = address_family;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Bfd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mode")
    {
        mode = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::AddressFamily()
    :
    ipv4(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4>())
	,ipv6(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6>())
{
    ipv4->parent = this;
    children["ipv4"] = ipv4;

    ipv6->parent = this;
    children["ipv6"] = ipv6;

    yang_name = "address-family"; yang_parent_name = "bfd";
}

InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::~AddressFamily()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::has_data() const
{
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::has_operation() const
{
    return is_set(operation)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AddressFamily' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 != nullptr)
        {
            children["ipv4"] = ipv4;
        }
        else
        {
            ipv4 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4>();
            ipv4->parent = this;
            children["ipv4"] = ipv4;
        }
        return children.at("ipv4");
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 != nullptr)
        {
            children["ipv6"] = ipv6;
        }
        else
        {
            ipv6 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6>();
            ipv6->parent = this;
            children["ipv6"] = ipv6;
        }
        return children.at("ipv6");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::get_children()
{
    if(children.find("ipv4") == children.end())
    {
        if(ipv4 != nullptr)
        {
            children["ipv4"] = ipv4;
        }
    }

    if(children.find("ipv6") == children.end())
    {
        if(ipv6 != nullptr)
        {
            children["ipv6"] = ipv6;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::Ipv6()
    :
    ipv6_destination_address{YType::str, "ipv6-destination-address"},
    ipv6_detection_multiplier{YType::uint32, "ipv6-detection-multiplier"},
    ipv6_fast_detect{YType::empty, "ipv6-fast-detect"},
    ipv6_interval{YType::uint32, "ipv6-interval"}
    	,
    ipv6_timers(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::Ipv6Timers>())
{
    ipv6_timers->parent = this;
    children["ipv6-timers"] = ipv6_timers;

    yang_name = "ipv6"; yang_parent_name = "address-family";
}

InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::~Ipv6()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::has_data() const
{
    return ipv6_destination_address.is_set
	|| ipv6_detection_multiplier.is_set
	|| ipv6_fast_detect.is_set
	|| ipv6_interval.is_set
	|| (ipv6_timers !=  nullptr && ipv6_timers->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_destination_address.operation)
	|| is_set(ipv6_detection_multiplier.operation)
	|| is_set(ipv6_fast_detect.operation)
	|| is_set(ipv6_interval.operation)
	|| (ipv6_timers !=  nullptr && ipv6_timers->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_destination_address.is_set || is_set(ipv6_destination_address.operation)) leaf_name_data.push_back(ipv6_destination_address.get_name_leafdata());
    if (ipv6_detection_multiplier.is_set || is_set(ipv6_detection_multiplier.operation)) leaf_name_data.push_back(ipv6_detection_multiplier.get_name_leafdata());
    if (ipv6_fast_detect.is_set || is_set(ipv6_fast_detect.operation)) leaf_name_data.push_back(ipv6_fast_detect.get_name_leafdata());
    if (ipv6_interval.is_set || is_set(ipv6_interval.operation)) leaf_name_data.push_back(ipv6_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv6-timers")
    {
        if(ipv6_timers != nullptr)
        {
            children["ipv6-timers"] = ipv6_timers;
        }
        else
        {
            ipv6_timers = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::Ipv6Timers>();
            ipv6_timers->parent = this;
            children["ipv6-timers"] = ipv6_timers;
        }
        return children.at("ipv6-timers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::get_children()
{
    if(children.find("ipv6-timers") == children.end())
    {
        if(ipv6_timers != nullptr)
        {
            children["ipv6-timers"] = ipv6_timers;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-destination-address")
    {
        ipv6_destination_address = value;
    }
    if(value_path == "ipv6-detection-multiplier")
    {
        ipv6_detection_multiplier = value;
    }
    if(value_path == "ipv6-fast-detect")
    {
        ipv6_fast_detect = value;
    }
    if(value_path == "ipv6-interval")
    {
        ipv6_interval = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::Ipv6Timers::Ipv6Timers()
    :
    ipv6_nbor_unconfig_timer{YType::uint32, "ipv6-nbor-unconfig-timer"},
    ipv6_start_timer{YType::uint32, "ipv6-start-timer"}
{
    yang_name = "ipv6-timers"; yang_parent_name = "ipv6";
}

InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::Ipv6Timers::~Ipv6Timers()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::Ipv6Timers::has_data() const
{
    return ipv6_nbor_unconfig_timer.is_set
	|| ipv6_start_timer.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::Ipv6Timers::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_nbor_unconfig_timer.operation)
	|| is_set(ipv6_start_timer.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::Ipv6Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-timers";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::Ipv6Timers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6Timers' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_nbor_unconfig_timer.is_set || is_set(ipv6_nbor_unconfig_timer.operation)) leaf_name_data.push_back(ipv6_nbor_unconfig_timer.get_name_leafdata());
    if (ipv6_start_timer.is_set || is_set(ipv6_start_timer.operation)) leaf_name_data.push_back(ipv6_start_timer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::Ipv6Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::Ipv6Timers::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::Ipv6Timers::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-nbor-unconfig-timer")
    {
        ipv6_nbor_unconfig_timer = value;
    }
    if(value_path == "ipv6-start-timer")
    {
        ipv6_start_timer = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Ipv4()
    :
    destination_address{YType::str, "destination-address"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    fast_detect{YType::empty, "fast-detect"},
    interval{YType::uint32, "interval"}
    	,
    echo(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Echo>())
	,timers(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Timers>())
{
    echo->parent = this;
    children["echo"] = echo;

    timers->parent = this;
    children["timers"] = timers;

    yang_name = "ipv4"; yang_parent_name = "address-family";
}

InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::~Ipv4()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::has_data() const
{
    return destination_address.is_set
	|| detection_multiplier.is_set
	|| fast_detect.is_set
	|| interval.is_set
	|| (echo !=  nullptr && echo->has_data())
	|| (timers !=  nullptr && timers->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(fast_detect.operation)
	|| is_set(interval.operation)
	|| (echo !=  nullptr && echo->has_operation())
	|| (timers !=  nullptr && timers->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (fast_detect.is_set || is_set(fast_detect.operation)) leaf_name_data.push_back(fast_detect.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "echo")
    {
        if(echo != nullptr)
        {
            children["echo"] = echo;
        }
        else
        {
            echo = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Echo>();
            echo->parent = this;
            children["echo"] = echo;
        }
        return children.at("echo");
    }

    if(child_yang_name == "timers")
    {
        if(timers != nullptr)
        {
            children["timers"] = timers;
        }
        else
        {
            timers = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Timers>();
            timers->parent = this;
            children["timers"] = timers;
        }
        return children.at("timers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::get_children()
{
    if(children.find("echo") == children.end())
    {
        if(echo != nullptr)
        {
            children["echo"] = echo;
        }
    }

    if(children.find("timers") == children.end())
    {
        if(timers != nullptr)
        {
            children["timers"] = timers;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "fast-detect")
    {
        fast_detect = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Echo::Echo()
    :
    min_interval{YType::uint32, "min-interval"}
{
    yang_name = "echo"; yang_parent_name = "ipv4";
}

InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Echo::~Echo()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Echo::has_data() const
{
    return min_interval.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Echo::has_operation() const
{
    return is_set(operation)
	|| is_set(min_interval.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Echo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Echo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Echo' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min_interval.is_set || is_set(min_interval.operation)) leaf_name_data.push_back(min_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Echo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Echo::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Echo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "min-interval")
    {
        min_interval = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Timers::Timers()
    :
    nbor_unconfig_timer{YType::uint32, "nbor-unconfig-timer"},
    start_timer{YType::uint32, "start-timer"}
{
    yang_name = "timers"; yang_parent_name = "ipv4";
}

InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Timers::~Timers()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Timers::has_data() const
{
    return nbor_unconfig_timer.is_set
	|| start_timer.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Timers::has_operation() const
{
    return is_set(operation)
	|| is_set(nbor_unconfig_timer.operation)
	|| is_set(start_timer.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Timers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Timers' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nbor_unconfig_timer.is_set || is_set(nbor_unconfig_timer.operation)) leaf_name_data.push_back(nbor_unconfig_timer.get_name_leafdata());
    if (start_timer.is_set || is_set(start_timer.operation)) leaf_name_data.push_back(start_timer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Timers::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Timers::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nbor-unconfig-timer")
    {
        nbor_unconfig_timer = value;
    }
    if(value_path == "start-timer")
    {
        start_timer = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Bundle::Bundle()
    :
    lacp_delay{YType::uint32, "lacp-delay"},
    shutdown{YType::empty, "shutdown"},
    wait_while{YType::uint32, "wait-while"}
    	,
    bundle_load_balancing(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing>())
	,maximum_active(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive>())
	,minimum_active(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive>())
{
    bundle_load_balancing->parent = this;
    children["bundle-load-balancing"] = bundle_load_balancing;

    maximum_active->parent = this;
    children["maximum-active"] = maximum_active;

    minimum_active->parent = this;
    children["minimum-active"] = minimum_active;

    yang_name = "bundle"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::Bundle::~Bundle()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Bundle::has_data() const
{
    return lacp_delay.is_set
	|| shutdown.is_set
	|| wait_while.is_set
	|| (bundle_load_balancing !=  nullptr && bundle_load_balancing->has_data())
	|| (maximum_active !=  nullptr && maximum_active->has_data())
	|| (minimum_active !=  nullptr && minimum_active->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Bundle::has_operation() const
{
    return is_set(operation)
	|| is_set(lacp_delay.operation)
	|| is_set(shutdown.operation)
	|| is_set(wait_while.operation)
	|| (bundle_load_balancing !=  nullptr && bundle_load_balancing->has_operation())
	|| (maximum_active !=  nullptr && maximum_active->has_operation())
	|| (minimum_active !=  nullptr && minimum_active->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Bundle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-cfg:bundle";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Bundle::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bundle' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lacp_delay.is_set || is_set(lacp_delay.operation)) leaf_name_data.push_back(lacp_delay.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.operation)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (wait_while.is_set || is_set(wait_while.operation)) leaf_name_data.push_back(wait_while.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Bundle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bundle-load-balancing")
    {
        if(bundle_load_balancing != nullptr)
        {
            children["bundle-load-balancing"] = bundle_load_balancing;
        }
        else
        {
            bundle_load_balancing = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing>();
            bundle_load_balancing->parent = this;
            children["bundle-load-balancing"] = bundle_load_balancing;
        }
        return children.at("bundle-load-balancing");
    }

    if(child_yang_name == "maximum-active")
    {
        if(maximum_active != nullptr)
        {
            children["maximum-active"] = maximum_active;
        }
        else
        {
            maximum_active = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive>();
            maximum_active->parent = this;
            children["maximum-active"] = maximum_active;
        }
        return children.at("maximum-active");
    }

    if(child_yang_name == "minimum-active")
    {
        if(minimum_active != nullptr)
        {
            children["minimum-active"] = minimum_active;
        }
        else
        {
            minimum_active = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive>();
            minimum_active->parent = this;
            children["minimum-active"] = minimum_active;
        }
        return children.at("minimum-active");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Bundle::get_children()
{
    if(children.find("bundle-load-balancing") == children.end())
    {
        if(bundle_load_balancing != nullptr)
        {
            children["bundle-load-balancing"] = bundle_load_balancing;
        }
    }

    if(children.find("maximum-active") == children.end())
    {
        if(maximum_active != nullptr)
        {
            children["maximum-active"] = maximum_active;
        }
    }

    if(children.find("minimum-active") == children.end())
    {
        if(minimum_active != nullptr)
        {
            children["minimum-active"] = minimum_active;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Bundle::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lacp-delay")
    {
        lacp_delay = value;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
    }
    if(value_path == "wait-while")
    {
        wait_while = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::BundleLoadBalancing()
    :
    localize_links{YType::uint32, "localize-links"}
    	,
    hash_function(nullptr) // presence node
{
    yang_name = "bundle-load-balancing"; yang_parent_name = "bundle";
}

InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::~BundleLoadBalancing()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::has_data() const
{
    return localize_links.is_set
	|| (hash_function !=  nullptr && hash_function->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::has_operation() const
{
    return is_set(operation)
	|| is_set(localize_links.operation)
	|| (hash_function !=  nullptr && hash_function->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-load-balancing";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BundleLoadBalancing' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (localize_links.is_set || is_set(localize_links.operation)) leaf_name_data.push_back(localize_links.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "hash-function")
    {
        if(hash_function != nullptr)
        {
            children["hash-function"] = hash_function;
        }
        else
        {
            hash_function = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::HashFunction>();
            hash_function->parent = this;
            children["hash-function"] = hash_function;
        }
        return children.at("hash-function");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::get_children()
{
    if(children.find("hash-function") == children.end())
    {
        if(hash_function != nullptr)
        {
            children["hash-function"] = hash_function;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "localize-links")
    {
        localize_links = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::HashFunction::HashFunction()
    :
    hash_type{YType::enumeration, "hash-type"},
    hash_value{YType::uint32, "hash-value"}
{
    yang_name = "hash-function"; yang_parent_name = "bundle-load-balancing";
}

InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::HashFunction::~HashFunction()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::HashFunction::has_data() const
{
    return hash_type.is_set
	|| hash_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::HashFunction::has_operation() const
{
    return is_set(operation)
	|| is_set(hash_type.operation)
	|| is_set(hash_value.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::HashFunction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hash-function";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::HashFunction::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HashFunction' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hash_type.is_set || is_set(hash_type.operation)) leaf_name_data.push_back(hash_type.get_name_leafdata());
    if (hash_value.is_set || is_set(hash_value.operation)) leaf_name_data.push_back(hash_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::HashFunction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::HashFunction::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::HashFunction::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hash-type")
    {
        hash_type = value;
    }
    if(value_path == "hash-value")
    {
        hash_value = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::MinimumActive()
    :
    links{YType::uint32, "links"}
    	,
    bandwidth(nullptr) // presence node
{
    yang_name = "minimum-active"; yang_parent_name = "bundle";
}

InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::~MinimumActive()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::has_data() const
{
    return links.is_set
	|| (bandwidth !=  nullptr && bandwidth->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::has_operation() const
{
    return is_set(operation)
	|| is_set(links.operation)
	|| (bandwidth !=  nullptr && bandwidth->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minimum-active";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MinimumActive' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (links.is_set || is_set(links.operation)) leaf_name_data.push_back(links.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bandwidth")
    {
        if(bandwidth != nullptr)
        {
            children["bandwidth"] = bandwidth;
        }
        else
        {
            bandwidth = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::Bandwidth>();
            bandwidth->parent = this;
            children["bandwidth"] = bandwidth;
        }
        return children.at("bandwidth");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::get_children()
{
    if(children.find("bandwidth") == children.end())
    {
        if(bandwidth != nullptr)
        {
            children["bandwidth"] = bandwidth;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "links")
    {
        links = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::Bandwidth::Bandwidth()
    :
    bandwidth{YType::uint32, "bandwidth"},
    min_bandwidth_range{YType::enumeration, "min-bandwidth-range"}
{
    yang_name = "bandwidth"; yang_parent_name = "minimum-active";
}

InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::Bandwidth::~Bandwidth()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::Bandwidth::has_data() const
{
    return bandwidth.is_set
	|| min_bandwidth_range.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::Bandwidth::has_operation() const
{
    return is_set(operation)
	|| is_set(bandwidth.operation)
	|| is_set(min_bandwidth_range.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::Bandwidth::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bandwidth' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.operation)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (min_bandwidth_range.is_set || is_set(min_bandwidth_range.operation)) leaf_name_data.push_back(min_bandwidth_range.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::Bandwidth::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::Bandwidth::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bandwidth")
    {
        bandwidth = value;
    }
    if(value_path == "min-bandwidth-range")
    {
        min_bandwidth_range = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::MaximumActive()
    :
    links(nullptr) // presence node
{
    yang_name = "maximum-active"; yang_parent_name = "bundle";
}

InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::~MaximumActive()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::has_data() const
{
    return (links !=  nullptr && links->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::has_operation() const
{
    return is_set(operation)
	|| (links !=  nullptr && links->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-active";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaximumActive' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "links")
    {
        if(links != nullptr)
        {
            children["links"] = links;
        }
        else
        {
            links = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::Links>();
            links->parent = this;
            children["links"] = links;
        }
        return children.at("links");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::get_children()
{
    if(children.find("links") == children.end())
    {
        if(links != nullptr)
        {
            children["links"] = links;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::Links::Links()
    :
    links{YType::uint32, "links"},
    max_active_links_mode{YType::enumeration, "max-active-links-mode"}
{
    yang_name = "links"; yang_parent_name = "maximum-active";
}

InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::Links::~Links()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::Links::has_data() const
{
    return links.is_set
	|| max_active_links_mode.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::Links::has_operation() const
{
    return is_set(operation)
	|| is_set(links.operation)
	|| is_set(max_active_links_mode.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::Links::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "links";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::Links::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Links' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (links.is_set || is_set(links.operation)) leaf_name_data.push_back(links.get_name_leafdata());
    if (max_active_links_mode.is_set || is_set(max_active_links_mode.operation)) leaf_name_data.push_back(max_active_links_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::Links::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::Links::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::Links::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "links")
    {
        links = value;
    }
    if(value_path == "max-active-links-mode")
    {
        max_active_links_mode = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Lacp::Lacp()
    :
    churn_logging{YType::enumeration, "churn-logging"},
    collector_max_delay{YType::uint32, "collector-max-delay"},
    fast_switchover{YType::empty, "fast-switchover"},
    lacp_nonrevertive{YType::empty, "lacp-nonrevertive"},
    mode{YType::enumeration, "mode"},
    period{YType::str, "period"},
    period_short{YType::str, "period-short"},
    suppress_flaps{YType::uint32, "suppress-flaps"},
    system_mac{YType::str, "system-mac"},
    system_priority{YType::uint32, "system-priority"}
    	,
    cisco_extensions(nullptr) // presence node
	,timeout(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Lacp::Timeout>())
{
    timeout->parent = this;
    children["timeout"] = timeout;

    yang_name = "lacp"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::Lacp::~Lacp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Lacp::has_data() const
{
    return churn_logging.is_set
	|| collector_max_delay.is_set
	|| fast_switchover.is_set
	|| lacp_nonrevertive.is_set
	|| mode.is_set
	|| period.is_set
	|| period_short.is_set
	|| suppress_flaps.is_set
	|| system_mac.is_set
	|| system_priority.is_set
	|| (cisco_extensions !=  nullptr && cisco_extensions->has_data())
	|| (timeout !=  nullptr && timeout->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Lacp::has_operation() const
{
    return is_set(operation)
	|| is_set(churn_logging.operation)
	|| is_set(collector_max_delay.operation)
	|| is_set(fast_switchover.operation)
	|| is_set(lacp_nonrevertive.operation)
	|| is_set(mode.operation)
	|| is_set(period.operation)
	|| is_set(period_short.operation)
	|| is_set(suppress_flaps.operation)
	|| is_set(system_mac.operation)
	|| is_set(system_priority.operation)
	|| (cisco_extensions !=  nullptr && cisco_extensions->has_operation())
	|| (timeout !=  nullptr && timeout->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Lacp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-cfg:lacp";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Lacp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lacp' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (churn_logging.is_set || is_set(churn_logging.operation)) leaf_name_data.push_back(churn_logging.get_name_leafdata());
    if (collector_max_delay.is_set || is_set(collector_max_delay.operation)) leaf_name_data.push_back(collector_max_delay.get_name_leafdata());
    if (fast_switchover.is_set || is_set(fast_switchover.operation)) leaf_name_data.push_back(fast_switchover.get_name_leafdata());
    if (lacp_nonrevertive.is_set || is_set(lacp_nonrevertive.operation)) leaf_name_data.push_back(lacp_nonrevertive.get_name_leafdata());
    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (period.is_set || is_set(period.operation)) leaf_name_data.push_back(period.get_name_leafdata());
    if (period_short.is_set || is_set(period_short.operation)) leaf_name_data.push_back(period_short.get_name_leafdata());
    if (suppress_flaps.is_set || is_set(suppress_flaps.operation)) leaf_name_data.push_back(suppress_flaps.get_name_leafdata());
    if (system_mac.is_set || is_set(system_mac.operation)) leaf_name_data.push_back(system_mac.get_name_leafdata());
    if (system_priority.is_set || is_set(system_priority.operation)) leaf_name_data.push_back(system_priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Lacp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "cisco-extensions")
    {
        if(cisco_extensions != nullptr)
        {
            children["cisco-extensions"] = cisco_extensions;
        }
        else
        {
            cisco_extensions = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Lacp::CiscoExtensions>();
            cisco_extensions->parent = this;
            children["cisco-extensions"] = cisco_extensions;
        }
        return children.at("cisco-extensions");
    }

    if(child_yang_name == "timeout")
    {
        if(timeout != nullptr)
        {
            children["timeout"] = timeout;
        }
        else
        {
            timeout = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Lacp::Timeout>();
            timeout->parent = this;
            children["timeout"] = timeout;
        }
        return children.at("timeout");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Lacp::get_children()
{
    if(children.find("cisco-extensions") == children.end())
    {
        if(cisco_extensions != nullptr)
        {
            children["cisco-extensions"] = cisco_extensions;
        }
    }

    if(children.find("timeout") == children.end())
    {
        if(timeout != nullptr)
        {
            children["timeout"] = timeout;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Lacp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "churn-logging")
    {
        churn_logging = value;
    }
    if(value_path == "collector-max-delay")
    {
        collector_max_delay = value;
    }
    if(value_path == "fast-switchover")
    {
        fast_switchover = value;
    }
    if(value_path == "lacp-nonrevertive")
    {
        lacp_nonrevertive = value;
    }
    if(value_path == "mode")
    {
        mode = value;
    }
    if(value_path == "period")
    {
        period = value;
    }
    if(value_path == "period-short")
    {
        period_short = value;
    }
    if(value_path == "suppress-flaps")
    {
        suppress_flaps = value;
    }
    if(value_path == "system-mac")
    {
        system_mac = value;
    }
    if(value_path == "system-priority")
    {
        system_priority = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Lacp::CiscoExtensions::CiscoExtensions()
    :
    cisco_ext{YType::empty, "cisco-ext"},
    cisco_ext_type{YType::enumeration, "cisco-ext-type"}
{
    yang_name = "cisco-extensions"; yang_parent_name = "lacp";
}

InterfaceConfigurations::InterfaceConfiguration::Lacp::CiscoExtensions::~CiscoExtensions()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Lacp::CiscoExtensions::has_data() const
{
    return cisco_ext.is_set
	|| cisco_ext_type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Lacp::CiscoExtensions::has_operation() const
{
    return is_set(operation)
	|| is_set(cisco_ext.operation)
	|| is_set(cisco_ext_type.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Lacp::CiscoExtensions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-extensions";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Lacp::CiscoExtensions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CiscoExtensions' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cisco_ext.is_set || is_set(cisco_ext.operation)) leaf_name_data.push_back(cisco_ext.get_name_leafdata());
    if (cisco_ext_type.is_set || is_set(cisco_ext_type.operation)) leaf_name_data.push_back(cisco_ext_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Lacp::CiscoExtensions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Lacp::CiscoExtensions::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Lacp::CiscoExtensions::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cisco-ext")
    {
        cisco_ext = value;
    }
    if(value_path == "cisco-ext-type")
    {
        cisco_ext_type = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Lacp::Timeout::Timeout()
    :
    actor_churn{YType::uint32, "actor-churn"},
    partner_churn{YType::uint32, "partner-churn"},
    rx_default{YType::uint32, "rx-default"}
{
    yang_name = "timeout"; yang_parent_name = "lacp";
}

InterfaceConfigurations::InterfaceConfiguration::Lacp::Timeout::~Timeout()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Lacp::Timeout::has_data() const
{
    return actor_churn.is_set
	|| partner_churn.is_set
	|| rx_default.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Lacp::Timeout::has_operation() const
{
    return is_set(operation)
	|| is_set(actor_churn.operation)
	|| is_set(partner_churn.operation)
	|| is_set(rx_default.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Lacp::Timeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timeout";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Lacp::Timeout::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Timeout' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (actor_churn.is_set || is_set(actor_churn.operation)) leaf_name_data.push_back(actor_churn.get_name_leafdata());
    if (partner_churn.is_set || is_set(partner_churn.operation)) leaf_name_data.push_back(partner_churn.get_name_leafdata());
    if (rx_default.is_set || is_set(rx_default.operation)) leaf_name_data.push_back(rx_default.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Lacp::Timeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Lacp::Timeout::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Lacp::Timeout::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "actor-churn")
    {
        actor_churn = value;
    }
    if(value_path == "partner-churn")
    {
        partner_churn = value;
    }
    if(value_path == "rx-default")
    {
        rx_default = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::BundleMember::BundleMember()
    :
    port_priority{YType::uint16, "port-priority"}
    	,
    id(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::BundleMember::Id>())
{
    id->parent = this;
    children["id"] = id;

    yang_name = "bundle-member"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::BundleMember::~BundleMember()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::BundleMember::has_data() const
{
    return port_priority.is_set
	|| (id !=  nullptr && id->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::BundleMember::has_operation() const
{
    return is_set(operation)
	|| is_set(port_priority.operation)
	|| (id !=  nullptr && id->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::BundleMember::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-cfg:bundle-member";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::BundleMember::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BundleMember' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_priority.is_set || is_set(port_priority.operation)) leaf_name_data.push_back(port_priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::BundleMember::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "id")
    {
        if(id != nullptr)
        {
            children["id"] = id;
        }
        else
        {
            id = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::BundleMember::Id>();
            id->parent = this;
            children["id"] = id;
        }
        return children.at("id");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::BundleMember::get_children()
{
    if(children.find("id") == children.end())
    {
        if(id != nullptr)
        {
            children["id"] = id;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::BundleMember::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "port-priority")
    {
        port_priority = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::BundleMember::Id::Id()
    :
    bundle_id{YType::uint32, "bundle-id"},
    port_activity{YType::enumeration, "port-activity"}
{
    yang_name = "id"; yang_parent_name = "bundle-member";
}

InterfaceConfigurations::InterfaceConfiguration::BundleMember::Id::~Id()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::BundleMember::Id::has_data() const
{
    return bundle_id.is_set
	|| port_activity.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::BundleMember::Id::has_operation() const
{
    return is_set(operation)
	|| is_set(bundle_id.operation)
	|| is_set(port_activity.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::BundleMember::Id::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "id";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::BundleMember::Id::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Id' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_id.is_set || is_set(bundle_id.operation)) leaf_name_data.push_back(bundle_id.get_name_leafdata());
    if (port_activity.is_set || is_set(port_activity.operation)) leaf_name_data.push_back(port_activity.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::BundleMember::Id::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::BundleMember::Id::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::BundleMember::Id::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bundle-id")
    {
        bundle_id = value;
    }
    if(value_path == "port-activity")
    {
        port_activity = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Mlacp::Mlacp()
    :
    iccp_group{YType::uint32, "iccp-group"},
    port_priority{YType::uint16, "port-priority"},
    recovery_delay{YType::uint32, "recovery-delay"},
    switchover_type{YType::enumeration, "switchover-type"}
    	,
    maximize(nullptr) // presence node
{
    yang_name = "mlacp"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::Mlacp::~Mlacp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Mlacp::has_data() const
{
    return iccp_group.is_set
	|| port_priority.is_set
	|| recovery_delay.is_set
	|| switchover_type.is_set
	|| (maximize !=  nullptr && maximize->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Mlacp::has_operation() const
{
    return is_set(operation)
	|| is_set(iccp_group.operation)
	|| is_set(port_priority.operation)
	|| is_set(recovery_delay.operation)
	|| is_set(switchover_type.operation)
	|| (maximize !=  nullptr && maximize->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Mlacp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-cfg:mlacp";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Mlacp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mlacp' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_group.is_set || is_set(iccp_group.operation)) leaf_name_data.push_back(iccp_group.get_name_leafdata());
    if (port_priority.is_set || is_set(port_priority.operation)) leaf_name_data.push_back(port_priority.get_name_leafdata());
    if (recovery_delay.is_set || is_set(recovery_delay.operation)) leaf_name_data.push_back(recovery_delay.get_name_leafdata());
    if (switchover_type.is_set || is_set(switchover_type.operation)) leaf_name_data.push_back(switchover_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Mlacp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "maximize")
    {
        if(maximize != nullptr)
        {
            children["maximize"] = maximize;
        }
        else
        {
            maximize = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Mlacp::Maximize>();
            maximize->parent = this;
            children["maximize"] = maximize;
        }
        return children.at("maximize");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Mlacp::get_children()
{
    if(children.find("maximize") == children.end())
    {
        if(maximize != nullptr)
        {
            children["maximize"] = maximize;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Mlacp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "iccp-group")
    {
        iccp_group = value;
    }
    if(value_path == "port-priority")
    {
        port_priority = value;
    }
    if(value_path == "recovery-delay")
    {
        recovery_delay = value;
    }
    if(value_path == "switchover-type")
    {
        switchover_type = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Mlacp::Maximize::Maximize()
    :
    bandwidth_threshold{YType::uint32, "bandwidth-threshold"},
    link_threshold{YType::uint32, "link-threshold"},
    maximize_by{YType::enumeration, "maximize-by"}
{
    yang_name = "maximize"; yang_parent_name = "mlacp";
}

InterfaceConfigurations::InterfaceConfiguration::Mlacp::Maximize::~Maximize()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Mlacp::Maximize::has_data() const
{
    return bandwidth_threshold.is_set
	|| link_threshold.is_set
	|| maximize_by.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Mlacp::Maximize::has_operation() const
{
    return is_set(operation)
	|| is_set(bandwidth_threshold.operation)
	|| is_set(link_threshold.operation)
	|| is_set(maximize_by.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Mlacp::Maximize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximize";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Mlacp::Maximize::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Maximize' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_threshold.is_set || is_set(bandwidth_threshold.operation)) leaf_name_data.push_back(bandwidth_threshold.get_name_leafdata());
    if (link_threshold.is_set || is_set(link_threshold.operation)) leaf_name_data.push_back(link_threshold.get_name_leafdata());
    if (maximize_by.is_set || is_set(maximize_by.operation)) leaf_name_data.push_back(maximize_by.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Mlacp::Maximize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Mlacp::Maximize::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Mlacp::Maximize::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bandwidth-threshold")
    {
        bandwidth_threshold = value;
    }
    if(value_path == "link-threshold")
    {
        link_threshold = value;
    }
    if(value_path == "maximize-by")
    {
        maximize_by = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpiwCfg_Ppp::CiscoIosXrPppMaIpcpiwCfg_Ppp()
    :
    ipcpiw(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpiwCfg_Ppp::Ipcpiw>())
{
    ipcpiw->parent = this;
    children["ipcpiw"] = ipcpiw;

    yang_name = "Cisco-IOS-XR-ppp-ma-ipcpiw-cfg_ppp"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpiwCfg_Ppp::~CiscoIosXrPppMaIpcpiwCfg_Ppp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpiwCfg_Ppp::has_data() const
{
    return (ipcpiw !=  nullptr && ipcpiw->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpiwCfg_Ppp::has_operation() const
{
    return is_set(operation)
	|| (ipcpiw !=  nullptr && ipcpiw->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpiwCfg_Ppp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ppp-ma-ipcpiw-cfg:Cisco-IOS-XR-ppp-ma-ipcpiw-cfg_ppp";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpiwCfg_Ppp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CiscoIosXrPppMaIpcpiwCfg_Ppp' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpiwCfg_Ppp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipcpiw")
    {
        if(ipcpiw != nullptr)
        {
            children["ipcpiw"] = ipcpiw;
        }
        else
        {
            ipcpiw = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpiwCfg_Ppp::Ipcpiw>();
            ipcpiw->parent = this;
            children["ipcpiw"] = ipcpiw;
        }
        return children.at("ipcpiw");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpiwCfg_Ppp::get_children()
{
    if(children.find("ipcpiw") == children.end())
    {
        if(ipcpiw != nullptr)
        {
            children["ipcpiw"] = ipcpiw;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpiwCfg_Ppp::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpiwCfg_Ppp::Ipcpiw::Ipcpiw()
    :
    proxy_address{YType::str, "proxy-address"}
{
    yang_name = "ipcpiw"; yang_parent_name = "Cisco-IOS-XR-ppp-ma-ipcpiw-cfg_ppp";
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpiwCfg_Ppp::Ipcpiw::~Ipcpiw()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpiwCfg_Ppp::Ipcpiw::has_data() const
{
    return proxy_address.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpiwCfg_Ppp::Ipcpiw::has_operation() const
{
    return is_set(operation)
	|| is_set(proxy_address.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpiwCfg_Ppp::Ipcpiw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipcpiw";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpiwCfg_Ppp::Ipcpiw::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipcpiw' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (proxy_address.is_set || is_set(proxy_address.operation)) leaf_name_data.push_back(proxy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpiwCfg_Ppp::Ipcpiw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpiwCfg_Ppp::Ipcpiw::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpiwCfg_Ppp::Ipcpiw::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "proxy-address")
    {
        proxy_address = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::CiscoIosXrPppMaLcpCfg_Ppp()
    :
    lcp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp>())
	,mcmp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Mcmp>())
{
    lcp->parent = this;
    children["lcp"] = lcp;

    mcmp->parent = this;
    children["mcmp"] = mcmp;

    yang_name = "Cisco-IOS-XR-ppp-ma-lcp-cfg_ppp"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::~CiscoIosXrPppMaLcpCfg_Ppp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::has_data() const
{
    return (lcp !=  nullptr && lcp->has_data())
	|| (mcmp !=  nullptr && mcmp->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::has_operation() const
{
    return is_set(operation)
	|| (lcp !=  nullptr && lcp->has_operation())
	|| (mcmp !=  nullptr && mcmp->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ppp-ma-lcp-cfg:Cisco-IOS-XR-ppp-ma-lcp-cfg_ppp";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CiscoIosXrPppMaLcpCfg_Ppp' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lcp")
    {
        if(lcp != nullptr)
        {
            children["lcp"] = lcp;
        }
        else
        {
            lcp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp>();
            lcp->parent = this;
            children["lcp"] = lcp;
        }
        return children.at("lcp");
    }

    if(child_yang_name == "mcmp")
    {
        if(mcmp != nullptr)
        {
            children["mcmp"] = mcmp;
        }
        else
        {
            mcmp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Mcmp>();
            mcmp->parent = this;
            children["mcmp"] = mcmp;
        }
        return children.at("mcmp");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::get_children()
{
    if(children.find("lcp") == children.end())
    {
        if(lcp != nullptr)
        {
            children["lcp"] = lcp;
        }
    }

    if(children.find("mcmp") == children.end())
    {
        if(mcmp != nullptr)
        {
            children["mcmp"] = mcmp;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Mcmp::Mcmp()
    :
    enable{YType::empty, "enable"},
    remote{YType::uint32, "remote"}
    	,
    local(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Mcmp::Local>())
{
    local->parent = this;
    children["local"] = local;

    yang_name = "mcmp"; yang_parent_name = "Cisco-IOS-XR-ppp-ma-lcp-cfg_ppp";
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Mcmp::~Mcmp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Mcmp::has_data() const
{
    return enable.is_set
	|| remote.is_set
	|| (local !=  nullptr && local->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Mcmp::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(remote.operation)
	|| (local !=  nullptr && local->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Mcmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mcmp";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Mcmp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mcmp' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (remote.is_set || is_set(remote.operation)) leaf_name_data.push_back(remote.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Mcmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "local")
    {
        if(local != nullptr)
        {
            children["local"] = local;
        }
        else
        {
            local = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Mcmp::Local>();
            local->parent = this;
            children["local"] = local;
        }
        return children.at("local");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Mcmp::get_children()
{
    if(children.find("local") == children.end())
    {
        if(local != nullptr)
        {
            children["local"] = local;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Mcmp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "remote")
    {
        remote = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Mcmp::Local::Local()
    :
    initial{YType::uint32, "initial"},
    maximum{YType::uint32, "maximum"}
{
    yang_name = "local"; yang_parent_name = "mcmp";
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Mcmp::Local::~Local()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Mcmp::Local::has_data() const
{
    return initial.is_set
	|| maximum.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Mcmp::Local::has_operation() const
{
    return is_set(operation)
	|| is_set(initial.operation)
	|| is_set(maximum.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Mcmp::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Mcmp::Local::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Local' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (initial.is_set || is_set(initial.operation)) leaf_name_data.push_back(initial.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Mcmp::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Mcmp::Local::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Mcmp::Local::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "initial")
    {
        initial = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Lcp()
    :
    service_type{YType::int32, "service-type"}
    	,
    authentication(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Authentication>())
	,chap(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Chap>())
	,loop_back(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::LoopBack>())
	,ms_chap(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::MsChap>())
	,multilink(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Multilink>())
	,pap(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Pap>())
{
    authentication->parent = this;
    children["authentication"] = authentication;

    chap->parent = this;
    children["chap"] = chap;

    loop_back->parent = this;
    children["loop-back"] = loop_back;

    ms_chap->parent = this;
    children["ms-chap"] = ms_chap;

    multilink->parent = this;
    children["multilink"] = multilink;

    pap->parent = this;
    children["pap"] = pap;

    yang_name = "lcp"; yang_parent_name = "Cisco-IOS-XR-ppp-ma-lcp-cfg_ppp";
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::~Lcp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::has_data() const
{
    return service_type.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (chap !=  nullptr && chap->has_data())
	|| (loop_back !=  nullptr && loop_back->has_data())
	|| (ms_chap !=  nullptr && ms_chap->has_data())
	|| (multilink !=  nullptr && multilink->has_data())
	|| (pap !=  nullptr && pap->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::has_operation() const
{
    return is_set(operation)
	|| is_set(service_type.operation)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (chap !=  nullptr && chap->has_operation())
	|| (loop_back !=  nullptr && loop_back->has_operation())
	|| (ms_chap !=  nullptr && ms_chap->has_operation())
	|| (multilink !=  nullptr && multilink->has_operation())
	|| (pap !=  nullptr && pap->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lcp";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lcp' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_type.is_set || is_set(service_type.operation)) leaf_name_data.push_back(service_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "authentication")
    {
        if(authentication != nullptr)
        {
            children["authentication"] = authentication;
        }
        else
        {
            authentication = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Authentication>();
            authentication->parent = this;
            children["authentication"] = authentication;
        }
        return children.at("authentication");
    }

    if(child_yang_name == "chap")
    {
        if(chap != nullptr)
        {
            children["chap"] = chap;
        }
        else
        {
            chap = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Chap>();
            chap->parent = this;
            children["chap"] = chap;
        }
        return children.at("chap");
    }

    if(child_yang_name == "loop-back")
    {
        if(loop_back != nullptr)
        {
            children["loop-back"] = loop_back;
        }
        else
        {
            loop_back = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::LoopBack>();
            loop_back->parent = this;
            children["loop-back"] = loop_back;
        }
        return children.at("loop-back");
    }

    if(child_yang_name == "ms-chap")
    {
        if(ms_chap != nullptr)
        {
            children["ms-chap"] = ms_chap;
        }
        else
        {
            ms_chap = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::MsChap>();
            ms_chap->parent = this;
            children["ms-chap"] = ms_chap;
        }
        return children.at("ms-chap");
    }

    if(child_yang_name == "multilink")
    {
        if(multilink != nullptr)
        {
            children["multilink"] = multilink;
        }
        else
        {
            multilink = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Multilink>();
            multilink->parent = this;
            children["multilink"] = multilink;
        }
        return children.at("multilink");
    }

    if(child_yang_name == "pap")
    {
        if(pap != nullptr)
        {
            children["pap"] = pap;
        }
        else
        {
            pap = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Pap>();
            pap->parent = this;
            children["pap"] = pap;
        }
        return children.at("pap");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::get_children()
{
    if(children.find("authentication") == children.end())
    {
        if(authentication != nullptr)
        {
            children["authentication"] = authentication;
        }
    }

    if(children.find("chap") == children.end())
    {
        if(chap != nullptr)
        {
            children["chap"] = chap;
        }
    }

    if(children.find("loop-back") == children.end())
    {
        if(loop_back != nullptr)
        {
            children["loop-back"] = loop_back;
        }
    }

    if(children.find("ms-chap") == children.end())
    {
        if(ms_chap != nullptr)
        {
            children["ms-chap"] = ms_chap;
        }
    }

    if(children.find("multilink") == children.end())
    {
        if(multilink != nullptr)
        {
            children["multilink"] = multilink;
        }
    }

    if(children.find("pap") == children.end())
    {
        if(pap != nullptr)
        {
            children["pap"] = pap;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "service-type")
    {
        service_type = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Multilink::Multilink()
    :
    minimum_active(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Multilink::MinimumActive>())
{
    minimum_active->parent = this;
    children["minimum-active"] = minimum_active;

    yang_name = "multilink"; yang_parent_name = "lcp";
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Multilink::~Multilink()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Multilink::has_data() const
{
    return (minimum_active !=  nullptr && minimum_active->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Multilink::has_operation() const
{
    return is_set(operation)
	|| (minimum_active !=  nullptr && minimum_active->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Multilink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multilink";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Multilink::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Multilink' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Multilink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "minimum-active")
    {
        if(minimum_active != nullptr)
        {
            children["minimum-active"] = minimum_active;
        }
        else
        {
            minimum_active = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Multilink::MinimumActive>();
            minimum_active->parent = this;
            children["minimum-active"] = minimum_active;
        }
        return children.at("minimum-active");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Multilink::get_children()
{
    if(children.find("minimum-active") == children.end())
    {
        if(minimum_active != nullptr)
        {
            children["minimum-active"] = minimum_active;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Multilink::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Multilink::MinimumActive::MinimumActive()
    :
    links{YType::uint32, "links"}
{
    yang_name = "minimum-active"; yang_parent_name = "multilink";
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Multilink::MinimumActive::~MinimumActive()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Multilink::MinimumActive::has_data() const
{
    return links.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Multilink::MinimumActive::has_operation() const
{
    return is_set(operation)
	|| is_set(links.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Multilink::MinimumActive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minimum-active";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Multilink::MinimumActive::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MinimumActive' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (links.is_set || is_set(links.operation)) leaf_name_data.push_back(links.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Multilink::MinimumActive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Multilink::MinimumActive::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Multilink::MinimumActive::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "links")
    {
        links = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Pap::Pap()
    :
    refuse{YType::empty, "refuse"}
    	,
    send_user_info(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Pap::SendUserInfo>())
{
    send_user_info->parent = this;
    children["send-user-info"] = send_user_info;

    yang_name = "pap"; yang_parent_name = "lcp";
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Pap::~Pap()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Pap::has_data() const
{
    return refuse.is_set
	|| (send_user_info !=  nullptr && send_user_info->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Pap::has_operation() const
{
    return is_set(operation)
	|| is_set(refuse.operation)
	|| (send_user_info !=  nullptr && send_user_info->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Pap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pap";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Pap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pap' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (refuse.is_set || is_set(refuse.operation)) leaf_name_data.push_back(refuse.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Pap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "send-user-info")
    {
        if(send_user_info != nullptr)
        {
            children["send-user-info"] = send_user_info;
        }
        else
        {
            send_user_info = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Pap::SendUserInfo>();
            send_user_info->parent = this;
            children["send-user-info"] = send_user_info;
        }
        return children.at("send-user-info");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Pap::get_children()
{
    if(children.find("send-user-info") == children.end())
    {
        if(send_user_info != nullptr)
        {
            children["send-user-info"] = send_user_info;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Pap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "refuse")
    {
        refuse = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Pap::SendUserInfo::SendUserInfo()
    :
    password{YType::str, "password"},
    username{YType::str, "username"}
{
    yang_name = "send-user-info"; yang_parent_name = "pap";
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Pap::SendUserInfo::~SendUserInfo()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Pap::SendUserInfo::has_data() const
{
    return password.is_set
	|| username.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Pap::SendUserInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(password.operation)
	|| is_set(username.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Pap::SendUserInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-user-info";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Pap::SendUserInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SendUserInfo' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (password.is_set || is_set(password.operation)) leaf_name_data.push_back(password.get_name_leafdata());
    if (username.is_set || is_set(username.operation)) leaf_name_data.push_back(username.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Pap::SendUserInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Pap::SendUserInfo::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Pap::SendUserInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "password")
    {
        password = value;
    }
    if(value_path == "username")
    {
        username = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::LoopBack::LoopBack()
    :
    ignore{YType::empty, "ignore"}
{
    yang_name = "loop-back"; yang_parent_name = "lcp";
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::LoopBack::~LoopBack()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::LoopBack::has_data() const
{
    return ignore.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::LoopBack::has_operation() const
{
    return is_set(operation)
	|| is_set(ignore.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::LoopBack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loop-back";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::LoopBack::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LoopBack' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore.is_set || is_set(ignore.operation)) leaf_name_data.push_back(ignore.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::LoopBack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::LoopBack::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::LoopBack::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ignore")
    {
        ignore = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::MsChap::MsChap()
    :
    host_name{YType::str, "host-name"},
    password{YType::str, "password"},
    refuse{YType::empty, "refuse"}
{
    yang_name = "ms-chap"; yang_parent_name = "lcp";
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::MsChap::~MsChap()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::MsChap::has_data() const
{
    return host_name.is_set
	|| password.is_set
	|| refuse.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::MsChap::has_operation() const
{
    return is_set(operation)
	|| is_set(host_name.operation)
	|| is_set(password.operation)
	|| is_set(refuse.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::MsChap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ms-chap";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::MsChap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MsChap' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host_name.is_set || is_set(host_name.operation)) leaf_name_data.push_back(host_name.get_name_leafdata());
    if (password.is_set || is_set(password.operation)) leaf_name_data.push_back(password.get_name_leafdata());
    if (refuse.is_set || is_set(refuse.operation)) leaf_name_data.push_back(refuse.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::MsChap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::MsChap::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::MsChap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "host-name")
    {
        host_name = value;
    }
    if(value_path == "password")
    {
        password = value;
    }
    if(value_path == "refuse")
    {
        refuse = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Authentication::Authentication()
    :
    max_authentication_failures{YType::uint32, "max-authentication-failures"},
    timeout{YType::uint32, "timeout"}
    	,
    method(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Authentication::Method>())
{
    method->parent = this;
    children["method"] = method;

    yang_name = "authentication"; yang_parent_name = "lcp";
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Authentication::~Authentication()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Authentication::has_data() const
{
    return max_authentication_failures.is_set
	|| timeout.is_set
	|| (method !=  nullptr && method->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Authentication::has_operation() const
{
    return is_set(operation)
	|| is_set(max_authentication_failures.operation)
	|| is_set(timeout.operation)
	|| (method !=  nullptr && method->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Authentication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Authentication' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_authentication_failures.is_set || is_set(max_authentication_failures.operation)) leaf_name_data.push_back(max_authentication_failures.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "method")
    {
        if(method != nullptr)
        {
            children["method"] = method;
        }
        else
        {
            method = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Authentication::Method>();
            method->parent = this;
            children["method"] = method;
        }
        return children.at("method");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Authentication::get_children()
{
    if(children.find("method") == children.end())
    {
        if(method != nullptr)
        {
            children["method"] = method;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Authentication::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-authentication-failures")
    {
        max_authentication_failures = value;
    }
    if(value_path == "timeout")
    {
        timeout = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Authentication::Method::Method()
    :
    method{YType::enumeration, "method"},
    name{YType::str, "name"}
{
    yang_name = "method"; yang_parent_name = "authentication";
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Authentication::Method::~Method()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Authentication::Method::has_data() const
{
    for (auto const & leaf : method.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Authentication::Method::has_operation() const
{
    for (auto const & leaf : method.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(method.operation)
	|| is_set(name.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Authentication::Method::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "method";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Authentication::Method::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Method' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());

    auto method_name_datas = method.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), method_name_datas.begin(), method_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Authentication::Method::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Authentication::Method::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Authentication::Method::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "method")
    {
        method.append(value);
    }
    if(value_path == "name")
    {
        name = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Chap::Chap()
    :
    host_name{YType::str, "host-name"},
    password{YType::str, "password"},
    refuse{YType::empty, "refuse"}
{
    yang_name = "chap"; yang_parent_name = "lcp";
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Chap::~Chap()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Chap::has_data() const
{
    return host_name.is_set
	|| password.is_set
	|| refuse.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Chap::has_operation() const
{
    return is_set(operation)
	|| is_set(host_name.operation)
	|| is_set(password.operation)
	|| is_set(refuse.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Chap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "chap";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Chap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Chap' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host_name.is_set || is_set(host_name.operation)) leaf_name_data.push_back(host_name.get_name_leafdata());
    if (password.is_set || is_set(password.operation)) leaf_name_data.push_back(password.get_name_leafdata());
    if (refuse.is_set || is_set(refuse.operation)) leaf_name_data.push_back(refuse.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Chap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Chap::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaLcpCfg_Ppp::Lcp::Chap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "host-name")
    {
        host_name = value;
    }
    if(value_path == "password")
    {
        password = value;
    }
    if(value_path == "refuse")
    {
        refuse = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Wanphy::Wanphy()
    :
    lan_mode{YType::enumeration, "lan-mode"},
    report_line_ais{YType::empty, "report-line-ais"},
    report_lof{YType::empty, "report-lof"},
    report_lop{YType::empty, "report-lop"},
    report_los{YType::empty, "report-los"},
    report_path_ais{YType::empty, "report-path-ais"},
    report_path_fe_ais{YType::empty, "report-path-fe-ais"},
    report_path_fe_plm{YType::empty, "report-path-fe-plm"},
    report_path_lcd{YType::empty, "report-path-lcd"},
    report_path_plm{YType::empty, "report-path-plm"},
    report_path_rdi{YType::empty, "report-path-rdi"},
    report_rdi{YType::empty, "report-rdi"},
    report_sd_ber{YType::empty, "report-sd-ber"},
    report_sf_ber{YType::empty, "report-sf-ber"},
    threshold_sd_ber{YType::uint32, "threshold-sd-ber"},
    threshold_sf_ber{YType::uint32, "threshold-sf-ber"},
    wan_mode{YType::enumeration, "wan-mode"}
{
    yang_name = "wanphy"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::Wanphy::~Wanphy()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Wanphy::has_data() const
{
    return lan_mode.is_set
	|| report_line_ais.is_set
	|| report_lof.is_set
	|| report_lop.is_set
	|| report_los.is_set
	|| report_path_ais.is_set
	|| report_path_fe_ais.is_set
	|| report_path_fe_plm.is_set
	|| report_path_lcd.is_set
	|| report_path_plm.is_set
	|| report_path_rdi.is_set
	|| report_rdi.is_set
	|| report_sd_ber.is_set
	|| report_sf_ber.is_set
	|| threshold_sd_ber.is_set
	|| threshold_sf_ber.is_set
	|| wan_mode.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Wanphy::has_operation() const
{
    return is_set(operation)
	|| is_set(lan_mode.operation)
	|| is_set(report_line_ais.operation)
	|| is_set(report_lof.operation)
	|| is_set(report_lop.operation)
	|| is_set(report_los.operation)
	|| is_set(report_path_ais.operation)
	|| is_set(report_path_fe_ais.operation)
	|| is_set(report_path_fe_plm.operation)
	|| is_set(report_path_lcd.operation)
	|| is_set(report_path_plm.operation)
	|| is_set(report_path_rdi.operation)
	|| is_set(report_rdi.operation)
	|| is_set(report_sd_ber.operation)
	|| is_set(report_sf_ber.operation)
	|| is_set(threshold_sd_ber.operation)
	|| is_set(threshold_sf_ber.operation)
	|| is_set(wan_mode.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Wanphy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-wanphy-ui-cfg:wanphy";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Wanphy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Wanphy' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lan_mode.is_set || is_set(lan_mode.operation)) leaf_name_data.push_back(lan_mode.get_name_leafdata());
    if (report_line_ais.is_set || is_set(report_line_ais.operation)) leaf_name_data.push_back(report_line_ais.get_name_leafdata());
    if (report_lof.is_set || is_set(report_lof.operation)) leaf_name_data.push_back(report_lof.get_name_leafdata());
    if (report_lop.is_set || is_set(report_lop.operation)) leaf_name_data.push_back(report_lop.get_name_leafdata());
    if (report_los.is_set || is_set(report_los.operation)) leaf_name_data.push_back(report_los.get_name_leafdata());
    if (report_path_ais.is_set || is_set(report_path_ais.operation)) leaf_name_data.push_back(report_path_ais.get_name_leafdata());
    if (report_path_fe_ais.is_set || is_set(report_path_fe_ais.operation)) leaf_name_data.push_back(report_path_fe_ais.get_name_leafdata());
    if (report_path_fe_plm.is_set || is_set(report_path_fe_plm.operation)) leaf_name_data.push_back(report_path_fe_plm.get_name_leafdata());
    if (report_path_lcd.is_set || is_set(report_path_lcd.operation)) leaf_name_data.push_back(report_path_lcd.get_name_leafdata());
    if (report_path_plm.is_set || is_set(report_path_plm.operation)) leaf_name_data.push_back(report_path_plm.get_name_leafdata());
    if (report_path_rdi.is_set || is_set(report_path_rdi.operation)) leaf_name_data.push_back(report_path_rdi.get_name_leafdata());
    if (report_rdi.is_set || is_set(report_rdi.operation)) leaf_name_data.push_back(report_rdi.get_name_leafdata());
    if (report_sd_ber.is_set || is_set(report_sd_ber.operation)) leaf_name_data.push_back(report_sd_ber.get_name_leafdata());
    if (report_sf_ber.is_set || is_set(report_sf_ber.operation)) leaf_name_data.push_back(report_sf_ber.get_name_leafdata());
    if (threshold_sd_ber.is_set || is_set(threshold_sd_ber.operation)) leaf_name_data.push_back(threshold_sd_ber.get_name_leafdata());
    if (threshold_sf_ber.is_set || is_set(threshold_sf_ber.operation)) leaf_name_data.push_back(threshold_sf_ber.get_name_leafdata());
    if (wan_mode.is_set || is_set(wan_mode.operation)) leaf_name_data.push_back(wan_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Wanphy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Wanphy::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Wanphy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lan-mode")
    {
        lan_mode = value;
    }
    if(value_path == "report-line-ais")
    {
        report_line_ais = value;
    }
    if(value_path == "report-lof")
    {
        report_lof = value;
    }
    if(value_path == "report-lop")
    {
        report_lop = value;
    }
    if(value_path == "report-los")
    {
        report_los = value;
    }
    if(value_path == "report-path-ais")
    {
        report_path_ais = value;
    }
    if(value_path == "report-path-fe-ais")
    {
        report_path_fe_ais = value;
    }
    if(value_path == "report-path-fe-plm")
    {
        report_path_fe_plm = value;
    }
    if(value_path == "report-path-lcd")
    {
        report_path_lcd = value;
    }
    if(value_path == "report-path-plm")
    {
        report_path_plm = value;
    }
    if(value_path == "report-path-rdi")
    {
        report_path_rdi = value;
    }
    if(value_path == "report-rdi")
    {
        report_rdi = value;
    }
    if(value_path == "report-sd-ber")
    {
        report_sd_ber = value;
    }
    if(value_path == "report-sf-ber")
    {
        report_sf_ber = value;
    }
    if(value_path == "threshold-sd-ber")
    {
        threshold_sd_ber = value;
    }
    if(value_path == "threshold-sf-ber")
    {
        threshold_sf_ber = value;
    }
    if(value_path == "wan-mode")
    {
        wan_mode = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Statistics::Statistics()
    :
    load_interval{YType::uint32, "load-interval"}
{
    yang_name = "statistics"; yang_parent_name = "interface-configuration";
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
    return is_set(operation)
	|| is_set(load_interval.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-statsd-cfg:statistics";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (load_interval.is_set || is_set(load_interval.operation)) leaf_name_data.push_back(load_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Statistics::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Statistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "load-interval")
    {
        load_interval = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Ipv6Network()
    :
    mtu{YType::uint32, "mtu"},
    tcp_mss_adjust_enable{YType::empty, "tcp-mss-adjust-enable"},
    ttl_propagate_disable{YType::empty, "ttl-propagate-disable"},
    unnumbered{YType::str, "unnumbered"},
    unreachables{YType::empty, "unreachables"}
    	,
    addresses(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses>())
	,bgp_flow_tag_policy_table(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable>())
	,bgp_policy_accountings(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings>())
	,bgp_qos_policy_propagation(nullptr) // presence node
	,mac_address_filters(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::MacAddressFilters>())
	,verify(nullptr) // presence node
{
    addresses->parent = this;
    children["addresses"] = addresses;

    bgp_flow_tag_policy_table->parent = this;
    children["bgp-flow-tag-policy-table"] = bgp_flow_tag_policy_table;

    bgp_policy_accountings->parent = this;
    children["bgp-policy-accountings"] = bgp_policy_accountings;

    mac_address_filters->parent = this;
    children["mac-address-filters"] = mac_address_filters;

    yang_name = "ipv6-network"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::~Ipv6Network()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::has_data() const
{
    return mtu.is_set
	|| tcp_mss_adjust_enable.is_set
	|| ttl_propagate_disable.is_set
	|| unnumbered.is_set
	|| unreachables.is_set
	|| (addresses !=  nullptr && addresses->has_data())
	|| (bgp_flow_tag_policy_table !=  nullptr && bgp_flow_tag_policy_table->has_data())
	|| (bgp_policy_accountings !=  nullptr && bgp_policy_accountings->has_data())
	|| (bgp_qos_policy_propagation !=  nullptr && bgp_qos_policy_propagation->has_data())
	|| (mac_address_filters !=  nullptr && mac_address_filters->has_data())
	|| (verify !=  nullptr && verify->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::has_operation() const
{
    return is_set(operation)
	|| is_set(mtu.operation)
	|| is_set(tcp_mss_adjust_enable.operation)
	|| is_set(ttl_propagate_disable.operation)
	|| is_set(unnumbered.operation)
	|| is_set(unreachables.operation)
	|| (addresses !=  nullptr && addresses->has_operation())
	|| (bgp_flow_tag_policy_table !=  nullptr && bgp_flow_tag_policy_table->has_operation())
	|| (bgp_policy_accountings !=  nullptr && bgp_policy_accountings->has_operation())
	|| (bgp_qos_policy_propagation !=  nullptr && bgp_qos_policy_propagation->has_operation())
	|| (mac_address_filters !=  nullptr && mac_address_filters->has_operation())
	|| (verify !=  nullptr && verify->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-ma-cfg:ipv6-network";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6Network' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (tcp_mss_adjust_enable.is_set || is_set(tcp_mss_adjust_enable.operation)) leaf_name_data.push_back(tcp_mss_adjust_enable.get_name_leafdata());
    if (ttl_propagate_disable.is_set || is_set(ttl_propagate_disable.operation)) leaf_name_data.push_back(ttl_propagate_disable.get_name_leafdata());
    if (unnumbered.is_set || is_set(unnumbered.operation)) leaf_name_data.push_back(unnumbered.get_name_leafdata());
    if (unreachables.is_set || is_set(unreachables.operation)) leaf_name_data.push_back(unreachables.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "addresses")
    {
        if(addresses != nullptr)
        {
            children["addresses"] = addresses;
        }
        else
        {
            addresses = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses>();
            addresses->parent = this;
            children["addresses"] = addresses;
        }
        return children.at("addresses");
    }

    if(child_yang_name == "bgp-flow-tag-policy-table")
    {
        if(bgp_flow_tag_policy_table != nullptr)
        {
            children["bgp-flow-tag-policy-table"] = bgp_flow_tag_policy_table;
        }
        else
        {
            bgp_flow_tag_policy_table = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable>();
            bgp_flow_tag_policy_table->parent = this;
            children["bgp-flow-tag-policy-table"] = bgp_flow_tag_policy_table;
        }
        return children.at("bgp-flow-tag-policy-table");
    }

    if(child_yang_name == "bgp-policy-accountings")
    {
        if(bgp_policy_accountings != nullptr)
        {
            children["bgp-policy-accountings"] = bgp_policy_accountings;
        }
        else
        {
            bgp_policy_accountings = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings>();
            bgp_policy_accountings->parent = this;
            children["bgp-policy-accountings"] = bgp_policy_accountings;
        }
        return children.at("bgp-policy-accountings");
    }

    if(child_yang_name == "bgp-qos-policy-propagation")
    {
        if(bgp_qos_policy_propagation != nullptr)
        {
            children["bgp-qos-policy-propagation"] = bgp_qos_policy_propagation;
        }
        else
        {
            bgp_qos_policy_propagation = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpQosPolicyPropagation>();
            bgp_qos_policy_propagation->parent = this;
            children["bgp-qos-policy-propagation"] = bgp_qos_policy_propagation;
        }
        return children.at("bgp-qos-policy-propagation");
    }

    if(child_yang_name == "mac-address-filters")
    {
        if(mac_address_filters != nullptr)
        {
            children["mac-address-filters"] = mac_address_filters;
        }
        else
        {
            mac_address_filters = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::MacAddressFilters>();
            mac_address_filters->parent = this;
            children["mac-address-filters"] = mac_address_filters;
        }
        return children.at("mac-address-filters");
    }

    if(child_yang_name == "verify")
    {
        if(verify != nullptr)
        {
            children["verify"] = verify;
        }
        else
        {
            verify = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Verify>();
            verify->parent = this;
            children["verify"] = verify;
        }
        return children.at("verify");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::get_children()
{
    if(children.find("addresses") == children.end())
    {
        if(addresses != nullptr)
        {
            children["addresses"] = addresses;
        }
    }

    if(children.find("bgp-flow-tag-policy-table") == children.end())
    {
        if(bgp_flow_tag_policy_table != nullptr)
        {
            children["bgp-flow-tag-policy-table"] = bgp_flow_tag_policy_table;
        }
    }

    if(children.find("bgp-policy-accountings") == children.end())
    {
        if(bgp_policy_accountings != nullptr)
        {
            children["bgp-policy-accountings"] = bgp_policy_accountings;
        }
    }

    if(children.find("bgp-qos-policy-propagation") == children.end())
    {
        if(bgp_qos_policy_propagation != nullptr)
        {
            children["bgp-qos-policy-propagation"] = bgp_qos_policy_propagation;
        }
    }

    if(children.find("mac-address-filters") == children.end())
    {
        if(mac_address_filters != nullptr)
        {
            children["mac-address-filters"] = mac_address_filters;
        }
    }

    if(children.find("verify") == children.end())
    {
        if(verify != nullptr)
        {
            children["verify"] = verify;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "tcp-mss-adjust-enable")
    {
        tcp_mss_adjust_enable = value;
    }
    if(value_path == "ttl-propagate-disable")
    {
        ttl_propagate_disable = value;
    }
    if(value_path == "unnumbered")
    {
        unnumbered = value;
    }
    if(value_path == "unreachables")
    {
        unreachables = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpQosPolicyPropagation::BgpQosPolicyPropagation()
    :
    destination{YType::enumeration, "destination"},
    source{YType::enumeration, "source"}
{
    yang_name = "bgp-qos-policy-propagation"; yang_parent_name = "ipv6-network";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpQosPolicyPropagation::~BgpQosPolicyPropagation()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpQosPolicyPropagation::has_data() const
{
    return destination.is_set
	|| source.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpQosPolicyPropagation::has_operation() const
{
    return is_set(operation)
	|| is_set(destination.operation)
	|| is_set(source.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpQosPolicyPropagation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-qos-policy-propagation";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpQosPolicyPropagation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BgpQosPolicyPropagation' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination.is_set || is_set(destination.operation)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (source.is_set || is_set(source.operation)) leaf_name_data.push_back(source.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpQosPolicyPropagation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpQosPolicyPropagation::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpQosPolicyPropagation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination")
    {
        destination = value;
    }
    if(value_path == "source")
    {
        source = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::BgpPolicyAccountings()
{
    yang_name = "bgp-policy-accountings"; yang_parent_name = "ipv6-network";
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
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-policy-accountings";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BgpPolicyAccountings' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bgp-policy-accounting")
    {
        for(auto const & c : bgp_policy_accounting)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::BgpPolicyAccounting>();
        c->parent = this;
        bgp_policy_accounting.push_back(std::move(c));
        children[segment_path] = bgp_policy_accounting.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::get_children()
{
    for (auto const & c : bgp_policy_accounting)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::BgpPolicyAccounting::BgpPolicyAccounting()
    :
    direction{YType::str, "direction"},
    destination_accounting{YType::boolean, "destination-accounting"},
    source_accounting{YType::boolean, "source-accounting"}
{
    yang_name = "bgp-policy-accounting"; yang_parent_name = "bgp-policy-accountings";
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
    return is_set(operation)
	|| is_set(direction.operation)
	|| is_set(destination_accounting.operation)
	|| is_set(source_accounting.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::BgpPolicyAccounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-policy-accounting" <<"[direction='" <<direction <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::BgpPolicyAccounting::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BgpPolicyAccounting' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.operation)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (destination_accounting.is_set || is_set(destination_accounting.operation)) leaf_name_data.push_back(destination_accounting.get_name_leafdata());
    if (source_accounting.is_set || is_set(source_accounting.operation)) leaf_name_data.push_back(source_accounting.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::BgpPolicyAccounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::BgpPolicyAccounting::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::BgpPolicyAccounting::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "direction")
    {
        direction = value;
    }
    if(value_path == "destination-accounting")
    {
        destination_accounting = value;
    }
    if(value_path == "source-accounting")
    {
        source_accounting = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::MacAddressFilters::MacAddressFilters()
{
    yang_name = "mac-address-filters"; yang_parent_name = "ipv6-network";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::MacAddressFilters::~MacAddressFilters()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::MacAddressFilters::has_data() const
{
    for (std::size_t index=0; index<mac_address_filter.size(); index++)
    {
        if(mac_address_filter[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::MacAddressFilters::has_operation() const
{
    for (std::size_t index=0; index<mac_address_filter.size(); index++)
    {
        if(mac_address_filter[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::MacAddressFilters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address-filters";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::MacAddressFilters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MacAddressFilters' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::MacAddressFilters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mac-address-filter")
    {
        for(auto const & c : mac_address_filter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::MacAddressFilters::MacAddressFilter>();
        c->parent = this;
        mac_address_filter.push_back(std::move(c));
        children[segment_path] = mac_address_filter.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::MacAddressFilters::get_children()
{
    for (auto const & c : mac_address_filter)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::MacAddressFilters::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::MacAddressFilters::MacAddressFilter::MacAddressFilter()
    :
    multicast_address{YType::str, "multicast-address"}
{
    yang_name = "mac-address-filter"; yang_parent_name = "mac-address-filters";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::MacAddressFilters::MacAddressFilter::~MacAddressFilter()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::MacAddressFilters::MacAddressFilter::has_data() const
{
    return multicast_address.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::MacAddressFilters::MacAddressFilter::has_operation() const
{
    return is_set(operation)
	|| is_set(multicast_address.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::MacAddressFilters::MacAddressFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address-filter" <<"[multicast-address='" <<multicast_address <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::MacAddressFilters::MacAddressFilter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MacAddressFilter' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multicast_address.is_set || is_set(multicast_address.operation)) leaf_name_data.push_back(multicast_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::MacAddressFilters::MacAddressFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::MacAddressFilters::MacAddressFilter::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::MacAddressFilters::MacAddressFilter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "multicast-address")
    {
        multicast_address = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Verify::Verify()
    :
    default_ping{YType::enumeration, "default-ping"},
    reachable{YType::enumeration, "reachable"},
    self_ping{YType::enumeration, "self-ping"}
{
    yang_name = "verify"; yang_parent_name = "ipv6-network";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Verify::~Verify()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Verify::has_data() const
{
    return default_ping.is_set
	|| reachable.is_set
	|| self_ping.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Verify::has_operation() const
{
    return is_set(operation)
	|| is_set(default_ping.operation)
	|| is_set(reachable.operation)
	|| is_set(self_ping.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Verify::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "verify";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Verify::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Verify' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_ping.is_set || is_set(default_ping.operation)) leaf_name_data.push_back(default_ping.get_name_leafdata());
    if (reachable.is_set || is_set(reachable.operation)) leaf_name_data.push_back(reachable.get_name_leafdata());
    if (self_ping.is_set || is_set(self_ping.operation)) leaf_name_data.push_back(self_ping.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Verify::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Verify::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Verify::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "default-ping")
    {
        default_ping = value;
    }
    if(value_path == "reachable")
    {
        reachable = value;
    }
    if(value_path == "self-ping")
    {
        self_ping = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Addresses()
    :
    auto_configuration(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::AutoConfiguration>())
	,eui64_addresses(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses>())
	,link_local_address(nullptr) // presence node
	,regular_addresses(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses>())
	,segment_routings(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings>())
{
    auto_configuration->parent = this;
    children["auto-configuration"] = auto_configuration;

    eui64_addresses->parent = this;
    children["eui64-addresses"] = eui64_addresses;

    regular_addresses->parent = this;
    children["regular-addresses"] = regular_addresses;

    segment_routings->parent = this;
    children["segment-routings"] = segment_routings;

    yang_name = "addresses"; yang_parent_name = "ipv6-network";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::~Addresses()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::has_data() const
{
    return (auto_configuration !=  nullptr && auto_configuration->has_data())
	|| (eui64_addresses !=  nullptr && eui64_addresses->has_data())
	|| (link_local_address !=  nullptr && link_local_address->has_data())
	|| (regular_addresses !=  nullptr && regular_addresses->has_data())
	|| (segment_routings !=  nullptr && segment_routings->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::has_operation() const
{
    return is_set(operation)
	|| (auto_configuration !=  nullptr && auto_configuration->has_operation())
	|| (eui64_addresses !=  nullptr && eui64_addresses->has_operation())
	|| (link_local_address !=  nullptr && link_local_address->has_operation())
	|| (regular_addresses !=  nullptr && regular_addresses->has_operation())
	|| (segment_routings !=  nullptr && segment_routings->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addresses";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Addresses' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "auto-configuration")
    {
        if(auto_configuration != nullptr)
        {
            children["auto-configuration"] = auto_configuration;
        }
        else
        {
            auto_configuration = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::AutoConfiguration>();
            auto_configuration->parent = this;
            children["auto-configuration"] = auto_configuration;
        }
        return children.at("auto-configuration");
    }

    if(child_yang_name == "eui64-addresses")
    {
        if(eui64_addresses != nullptr)
        {
            children["eui64-addresses"] = eui64_addresses;
        }
        else
        {
            eui64_addresses = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses>();
            eui64_addresses->parent = this;
            children["eui64-addresses"] = eui64_addresses;
        }
        return children.at("eui64-addresses");
    }

    if(child_yang_name == "link-local-address")
    {
        if(link_local_address != nullptr)
        {
            children["link-local-address"] = link_local_address;
        }
        else
        {
            link_local_address = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::LinkLocalAddress>();
            link_local_address->parent = this;
            children["link-local-address"] = link_local_address;
        }
        return children.at("link-local-address");
    }

    if(child_yang_name == "regular-addresses")
    {
        if(regular_addresses != nullptr)
        {
            children["regular-addresses"] = regular_addresses;
        }
        else
        {
            regular_addresses = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses>();
            regular_addresses->parent = this;
            children["regular-addresses"] = regular_addresses;
        }
        return children.at("regular-addresses");
    }

    if(child_yang_name == "segment-routings")
    {
        if(segment_routings != nullptr)
        {
            children["segment-routings"] = segment_routings;
        }
        else
        {
            segment_routings = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings>();
            segment_routings->parent = this;
            children["segment-routings"] = segment_routings;
        }
        return children.at("segment-routings");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::get_children()
{
    if(children.find("auto-configuration") == children.end())
    {
        if(auto_configuration != nullptr)
        {
            children["auto-configuration"] = auto_configuration;
        }
    }

    if(children.find("eui64-addresses") == children.end())
    {
        if(eui64_addresses != nullptr)
        {
            children["eui64-addresses"] = eui64_addresses;
        }
    }

    if(children.find("link-local-address") == children.end())
    {
        if(link_local_address != nullptr)
        {
            children["link-local-address"] = link_local_address;
        }
    }

    if(children.find("regular-addresses") == children.end())
    {
        if(regular_addresses != nullptr)
        {
            children["regular-addresses"] = regular_addresses;
        }
    }

    if(children.find("segment-routings") == children.end())
    {
        if(segment_routings != nullptr)
        {
            children["segment-routings"] = segment_routings;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRoutings()
{
    yang_name = "segment-routings"; yang_parent_name = "addresses";
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
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routings";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SegmentRoutings' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "segment-routing")
    {
        for(auto const & c : segment_routing)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting>();
        c->parent = this;
        segment_routing.push_back(std::move(c));
        children[segment_path] = segment_routing.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::get_children()
{
    for (auto const & c : segment_routing)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::SegmentRouting()
    :
    address{YType::str, "address"},
    enable{YType::empty, "enable"}
    	,
    ipv6_prefix_sid(nullptr) // presence node
{
    yang_name = "segment-routing"; yang_parent_name = "segment-routings";
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
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(enable.operation)
	|| (ipv6_prefix_sid !=  nullptr && ipv6_prefix_sid->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routing" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SegmentRouting' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv6-prefix-sid")
    {
        if(ipv6_prefix_sid != nullptr)
        {
            children["ipv6-prefix-sid"] = ipv6_prefix_sid;
        }
        else
        {
            ipv6_prefix_sid = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::Ipv6PrefixSid>();
            ipv6_prefix_sid->parent = this;
            children["ipv6-prefix-sid"] = ipv6_prefix_sid;
        }
        return children.at("ipv6-prefix-sid");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::get_children()
{
    if(children.find("ipv6-prefix-sid") == children.end())
    {
        if(ipv6_prefix_sid != nullptr)
        {
            children["ipv6-prefix-sid"] = ipv6_prefix_sid;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::Ipv6PrefixSid::Ipv6PrefixSid()
    :
    prefix_length{YType::uint32, "prefix-length"},
    route_tag{YType::uint32, "route-tag"},
    zone{YType::str, "zone"}
{
    yang_name = "ipv6-prefix-sid"; yang_parent_name = "segment-routing";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::Ipv6PrefixSid::~Ipv6PrefixSid()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::Ipv6PrefixSid::has_data() const
{
    return prefix_length.is_set
	|| route_tag.is_set
	|| zone.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::Ipv6PrefixSid::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix_length.operation)
	|| is_set(route_tag.operation)
	|| is_set(zone.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::Ipv6PrefixSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-prefix-sid";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::Ipv6PrefixSid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6PrefixSid' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.operation)) leaf_name_data.push_back(route_tag.get_name_leafdata());
    if (zone.is_set || is_set(zone.operation)) leaf_name_data.push_back(zone.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::Ipv6PrefixSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::Ipv6PrefixSid::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::Ipv6PrefixSid::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "route-tag")
    {
        route_tag = value;
    }
    if(value_path == "zone")
    {
        zone = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::LinkLocalAddress::LinkLocalAddress()
    :
    address{YType::str, "address"},
    route_tag{YType::uint32, "route-tag"},
    zone{YType::str, "zone"}
{
    yang_name = "link-local-address"; yang_parent_name = "addresses";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::LinkLocalAddress::~LinkLocalAddress()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::LinkLocalAddress::has_data() const
{
    return address.is_set
	|| route_tag.is_set
	|| zone.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::LinkLocalAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(route_tag.operation)
	|| is_set(zone.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::LinkLocalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-local-address";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::LinkLocalAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkLocalAddress' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.operation)) leaf_name_data.push_back(route_tag.get_name_leafdata());
    if (zone.is_set || is_set(zone.operation)) leaf_name_data.push_back(zone.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::LinkLocalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::LinkLocalAddress::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::LinkLocalAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "route-tag")
    {
        route_tag = value;
    }
    if(value_path == "zone")
    {
        zone = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::Eui64Addresses()
{
    yang_name = "eui64-addresses"; yang_parent_name = "addresses";
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
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eui64-addresses";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Eui64Addresses' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "eui64-address")
    {
        for(auto const & c : eui64_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::Eui64Address>();
        c->parent = this;
        eui64_address.push_back(std::move(c));
        children[segment_path] = eui64_address.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::get_children()
{
    for (auto const & c : eui64_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::Eui64Address::Eui64Address()
    :
    address{YType::str, "address"},
    prefix_length{YType::uint32, "prefix-length"},
    route_tag{YType::uint32, "route-tag"},
    zone{YType::str, "zone"}
{
    yang_name = "eui64-address"; yang_parent_name = "eui64-addresses";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::Eui64Address::~Eui64Address()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::Eui64Address::has_data() const
{
    return address.is_set
	|| prefix_length.is_set
	|| route_tag.is_set
	|| zone.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::Eui64Address::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(prefix_length.operation)
	|| is_set(route_tag.operation)
	|| is_set(zone.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::Eui64Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eui64-address" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::Eui64Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Eui64Address' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.operation)) leaf_name_data.push_back(route_tag.get_name_leafdata());
    if (zone.is_set || is_set(zone.operation)) leaf_name_data.push_back(zone.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::Eui64Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::Eui64Address::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::Eui64Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "route-tag")
    {
        route_tag = value;
    }
    if(value_path == "zone")
    {
        zone = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::RegularAddresses()
{
    yang_name = "regular-addresses"; yang_parent_name = "addresses";
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
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "regular-addresses";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RegularAddresses' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "regular-address")
    {
        for(auto const & c : regular_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::RegularAddress>();
        c->parent = this;
        regular_address.push_back(std::move(c));
        children[segment_path] = regular_address.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::get_children()
{
    for (auto const & c : regular_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::RegularAddress::RegularAddress()
    :
    address{YType::str, "address"},
    prefix_length{YType::uint32, "prefix-length"},
    route_tag{YType::uint32, "route-tag"},
    zone{YType::str, "zone"}
{
    yang_name = "regular-address"; yang_parent_name = "regular-addresses";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::RegularAddress::~RegularAddress()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::RegularAddress::has_data() const
{
    return address.is_set
	|| prefix_length.is_set
	|| route_tag.is_set
	|| zone.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::RegularAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(prefix_length.operation)
	|| is_set(route_tag.operation)
	|| is_set(zone.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::RegularAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "regular-address" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::RegularAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RegularAddress' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.operation)) leaf_name_data.push_back(route_tag.get_name_leafdata());
    if (zone.is_set || is_set(zone.operation)) leaf_name_data.push_back(zone.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::RegularAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::RegularAddress::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::RegularAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "route-tag")
    {
        route_tag = value;
    }
    if(value_path == "zone")
    {
        zone = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::AutoConfiguration::AutoConfiguration()
    :
    enable{YType::empty, "enable"}
{
    yang_name = "auto-configuration"; yang_parent_name = "addresses";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::AutoConfiguration::~AutoConfiguration()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::AutoConfiguration::has_data() const
{
    return enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::AutoConfiguration::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::AutoConfiguration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-configuration";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::AutoConfiguration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AutoConfiguration' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::AutoConfiguration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::AutoConfiguration::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::AutoConfiguration::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::BgpFlowTagPolicyTable()
    :
    bgp_flow_tag_policy(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::BgpFlowTagPolicy>())
{
    bgp_flow_tag_policy->parent = this;
    children["bgp-flow-tag-policy"] = bgp_flow_tag_policy;

    yang_name = "bgp-flow-tag-policy-table"; yang_parent_name = "ipv6-network";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::~BgpFlowTagPolicyTable()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::has_data() const
{
    return (bgp_flow_tag_policy !=  nullptr && bgp_flow_tag_policy->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::has_operation() const
{
    return is_set(operation)
	|| (bgp_flow_tag_policy !=  nullptr && bgp_flow_tag_policy->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-flow-tag-policy-table";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BgpFlowTagPolicyTable' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bgp-flow-tag-policy")
    {
        if(bgp_flow_tag_policy != nullptr)
        {
            children["bgp-flow-tag-policy"] = bgp_flow_tag_policy;
        }
        else
        {
            bgp_flow_tag_policy = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::BgpFlowTagPolicy>();
            bgp_flow_tag_policy->parent = this;
            children["bgp-flow-tag-policy"] = bgp_flow_tag_policy;
        }
        return children.at("bgp-flow-tag-policy");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::get_children()
{
    if(children.find("bgp-flow-tag-policy") == children.end())
    {
        if(bgp_flow_tag_policy != nullptr)
        {
            children["bgp-flow-tag-policy"] = bgp_flow_tag_policy;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::BgpFlowTagPolicy::BgpFlowTagPolicy()
    :
    destination{YType::boolean, "destination"},
    source{YType::boolean, "source"}
{
    yang_name = "bgp-flow-tag-policy"; yang_parent_name = "bgp-flow-tag-policy-table";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::BgpFlowTagPolicy::~BgpFlowTagPolicy()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::BgpFlowTagPolicy::has_data() const
{
    return destination.is_set
	|| source.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::BgpFlowTagPolicy::has_operation() const
{
    return is_set(operation)
	|| is_set(destination.operation)
	|| is_set(source.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::BgpFlowTagPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-flow-tag-policy";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::BgpFlowTagPolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BgpFlowTagPolicy' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination.is_set || is_set(destination.operation)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (source.is_set || is_set(source.operation)) leaf_name_data.push_back(source.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::BgpFlowTagPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::BgpFlowTagPolicy::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::BgpFlowTagPolicy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination")
    {
        destination = value;
    }
    if(value_path == "source")
    {
        source = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Pppoe::Pppoe()
    :
    enable_bba_group(nullptr) // presence node
{
    yang_name = "pppoe"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::Pppoe::~Pppoe()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Pppoe::has_data() const
{
    return (enable_bba_group !=  nullptr && enable_bba_group->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Pppoe::has_operation() const
{
    return is_set(operation)
	|| (enable_bba_group !=  nullptr && enable_bba_group->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-subscriber-pppoe-ma-cmd-cfg:pppoe";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Pppoe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pppoe' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "enable-bba-group")
    {
        if(enable_bba_group != nullptr)
        {
            children["enable-bba-group"] = enable_bba_group;
        }
        else
        {
            enable_bba_group = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Pppoe::EnableBbaGroup>();
            enable_bba_group->parent = this;
            children["enable-bba-group"] = enable_bba_group;
        }
        return children.at("enable-bba-group");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Pppoe::get_children()
{
    if(children.find("enable-bba-group") == children.end())
    {
        if(enable_bba_group != nullptr)
        {
            children["enable-bba-group"] = enable_bba_group;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Pppoe::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Pppoe::EnableBbaGroup::EnableBbaGroup()
    :
    bba_group_name{YType::str, "bba-group-name"},
    enable{YType::boolean, "enable"}
{
    yang_name = "enable-bba-group"; yang_parent_name = "pppoe";
}

InterfaceConfigurations::InterfaceConfiguration::Pppoe::EnableBbaGroup::~EnableBbaGroup()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Pppoe::EnableBbaGroup::has_data() const
{
    return bba_group_name.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Pppoe::EnableBbaGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(bba_group_name.operation)
	|| is_set(enable.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Pppoe::EnableBbaGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enable-bba-group";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Pppoe::EnableBbaGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EnableBbaGroup' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bba_group_name.is_set || is_set(bba_group_name.operation)) leaf_name_data.push_back(bba_group_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Pppoe::EnableBbaGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Pppoe::EnableBbaGroup::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Pppoe::EnableBbaGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bba-group-name")
    {
        bba_group_name = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp::CiscoIosXrPppMaIpcpCfg_Ppp()
    :
    ipcp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp::Ipcp>())
{
    ipcp->parent = this;
    children["ipcp"] = ipcp;

    yang_name = "Cisco-IOS-XR-ppp-ma-ipcp-cfg_ppp"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp::~CiscoIosXrPppMaIpcpCfg_Ppp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp::has_data() const
{
    return (ipcp !=  nullptr && ipcp->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp::has_operation() const
{
    return is_set(operation)
	|| (ipcp !=  nullptr && ipcp->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ppp-ma-ipcp-cfg:Cisco-IOS-XR-ppp-ma-ipcp-cfg_ppp";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CiscoIosXrPppMaIpcpCfg_Ppp' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipcp")
    {
        if(ipcp != nullptr)
        {
            children["ipcp"] = ipcp;
        }
        else
        {
            ipcp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp::Ipcp>();
            ipcp->parent = this;
            children["ipcp"] = ipcp;
        }
        return children.at("ipcp");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp::get_children()
{
    if(children.find("ipcp") == children.end())
    {
        if(ipcp != nullptr)
        {
            children["ipcp"] = ipcp;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp::set_value(const std::string & value_path, std::string value)
{
}


}
}

