
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_pmengine_oper_3.hpp"
#include "Cisco_IOS_XR_pmengine_oper_4.hpp"

namespace ydk {
namespace Cisco_IOS_XR_pmengine_oper {

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::SesFe::SesFe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{
    yang_name = "ses-fe"; yang_parent_name = "dwdm-minute15otn";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::SesFe::~SesFe()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::SesFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::SesFe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::SesFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ses-fe";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::SesFe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SesFe' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::SesFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::SesFe::get_children()
{
    return children;
}

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::SesFe::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::SesrFe::SesrFe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{
    yang_name = "sesr-fe"; yang_parent_name = "dwdm-minute15otn";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::SesrFe::~SesrFe()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::SesrFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::SesrFe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::SesrFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sesr-fe";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::SesrFe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SesrFe' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::SesrFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::SesrFe::get_children()
{
    return children;
}

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::SesrFe::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::UasFe::UasFe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{
    yang_name = "uas-fe"; yang_parent_name = "dwdm-minute15otn";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::UasFe::~UasFe()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::UasFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::UasFe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::UasFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uas-fe";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::UasFe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UasFe' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::UasFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::UasFe::get_children()
{
    return children;
}

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::UasFe::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::BbeFe::BbeFe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{
    yang_name = "bbe-fe"; yang_parent_name = "dwdm-minute15otn";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::BbeFe::~BbeFe()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::BbeFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::BbeFe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::BbeFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bbe-fe";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::BbeFe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BbeFe' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::BbeFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::BbeFe::get_children()
{
    return children;
}

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::BbeFe::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::BberFe::BberFe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{
    yang_name = "bber-fe"; yang_parent_name = "dwdm-minute15otn";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::BberFe::~BberFe()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::BberFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::BberFe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::BberFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bber-fe";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::BberFe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BberFe' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::BberFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::BberFe::get_children()
{
    return children;
}

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::BberFe::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::FcFe::FcFe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{
    yang_name = "fc-fe"; yang_parent_name = "dwdm-minute15otn";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::FcFe::~FcFe()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::FcFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::FcFe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::FcFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fc-fe";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::FcFe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FcFe' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::FcFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::FcFe::get_children()
{
    return children;
}

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::FcFe::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24()
    :
    dwdm_hour24_optics(std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics>())
	,dwdm_hour24fecs(std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs>())
	,dwdm_hour24otns(std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns>())
{
    dwdm_hour24_optics->parent = this;
    children["dwdm-hour24-optics"] = dwdm_hour24_optics;

    dwdm_hour24fecs->parent = this;
    children["dwdm-hour24fecs"] = dwdm_hour24fecs;

    dwdm_hour24otns->parent = this;
    children["dwdm-hour24otns"] = dwdm_hour24otns;

    yang_name = "dwdm-hour24"; yang_parent_name = "dwdm-current";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::~DwdmHour24()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::has_data() const
{
    return (dwdm_hour24_optics !=  nullptr && dwdm_hour24_optics->has_data())
	|| (dwdm_hour24fecs !=  nullptr && dwdm_hour24fecs->has_data())
	|| (dwdm_hour24otns !=  nullptr && dwdm_hour24otns->has_data());
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::has_operation() const
{
    return is_set(operation)
	|| (dwdm_hour24_optics !=  nullptr && dwdm_hour24_optics->has_operation())
	|| (dwdm_hour24fecs !=  nullptr && dwdm_hour24fecs->has_operation())
	|| (dwdm_hour24otns !=  nullptr && dwdm_hour24otns->has_operation());
}

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dwdm-hour24";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DwdmHour24' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "dwdm-hour24-optics")
    {
        if(dwdm_hour24_optics != nullptr)
        {
            children["dwdm-hour24-optics"] = dwdm_hour24_optics;
        }
        else
        {
            dwdm_hour24_optics = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics>();
            dwdm_hour24_optics->parent = this;
            children["dwdm-hour24-optics"] = dwdm_hour24_optics;
        }
        return children.at("dwdm-hour24-optics");
    }

    if(child_yang_name == "dwdm-hour24fecs")
    {
        if(dwdm_hour24fecs != nullptr)
        {
            children["dwdm-hour24fecs"] = dwdm_hour24fecs;
        }
        else
        {
            dwdm_hour24fecs = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs>();
            dwdm_hour24fecs->parent = this;
            children["dwdm-hour24fecs"] = dwdm_hour24fecs;
        }
        return children.at("dwdm-hour24fecs");
    }

    if(child_yang_name == "dwdm-hour24otns")
    {
        if(dwdm_hour24otns != nullptr)
        {
            children["dwdm-hour24otns"] = dwdm_hour24otns;
        }
        else
        {
            dwdm_hour24otns = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns>();
            dwdm_hour24otns->parent = this;
            children["dwdm-hour24otns"] = dwdm_hour24otns;
        }
        return children.at("dwdm-hour24otns");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::get_children()
{
    if(children.find("dwdm-hour24-optics") == children.end())
    {
        if(dwdm_hour24_optics != nullptr)
        {
            children["dwdm-hour24-optics"] = dwdm_hour24_optics;
        }
    }

    if(children.find("dwdm-hour24fecs") == children.end())
    {
        if(dwdm_hour24fecs != nullptr)
        {
            children["dwdm-hour24fecs"] = dwdm_hour24fecs;
        }
    }

    if(children.find("dwdm-hour24otns") == children.end())
    {
        if(dwdm_hour24otns != nullptr)
        {
            children["dwdm-hour24otns"] = dwdm_hour24otns;
        }
    }

    return children;
}

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optics()
{
    yang_name = "dwdm-hour24-optics"; yang_parent_name = "dwdm-hour24";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::~DwdmHour24Optics()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::has_data() const
{
    for (std::size_t index=0; index<dwdm_hour24_optic.size(); index++)
    {
        if(dwdm_hour24_optic[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::has_operation() const
{
    for (std::size_t index=0; index<dwdm_hour24_optic.size(); index++)
    {
        if(dwdm_hour24_optic[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dwdm-hour24-optics";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DwdmHour24Optics' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "dwdm-hour24-optic")
    {
        for(auto const & c : dwdm_hour24_optic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic>();
        c->parent = this;
        dwdm_hour24_optic.push_back(std::move(c));
        children[segment_path] = dwdm_hour24_optic.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::get_children()
{
    for (auto const & c : dwdm_hour24_optic)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::DwdmHour24Optic()
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
    cd(std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Cd>())
	,center_wavelength(std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::CenterWavelength>())
	,dgd(std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Dgd>())
	,lbc(std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Lbc>())
	,lbc_pc(std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::LbcPc>())
	,low_sig_freq_off(std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::LowSigFreqOff>())
	,opr(std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Opr>())
	,opt(std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Opt>())
	,osnr(std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Osnr>())
	,pcr(std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Pcr>())
	,pdl(std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Pdl>())
	,pmd(std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Pmd>())
	,pn(std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Pn>())
	,rx_sig_pow(std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::RxSigPow>())
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

    yang_name = "dwdm-hour24-optic"; yang_parent_name = "dwdm-hour24-optics";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::~DwdmHour24Optic()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::has_data() const
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

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::has_operation() const
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

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dwdm-hour24-optic" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DwdmHour24Optic' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            cd = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Cd>();
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
            center_wavelength = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::CenterWavelength>();
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
            dgd = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Dgd>();
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
            lbc = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Lbc>();
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
            lbc_pc = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::LbcPc>();
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
            low_sig_freq_off = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::LowSigFreqOff>();
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
            opr = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Opr>();
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
            opt = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Opt>();
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
            osnr = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Osnr>();
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
            pcr = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Pcr>();
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
            pdl = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Pdl>();
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
            pmd = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Pmd>();
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
            pn = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Pn>();
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
            rx_sig_pow = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::RxSigPow>();
            rx_sig_pow->parent = this;
            children["rx-sig-pow"] = rx_sig_pow;
        }
        return children.at("rx-sig-pow");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::get_children()
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

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Lbc::Lbc()
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
    yang_name = "lbc"; yang_parent_name = "dwdm-hour24-optic";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Lbc::~Lbc()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Lbc::has_data() const
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

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Lbc::has_operation() const
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

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Lbc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lbc";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Lbc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Lbc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Lbc::get_children()
{
    return children;
}

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Lbc::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::LbcPc::LbcPc()
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
    yang_name = "lbc-pc"; yang_parent_name = "dwdm-hour24-optic";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::LbcPc::~LbcPc()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::LbcPc::has_data() const
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

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::LbcPc::has_operation() const
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

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::LbcPc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lbc-pc";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::LbcPc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::LbcPc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::LbcPc::get_children()
{
    return children;
}

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::LbcPc::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Opt::Opt()
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
    yang_name = "opt"; yang_parent_name = "dwdm-hour24-optic";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Opt::~Opt()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Opt::has_data() const
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

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Opt::has_operation() const
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

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Opt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opt";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Opt::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Opt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Opt::get_children()
{
    return children;
}

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Opt::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Opr::Opr()
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
    yang_name = "opr"; yang_parent_name = "dwdm-hour24-optic";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Opr::~Opr()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Opr::has_data() const
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

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Opr::has_operation() const
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

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Opr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "opr";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Opr::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Opr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Opr::get_children()
{
    return children;
}

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Opr::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Cd::Cd()
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
    yang_name = "cd"; yang_parent_name = "dwdm-hour24-optic";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Cd::~Cd()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Cd::has_data() const
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

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Cd::has_operation() const
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

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Cd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cd";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Cd::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Cd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Cd::get_children()
{
    return children;
}

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Cd::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Dgd::Dgd()
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
    yang_name = "dgd"; yang_parent_name = "dwdm-hour24-optic";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Dgd::~Dgd()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Dgd::has_data() const
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

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Dgd::has_operation() const
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

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Dgd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dgd";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Dgd::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Dgd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Dgd::get_children()
{
    return children;
}

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Dgd::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Pmd::Pmd()
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
    yang_name = "pmd"; yang_parent_name = "dwdm-hour24-optic";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Pmd::~Pmd()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Pmd::has_data() const
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

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Pmd::has_operation() const
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

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Pmd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmd";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Pmd::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Pmd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Pmd::get_children()
{
    return children;
}

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Pmd::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Osnr::Osnr()
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
    yang_name = "osnr"; yang_parent_name = "dwdm-hour24-optic";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Osnr::~Osnr()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Osnr::has_data() const
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

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Osnr::has_operation() const
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

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Osnr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "osnr";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Osnr::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Osnr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Osnr::get_children()
{
    return children;
}

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Osnr::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::CenterWavelength::CenterWavelength()
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
    yang_name = "center-wavelength"; yang_parent_name = "dwdm-hour24-optic";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::CenterWavelength::~CenterWavelength()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::CenterWavelength::has_data() const
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

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::CenterWavelength::has_operation() const
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

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::CenterWavelength::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "center-wavelength";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::CenterWavelength::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::CenterWavelength::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::CenterWavelength::get_children()
{
    return children;
}

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::CenterWavelength::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Pdl::Pdl()
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
    yang_name = "pdl"; yang_parent_name = "dwdm-hour24-optic";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Pdl::~Pdl()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Pdl::has_data() const
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

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Pdl::has_operation() const
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

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Pdl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pdl";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Pdl::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Pdl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Pdl::get_children()
{
    return children;
}

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Pdl::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Pcr::Pcr()
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
    yang_name = "pcr"; yang_parent_name = "dwdm-hour24-optic";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Pcr::~Pcr()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Pcr::has_data() const
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

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Pcr::has_operation() const
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

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Pcr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pcr";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Pcr::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Pcr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Pcr::get_children()
{
    return children;
}

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Pcr::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Pn::Pn()
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
    yang_name = "pn"; yang_parent_name = "dwdm-hour24-optic";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Pn::~Pn()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Pn::has_data() const
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

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Pn::has_operation() const
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

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Pn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pn";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Pn::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Pn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Pn::get_children()
{
    return children;
}

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Pn::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::RxSigPow::RxSigPow()
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
    yang_name = "rx-sig-pow"; yang_parent_name = "dwdm-hour24-optic";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::RxSigPow::~RxSigPow()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::RxSigPow::has_data() const
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

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::RxSigPow::has_operation() const
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

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::RxSigPow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-sig-pow";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::RxSigPow::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::RxSigPow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::RxSigPow::get_children()
{
    return children;
}

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::RxSigPow::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::LowSigFreqOff::LowSigFreqOff()
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
    yang_name = "low-sig-freq-off"; yang_parent_name = "dwdm-hour24-optic";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::LowSigFreqOff::~LowSigFreqOff()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::LowSigFreqOff::has_data() const
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

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::LowSigFreqOff::has_operation() const
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

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::LowSigFreqOff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "low-sig-freq-off";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::LowSigFreqOff::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::LowSigFreqOff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::LowSigFreqOff::get_children()
{
    return children;
}

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::LowSigFreqOff::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fecs()
{
    yang_name = "dwdm-hour24fecs"; yang_parent_name = "dwdm-hour24";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::~DwdmHour24Fecs()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::has_data() const
{
    for (std::size_t index=0; index<dwdm_hour24fec.size(); index++)
    {
        if(dwdm_hour24fec[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::has_operation() const
{
    for (std::size_t index=0; index<dwdm_hour24fec.size(); index++)
    {
        if(dwdm_hour24fec[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dwdm-hour24fecs";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DwdmHour24Fecs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "dwdm-hour24fec")
    {
        for(auto const & c : dwdm_hour24fec)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec>();
        c->parent = this;
        dwdm_hour24fec.push_back(std::move(c));
        children[segment_path] = dwdm_hour24fec.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::get_children()
{
    for (auto const & c : dwdm_hour24fec)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::DwdmHour24Fec()
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
    ec_bits(std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::EcBits>())
	,post_fec_ber(std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::PostFecBer>())
	,pre_fec_ber(std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::PreFecBer>())
	,q(std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::Q>())
	,qmargin(std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::Qmargin>())
	,uc_words(std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::UcWords>())
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

    yang_name = "dwdm-hour24fec"; yang_parent_name = "dwdm-hour24fecs";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::~DwdmHour24Fec()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::has_data() const
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

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::has_operation() const
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

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dwdm-hour24fec" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DwdmHour24Fec' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            ec_bits = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::EcBits>();
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
            post_fec_ber = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::PostFecBer>();
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
            pre_fec_ber = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::PreFecBer>();
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
            q = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::Q>();
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
            qmargin = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::Qmargin>();
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
            uc_words = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::UcWords>();
            uc_words->parent = this;
            children["uc-words"] = uc_words;
        }
        return children.at("uc-words");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::get_children()
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

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::EcBits::EcBits()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "ec-bits"; yang_parent_name = "dwdm-hour24fec";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::EcBits::~EcBits()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::EcBits::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::EcBits::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::EcBits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ec-bits";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::EcBits::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::EcBits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::EcBits::get_children()
{
    return children;
}

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::EcBits::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::UcWords::UcWords()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "uc-words"; yang_parent_name = "dwdm-hour24fec";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::UcWords::~UcWords()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::UcWords::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::UcWords::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::UcWords::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uc-words";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::UcWords::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::UcWords::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::UcWords::get_children()
{
    return children;
}

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::UcWords::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::PreFecBer::PreFecBer()
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
    yang_name = "pre-fec-ber"; yang_parent_name = "dwdm-hour24fec";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::PreFecBer::~PreFecBer()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::PreFecBer::has_data() const
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

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::PreFecBer::has_operation() const
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

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::PreFecBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-fec-ber";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::PreFecBer::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::PreFecBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::PreFecBer::get_children()
{
    return children;
}

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::PreFecBer::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::PostFecBer::PostFecBer()
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
    yang_name = "post-fec-ber"; yang_parent_name = "dwdm-hour24fec";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::PostFecBer::~PostFecBer()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::PostFecBer::has_data() const
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

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::PostFecBer::has_operation() const
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

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::PostFecBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "post-fec-ber";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::PostFecBer::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::PostFecBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::PostFecBer::get_children()
{
    return children;
}

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::PostFecBer::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::Q::Q()
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
    yang_name = "q"; yang_parent_name = "dwdm-hour24fec";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::Q::~Q()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::Q::has_data() const
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

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::Q::has_operation() const
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

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::Q::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "q";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::Q::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::Q::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::Q::get_children()
{
    return children;
}

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::Q::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::Qmargin::Qmargin()
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
    yang_name = "qmargin"; yang_parent_name = "dwdm-hour24fec";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::Qmargin::~Qmargin()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::Qmargin::has_data() const
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

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::Qmargin::has_operation() const
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

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::Qmargin::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qmargin";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::Qmargin::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::Qmargin::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::Qmargin::get_children()
{
    return children;
}

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::Qmargin::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otns()
{
    yang_name = "dwdm-hour24otns"; yang_parent_name = "dwdm-hour24";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::~DwdmHour24Otns()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::has_data() const
{
    for (std::size_t index=0; index<dwdm_hour24otn.size(); index++)
    {
        if(dwdm_hour24otn[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::has_operation() const
{
    for (std::size_t index=0; index<dwdm_hour24otn.size(); index++)
    {
        if(dwdm_hour24otn[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dwdm-hour24otns";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DwdmHour24Otns' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "dwdm-hour24otn")
    {
        for(auto const & c : dwdm_hour24otn)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn>();
        c->parent = this;
        dwdm_hour24otn.push_back(std::move(c));
        children[segment_path] = dwdm_hour24otn.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::get_children()
{
    for (auto const & c : dwdm_hour24otn)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::DwdmHour24Otn()
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
    bbe_fe(std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::BbeFe>())
	,bbe_ne(std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::BbeNe>())
	,bber_fe(std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::BberFe>())
	,bber_ne(std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::BberNe>())
	,es_fe(std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::EsFe>())
	,es_ne(std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::EsNe>())
	,esr_fe(std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::EsrFe>())
	,esr_ne(std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::EsrNe>())
	,fc_fe(std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::FcFe>())
	,fc_ne(std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::FcNe>())
	,lbc(std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::Lbc>())
	,ses_fe(std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::SesFe>())
	,ses_ne(std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::SesNe>())
	,sesr_fe(std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::SesrFe>())
	,sesr_ne(std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::SesrNe>())
	,uas_fe(std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::UasFe>())
	,uas_ne(std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::UasNe>())
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

    yang_name = "dwdm-hour24otn"; yang_parent_name = "dwdm-hour24otns";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::~DwdmHour24Otn()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::has_data() const
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

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::has_operation() const
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

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dwdm-hour24otn" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DwdmHour24Otn' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            bbe_fe = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::BbeFe>();
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
            bbe_ne = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::BbeNe>();
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
            bber_fe = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::BberFe>();
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
            bber_ne = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::BberNe>();
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
            es_fe = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::EsFe>();
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
            es_ne = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::EsNe>();
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
            esr_fe = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::EsrFe>();
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
            esr_ne = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::EsrNe>();
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
            fc_fe = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::FcFe>();
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
            fc_ne = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::FcNe>();
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
            lbc = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::Lbc>();
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
            ses_fe = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::SesFe>();
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
            ses_ne = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::SesNe>();
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
            sesr_fe = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::SesrFe>();
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
            sesr_ne = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::SesrNe>();
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
            uas_fe = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::UasFe>();
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
            uas_ne = std::make_shared<PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::UasNe>();
            uas_ne->parent = this;
            children["uas-ne"] = uas_ne;
        }
        return children.at("uas-ne");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::get_children()
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

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::Lbc::Lbc()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{
    yang_name = "lbc"; yang_parent_name = "dwdm-hour24otn";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::Lbc::~Lbc()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::Lbc::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::Lbc::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::Lbc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lbc";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::Lbc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::Lbc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::Lbc::get_children()
{
    return children;
}

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::Lbc::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::EsNe::EsNe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{
    yang_name = "es-ne"; yang_parent_name = "dwdm-hour24otn";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::EsNe::~EsNe()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::EsNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::EsNe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::EsNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es-ne";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::EsNe::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::EsNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::EsNe::get_children()
{
    return children;
}

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::EsNe::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::EsrNe::EsrNe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{
    yang_name = "esr-ne"; yang_parent_name = "dwdm-hour24otn";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::EsrNe::~EsrNe()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::EsrNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::EsrNe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::EsrNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esr-ne";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::EsrNe::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::EsrNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::EsrNe::get_children()
{
    return children;
}

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::EsrNe::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::SesNe::SesNe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{
    yang_name = "ses-ne"; yang_parent_name = "dwdm-hour24otn";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::SesNe::~SesNe()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::SesNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::SesNe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::SesNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ses-ne";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::SesNe::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::SesNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::SesNe::get_children()
{
    return children;
}

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::SesNe::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::SesrNe::SesrNe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{
    yang_name = "sesr-ne"; yang_parent_name = "dwdm-hour24otn";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::SesrNe::~SesrNe()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::SesrNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::SesrNe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::SesrNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sesr-ne";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::SesrNe::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::SesrNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::SesrNe::get_children()
{
    return children;
}

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::SesrNe::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::UasNe::UasNe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{
    yang_name = "uas-ne"; yang_parent_name = "dwdm-hour24otn";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::UasNe::~UasNe()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::UasNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::UasNe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::UasNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uas-ne";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::UasNe::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::UasNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::UasNe::get_children()
{
    return children;
}

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::UasNe::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::BbeNe::BbeNe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{
    yang_name = "bbe-ne"; yang_parent_name = "dwdm-hour24otn";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::BbeNe::~BbeNe()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::BbeNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::BbeNe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::BbeNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bbe-ne";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::BbeNe::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::BbeNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::BbeNe::get_children()
{
    return children;
}

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::BbeNe::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::BberNe::BberNe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{
    yang_name = "bber-ne"; yang_parent_name = "dwdm-hour24otn";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::BberNe::~BberNe()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::BberNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::BberNe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::BberNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bber-ne";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::BberNe::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::BberNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::BberNe::get_children()
{
    return children;
}

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::BberNe::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::FcNe::FcNe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{
    yang_name = "fc-ne"; yang_parent_name = "dwdm-hour24otn";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::FcNe::~FcNe()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::FcNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::FcNe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::FcNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fc-ne";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::FcNe::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::FcNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::FcNe::get_children()
{
    return children;
}

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::FcNe::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::EsFe::EsFe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{
    yang_name = "es-fe"; yang_parent_name = "dwdm-hour24otn";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::EsFe::~EsFe()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::EsFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::EsFe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::EsFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es-fe";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::EsFe::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::EsFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::EsFe::get_children()
{
    return children;
}

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::EsFe::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::EsrFe::EsrFe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{
    yang_name = "esr-fe"; yang_parent_name = "dwdm-hour24otn";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::EsrFe::~EsrFe()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::EsrFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::EsrFe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::EsrFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esr-fe";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::EsrFe::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::EsrFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::EsrFe::get_children()
{
    return children;
}

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::EsrFe::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::SesFe::SesFe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{
    yang_name = "ses-fe"; yang_parent_name = "dwdm-hour24otn";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::SesFe::~SesFe()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::SesFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::SesFe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::SesFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ses-fe";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::SesFe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SesFe' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::SesFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::SesFe::get_children()
{
    return children;
}

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::SesFe::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::SesrFe::SesrFe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{
    yang_name = "sesr-fe"; yang_parent_name = "dwdm-hour24otn";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::SesrFe::~SesrFe()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::SesrFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::SesrFe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::SesrFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sesr-fe";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::SesrFe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SesrFe' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::SesrFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::SesrFe::get_children()
{
    return children;
}

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::SesrFe::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::UasFe::UasFe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{
    yang_name = "uas-fe"; yang_parent_name = "dwdm-hour24otn";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::UasFe::~UasFe()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::UasFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::UasFe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::UasFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uas-fe";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::UasFe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UasFe' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::UasFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::UasFe::get_children()
{
    return children;
}

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::UasFe::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::BbeFe::BbeFe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{
    yang_name = "bbe-fe"; yang_parent_name = "dwdm-hour24otn";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::BbeFe::~BbeFe()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::BbeFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::BbeFe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::BbeFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bbe-fe";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::BbeFe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BbeFe' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::BbeFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::BbeFe::get_children()
{
    return children;
}

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::BbeFe::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::BberFe::BberFe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{
    yang_name = "bber-fe"; yang_parent_name = "dwdm-hour24otn";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::BberFe::~BberFe()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::BberFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::BberFe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::BberFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bber-fe";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::BberFe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BberFe' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::BberFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::BberFe::get_children()
{
    return children;
}

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::BberFe::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::FcFe::FcFe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{
    yang_name = "fc-fe"; yang_parent_name = "dwdm-hour24otn";
}

PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::FcFe::~FcFe()
{
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::FcFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::FcFe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::FcFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fc-fe";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::FcFe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FcFe' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::FcFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::FcFe::get_children()
{
    return children;
}

void PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::FcFe::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Oc::Oc()
    :
    oc_ports(std::make_shared<PerformanceManagement::Oc::OcPorts>())
{
    oc_ports->parent = this;
    children["oc-ports"] = oc_ports;

    yang_name = "oc"; yang_parent_name = "performance-management";
}

PerformanceManagement::Oc::~Oc()
{
}

bool PerformanceManagement::Oc::has_data() const
{
    return (oc_ports !=  nullptr && oc_ports->has_data());
}

bool PerformanceManagement::Oc::has_operation() const
{
    return is_set(operation)
	|| (oc_ports !=  nullptr && oc_ports->has_operation());
}

std::string PerformanceManagement::Oc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Oc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Oc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "oc-ports")
    {
        if(oc_ports != nullptr)
        {
            children["oc-ports"] = oc_ports;
        }
        else
        {
            oc_ports = std::make_shared<PerformanceManagement::Oc::OcPorts>();
            oc_ports->parent = this;
            children["oc-ports"] = oc_ports;
        }
        return children.at("oc-ports");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Oc::get_children()
{
    if(children.find("oc-ports") == children.end())
    {
        if(oc_ports != nullptr)
        {
            children["oc-ports"] = oc_ports;
        }
    }

    return children;
}

void PerformanceManagement::Oc::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Oc::OcPorts::OcPorts()
{
    yang_name = "oc-ports"; yang_parent_name = "oc";
}

PerformanceManagement::Oc::OcPorts::~OcPorts()
{
}

bool PerformanceManagement::Oc::OcPorts::has_data() const
{
    for (std::size_t index=0; index<oc_port.size(); index++)
    {
        if(oc_port[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Oc::OcPorts::has_operation() const
{
    for (std::size_t index=0; index<oc_port.size(); index++)
    {
        if(oc_port[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerformanceManagement::Oc::OcPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-ports";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Oc::OcPorts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management/oc/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Oc::OcPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "oc-port")
    {
        for(auto const & c : oc_port)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort>();
        c->parent = this;
        oc_port.push_back(std::move(c));
        children[segment_path] = oc_port.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Oc::OcPorts::get_children()
{
    for (auto const & c : oc_port)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PerformanceManagement::Oc::OcPorts::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Oc::OcPorts::OcPort::OcPort()
    :
    name{YType::str, "name"}
    	,
    oc_current(std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent>())
{
    oc_current->parent = this;
    children["oc-current"] = oc_current;

    yang_name = "oc-port"; yang_parent_name = "oc-ports";
}

PerformanceManagement::Oc::OcPorts::OcPort::~OcPort()
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::has_data() const
{
    return name.is_set
	|| (oc_current !=  nullptr && oc_current->has_data());
}

bool PerformanceManagement::Oc::OcPorts::OcPort::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (oc_current !=  nullptr && oc_current->has_operation());
}

std::string PerformanceManagement::Oc::OcPorts::OcPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-port" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Oc::OcPorts::OcPort::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management/oc/oc-ports/" << get_segment_path();
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

std::shared_ptr<Entity> PerformanceManagement::Oc::OcPorts::OcPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "oc-current")
    {
        if(oc_current != nullptr)
        {
            children["oc-current"] = oc_current;
        }
        else
        {
            oc_current = std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent>();
            oc_current->parent = this;
            children["oc-current"] = oc_current;
        }
        return children.at("oc-current");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Oc::OcPorts::OcPort::get_children()
{
    if(children.find("oc-current") == children.end())
    {
        if(oc_current != nullptr)
        {
            children["oc-current"] = oc_current;
        }
    }

    return children;
}

void PerformanceManagement::Oc::OcPorts::OcPort::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcCurrent()
    :
    oc_hour24(std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24>())
	,oc_minute15(std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15>())
{
    oc_hour24->parent = this;
    children["oc-hour24"] = oc_hour24;

    oc_minute15->parent = this;
    children["oc-minute15"] = oc_minute15;

    yang_name = "oc-current"; yang_parent_name = "oc-port";
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::~OcCurrent()
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::has_data() const
{
    return (oc_hour24 !=  nullptr && oc_hour24->has_data())
	|| (oc_minute15 !=  nullptr && oc_minute15->has_data());
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::has_operation() const
{
    return is_set(operation)
	|| (oc_hour24 !=  nullptr && oc_hour24->has_operation())
	|| (oc_minute15 !=  nullptr && oc_minute15->has_operation());
}

std::string PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-current";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OcCurrent' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "oc-hour24")
    {
        if(oc_hour24 != nullptr)
        {
            children["oc-hour24"] = oc_hour24;
        }
        else
        {
            oc_hour24 = std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24>();
            oc_hour24->parent = this;
            children["oc-hour24"] = oc_hour24;
        }
        return children.at("oc-hour24");
    }

    if(child_yang_name == "oc-minute15")
    {
        if(oc_minute15 != nullptr)
        {
            children["oc-minute15"] = oc_minute15;
        }
        else
        {
            oc_minute15 = std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15>();
            oc_minute15->parent = this;
            children["oc-minute15"] = oc_minute15;
        }
        return children.at("oc-minute15");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::get_children()
{
    if(children.find("oc-hour24") == children.end())
    {
        if(oc_hour24 != nullptr)
        {
            children["oc-hour24"] = oc_hour24;
        }
    }

    if(children.find("oc-minute15") == children.end())
    {
        if(oc_minute15 != nullptr)
        {
            children["oc-minute15"] = oc_minute15;
        }
    }

    return children;
}

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24()
    :
    oc_hour24ocns(std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns>())
{
    oc_hour24ocns->parent = this;
    children["oc-hour24ocns"] = oc_hour24ocns;

    yang_name = "oc-hour24"; yang_parent_name = "oc-current";
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::~OcHour24()
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::has_data() const
{
    return (oc_hour24ocns !=  nullptr && oc_hour24ocns->has_data());
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::has_operation() const
{
    return is_set(operation)
	|| (oc_hour24ocns !=  nullptr && oc_hour24ocns->has_operation());
}

std::string PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-hour24";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OcHour24' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "oc-hour24ocns")
    {
        if(oc_hour24ocns != nullptr)
        {
            children["oc-hour24ocns"] = oc_hour24ocns;
        }
        else
        {
            oc_hour24ocns = std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns>();
            oc_hour24ocns->parent = this;
            children["oc-hour24ocns"] = oc_hour24ocns;
        }
        return children.at("oc-hour24ocns");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::get_children()
{
    if(children.find("oc-hour24ocns") == children.end())
    {
        if(oc_hour24ocns != nullptr)
        {
            children["oc-hour24ocns"] = oc_hour24ocns;
        }
    }

    return children;
}

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocns()
{
    yang_name = "oc-hour24ocns"; yang_parent_name = "oc-hour24";
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::~OcHour24Ocns()
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::has_data() const
{
    for (std::size_t index=0; index<oc_hour24ocn.size(); index++)
    {
        if(oc_hour24ocn[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::has_operation() const
{
    for (std::size_t index=0; index<oc_hour24ocn.size(); index++)
    {
        if(oc_hour24ocn[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-hour24ocns";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OcHour24Ocns' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "oc-hour24ocn")
    {
        for(auto const & c : oc_hour24ocn)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn>();
        c->parent = this;
        oc_hour24ocn.push_back(std::move(c));
        children[segment_path] = oc_hour24ocn.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::get_children()
{
    for (auto const & c : oc_hour24ocn)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::OcHour24Ocn()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    last_clear_time{YType::str, "last-clear-time"},
    timestamp{YType::str, "timestamp"},
    valid{YType::boolean, "valid"}
    	,
    fe_line(std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine>())
	,line(std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line>())
	,section(std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section>())
{
    fe_line->parent = this;
    children["fe-line"] = fe_line;

    line->parent = this;
    children["line"] = line;

    section->parent = this;
    children["section"] = section;

    yang_name = "oc-hour24ocn"; yang_parent_name = "oc-hour24ocns";
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::~OcHour24Ocn()
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::has_data() const
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

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| is_set(index_.operation)
	|| is_set(last_clear15_min_time.operation)
	|| is_set(last_clear24_hr_time.operation)
	|| is_set(last_clear_time.operation)
	|| is_set(timestamp.operation)
	|| is_set(valid.operation)
	|| (fe_line !=  nullptr && fe_line->has_operation())
	|| (line !=  nullptr && line->has_operation())
	|| (section !=  nullptr && section->has_operation());
}

std::string PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-hour24ocn" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OcHour24Ocn' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "fe-line")
    {
        if(fe_line != nullptr)
        {
            children["fe-line"] = fe_line;
        }
        else
        {
            fe_line = std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine>();
            fe_line->parent = this;
            children["fe-line"] = fe_line;
        }
        return children.at("fe-line");
    }

    if(child_yang_name == "line")
    {
        if(line != nullptr)
        {
            children["line"] = line;
        }
        else
        {
            line = std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line>();
            line->parent = this;
            children["line"] = line;
        }
        return children.at("line");
    }

    if(child_yang_name == "section")
    {
        if(section != nullptr)
        {
            children["section"] = section;
        }
        else
        {
            section = std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section>();
            section->parent = this;
            children["section"] = section;
        }
        return children.at("section");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::get_children()
{
    if(children.find("fe-line") == children.end())
    {
        if(fe_line != nullptr)
        {
            children["fe-line"] = fe_line;
        }
    }

    if(children.find("line") == children.end())
    {
        if(line != nullptr)
        {
            children["line"] = line;
        }
    }

    if(children.find("section") == children.end())
    {
        if(section != nullptr)
        {
            children["section"] = section;
        }
    }

    return children;
}

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::Section()
    :
    section_status{YType::int32, "section-status"}
    	,
    section_c_vs(std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionCVs>())
	,section_e_ss(std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionESs>())
	,section_se_ss(std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionSeSs>())
	,section_sef_ss(std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionSefSs>())
{
    section_c_vs->parent = this;
    children["section-c-vs"] = section_c_vs;

    section_e_ss->parent = this;
    children["section-e-ss"] = section_e_ss;

    section_se_ss->parent = this;
    children["section-se-ss"] = section_se_ss;

    section_sef_ss->parent = this;
    children["section-sef-ss"] = section_sef_ss;

    yang_name = "section"; yang_parent_name = "oc-hour24ocn";
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::~Section()
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::has_data() const
{
    return section_status.is_set
	|| (section_c_vs !=  nullptr && section_c_vs->has_data())
	|| (section_e_ss !=  nullptr && section_e_ss->has_data())
	|| (section_se_ss !=  nullptr && section_se_ss->has_data())
	|| (section_sef_ss !=  nullptr && section_sef_ss->has_data());
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::has_operation() const
{
    return is_set(operation)
	|| is_set(section_status.operation)
	|| (section_c_vs !=  nullptr && section_c_vs->has_operation())
	|| (section_e_ss !=  nullptr && section_e_ss->has_operation())
	|| (section_se_ss !=  nullptr && section_se_ss->has_operation())
	|| (section_sef_ss !=  nullptr && section_sef_ss->has_operation());
}

std::string PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Section' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (section_status.is_set || is_set(section_status.operation)) leaf_name_data.push_back(section_status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "section-c-vs")
    {
        if(section_c_vs != nullptr)
        {
            children["section-c-vs"] = section_c_vs;
        }
        else
        {
            section_c_vs = std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionCVs>();
            section_c_vs->parent = this;
            children["section-c-vs"] = section_c_vs;
        }
        return children.at("section-c-vs");
    }

    if(child_yang_name == "section-e-ss")
    {
        if(section_e_ss != nullptr)
        {
            children["section-e-ss"] = section_e_ss;
        }
        else
        {
            section_e_ss = std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionESs>();
            section_e_ss->parent = this;
            children["section-e-ss"] = section_e_ss;
        }
        return children.at("section-e-ss");
    }

    if(child_yang_name == "section-se-ss")
    {
        if(section_se_ss != nullptr)
        {
            children["section-se-ss"] = section_se_ss;
        }
        else
        {
            section_se_ss = std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionSeSs>();
            section_se_ss->parent = this;
            children["section-se-ss"] = section_se_ss;
        }
        return children.at("section-se-ss");
    }

    if(child_yang_name == "section-sef-ss")
    {
        if(section_sef_ss != nullptr)
        {
            children["section-sef-ss"] = section_sef_ss;
        }
        else
        {
            section_sef_ss = std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionSefSs>();
            section_sef_ss->parent = this;
            children["section-sef-ss"] = section_sef_ss;
        }
        return children.at("section-sef-ss");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::get_children()
{
    if(children.find("section-c-vs") == children.end())
    {
        if(section_c_vs != nullptr)
        {
            children["section-c-vs"] = section_c_vs;
        }
    }

    if(children.find("section-e-ss") == children.end())
    {
        if(section_e_ss != nullptr)
        {
            children["section-e-ss"] = section_e_ss;
        }
    }

    if(children.find("section-se-ss") == children.end())
    {
        if(section_se_ss != nullptr)
        {
            children["section-se-ss"] = section_se_ss;
        }
    }

    if(children.find("section-sef-ss") == children.end())
    {
        if(section_sef_ss != nullptr)
        {
            children["section-sef-ss"] = section_sef_ss;
        }
    }

    return children;
}

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "section-status")
    {
        section_status = value;
    }
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionESs::SectionESs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "section-e-ss"; yang_parent_name = "section";
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionESs::~SectionESs()
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionESs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionESs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-e-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionESs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SectionESs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionESs::get_children()
{
    return children;
}

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionESs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionSeSs::SectionSeSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "section-se-ss"; yang_parent_name = "section";
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionSeSs::~SectionSeSs()
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionSeSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionSeSs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-se-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionSeSs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SectionSeSs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionSeSs::get_children()
{
    return children;
}

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionSeSs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionSefSs::SectionSefSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "section-sef-ss"; yang_parent_name = "section";
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionSefSs::~SectionSefSs()
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionSefSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionSefSs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionSefSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-sef-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionSefSs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SectionSefSs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionSefSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionSefSs::get_children()
{
    return children;
}

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionSefSs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionCVs::SectionCVs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "section-c-vs"; yang_parent_name = "section";
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionCVs::~SectionCVs()
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionCVs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionCVs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionCVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-c-vs";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionCVs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SectionCVs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionCVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionCVs::get_children()
{
    return children;
}

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionCVs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::Line()
    :
    line_status{YType::int32, "line-status"}
    	,
    line_c_vs(std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineCVs>())
	,line_e_ss(std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineESs>())
	,line_fc_ls(std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineFcLs>())
	,line_se_ss(std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineSeSs>())
	,line_ua_ss(std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineUaSs>())
{
    line_c_vs->parent = this;
    children["line-c-vs"] = line_c_vs;

    line_e_ss->parent = this;
    children["line-e-ss"] = line_e_ss;

    line_fc_ls->parent = this;
    children["line-fc-ls"] = line_fc_ls;

    line_se_ss->parent = this;
    children["line-se-ss"] = line_se_ss;

    line_ua_ss->parent = this;
    children["line-ua-ss"] = line_ua_ss;

    yang_name = "line"; yang_parent_name = "oc-hour24ocn";
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::~Line()
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::has_data() const
{
    return line_status.is_set
	|| (line_c_vs !=  nullptr && line_c_vs->has_data())
	|| (line_e_ss !=  nullptr && line_e_ss->has_data())
	|| (line_fc_ls !=  nullptr && line_fc_ls->has_data())
	|| (line_se_ss !=  nullptr && line_se_ss->has_data())
	|| (line_ua_ss !=  nullptr && line_ua_ss->has_data());
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::has_operation() const
{
    return is_set(operation)
	|| is_set(line_status.operation)
	|| (line_c_vs !=  nullptr && line_c_vs->has_operation())
	|| (line_e_ss !=  nullptr && line_e_ss->has_operation())
	|| (line_fc_ls !=  nullptr && line_fc_ls->has_operation())
	|| (line_se_ss !=  nullptr && line_se_ss->has_operation())
	|| (line_ua_ss !=  nullptr && line_ua_ss->has_operation());
}

std::string PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Line' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (line_status.is_set || is_set(line_status.operation)) leaf_name_data.push_back(line_status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "line-c-vs")
    {
        if(line_c_vs != nullptr)
        {
            children["line-c-vs"] = line_c_vs;
        }
        else
        {
            line_c_vs = std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineCVs>();
            line_c_vs->parent = this;
            children["line-c-vs"] = line_c_vs;
        }
        return children.at("line-c-vs");
    }

    if(child_yang_name == "line-e-ss")
    {
        if(line_e_ss != nullptr)
        {
            children["line-e-ss"] = line_e_ss;
        }
        else
        {
            line_e_ss = std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineESs>();
            line_e_ss->parent = this;
            children["line-e-ss"] = line_e_ss;
        }
        return children.at("line-e-ss");
    }

    if(child_yang_name == "line-fc-ls")
    {
        if(line_fc_ls != nullptr)
        {
            children["line-fc-ls"] = line_fc_ls;
        }
        else
        {
            line_fc_ls = std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineFcLs>();
            line_fc_ls->parent = this;
            children["line-fc-ls"] = line_fc_ls;
        }
        return children.at("line-fc-ls");
    }

    if(child_yang_name == "line-se-ss")
    {
        if(line_se_ss != nullptr)
        {
            children["line-se-ss"] = line_se_ss;
        }
        else
        {
            line_se_ss = std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineSeSs>();
            line_se_ss->parent = this;
            children["line-se-ss"] = line_se_ss;
        }
        return children.at("line-se-ss");
    }

    if(child_yang_name == "line-ua-ss")
    {
        if(line_ua_ss != nullptr)
        {
            children["line-ua-ss"] = line_ua_ss;
        }
        else
        {
            line_ua_ss = std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineUaSs>();
            line_ua_ss->parent = this;
            children["line-ua-ss"] = line_ua_ss;
        }
        return children.at("line-ua-ss");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::get_children()
{
    if(children.find("line-c-vs") == children.end())
    {
        if(line_c_vs != nullptr)
        {
            children["line-c-vs"] = line_c_vs;
        }
    }

    if(children.find("line-e-ss") == children.end())
    {
        if(line_e_ss != nullptr)
        {
            children["line-e-ss"] = line_e_ss;
        }
    }

    if(children.find("line-fc-ls") == children.end())
    {
        if(line_fc_ls != nullptr)
        {
            children["line-fc-ls"] = line_fc_ls;
        }
    }

    if(children.find("line-se-ss") == children.end())
    {
        if(line_se_ss != nullptr)
        {
            children["line-se-ss"] = line_se_ss;
        }
    }

    if(children.find("line-ua-ss") == children.end())
    {
        if(line_ua_ss != nullptr)
        {
            children["line-ua-ss"] = line_ua_ss;
        }
    }

    return children;
}

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "line-status")
    {
        line_status = value;
    }
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineESs::LineESs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "line-e-ss"; yang_parent_name = "line";
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineESs::~LineESs()
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineESs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineESs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-e-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineESs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LineESs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineESs::get_children()
{
    return children;
}

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineESs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineSeSs::LineSeSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "line-se-ss"; yang_parent_name = "line";
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineSeSs::~LineSeSs()
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineSeSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineSeSs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-se-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineSeSs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LineSeSs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineSeSs::get_children()
{
    return children;
}

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineSeSs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineCVs::LineCVs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "line-c-vs"; yang_parent_name = "line";
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineCVs::~LineCVs()
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineCVs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineCVs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineCVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-c-vs";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineCVs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LineCVs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineCVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineCVs::get_children()
{
    return children;
}

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineCVs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineUaSs::LineUaSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "line-ua-ss"; yang_parent_name = "line";
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineUaSs::~LineUaSs()
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineUaSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineUaSs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineUaSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-ua-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineUaSs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LineUaSs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineUaSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineUaSs::get_children()
{
    return children;
}

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineUaSs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineFcLs::LineFcLs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "line-fc-ls"; yang_parent_name = "line";
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineFcLs::~LineFcLs()
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineFcLs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineFcLs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineFcLs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-fc-ls";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineFcLs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LineFcLs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineFcLs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineFcLs::get_children()
{
    return children;
}

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineFcLs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FeLine()
    :
    far_end_line_c_vs(std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineCVs>())
	,far_end_line_e_ss(std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineESs>())
	,far_end_line_fc_ls(std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineFcLs>())
	,far_end_line_se_ss(std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineSeSs>())
	,far_end_line_ua_ss(std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineUaSs>())
{
    far_end_line_c_vs->parent = this;
    children["far-end-line-c-vs"] = far_end_line_c_vs;

    far_end_line_e_ss->parent = this;
    children["far-end-line-e-ss"] = far_end_line_e_ss;

    far_end_line_fc_ls->parent = this;
    children["far-end-line-fc-ls"] = far_end_line_fc_ls;

    far_end_line_se_ss->parent = this;
    children["far-end-line-se-ss"] = far_end_line_se_ss;

    far_end_line_ua_ss->parent = this;
    children["far-end-line-ua-ss"] = far_end_line_ua_ss;

    yang_name = "fe-line"; yang_parent_name = "oc-hour24ocn";
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::~FeLine()
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::has_data() const
{
    return (far_end_line_c_vs !=  nullptr && far_end_line_c_vs->has_data())
	|| (far_end_line_e_ss !=  nullptr && far_end_line_e_ss->has_data())
	|| (far_end_line_fc_ls !=  nullptr && far_end_line_fc_ls->has_data())
	|| (far_end_line_se_ss !=  nullptr && far_end_line_se_ss->has_data())
	|| (far_end_line_ua_ss !=  nullptr && far_end_line_ua_ss->has_data());
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::has_operation() const
{
    return is_set(operation)
	|| (far_end_line_c_vs !=  nullptr && far_end_line_c_vs->has_operation())
	|| (far_end_line_e_ss !=  nullptr && far_end_line_e_ss->has_operation())
	|| (far_end_line_fc_ls !=  nullptr && far_end_line_fc_ls->has_operation())
	|| (far_end_line_se_ss !=  nullptr && far_end_line_se_ss->has_operation())
	|| (far_end_line_ua_ss !=  nullptr && far_end_line_ua_ss->has_operation());
}

std::string PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fe-line";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FeLine' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "far-end-line-c-vs")
    {
        if(far_end_line_c_vs != nullptr)
        {
            children["far-end-line-c-vs"] = far_end_line_c_vs;
        }
        else
        {
            far_end_line_c_vs = std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineCVs>();
            far_end_line_c_vs->parent = this;
            children["far-end-line-c-vs"] = far_end_line_c_vs;
        }
        return children.at("far-end-line-c-vs");
    }

    if(child_yang_name == "far-end-line-e-ss")
    {
        if(far_end_line_e_ss != nullptr)
        {
            children["far-end-line-e-ss"] = far_end_line_e_ss;
        }
        else
        {
            far_end_line_e_ss = std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineESs>();
            far_end_line_e_ss->parent = this;
            children["far-end-line-e-ss"] = far_end_line_e_ss;
        }
        return children.at("far-end-line-e-ss");
    }

    if(child_yang_name == "far-end-line-fc-ls")
    {
        if(far_end_line_fc_ls != nullptr)
        {
            children["far-end-line-fc-ls"] = far_end_line_fc_ls;
        }
        else
        {
            far_end_line_fc_ls = std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineFcLs>();
            far_end_line_fc_ls->parent = this;
            children["far-end-line-fc-ls"] = far_end_line_fc_ls;
        }
        return children.at("far-end-line-fc-ls");
    }

    if(child_yang_name == "far-end-line-se-ss")
    {
        if(far_end_line_se_ss != nullptr)
        {
            children["far-end-line-se-ss"] = far_end_line_se_ss;
        }
        else
        {
            far_end_line_se_ss = std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineSeSs>();
            far_end_line_se_ss->parent = this;
            children["far-end-line-se-ss"] = far_end_line_se_ss;
        }
        return children.at("far-end-line-se-ss");
    }

    if(child_yang_name == "far-end-line-ua-ss")
    {
        if(far_end_line_ua_ss != nullptr)
        {
            children["far-end-line-ua-ss"] = far_end_line_ua_ss;
        }
        else
        {
            far_end_line_ua_ss = std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineUaSs>();
            far_end_line_ua_ss->parent = this;
            children["far-end-line-ua-ss"] = far_end_line_ua_ss;
        }
        return children.at("far-end-line-ua-ss");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::get_children()
{
    if(children.find("far-end-line-c-vs") == children.end())
    {
        if(far_end_line_c_vs != nullptr)
        {
            children["far-end-line-c-vs"] = far_end_line_c_vs;
        }
    }

    if(children.find("far-end-line-e-ss") == children.end())
    {
        if(far_end_line_e_ss != nullptr)
        {
            children["far-end-line-e-ss"] = far_end_line_e_ss;
        }
    }

    if(children.find("far-end-line-fc-ls") == children.end())
    {
        if(far_end_line_fc_ls != nullptr)
        {
            children["far-end-line-fc-ls"] = far_end_line_fc_ls;
        }
    }

    if(children.find("far-end-line-se-ss") == children.end())
    {
        if(far_end_line_se_ss != nullptr)
        {
            children["far-end-line-se-ss"] = far_end_line_se_ss;
        }
    }

    if(children.find("far-end-line-ua-ss") == children.end())
    {
        if(far_end_line_ua_ss != nullptr)
        {
            children["far-end-line-ua-ss"] = far_end_line_ua_ss;
        }
    }

    return children;
}

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineESs::FarEndLineESs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "far-end-line-e-ss"; yang_parent_name = "fe-line";
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineESs::~FarEndLineESs()
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineESs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineESs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-e-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineESs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FarEndLineESs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineESs::get_children()
{
    return children;
}

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineESs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineSeSs::FarEndLineSeSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "far-end-line-se-ss"; yang_parent_name = "fe-line";
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineSeSs::~FarEndLineSeSs()
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineSeSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineSeSs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-se-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineSeSs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FarEndLineSeSs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineSeSs::get_children()
{
    return children;
}

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineSeSs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineCVs::FarEndLineCVs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "far-end-line-c-vs"; yang_parent_name = "fe-line";
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineCVs::~FarEndLineCVs()
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineCVs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineCVs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineCVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-c-vs";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineCVs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FarEndLineCVs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineCVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineCVs::get_children()
{
    return children;
}

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineCVs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineUaSs::FarEndLineUaSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "far-end-line-ua-ss"; yang_parent_name = "fe-line";
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineUaSs::~FarEndLineUaSs()
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineUaSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineUaSs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineUaSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-ua-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineUaSs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FarEndLineUaSs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineUaSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineUaSs::get_children()
{
    return children;
}

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineUaSs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineFcLs::FarEndLineFcLs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "far-end-line-fc-ls"; yang_parent_name = "fe-line";
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineFcLs::~FarEndLineFcLs()
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineFcLs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineFcLs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineFcLs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-fc-ls";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineFcLs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FarEndLineFcLs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineFcLs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineFcLs::get_children()
{
    return children;
}

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineFcLs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15()
    :
    oc_minute15ocns(std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns>())
{
    oc_minute15ocns->parent = this;
    children["oc-minute15ocns"] = oc_minute15ocns;

    yang_name = "oc-minute15"; yang_parent_name = "oc-current";
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::~OcMinute15()
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::has_data() const
{
    return (oc_minute15ocns !=  nullptr && oc_minute15ocns->has_data());
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::has_operation() const
{
    return is_set(operation)
	|| (oc_minute15ocns !=  nullptr && oc_minute15ocns->has_operation());
}

std::string PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-minute15";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OcMinute15' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "oc-minute15ocns")
    {
        if(oc_minute15ocns != nullptr)
        {
            children["oc-minute15ocns"] = oc_minute15ocns;
        }
        else
        {
            oc_minute15ocns = std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns>();
            oc_minute15ocns->parent = this;
            children["oc-minute15ocns"] = oc_minute15ocns;
        }
        return children.at("oc-minute15ocns");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::get_children()
{
    if(children.find("oc-minute15ocns") == children.end())
    {
        if(oc_minute15ocns != nullptr)
        {
            children["oc-minute15ocns"] = oc_minute15ocns;
        }
    }

    return children;
}

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocns()
{
    yang_name = "oc-minute15ocns"; yang_parent_name = "oc-minute15";
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::~OcMinute15Ocns()
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::has_data() const
{
    for (std::size_t index=0; index<oc_minute15ocn.size(); index++)
    {
        if(oc_minute15ocn[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::has_operation() const
{
    for (std::size_t index=0; index<oc_minute15ocn.size(); index++)
    {
        if(oc_minute15ocn[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-minute15ocns";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OcMinute15Ocns' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "oc-minute15ocn")
    {
        for(auto const & c : oc_minute15ocn)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn>();
        c->parent = this;
        oc_minute15ocn.push_back(std::move(c));
        children[segment_path] = oc_minute15ocn.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::get_children()
{
    for (auto const & c : oc_minute15ocn)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::OcMinute15Ocn()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    last_clear_time{YType::str, "last-clear-time"},
    timestamp{YType::str, "timestamp"},
    valid{YType::boolean, "valid"}
    	,
    fe_line(std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine>())
	,line(std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line>())
	,section(std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section>())
{
    fe_line->parent = this;
    children["fe-line"] = fe_line;

    line->parent = this;
    children["line"] = line;

    section->parent = this;
    children["section"] = section;

    yang_name = "oc-minute15ocn"; yang_parent_name = "oc-minute15ocns";
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::~OcMinute15Ocn()
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::has_data() const
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

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| is_set(index_.operation)
	|| is_set(last_clear15_min_time.operation)
	|| is_set(last_clear24_hr_time.operation)
	|| is_set(last_clear_time.operation)
	|| is_set(timestamp.operation)
	|| is_set(valid.operation)
	|| (fe_line !=  nullptr && fe_line->has_operation())
	|| (line !=  nullptr && line->has_operation())
	|| (section !=  nullptr && section->has_operation());
}

std::string PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oc-minute15ocn" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OcMinute15Ocn' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "fe-line")
    {
        if(fe_line != nullptr)
        {
            children["fe-line"] = fe_line;
        }
        else
        {
            fe_line = std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine>();
            fe_line->parent = this;
            children["fe-line"] = fe_line;
        }
        return children.at("fe-line");
    }

    if(child_yang_name == "line")
    {
        if(line != nullptr)
        {
            children["line"] = line;
        }
        else
        {
            line = std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line>();
            line->parent = this;
            children["line"] = line;
        }
        return children.at("line");
    }

    if(child_yang_name == "section")
    {
        if(section != nullptr)
        {
            children["section"] = section;
        }
        else
        {
            section = std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section>();
            section->parent = this;
            children["section"] = section;
        }
        return children.at("section");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::get_children()
{
    if(children.find("fe-line") == children.end())
    {
        if(fe_line != nullptr)
        {
            children["fe-line"] = fe_line;
        }
    }

    if(children.find("line") == children.end())
    {
        if(line != nullptr)
        {
            children["line"] = line;
        }
    }

    if(children.find("section") == children.end())
    {
        if(section != nullptr)
        {
            children["section"] = section;
        }
    }

    return children;
}

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::Section()
    :
    section_status{YType::int32, "section-status"}
    	,
    section_c_vs(std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionCVs>())
	,section_e_ss(std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionESs>())
	,section_se_ss(std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionSeSs>())
	,section_sef_ss(std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionSefSs>())
{
    section_c_vs->parent = this;
    children["section-c-vs"] = section_c_vs;

    section_e_ss->parent = this;
    children["section-e-ss"] = section_e_ss;

    section_se_ss->parent = this;
    children["section-se-ss"] = section_se_ss;

    section_sef_ss->parent = this;
    children["section-sef-ss"] = section_sef_ss;

    yang_name = "section"; yang_parent_name = "oc-minute15ocn";
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::~Section()
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::has_data() const
{
    return section_status.is_set
	|| (section_c_vs !=  nullptr && section_c_vs->has_data())
	|| (section_e_ss !=  nullptr && section_e_ss->has_data())
	|| (section_se_ss !=  nullptr && section_se_ss->has_data())
	|| (section_sef_ss !=  nullptr && section_sef_ss->has_data());
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::has_operation() const
{
    return is_set(operation)
	|| is_set(section_status.operation)
	|| (section_c_vs !=  nullptr && section_c_vs->has_operation())
	|| (section_e_ss !=  nullptr && section_e_ss->has_operation())
	|| (section_se_ss !=  nullptr && section_se_ss->has_operation())
	|| (section_sef_ss !=  nullptr && section_sef_ss->has_operation());
}

std::string PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Section' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (section_status.is_set || is_set(section_status.operation)) leaf_name_data.push_back(section_status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "section-c-vs")
    {
        if(section_c_vs != nullptr)
        {
            children["section-c-vs"] = section_c_vs;
        }
        else
        {
            section_c_vs = std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionCVs>();
            section_c_vs->parent = this;
            children["section-c-vs"] = section_c_vs;
        }
        return children.at("section-c-vs");
    }

    if(child_yang_name == "section-e-ss")
    {
        if(section_e_ss != nullptr)
        {
            children["section-e-ss"] = section_e_ss;
        }
        else
        {
            section_e_ss = std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionESs>();
            section_e_ss->parent = this;
            children["section-e-ss"] = section_e_ss;
        }
        return children.at("section-e-ss");
    }

    if(child_yang_name == "section-se-ss")
    {
        if(section_se_ss != nullptr)
        {
            children["section-se-ss"] = section_se_ss;
        }
        else
        {
            section_se_ss = std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionSeSs>();
            section_se_ss->parent = this;
            children["section-se-ss"] = section_se_ss;
        }
        return children.at("section-se-ss");
    }

    if(child_yang_name == "section-sef-ss")
    {
        if(section_sef_ss != nullptr)
        {
            children["section-sef-ss"] = section_sef_ss;
        }
        else
        {
            section_sef_ss = std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionSefSs>();
            section_sef_ss->parent = this;
            children["section-sef-ss"] = section_sef_ss;
        }
        return children.at("section-sef-ss");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::get_children()
{
    if(children.find("section-c-vs") == children.end())
    {
        if(section_c_vs != nullptr)
        {
            children["section-c-vs"] = section_c_vs;
        }
    }

    if(children.find("section-e-ss") == children.end())
    {
        if(section_e_ss != nullptr)
        {
            children["section-e-ss"] = section_e_ss;
        }
    }

    if(children.find("section-se-ss") == children.end())
    {
        if(section_se_ss != nullptr)
        {
            children["section-se-ss"] = section_se_ss;
        }
    }

    if(children.find("section-sef-ss") == children.end())
    {
        if(section_sef_ss != nullptr)
        {
            children["section-sef-ss"] = section_sef_ss;
        }
    }

    return children;
}

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "section-status")
    {
        section_status = value;
    }
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionESs::SectionESs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "section-e-ss"; yang_parent_name = "section";
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionESs::~SectionESs()
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionESs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionESs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-e-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionESs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SectionESs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionESs::get_children()
{
    return children;
}

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionESs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionSeSs::SectionSeSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "section-se-ss"; yang_parent_name = "section";
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionSeSs::~SectionSeSs()
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionSeSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionSeSs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-se-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionSeSs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SectionSeSs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionSeSs::get_children()
{
    return children;
}

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionSeSs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionSefSs::SectionSefSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "section-sef-ss"; yang_parent_name = "section";
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionSefSs::~SectionSefSs()
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionSefSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionSefSs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionSefSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-sef-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionSefSs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SectionSefSs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionSefSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionSefSs::get_children()
{
    return children;
}

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionSefSs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionCVs::SectionCVs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "section-c-vs"; yang_parent_name = "section";
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionCVs::~SectionCVs()
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionCVs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionCVs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionCVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-c-vs";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionCVs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SectionCVs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionCVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionCVs::get_children()
{
    return children;
}

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionCVs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::Line()
    :
    line_status{YType::int32, "line-status"}
    	,
    line_c_vs(std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineCVs>())
	,line_e_ss(std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineESs>())
	,line_fc_ls(std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineFcLs>())
	,line_se_ss(std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineSeSs>())
	,line_ua_ss(std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineUaSs>())
{
    line_c_vs->parent = this;
    children["line-c-vs"] = line_c_vs;

    line_e_ss->parent = this;
    children["line-e-ss"] = line_e_ss;

    line_fc_ls->parent = this;
    children["line-fc-ls"] = line_fc_ls;

    line_se_ss->parent = this;
    children["line-se-ss"] = line_se_ss;

    line_ua_ss->parent = this;
    children["line-ua-ss"] = line_ua_ss;

    yang_name = "line"; yang_parent_name = "oc-minute15ocn";
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::~Line()
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::has_data() const
{
    return line_status.is_set
	|| (line_c_vs !=  nullptr && line_c_vs->has_data())
	|| (line_e_ss !=  nullptr && line_e_ss->has_data())
	|| (line_fc_ls !=  nullptr && line_fc_ls->has_data())
	|| (line_se_ss !=  nullptr && line_se_ss->has_data())
	|| (line_ua_ss !=  nullptr && line_ua_ss->has_data());
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::has_operation() const
{
    return is_set(operation)
	|| is_set(line_status.operation)
	|| (line_c_vs !=  nullptr && line_c_vs->has_operation())
	|| (line_e_ss !=  nullptr && line_e_ss->has_operation())
	|| (line_fc_ls !=  nullptr && line_fc_ls->has_operation())
	|| (line_se_ss !=  nullptr && line_se_ss->has_operation())
	|| (line_ua_ss !=  nullptr && line_ua_ss->has_operation());
}

std::string PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Line' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (line_status.is_set || is_set(line_status.operation)) leaf_name_data.push_back(line_status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "line-c-vs")
    {
        if(line_c_vs != nullptr)
        {
            children["line-c-vs"] = line_c_vs;
        }
        else
        {
            line_c_vs = std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineCVs>();
            line_c_vs->parent = this;
            children["line-c-vs"] = line_c_vs;
        }
        return children.at("line-c-vs");
    }

    if(child_yang_name == "line-e-ss")
    {
        if(line_e_ss != nullptr)
        {
            children["line-e-ss"] = line_e_ss;
        }
        else
        {
            line_e_ss = std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineESs>();
            line_e_ss->parent = this;
            children["line-e-ss"] = line_e_ss;
        }
        return children.at("line-e-ss");
    }

    if(child_yang_name == "line-fc-ls")
    {
        if(line_fc_ls != nullptr)
        {
            children["line-fc-ls"] = line_fc_ls;
        }
        else
        {
            line_fc_ls = std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineFcLs>();
            line_fc_ls->parent = this;
            children["line-fc-ls"] = line_fc_ls;
        }
        return children.at("line-fc-ls");
    }

    if(child_yang_name == "line-se-ss")
    {
        if(line_se_ss != nullptr)
        {
            children["line-se-ss"] = line_se_ss;
        }
        else
        {
            line_se_ss = std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineSeSs>();
            line_se_ss->parent = this;
            children["line-se-ss"] = line_se_ss;
        }
        return children.at("line-se-ss");
    }

    if(child_yang_name == "line-ua-ss")
    {
        if(line_ua_ss != nullptr)
        {
            children["line-ua-ss"] = line_ua_ss;
        }
        else
        {
            line_ua_ss = std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineUaSs>();
            line_ua_ss->parent = this;
            children["line-ua-ss"] = line_ua_ss;
        }
        return children.at("line-ua-ss");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::get_children()
{
    if(children.find("line-c-vs") == children.end())
    {
        if(line_c_vs != nullptr)
        {
            children["line-c-vs"] = line_c_vs;
        }
    }

    if(children.find("line-e-ss") == children.end())
    {
        if(line_e_ss != nullptr)
        {
            children["line-e-ss"] = line_e_ss;
        }
    }

    if(children.find("line-fc-ls") == children.end())
    {
        if(line_fc_ls != nullptr)
        {
            children["line-fc-ls"] = line_fc_ls;
        }
    }

    if(children.find("line-se-ss") == children.end())
    {
        if(line_se_ss != nullptr)
        {
            children["line-se-ss"] = line_se_ss;
        }
    }

    if(children.find("line-ua-ss") == children.end())
    {
        if(line_ua_ss != nullptr)
        {
            children["line-ua-ss"] = line_ua_ss;
        }
    }

    return children;
}

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "line-status")
    {
        line_status = value;
    }
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineESs::LineESs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "line-e-ss"; yang_parent_name = "line";
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineESs::~LineESs()
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineESs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineESs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-e-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineESs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LineESs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineESs::get_children()
{
    return children;
}

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineESs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineSeSs::LineSeSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "line-se-ss"; yang_parent_name = "line";
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineSeSs::~LineSeSs()
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineSeSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineSeSs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-se-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineSeSs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LineSeSs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineSeSs::get_children()
{
    return children;
}

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineSeSs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineCVs::LineCVs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "line-c-vs"; yang_parent_name = "line";
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineCVs::~LineCVs()
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineCVs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineCVs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineCVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-c-vs";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineCVs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LineCVs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineCVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineCVs::get_children()
{
    return children;
}

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineCVs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineUaSs::LineUaSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "line-ua-ss"; yang_parent_name = "line";
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineUaSs::~LineUaSs()
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineUaSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineUaSs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineUaSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-ua-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineUaSs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LineUaSs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineUaSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineUaSs::get_children()
{
    return children;
}

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineUaSs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineFcLs::LineFcLs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "line-fc-ls"; yang_parent_name = "line";
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineFcLs::~LineFcLs()
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineFcLs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineFcLs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineFcLs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-fc-ls";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineFcLs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LineFcLs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineFcLs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineFcLs::get_children()
{
    return children;
}

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineFcLs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FeLine()
    :
    far_end_line_c_vs(std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineCVs>())
	,far_end_line_e_ss(std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineESs>())
	,far_end_line_fc_ls(std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineFcLs>())
	,far_end_line_se_ss(std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineSeSs>())
	,far_end_line_ua_ss(std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineUaSs>())
{
    far_end_line_c_vs->parent = this;
    children["far-end-line-c-vs"] = far_end_line_c_vs;

    far_end_line_e_ss->parent = this;
    children["far-end-line-e-ss"] = far_end_line_e_ss;

    far_end_line_fc_ls->parent = this;
    children["far-end-line-fc-ls"] = far_end_line_fc_ls;

    far_end_line_se_ss->parent = this;
    children["far-end-line-se-ss"] = far_end_line_se_ss;

    far_end_line_ua_ss->parent = this;
    children["far-end-line-ua-ss"] = far_end_line_ua_ss;

    yang_name = "fe-line"; yang_parent_name = "oc-minute15ocn";
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::~FeLine()
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::has_data() const
{
    return (far_end_line_c_vs !=  nullptr && far_end_line_c_vs->has_data())
	|| (far_end_line_e_ss !=  nullptr && far_end_line_e_ss->has_data())
	|| (far_end_line_fc_ls !=  nullptr && far_end_line_fc_ls->has_data())
	|| (far_end_line_se_ss !=  nullptr && far_end_line_se_ss->has_data())
	|| (far_end_line_ua_ss !=  nullptr && far_end_line_ua_ss->has_data());
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::has_operation() const
{
    return is_set(operation)
	|| (far_end_line_c_vs !=  nullptr && far_end_line_c_vs->has_operation())
	|| (far_end_line_e_ss !=  nullptr && far_end_line_e_ss->has_operation())
	|| (far_end_line_fc_ls !=  nullptr && far_end_line_fc_ls->has_operation())
	|| (far_end_line_se_ss !=  nullptr && far_end_line_se_ss->has_operation())
	|| (far_end_line_ua_ss !=  nullptr && far_end_line_ua_ss->has_operation());
}

std::string PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fe-line";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FeLine' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "far-end-line-c-vs")
    {
        if(far_end_line_c_vs != nullptr)
        {
            children["far-end-line-c-vs"] = far_end_line_c_vs;
        }
        else
        {
            far_end_line_c_vs = std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineCVs>();
            far_end_line_c_vs->parent = this;
            children["far-end-line-c-vs"] = far_end_line_c_vs;
        }
        return children.at("far-end-line-c-vs");
    }

    if(child_yang_name == "far-end-line-e-ss")
    {
        if(far_end_line_e_ss != nullptr)
        {
            children["far-end-line-e-ss"] = far_end_line_e_ss;
        }
        else
        {
            far_end_line_e_ss = std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineESs>();
            far_end_line_e_ss->parent = this;
            children["far-end-line-e-ss"] = far_end_line_e_ss;
        }
        return children.at("far-end-line-e-ss");
    }

    if(child_yang_name == "far-end-line-fc-ls")
    {
        if(far_end_line_fc_ls != nullptr)
        {
            children["far-end-line-fc-ls"] = far_end_line_fc_ls;
        }
        else
        {
            far_end_line_fc_ls = std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineFcLs>();
            far_end_line_fc_ls->parent = this;
            children["far-end-line-fc-ls"] = far_end_line_fc_ls;
        }
        return children.at("far-end-line-fc-ls");
    }

    if(child_yang_name == "far-end-line-se-ss")
    {
        if(far_end_line_se_ss != nullptr)
        {
            children["far-end-line-se-ss"] = far_end_line_se_ss;
        }
        else
        {
            far_end_line_se_ss = std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineSeSs>();
            far_end_line_se_ss->parent = this;
            children["far-end-line-se-ss"] = far_end_line_se_ss;
        }
        return children.at("far-end-line-se-ss");
    }

    if(child_yang_name == "far-end-line-ua-ss")
    {
        if(far_end_line_ua_ss != nullptr)
        {
            children["far-end-line-ua-ss"] = far_end_line_ua_ss;
        }
        else
        {
            far_end_line_ua_ss = std::make_shared<PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineUaSs>();
            far_end_line_ua_ss->parent = this;
            children["far-end-line-ua-ss"] = far_end_line_ua_ss;
        }
        return children.at("far-end-line-ua-ss");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::get_children()
{
    if(children.find("far-end-line-c-vs") == children.end())
    {
        if(far_end_line_c_vs != nullptr)
        {
            children["far-end-line-c-vs"] = far_end_line_c_vs;
        }
    }

    if(children.find("far-end-line-e-ss") == children.end())
    {
        if(far_end_line_e_ss != nullptr)
        {
            children["far-end-line-e-ss"] = far_end_line_e_ss;
        }
    }

    if(children.find("far-end-line-fc-ls") == children.end())
    {
        if(far_end_line_fc_ls != nullptr)
        {
            children["far-end-line-fc-ls"] = far_end_line_fc_ls;
        }
    }

    if(children.find("far-end-line-se-ss") == children.end())
    {
        if(far_end_line_se_ss != nullptr)
        {
            children["far-end-line-se-ss"] = far_end_line_se_ss;
        }
    }

    if(children.find("far-end-line-ua-ss") == children.end())
    {
        if(far_end_line_ua_ss != nullptr)
        {
            children["far-end-line-ua-ss"] = far_end_line_ua_ss;
        }
    }

    return children;
}

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineESs::FarEndLineESs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "far-end-line-e-ss"; yang_parent_name = "fe-line";
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineESs::~FarEndLineESs()
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineESs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineESs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-e-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineESs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FarEndLineESs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineESs::get_children()
{
    return children;
}

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineESs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineSeSs::FarEndLineSeSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "far-end-line-se-ss"; yang_parent_name = "fe-line";
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineSeSs::~FarEndLineSeSs()
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineSeSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineSeSs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-se-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineSeSs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FarEndLineSeSs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineSeSs::get_children()
{
    return children;
}

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineSeSs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineCVs::FarEndLineCVs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "far-end-line-c-vs"; yang_parent_name = "fe-line";
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineCVs::~FarEndLineCVs()
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineCVs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineCVs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineCVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-c-vs";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineCVs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FarEndLineCVs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineCVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineCVs::get_children()
{
    return children;
}

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineCVs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineUaSs::FarEndLineUaSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "far-end-line-ua-ss"; yang_parent_name = "fe-line";
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineUaSs::~FarEndLineUaSs()
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineUaSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineUaSs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineUaSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-ua-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineUaSs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FarEndLineUaSs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineUaSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineUaSs::get_children()
{
    return children;
}

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineUaSs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineFcLs::FarEndLineFcLs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "far-end-line-fc-ls"; yang_parent_name = "fe-line";
}

PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineFcLs::~FarEndLineFcLs()
{
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineFcLs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineFcLs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineFcLs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-fc-ls";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineFcLs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FarEndLineFcLs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineFcLs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineFcLs::get_children()
{
    return children;
}

void PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineFcLs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::Ethernet()
    :
    ethernet_ports(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts>())
{
    ethernet_ports->parent = this;
    children["ethernet-ports"] = ethernet_ports;

    yang_name = "ethernet"; yang_parent_name = "performance-management";
}

PerformanceManagement::Ethernet::~Ethernet()
{
}

bool PerformanceManagement::Ethernet::has_data() const
{
    return (ethernet_ports !=  nullptr && ethernet_ports->has_data());
}

bool PerformanceManagement::Ethernet::has_operation() const
{
    return is_set(operation)
	|| (ethernet_ports !=  nullptr && ethernet_ports->has_operation());
}

std::string PerformanceManagement::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ethernet-ports")
    {
        if(ethernet_ports != nullptr)
        {
            children["ethernet-ports"] = ethernet_ports;
        }
        else
        {
            ethernet_ports = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts>();
            ethernet_ports->parent = this;
            children["ethernet-ports"] = ethernet_ports;
        }
        return children.at("ethernet-ports");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::get_children()
{
    if(children.find("ethernet-ports") == children.end())
    {
        if(ethernet_ports != nullptr)
        {
            children["ethernet-ports"] = ethernet_ports;
        }
    }

    return children;
}

void PerformanceManagement::Ethernet::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPorts()
{
    yang_name = "ethernet-ports"; yang_parent_name = "ethernet";
}

PerformanceManagement::Ethernet::EthernetPorts::~EthernetPorts()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::has_data() const
{
    for (std::size_t index=0; index<ethernet_port.size(); index++)
    {
        if(ethernet_port[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Ethernet::EthernetPorts::has_operation() const
{
    for (std::size_t index=0; index<ethernet_port.size(); index++)
    {
        if(ethernet_port[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-ports";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management/ethernet/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ethernet-port")
    {
        for(auto const & c : ethernet_port)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort>();
        c->parent = this;
        ethernet_port.push_back(std::move(c));
        children[segment_path] = ethernet_port.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::get_children()
{
    for (auto const & c : ethernet_port)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetPort()
    :
    name{YType::str, "name"}
    	,
    ethernet_current(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent>())
{
    ethernet_current->parent = this;
    children["ethernet-current"] = ethernet_current;

    yang_name = "ethernet-port"; yang_parent_name = "ethernet-ports";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::~EthernetPort()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::has_data() const
{
    return name.is_set
	|| (ethernet_current !=  nullptr && ethernet_current->has_data());
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (ethernet_current !=  nullptr && ethernet_current->has_operation());
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-port" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management/ethernet/ethernet-ports/" << get_segment_path();
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ethernet-current")
    {
        if(ethernet_current != nullptr)
        {
            children["ethernet-current"] = ethernet_current;
        }
        else
        {
            ethernet_current = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent>();
            ethernet_current->parent = this;
            children["ethernet-current"] = ethernet_current;
        }
        return children.at("ethernet-current");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::get_children()
{
    if(children.find("ethernet-current") == children.end())
    {
        if(ethernet_current != nullptr)
        {
            children["ethernet-current"] = ethernet_current;
        }
    }

    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetCurrent()
    :
    ethernet_hour24(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24>())
	,ethernet_second30(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30>())
	,minute15(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15>())
{
    ethernet_hour24->parent = this;
    children["ethernet-hour24"] = ethernet_hour24;

    ethernet_second30->parent = this;
    children["ethernet-second30"] = ethernet_second30;

    minute15->parent = this;
    children["minute15"] = minute15;

    yang_name = "ethernet-current"; yang_parent_name = "ethernet-port";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::~EthernetCurrent()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::has_data() const
{
    return (ethernet_hour24 !=  nullptr && ethernet_hour24->has_data())
	|| (ethernet_second30 !=  nullptr && ethernet_second30->has_data())
	|| (minute15 !=  nullptr && minute15->has_data());
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::has_operation() const
{
    return is_set(operation)
	|| (ethernet_hour24 !=  nullptr && ethernet_hour24->has_operation())
	|| (ethernet_second30 !=  nullptr && ethernet_second30->has_operation())
	|| (minute15 !=  nullptr && minute15->has_operation());
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-current";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EthernetCurrent' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ethernet-hour24")
    {
        if(ethernet_hour24 != nullptr)
        {
            children["ethernet-hour24"] = ethernet_hour24;
        }
        else
        {
            ethernet_hour24 = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24>();
            ethernet_hour24->parent = this;
            children["ethernet-hour24"] = ethernet_hour24;
        }
        return children.at("ethernet-hour24");
    }

    if(child_yang_name == "ethernet-second30")
    {
        if(ethernet_second30 != nullptr)
        {
            children["ethernet-second30"] = ethernet_second30;
        }
        else
        {
            ethernet_second30 = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30>();
            ethernet_second30->parent = this;
            children["ethernet-second30"] = ethernet_second30;
        }
        return children.at("ethernet-second30");
    }

    if(child_yang_name == "minute15")
    {
        if(minute15 != nullptr)
        {
            children["minute15"] = minute15;
        }
        else
        {
            minute15 = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15>();
            minute15->parent = this;
            children["minute15"] = minute15;
        }
        return children.at("minute15");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::get_children()
{
    if(children.find("ethernet-hour24") == children.end())
    {
        if(ethernet_hour24 != nullptr)
        {
            children["ethernet-hour24"] = ethernet_hour24;
        }
    }

    if(children.find("ethernet-second30") == children.end())
    {
        if(ethernet_second30 != nullptr)
        {
            children["ethernet-second30"] = ethernet_second30;
        }
    }

    if(children.find("minute15") == children.end())
    {
        if(minute15 != nullptr)
        {
            children["minute15"] = minute15;
        }
    }

    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::EthernetSecond30()
    :
    second30_ethers(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers>())
{
    second30_ethers->parent = this;
    children["second30-ethers"] = second30_ethers;

    yang_name = "ethernet-second30"; yang_parent_name = "ethernet-current";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::~EthernetSecond30()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::has_data() const
{
    return (second30_ethers !=  nullptr && second30_ethers->has_data());
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::has_operation() const
{
    return is_set(operation)
	|| (second30_ethers !=  nullptr && second30_ethers->has_operation());
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-second30";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EthernetSecond30' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "second30-ethers")
    {
        if(second30_ethers != nullptr)
        {
            children["second30-ethers"] = second30_ethers;
        }
        else
        {
            second30_ethers = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers>();
            second30_ethers->parent = this;
            children["second30-ethers"] = second30_ethers;
        }
        return children.at("second30-ethers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::get_children()
{
    if(children.find("second30-ethers") == children.end())
    {
        if(second30_ethers != nullptr)
        {
            children["second30-ethers"] = second30_ethers;
        }
    }

    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ethers()
{
    yang_name = "second30-ethers"; yang_parent_name = "ethernet-second30";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::~Second30Ethers()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::has_data() const
{
    for (std::size_t index=0; index<second30_ether.size(); index++)
    {
        if(second30_ether[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::has_operation() const
{
    for (std::size_t index=0; index<second30_ether.size(); index++)
    {
        if(second30_ether[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30-ethers";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Second30Ethers' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        for(auto const & c : second30_ether)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether>();
        c->parent = this;
        second30_ether.push_back(std::move(c));
        children[segment_path] = second30_ether.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::get_children()
{
    for (auto const & c : second30_ether)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Second30Ether()
    :
    slot_number{YType::int32, "slot-number"},
    index_{YType::uint32, "index"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    last_clear30_sec_time{YType::str, "last-clear30-sec-time"},
    last_clear_time{YType::str, "last-clear-time"},
    sec30_support{YType::boolean, "sec30-support"},
    timestamp{YType::str, "timestamp"},
    valid{YType::boolean, "valid"}
    	,
    ether10241518_octet(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether10241518Octet>())
	,ether128255_octet(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether128255Octet>())
	,ether256511_octet(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether256511Octet>())
	,ether5121023_octet(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether5121023Octet>())
	,ether64_octets(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether64Octets>())
	,ether65127_octet(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether65127Octet>())
	,ether_stat_broadcast_pkt(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::EtherStatBroadcastPkt>())
	,ether_stat_multicast_pkt(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::EtherStatMulticastPkt>())
	,ether_stat_undersized_pkt(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::EtherStatUndersizedPkt>())
	,fcs_errors_stat(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::FcsErrorsStat>())
	,if_in_errors(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::IfInErrors>())
	,if_in_octets(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::IfInOctets>())
	,in8021q_frames(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::In8021QFrames>())
	,in_bcast_pkt(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InBcastPkt>())
	,in_drop_abort(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropAbort>())
	,in_drop_invalid_dmac(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropInvalidDmac>())
	,in_drop_invalid_encap(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropInvalidEncap>())
	,in_drop_invalid_vlan(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropInvalidVlan>())
	,in_drop_other(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropOther>())
	,in_drop_overrun(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropOverrun>())
	,in_error_collisions(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorCollisions>())
	,in_error_fragments(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorFragments>())
	,in_error_giant(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorGiant>())
	,in_error_jabbers(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorJabbers>())
	,in_error_other(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorOther>())
	,in_error_runt(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorRunt>())
	,in_error_symbol(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorSymbol>())
	,in_good_bytes(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InGoodBytes>())
	,in_good_pkts(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InGoodPkts>())
	,in_mcast_pkt(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InMcastPkt>())
	,in_mib_giant(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InMibGiant>())
	,in_mib_jabber(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InMibJabber>())
	,in_mibcrc(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InMibcrc>())
	,in_pause_frame(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPauseFrame>())
	,in_pkt64_octet(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkt64Octet>())
	,in_pkts1024_to1518_octets(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkts1024To1518Octets>())
	,in_pkts128_to255_octets(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkts128To255Octets>())
	,in_pkts1519_max_octets(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkts1519MaxOctets>())
	,in_pkts256_to511_octets(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkts256To511Octets>())
	,in_pkts512_to1023_octets(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkts512To1023Octets>())
	,in_pkts65_to127_octets(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkts65To127Octets>())
	,in_ucast_pkt(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InUcastPkt>())
	,jabber_stat(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::JabberStat>())
	,long_frames_stat(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::LongFramesStat>())
	,octet_stat(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OctetStat>())
	,out8021q_frames(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Out8021QFrames>())
	,out_bcast_pkt(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutBcastPkt>())
	,out_drop_abort(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutDropAbort>())
	,out_drop_other(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutDropOther>())
	,out_drop_underrun(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutDropUnderrun>())
	,out_error_other(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutErrorOther>())
	,out_good_bytes(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutGoodBytes>())
	,out_good_pkts(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutGoodPkts>())
	,out_mcast_pkt(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutMcastPkt>())
	,out_octets(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutOctets>())
	,out_pause_frames(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPauseFrames>())
	,out_pkts10241518_octets(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPkts10241518Octets>())
	,out_pkts128255_octets(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPkts128255Octets>())
	,out_pkts1519_max_octets(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPkts1519MaxOctets>())
	,out_pkts256511_octets(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPkts256511Octets>())
	,out_pkts5121023_octets(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPkts5121023Octets>())
	,out_pkts65127_octets(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPkts65127Octets>())
	,out_ucast_pkt(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutUcastPkt>())
	,outpkt64octet(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Outpkt64Octet>())
	,oversize_pkt_stat(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OversizePktStat>())
	,rx_pkt(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::RxPkt>())
	,rx_util(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::RxUtil>())
	,stat_pkt(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::StatPkt>())
	,tx_bad_fcs(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxBadFcs>())
	,tx_fragments(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxFragments>())
	,tx_jabber(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxJabber>())
	,tx_oversized_pkt(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxOversizedPkt>())
	,tx_pkt(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxPkt>())
	,tx_undersized_pkt(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxUndersizedPkt>())
	,tx_util(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxUtil>())
{
    ether10241518_octet->parent = this;
    children["ether10241518-octet"] = ether10241518_octet;

    ether128255_octet->parent = this;
    children["ether128255-octet"] = ether128255_octet;

    ether256511_octet->parent = this;
    children["ether256511-octet"] = ether256511_octet;

    ether5121023_octet->parent = this;
    children["ether5121023-octet"] = ether5121023_octet;

    ether64_octets->parent = this;
    children["ether64-octets"] = ether64_octets;

    ether65127_octet->parent = this;
    children["ether65127-octet"] = ether65127_octet;

    ether_stat_broadcast_pkt->parent = this;
    children["ether-stat-broadcast-pkt"] = ether_stat_broadcast_pkt;

    ether_stat_multicast_pkt->parent = this;
    children["ether-stat-multicast-pkt"] = ether_stat_multicast_pkt;

    ether_stat_undersized_pkt->parent = this;
    children["ether-stat-undersized-pkt"] = ether_stat_undersized_pkt;

    fcs_errors_stat->parent = this;
    children["fcs-errors-stat"] = fcs_errors_stat;

    if_in_errors->parent = this;
    children["if-in-errors"] = if_in_errors;

    if_in_octets->parent = this;
    children["if-in-octets"] = if_in_octets;

    in8021q_frames->parent = this;
    children["in8021q-frames"] = in8021q_frames;

    in_bcast_pkt->parent = this;
    children["in-bcast-pkt"] = in_bcast_pkt;

    in_drop_abort->parent = this;
    children["in-drop-abort"] = in_drop_abort;

    in_drop_invalid_dmac->parent = this;
    children["in-drop-invalid-dmac"] = in_drop_invalid_dmac;

    in_drop_invalid_encap->parent = this;
    children["in-drop-invalid-encap"] = in_drop_invalid_encap;

    in_drop_invalid_vlan->parent = this;
    children["in-drop-invalid-vlan"] = in_drop_invalid_vlan;

    in_drop_other->parent = this;
    children["in-drop-other"] = in_drop_other;

    in_drop_overrun->parent = this;
    children["in-drop-overrun"] = in_drop_overrun;

    in_error_collisions->parent = this;
    children["in-error-collisions"] = in_error_collisions;

    in_error_fragments->parent = this;
    children["in-error-fragments"] = in_error_fragments;

    in_error_giant->parent = this;
    children["in-error-giant"] = in_error_giant;

    in_error_jabbers->parent = this;
    children["in-error-jabbers"] = in_error_jabbers;

    in_error_other->parent = this;
    children["in-error-other"] = in_error_other;

    in_error_runt->parent = this;
    children["in-error-runt"] = in_error_runt;

    in_error_symbol->parent = this;
    children["in-error-symbol"] = in_error_symbol;

    in_good_bytes->parent = this;
    children["in-good-bytes"] = in_good_bytes;

    in_good_pkts->parent = this;
    children["in-good-pkts"] = in_good_pkts;

    in_mcast_pkt->parent = this;
    children["in-mcast-pkt"] = in_mcast_pkt;

    in_mib_giant->parent = this;
    children["in-mib-giant"] = in_mib_giant;

    in_mib_jabber->parent = this;
    children["in-mib-jabber"] = in_mib_jabber;

    in_mibcrc->parent = this;
    children["in-mibcrc"] = in_mibcrc;

    in_pause_frame->parent = this;
    children["in-pause-frame"] = in_pause_frame;

    in_pkt64_octet->parent = this;
    children["in-pkt64-octet"] = in_pkt64_octet;

    in_pkts1024_to1518_octets->parent = this;
    children["in-pkts1024-to1518-octets"] = in_pkts1024_to1518_octets;

    in_pkts128_to255_octets->parent = this;
    children["in-pkts128-to255-octets"] = in_pkts128_to255_octets;

    in_pkts1519_max_octets->parent = this;
    children["in-pkts1519-max-octets"] = in_pkts1519_max_octets;

    in_pkts256_to511_octets->parent = this;
    children["in-pkts256-to511-octets"] = in_pkts256_to511_octets;

    in_pkts512_to1023_octets->parent = this;
    children["in-pkts512-to1023-octets"] = in_pkts512_to1023_octets;

    in_pkts65_to127_octets->parent = this;
    children["in-pkts65-to127-octets"] = in_pkts65_to127_octets;

    in_ucast_pkt->parent = this;
    children["in-ucast-pkt"] = in_ucast_pkt;

    jabber_stat->parent = this;
    children["jabber-stat"] = jabber_stat;

    long_frames_stat->parent = this;
    children["long-frames-stat"] = long_frames_stat;

    octet_stat->parent = this;
    children["octet-stat"] = octet_stat;

    out8021q_frames->parent = this;
    children["out8021q-frames"] = out8021q_frames;

    out_bcast_pkt->parent = this;
    children["out-bcast-pkt"] = out_bcast_pkt;

    out_drop_abort->parent = this;
    children["out-drop-abort"] = out_drop_abort;

    out_drop_other->parent = this;
    children["out-drop-other"] = out_drop_other;

    out_drop_underrun->parent = this;
    children["out-drop-underrun"] = out_drop_underrun;

    out_error_other->parent = this;
    children["out-error-other"] = out_error_other;

    out_good_bytes->parent = this;
    children["out-good-bytes"] = out_good_bytes;

    out_good_pkts->parent = this;
    children["out-good-pkts"] = out_good_pkts;

    out_mcast_pkt->parent = this;
    children["out-mcast-pkt"] = out_mcast_pkt;

    out_octets->parent = this;
    children["out-octets"] = out_octets;

    out_pause_frames->parent = this;
    children["out-pause-frames"] = out_pause_frames;

    out_pkts10241518_octets->parent = this;
    children["out-pkts10241518-octets"] = out_pkts10241518_octets;

    out_pkts128255_octets->parent = this;
    children["out-pkts128255-octets"] = out_pkts128255_octets;

    out_pkts1519_max_octets->parent = this;
    children["out-pkts1519-max-octets"] = out_pkts1519_max_octets;

    out_pkts256511_octets->parent = this;
    children["out-pkts256511-octets"] = out_pkts256511_octets;

    out_pkts5121023_octets->parent = this;
    children["out-pkts5121023-octets"] = out_pkts5121023_octets;

    out_pkts65127_octets->parent = this;
    children["out-pkts65127-octets"] = out_pkts65127_octets;

    out_ucast_pkt->parent = this;
    children["out-ucast-pkt"] = out_ucast_pkt;

    outpkt64octet->parent = this;
    children["outpkt64octet"] = outpkt64octet;

    oversize_pkt_stat->parent = this;
    children["oversize-pkt-stat"] = oversize_pkt_stat;

    rx_pkt->parent = this;
    children["rx-pkt"] = rx_pkt;

    rx_util->parent = this;
    children["rx-util"] = rx_util;

    stat_pkt->parent = this;
    children["stat-pkt"] = stat_pkt;

    tx_bad_fcs->parent = this;
    children["tx-bad-fcs"] = tx_bad_fcs;

    tx_fragments->parent = this;
    children["tx-fragments"] = tx_fragments;

    tx_jabber->parent = this;
    children["tx-jabber"] = tx_jabber;

    tx_oversized_pkt->parent = this;
    children["tx-oversized-pkt"] = tx_oversized_pkt;

    tx_pkt->parent = this;
    children["tx-pkt"] = tx_pkt;

    tx_undersized_pkt->parent = this;
    children["tx-undersized-pkt"] = tx_undersized_pkt;

    tx_util->parent = this;
    children["tx-util"] = tx_util;

    yang_name = "second30-ether"; yang_parent_name = "second30-ethers";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::~Second30Ether()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::has_data() const
{
    return slot_number.is_set
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

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::has_operation() const
{
    return is_set(operation)
	|| is_set(slot_number.operation)
	|| is_set(index_.operation)
	|| is_set(last_clear15_min_time.operation)
	|| is_set(last_clear24_hr_time.operation)
	|| is_set(last_clear30_sec_time.operation)
	|| is_set(last_clear_time.operation)
	|| is_set(sec30_support.operation)
	|| is_set(timestamp.operation)
	|| is_set(valid.operation)
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

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "second30-ether" <<"[slot-number='" <<slot_number <<"']";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Second30Ether' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (slot_number.is_set || is_set(slot_number.operation)) leaf_name_data.push_back(slot_number.get_name_leafdata());
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ether10241518-octet")
    {
        if(ether10241518_octet != nullptr)
        {
            children["ether10241518-octet"] = ether10241518_octet;
        }
        else
        {
            ether10241518_octet = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether10241518Octet>();
            ether10241518_octet->parent = this;
            children["ether10241518-octet"] = ether10241518_octet;
        }
        return children.at("ether10241518-octet");
    }

    if(child_yang_name == "ether128255-octet")
    {
        if(ether128255_octet != nullptr)
        {
            children["ether128255-octet"] = ether128255_octet;
        }
        else
        {
            ether128255_octet = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether128255Octet>();
            ether128255_octet->parent = this;
            children["ether128255-octet"] = ether128255_octet;
        }
        return children.at("ether128255-octet");
    }

    if(child_yang_name == "ether256511-octet")
    {
        if(ether256511_octet != nullptr)
        {
            children["ether256511-octet"] = ether256511_octet;
        }
        else
        {
            ether256511_octet = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether256511Octet>();
            ether256511_octet->parent = this;
            children["ether256511-octet"] = ether256511_octet;
        }
        return children.at("ether256511-octet");
    }

    if(child_yang_name == "ether5121023-octet")
    {
        if(ether5121023_octet != nullptr)
        {
            children["ether5121023-octet"] = ether5121023_octet;
        }
        else
        {
            ether5121023_octet = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether5121023Octet>();
            ether5121023_octet->parent = this;
            children["ether5121023-octet"] = ether5121023_octet;
        }
        return children.at("ether5121023-octet");
    }

    if(child_yang_name == "ether64-octets")
    {
        if(ether64_octets != nullptr)
        {
            children["ether64-octets"] = ether64_octets;
        }
        else
        {
            ether64_octets = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether64Octets>();
            ether64_octets->parent = this;
            children["ether64-octets"] = ether64_octets;
        }
        return children.at("ether64-octets");
    }

    if(child_yang_name == "ether65127-octet")
    {
        if(ether65127_octet != nullptr)
        {
            children["ether65127-octet"] = ether65127_octet;
        }
        else
        {
            ether65127_octet = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether65127Octet>();
            ether65127_octet->parent = this;
            children["ether65127-octet"] = ether65127_octet;
        }
        return children.at("ether65127-octet");
    }

    if(child_yang_name == "ether-stat-broadcast-pkt")
    {
        if(ether_stat_broadcast_pkt != nullptr)
        {
            children["ether-stat-broadcast-pkt"] = ether_stat_broadcast_pkt;
        }
        else
        {
            ether_stat_broadcast_pkt = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::EtherStatBroadcastPkt>();
            ether_stat_broadcast_pkt->parent = this;
            children["ether-stat-broadcast-pkt"] = ether_stat_broadcast_pkt;
        }
        return children.at("ether-stat-broadcast-pkt");
    }

    if(child_yang_name == "ether-stat-multicast-pkt")
    {
        if(ether_stat_multicast_pkt != nullptr)
        {
            children["ether-stat-multicast-pkt"] = ether_stat_multicast_pkt;
        }
        else
        {
            ether_stat_multicast_pkt = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::EtherStatMulticastPkt>();
            ether_stat_multicast_pkt->parent = this;
            children["ether-stat-multicast-pkt"] = ether_stat_multicast_pkt;
        }
        return children.at("ether-stat-multicast-pkt");
    }

    if(child_yang_name == "ether-stat-undersized-pkt")
    {
        if(ether_stat_undersized_pkt != nullptr)
        {
            children["ether-stat-undersized-pkt"] = ether_stat_undersized_pkt;
        }
        else
        {
            ether_stat_undersized_pkt = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::EtherStatUndersizedPkt>();
            ether_stat_undersized_pkt->parent = this;
            children["ether-stat-undersized-pkt"] = ether_stat_undersized_pkt;
        }
        return children.at("ether-stat-undersized-pkt");
    }

    if(child_yang_name == "fcs-errors-stat")
    {
        if(fcs_errors_stat != nullptr)
        {
            children["fcs-errors-stat"] = fcs_errors_stat;
        }
        else
        {
            fcs_errors_stat = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::FcsErrorsStat>();
            fcs_errors_stat->parent = this;
            children["fcs-errors-stat"] = fcs_errors_stat;
        }
        return children.at("fcs-errors-stat");
    }

    if(child_yang_name == "if-in-errors")
    {
        if(if_in_errors != nullptr)
        {
            children["if-in-errors"] = if_in_errors;
        }
        else
        {
            if_in_errors = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::IfInErrors>();
            if_in_errors->parent = this;
            children["if-in-errors"] = if_in_errors;
        }
        return children.at("if-in-errors");
    }

    if(child_yang_name == "if-in-octets")
    {
        if(if_in_octets != nullptr)
        {
            children["if-in-octets"] = if_in_octets;
        }
        else
        {
            if_in_octets = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::IfInOctets>();
            if_in_octets->parent = this;
            children["if-in-octets"] = if_in_octets;
        }
        return children.at("if-in-octets");
    }

    if(child_yang_name == "in8021q-frames")
    {
        if(in8021q_frames != nullptr)
        {
            children["in8021q-frames"] = in8021q_frames;
        }
        else
        {
            in8021q_frames = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::In8021QFrames>();
            in8021q_frames->parent = this;
            children["in8021q-frames"] = in8021q_frames;
        }
        return children.at("in8021q-frames");
    }

    if(child_yang_name == "in-bcast-pkt")
    {
        if(in_bcast_pkt != nullptr)
        {
            children["in-bcast-pkt"] = in_bcast_pkt;
        }
        else
        {
            in_bcast_pkt = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InBcastPkt>();
            in_bcast_pkt->parent = this;
            children["in-bcast-pkt"] = in_bcast_pkt;
        }
        return children.at("in-bcast-pkt");
    }

    if(child_yang_name == "in-drop-abort")
    {
        if(in_drop_abort != nullptr)
        {
            children["in-drop-abort"] = in_drop_abort;
        }
        else
        {
            in_drop_abort = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropAbort>();
            in_drop_abort->parent = this;
            children["in-drop-abort"] = in_drop_abort;
        }
        return children.at("in-drop-abort");
    }

    if(child_yang_name == "in-drop-invalid-dmac")
    {
        if(in_drop_invalid_dmac != nullptr)
        {
            children["in-drop-invalid-dmac"] = in_drop_invalid_dmac;
        }
        else
        {
            in_drop_invalid_dmac = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropInvalidDmac>();
            in_drop_invalid_dmac->parent = this;
            children["in-drop-invalid-dmac"] = in_drop_invalid_dmac;
        }
        return children.at("in-drop-invalid-dmac");
    }

    if(child_yang_name == "in-drop-invalid-encap")
    {
        if(in_drop_invalid_encap != nullptr)
        {
            children["in-drop-invalid-encap"] = in_drop_invalid_encap;
        }
        else
        {
            in_drop_invalid_encap = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropInvalidEncap>();
            in_drop_invalid_encap->parent = this;
            children["in-drop-invalid-encap"] = in_drop_invalid_encap;
        }
        return children.at("in-drop-invalid-encap");
    }

    if(child_yang_name == "in-drop-invalid-vlan")
    {
        if(in_drop_invalid_vlan != nullptr)
        {
            children["in-drop-invalid-vlan"] = in_drop_invalid_vlan;
        }
        else
        {
            in_drop_invalid_vlan = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropInvalidVlan>();
            in_drop_invalid_vlan->parent = this;
            children["in-drop-invalid-vlan"] = in_drop_invalid_vlan;
        }
        return children.at("in-drop-invalid-vlan");
    }

    if(child_yang_name == "in-drop-other")
    {
        if(in_drop_other != nullptr)
        {
            children["in-drop-other"] = in_drop_other;
        }
        else
        {
            in_drop_other = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropOther>();
            in_drop_other->parent = this;
            children["in-drop-other"] = in_drop_other;
        }
        return children.at("in-drop-other");
    }

    if(child_yang_name == "in-drop-overrun")
    {
        if(in_drop_overrun != nullptr)
        {
            children["in-drop-overrun"] = in_drop_overrun;
        }
        else
        {
            in_drop_overrun = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropOverrun>();
            in_drop_overrun->parent = this;
            children["in-drop-overrun"] = in_drop_overrun;
        }
        return children.at("in-drop-overrun");
    }

    if(child_yang_name == "in-error-collisions")
    {
        if(in_error_collisions != nullptr)
        {
            children["in-error-collisions"] = in_error_collisions;
        }
        else
        {
            in_error_collisions = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorCollisions>();
            in_error_collisions->parent = this;
            children["in-error-collisions"] = in_error_collisions;
        }
        return children.at("in-error-collisions");
    }

    if(child_yang_name == "in-error-fragments")
    {
        if(in_error_fragments != nullptr)
        {
            children["in-error-fragments"] = in_error_fragments;
        }
        else
        {
            in_error_fragments = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorFragments>();
            in_error_fragments->parent = this;
            children["in-error-fragments"] = in_error_fragments;
        }
        return children.at("in-error-fragments");
    }

    if(child_yang_name == "in-error-giant")
    {
        if(in_error_giant != nullptr)
        {
            children["in-error-giant"] = in_error_giant;
        }
        else
        {
            in_error_giant = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorGiant>();
            in_error_giant->parent = this;
            children["in-error-giant"] = in_error_giant;
        }
        return children.at("in-error-giant");
    }

    if(child_yang_name == "in-error-jabbers")
    {
        if(in_error_jabbers != nullptr)
        {
            children["in-error-jabbers"] = in_error_jabbers;
        }
        else
        {
            in_error_jabbers = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorJabbers>();
            in_error_jabbers->parent = this;
            children["in-error-jabbers"] = in_error_jabbers;
        }
        return children.at("in-error-jabbers");
    }

    if(child_yang_name == "in-error-other")
    {
        if(in_error_other != nullptr)
        {
            children["in-error-other"] = in_error_other;
        }
        else
        {
            in_error_other = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorOther>();
            in_error_other->parent = this;
            children["in-error-other"] = in_error_other;
        }
        return children.at("in-error-other");
    }

    if(child_yang_name == "in-error-runt")
    {
        if(in_error_runt != nullptr)
        {
            children["in-error-runt"] = in_error_runt;
        }
        else
        {
            in_error_runt = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorRunt>();
            in_error_runt->parent = this;
            children["in-error-runt"] = in_error_runt;
        }
        return children.at("in-error-runt");
    }

    if(child_yang_name == "in-error-symbol")
    {
        if(in_error_symbol != nullptr)
        {
            children["in-error-symbol"] = in_error_symbol;
        }
        else
        {
            in_error_symbol = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorSymbol>();
            in_error_symbol->parent = this;
            children["in-error-symbol"] = in_error_symbol;
        }
        return children.at("in-error-symbol");
    }

    if(child_yang_name == "in-good-bytes")
    {
        if(in_good_bytes != nullptr)
        {
            children["in-good-bytes"] = in_good_bytes;
        }
        else
        {
            in_good_bytes = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InGoodBytes>();
            in_good_bytes->parent = this;
            children["in-good-bytes"] = in_good_bytes;
        }
        return children.at("in-good-bytes");
    }

    if(child_yang_name == "in-good-pkts")
    {
        if(in_good_pkts != nullptr)
        {
            children["in-good-pkts"] = in_good_pkts;
        }
        else
        {
            in_good_pkts = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InGoodPkts>();
            in_good_pkts->parent = this;
            children["in-good-pkts"] = in_good_pkts;
        }
        return children.at("in-good-pkts");
    }

    if(child_yang_name == "in-mcast-pkt")
    {
        if(in_mcast_pkt != nullptr)
        {
            children["in-mcast-pkt"] = in_mcast_pkt;
        }
        else
        {
            in_mcast_pkt = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InMcastPkt>();
            in_mcast_pkt->parent = this;
            children["in-mcast-pkt"] = in_mcast_pkt;
        }
        return children.at("in-mcast-pkt");
    }

    if(child_yang_name == "in-mib-giant")
    {
        if(in_mib_giant != nullptr)
        {
            children["in-mib-giant"] = in_mib_giant;
        }
        else
        {
            in_mib_giant = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InMibGiant>();
            in_mib_giant->parent = this;
            children["in-mib-giant"] = in_mib_giant;
        }
        return children.at("in-mib-giant");
    }

    if(child_yang_name == "in-mib-jabber")
    {
        if(in_mib_jabber != nullptr)
        {
            children["in-mib-jabber"] = in_mib_jabber;
        }
        else
        {
            in_mib_jabber = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InMibJabber>();
            in_mib_jabber->parent = this;
            children["in-mib-jabber"] = in_mib_jabber;
        }
        return children.at("in-mib-jabber");
    }

    if(child_yang_name == "in-mibcrc")
    {
        if(in_mibcrc != nullptr)
        {
            children["in-mibcrc"] = in_mibcrc;
        }
        else
        {
            in_mibcrc = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InMibcrc>();
            in_mibcrc->parent = this;
            children["in-mibcrc"] = in_mibcrc;
        }
        return children.at("in-mibcrc");
    }

    if(child_yang_name == "in-pause-frame")
    {
        if(in_pause_frame != nullptr)
        {
            children["in-pause-frame"] = in_pause_frame;
        }
        else
        {
            in_pause_frame = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPauseFrame>();
            in_pause_frame->parent = this;
            children["in-pause-frame"] = in_pause_frame;
        }
        return children.at("in-pause-frame");
    }

    if(child_yang_name == "in-pkt64-octet")
    {
        if(in_pkt64_octet != nullptr)
        {
            children["in-pkt64-octet"] = in_pkt64_octet;
        }
        else
        {
            in_pkt64_octet = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkt64Octet>();
            in_pkt64_octet->parent = this;
            children["in-pkt64-octet"] = in_pkt64_octet;
        }
        return children.at("in-pkt64-octet");
    }

    if(child_yang_name == "in-pkts1024-to1518-octets")
    {
        if(in_pkts1024_to1518_octets != nullptr)
        {
            children["in-pkts1024-to1518-octets"] = in_pkts1024_to1518_octets;
        }
        else
        {
            in_pkts1024_to1518_octets = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkts1024To1518Octets>();
            in_pkts1024_to1518_octets->parent = this;
            children["in-pkts1024-to1518-octets"] = in_pkts1024_to1518_octets;
        }
        return children.at("in-pkts1024-to1518-octets");
    }

    if(child_yang_name == "in-pkts128-to255-octets")
    {
        if(in_pkts128_to255_octets != nullptr)
        {
            children["in-pkts128-to255-octets"] = in_pkts128_to255_octets;
        }
        else
        {
            in_pkts128_to255_octets = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkts128To255Octets>();
            in_pkts128_to255_octets->parent = this;
            children["in-pkts128-to255-octets"] = in_pkts128_to255_octets;
        }
        return children.at("in-pkts128-to255-octets");
    }

    if(child_yang_name == "in-pkts1519-max-octets")
    {
        if(in_pkts1519_max_octets != nullptr)
        {
            children["in-pkts1519-max-octets"] = in_pkts1519_max_octets;
        }
        else
        {
            in_pkts1519_max_octets = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkts1519MaxOctets>();
            in_pkts1519_max_octets->parent = this;
            children["in-pkts1519-max-octets"] = in_pkts1519_max_octets;
        }
        return children.at("in-pkts1519-max-octets");
    }

    if(child_yang_name == "in-pkts256-to511-octets")
    {
        if(in_pkts256_to511_octets != nullptr)
        {
            children["in-pkts256-to511-octets"] = in_pkts256_to511_octets;
        }
        else
        {
            in_pkts256_to511_octets = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkts256To511Octets>();
            in_pkts256_to511_octets->parent = this;
            children["in-pkts256-to511-octets"] = in_pkts256_to511_octets;
        }
        return children.at("in-pkts256-to511-octets");
    }

    if(child_yang_name == "in-pkts512-to1023-octets")
    {
        if(in_pkts512_to1023_octets != nullptr)
        {
            children["in-pkts512-to1023-octets"] = in_pkts512_to1023_octets;
        }
        else
        {
            in_pkts512_to1023_octets = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkts512To1023Octets>();
            in_pkts512_to1023_octets->parent = this;
            children["in-pkts512-to1023-octets"] = in_pkts512_to1023_octets;
        }
        return children.at("in-pkts512-to1023-octets");
    }

    if(child_yang_name == "in-pkts65-to127-octets")
    {
        if(in_pkts65_to127_octets != nullptr)
        {
            children["in-pkts65-to127-octets"] = in_pkts65_to127_octets;
        }
        else
        {
            in_pkts65_to127_octets = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkts65To127Octets>();
            in_pkts65_to127_octets->parent = this;
            children["in-pkts65-to127-octets"] = in_pkts65_to127_octets;
        }
        return children.at("in-pkts65-to127-octets");
    }

    if(child_yang_name == "in-ucast-pkt")
    {
        if(in_ucast_pkt != nullptr)
        {
            children["in-ucast-pkt"] = in_ucast_pkt;
        }
        else
        {
            in_ucast_pkt = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InUcastPkt>();
            in_ucast_pkt->parent = this;
            children["in-ucast-pkt"] = in_ucast_pkt;
        }
        return children.at("in-ucast-pkt");
    }

    if(child_yang_name == "jabber-stat")
    {
        if(jabber_stat != nullptr)
        {
            children["jabber-stat"] = jabber_stat;
        }
        else
        {
            jabber_stat = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::JabberStat>();
            jabber_stat->parent = this;
            children["jabber-stat"] = jabber_stat;
        }
        return children.at("jabber-stat");
    }

    if(child_yang_name == "long-frames-stat")
    {
        if(long_frames_stat != nullptr)
        {
            children["long-frames-stat"] = long_frames_stat;
        }
        else
        {
            long_frames_stat = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::LongFramesStat>();
            long_frames_stat->parent = this;
            children["long-frames-stat"] = long_frames_stat;
        }
        return children.at("long-frames-stat");
    }

    if(child_yang_name == "octet-stat")
    {
        if(octet_stat != nullptr)
        {
            children["octet-stat"] = octet_stat;
        }
        else
        {
            octet_stat = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OctetStat>();
            octet_stat->parent = this;
            children["octet-stat"] = octet_stat;
        }
        return children.at("octet-stat");
    }

    if(child_yang_name == "out8021q-frames")
    {
        if(out8021q_frames != nullptr)
        {
            children["out8021q-frames"] = out8021q_frames;
        }
        else
        {
            out8021q_frames = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Out8021QFrames>();
            out8021q_frames->parent = this;
            children["out8021q-frames"] = out8021q_frames;
        }
        return children.at("out8021q-frames");
    }

    if(child_yang_name == "out-bcast-pkt")
    {
        if(out_bcast_pkt != nullptr)
        {
            children["out-bcast-pkt"] = out_bcast_pkt;
        }
        else
        {
            out_bcast_pkt = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutBcastPkt>();
            out_bcast_pkt->parent = this;
            children["out-bcast-pkt"] = out_bcast_pkt;
        }
        return children.at("out-bcast-pkt");
    }

    if(child_yang_name == "out-drop-abort")
    {
        if(out_drop_abort != nullptr)
        {
            children["out-drop-abort"] = out_drop_abort;
        }
        else
        {
            out_drop_abort = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutDropAbort>();
            out_drop_abort->parent = this;
            children["out-drop-abort"] = out_drop_abort;
        }
        return children.at("out-drop-abort");
    }

    if(child_yang_name == "out-drop-other")
    {
        if(out_drop_other != nullptr)
        {
            children["out-drop-other"] = out_drop_other;
        }
        else
        {
            out_drop_other = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutDropOther>();
            out_drop_other->parent = this;
            children["out-drop-other"] = out_drop_other;
        }
        return children.at("out-drop-other");
    }

    if(child_yang_name == "out-drop-underrun")
    {
        if(out_drop_underrun != nullptr)
        {
            children["out-drop-underrun"] = out_drop_underrun;
        }
        else
        {
            out_drop_underrun = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutDropUnderrun>();
            out_drop_underrun->parent = this;
            children["out-drop-underrun"] = out_drop_underrun;
        }
        return children.at("out-drop-underrun");
    }

    if(child_yang_name == "out-error-other")
    {
        if(out_error_other != nullptr)
        {
            children["out-error-other"] = out_error_other;
        }
        else
        {
            out_error_other = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutErrorOther>();
            out_error_other->parent = this;
            children["out-error-other"] = out_error_other;
        }
        return children.at("out-error-other");
    }

    if(child_yang_name == "out-good-bytes")
    {
        if(out_good_bytes != nullptr)
        {
            children["out-good-bytes"] = out_good_bytes;
        }
        else
        {
            out_good_bytes = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutGoodBytes>();
            out_good_bytes->parent = this;
            children["out-good-bytes"] = out_good_bytes;
        }
        return children.at("out-good-bytes");
    }

    if(child_yang_name == "out-good-pkts")
    {
        if(out_good_pkts != nullptr)
        {
            children["out-good-pkts"] = out_good_pkts;
        }
        else
        {
            out_good_pkts = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutGoodPkts>();
            out_good_pkts->parent = this;
            children["out-good-pkts"] = out_good_pkts;
        }
        return children.at("out-good-pkts");
    }

    if(child_yang_name == "out-mcast-pkt")
    {
        if(out_mcast_pkt != nullptr)
        {
            children["out-mcast-pkt"] = out_mcast_pkt;
        }
        else
        {
            out_mcast_pkt = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutMcastPkt>();
            out_mcast_pkt->parent = this;
            children["out-mcast-pkt"] = out_mcast_pkt;
        }
        return children.at("out-mcast-pkt");
    }

    if(child_yang_name == "out-octets")
    {
        if(out_octets != nullptr)
        {
            children["out-octets"] = out_octets;
        }
        else
        {
            out_octets = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutOctets>();
            out_octets->parent = this;
            children["out-octets"] = out_octets;
        }
        return children.at("out-octets");
    }

    if(child_yang_name == "out-pause-frames")
    {
        if(out_pause_frames != nullptr)
        {
            children["out-pause-frames"] = out_pause_frames;
        }
        else
        {
            out_pause_frames = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPauseFrames>();
            out_pause_frames->parent = this;
            children["out-pause-frames"] = out_pause_frames;
        }
        return children.at("out-pause-frames");
    }

    if(child_yang_name == "out-pkts10241518-octets")
    {
        if(out_pkts10241518_octets != nullptr)
        {
            children["out-pkts10241518-octets"] = out_pkts10241518_octets;
        }
        else
        {
            out_pkts10241518_octets = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPkts10241518Octets>();
            out_pkts10241518_octets->parent = this;
            children["out-pkts10241518-octets"] = out_pkts10241518_octets;
        }
        return children.at("out-pkts10241518-octets");
    }

    if(child_yang_name == "out-pkts128255-octets")
    {
        if(out_pkts128255_octets != nullptr)
        {
            children["out-pkts128255-octets"] = out_pkts128255_octets;
        }
        else
        {
            out_pkts128255_octets = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPkts128255Octets>();
            out_pkts128255_octets->parent = this;
            children["out-pkts128255-octets"] = out_pkts128255_octets;
        }
        return children.at("out-pkts128255-octets");
    }

    if(child_yang_name == "out-pkts1519-max-octets")
    {
        if(out_pkts1519_max_octets != nullptr)
        {
            children["out-pkts1519-max-octets"] = out_pkts1519_max_octets;
        }
        else
        {
            out_pkts1519_max_octets = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPkts1519MaxOctets>();
            out_pkts1519_max_octets->parent = this;
            children["out-pkts1519-max-octets"] = out_pkts1519_max_octets;
        }
        return children.at("out-pkts1519-max-octets");
    }

    if(child_yang_name == "out-pkts256511-octets")
    {
        if(out_pkts256511_octets != nullptr)
        {
            children["out-pkts256511-octets"] = out_pkts256511_octets;
        }
        else
        {
            out_pkts256511_octets = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPkts256511Octets>();
            out_pkts256511_octets->parent = this;
            children["out-pkts256511-octets"] = out_pkts256511_octets;
        }
        return children.at("out-pkts256511-octets");
    }

    if(child_yang_name == "out-pkts5121023-octets")
    {
        if(out_pkts5121023_octets != nullptr)
        {
            children["out-pkts5121023-octets"] = out_pkts5121023_octets;
        }
        else
        {
            out_pkts5121023_octets = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPkts5121023Octets>();
            out_pkts5121023_octets->parent = this;
            children["out-pkts5121023-octets"] = out_pkts5121023_octets;
        }
        return children.at("out-pkts5121023-octets");
    }

    if(child_yang_name == "out-pkts65127-octets")
    {
        if(out_pkts65127_octets != nullptr)
        {
            children["out-pkts65127-octets"] = out_pkts65127_octets;
        }
        else
        {
            out_pkts65127_octets = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPkts65127Octets>();
            out_pkts65127_octets->parent = this;
            children["out-pkts65127-octets"] = out_pkts65127_octets;
        }
        return children.at("out-pkts65127-octets");
    }

    if(child_yang_name == "out-ucast-pkt")
    {
        if(out_ucast_pkt != nullptr)
        {
            children["out-ucast-pkt"] = out_ucast_pkt;
        }
        else
        {
            out_ucast_pkt = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutUcastPkt>();
            out_ucast_pkt->parent = this;
            children["out-ucast-pkt"] = out_ucast_pkt;
        }
        return children.at("out-ucast-pkt");
    }

    if(child_yang_name == "outpkt64octet")
    {
        if(outpkt64octet != nullptr)
        {
            children["outpkt64octet"] = outpkt64octet;
        }
        else
        {
            outpkt64octet = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Outpkt64Octet>();
            outpkt64octet->parent = this;
            children["outpkt64octet"] = outpkt64octet;
        }
        return children.at("outpkt64octet");
    }

    if(child_yang_name == "oversize-pkt-stat")
    {
        if(oversize_pkt_stat != nullptr)
        {
            children["oversize-pkt-stat"] = oversize_pkt_stat;
        }
        else
        {
            oversize_pkt_stat = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OversizePktStat>();
            oversize_pkt_stat->parent = this;
            children["oversize-pkt-stat"] = oversize_pkt_stat;
        }
        return children.at("oversize-pkt-stat");
    }

    if(child_yang_name == "rx-pkt")
    {
        if(rx_pkt != nullptr)
        {
            children["rx-pkt"] = rx_pkt;
        }
        else
        {
            rx_pkt = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::RxPkt>();
            rx_pkt->parent = this;
            children["rx-pkt"] = rx_pkt;
        }
        return children.at("rx-pkt");
    }

    if(child_yang_name == "rx-util")
    {
        if(rx_util != nullptr)
        {
            children["rx-util"] = rx_util;
        }
        else
        {
            rx_util = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::RxUtil>();
            rx_util->parent = this;
            children["rx-util"] = rx_util;
        }
        return children.at("rx-util");
    }

    if(child_yang_name == "stat-pkt")
    {
        if(stat_pkt != nullptr)
        {
            children["stat-pkt"] = stat_pkt;
        }
        else
        {
            stat_pkt = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::StatPkt>();
            stat_pkt->parent = this;
            children["stat-pkt"] = stat_pkt;
        }
        return children.at("stat-pkt");
    }

    if(child_yang_name == "tx-bad-fcs")
    {
        if(tx_bad_fcs != nullptr)
        {
            children["tx-bad-fcs"] = tx_bad_fcs;
        }
        else
        {
            tx_bad_fcs = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxBadFcs>();
            tx_bad_fcs->parent = this;
            children["tx-bad-fcs"] = tx_bad_fcs;
        }
        return children.at("tx-bad-fcs");
    }

    if(child_yang_name == "tx-fragments")
    {
        if(tx_fragments != nullptr)
        {
            children["tx-fragments"] = tx_fragments;
        }
        else
        {
            tx_fragments = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxFragments>();
            tx_fragments->parent = this;
            children["tx-fragments"] = tx_fragments;
        }
        return children.at("tx-fragments");
    }

    if(child_yang_name == "tx-jabber")
    {
        if(tx_jabber != nullptr)
        {
            children["tx-jabber"] = tx_jabber;
        }
        else
        {
            tx_jabber = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxJabber>();
            tx_jabber->parent = this;
            children["tx-jabber"] = tx_jabber;
        }
        return children.at("tx-jabber");
    }

    if(child_yang_name == "tx-oversized-pkt")
    {
        if(tx_oversized_pkt != nullptr)
        {
            children["tx-oversized-pkt"] = tx_oversized_pkt;
        }
        else
        {
            tx_oversized_pkt = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxOversizedPkt>();
            tx_oversized_pkt->parent = this;
            children["tx-oversized-pkt"] = tx_oversized_pkt;
        }
        return children.at("tx-oversized-pkt");
    }

    if(child_yang_name == "tx-pkt")
    {
        if(tx_pkt != nullptr)
        {
            children["tx-pkt"] = tx_pkt;
        }
        else
        {
            tx_pkt = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxPkt>();
            tx_pkt->parent = this;
            children["tx-pkt"] = tx_pkt;
        }
        return children.at("tx-pkt");
    }

    if(child_yang_name == "tx-undersized-pkt")
    {
        if(tx_undersized_pkt != nullptr)
        {
            children["tx-undersized-pkt"] = tx_undersized_pkt;
        }
        else
        {
            tx_undersized_pkt = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxUndersizedPkt>();
            tx_undersized_pkt->parent = this;
            children["tx-undersized-pkt"] = tx_undersized_pkt;
        }
        return children.at("tx-undersized-pkt");
    }

    if(child_yang_name == "tx-util")
    {
        if(tx_util != nullptr)
        {
            children["tx-util"] = tx_util;
        }
        else
        {
            tx_util = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxUtil>();
            tx_util->parent = this;
            children["tx-util"] = tx_util;
        }
        return children.at("tx-util");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::get_children()
{
    if(children.find("ether10241518-octet") == children.end())
    {
        if(ether10241518_octet != nullptr)
        {
            children["ether10241518-octet"] = ether10241518_octet;
        }
    }

    if(children.find("ether128255-octet") == children.end())
    {
        if(ether128255_octet != nullptr)
        {
            children["ether128255-octet"] = ether128255_octet;
        }
    }

    if(children.find("ether256511-octet") == children.end())
    {
        if(ether256511_octet != nullptr)
        {
            children["ether256511-octet"] = ether256511_octet;
        }
    }

    if(children.find("ether5121023-octet") == children.end())
    {
        if(ether5121023_octet != nullptr)
        {
            children["ether5121023-octet"] = ether5121023_octet;
        }
    }

    if(children.find("ether64-octets") == children.end())
    {
        if(ether64_octets != nullptr)
        {
            children["ether64-octets"] = ether64_octets;
        }
    }

    if(children.find("ether65127-octet") == children.end())
    {
        if(ether65127_octet != nullptr)
        {
            children["ether65127-octet"] = ether65127_octet;
        }
    }

    if(children.find("ether-stat-broadcast-pkt") == children.end())
    {
        if(ether_stat_broadcast_pkt != nullptr)
        {
            children["ether-stat-broadcast-pkt"] = ether_stat_broadcast_pkt;
        }
    }

    if(children.find("ether-stat-multicast-pkt") == children.end())
    {
        if(ether_stat_multicast_pkt != nullptr)
        {
            children["ether-stat-multicast-pkt"] = ether_stat_multicast_pkt;
        }
    }

    if(children.find("ether-stat-undersized-pkt") == children.end())
    {
        if(ether_stat_undersized_pkt != nullptr)
        {
            children["ether-stat-undersized-pkt"] = ether_stat_undersized_pkt;
        }
    }

    if(children.find("fcs-errors-stat") == children.end())
    {
        if(fcs_errors_stat != nullptr)
        {
            children["fcs-errors-stat"] = fcs_errors_stat;
        }
    }

    if(children.find("if-in-errors") == children.end())
    {
        if(if_in_errors != nullptr)
        {
            children["if-in-errors"] = if_in_errors;
        }
    }

    if(children.find("if-in-octets") == children.end())
    {
        if(if_in_octets != nullptr)
        {
            children["if-in-octets"] = if_in_octets;
        }
    }

    if(children.find("in8021q-frames") == children.end())
    {
        if(in8021q_frames != nullptr)
        {
            children["in8021q-frames"] = in8021q_frames;
        }
    }

    if(children.find("in-bcast-pkt") == children.end())
    {
        if(in_bcast_pkt != nullptr)
        {
            children["in-bcast-pkt"] = in_bcast_pkt;
        }
    }

    if(children.find("in-drop-abort") == children.end())
    {
        if(in_drop_abort != nullptr)
        {
            children["in-drop-abort"] = in_drop_abort;
        }
    }

    if(children.find("in-drop-invalid-dmac") == children.end())
    {
        if(in_drop_invalid_dmac != nullptr)
        {
            children["in-drop-invalid-dmac"] = in_drop_invalid_dmac;
        }
    }

    if(children.find("in-drop-invalid-encap") == children.end())
    {
        if(in_drop_invalid_encap != nullptr)
        {
            children["in-drop-invalid-encap"] = in_drop_invalid_encap;
        }
    }

    if(children.find("in-drop-invalid-vlan") == children.end())
    {
        if(in_drop_invalid_vlan != nullptr)
        {
            children["in-drop-invalid-vlan"] = in_drop_invalid_vlan;
        }
    }

    if(children.find("in-drop-other") == children.end())
    {
        if(in_drop_other != nullptr)
        {
            children["in-drop-other"] = in_drop_other;
        }
    }

    if(children.find("in-drop-overrun") == children.end())
    {
        if(in_drop_overrun != nullptr)
        {
            children["in-drop-overrun"] = in_drop_overrun;
        }
    }

    if(children.find("in-error-collisions") == children.end())
    {
        if(in_error_collisions != nullptr)
        {
            children["in-error-collisions"] = in_error_collisions;
        }
    }

    if(children.find("in-error-fragments") == children.end())
    {
        if(in_error_fragments != nullptr)
        {
            children["in-error-fragments"] = in_error_fragments;
        }
    }

    if(children.find("in-error-giant") == children.end())
    {
        if(in_error_giant != nullptr)
        {
            children["in-error-giant"] = in_error_giant;
        }
    }

    if(children.find("in-error-jabbers") == children.end())
    {
        if(in_error_jabbers != nullptr)
        {
            children["in-error-jabbers"] = in_error_jabbers;
        }
    }

    if(children.find("in-error-other") == children.end())
    {
        if(in_error_other != nullptr)
        {
            children["in-error-other"] = in_error_other;
        }
    }

    if(children.find("in-error-runt") == children.end())
    {
        if(in_error_runt != nullptr)
        {
            children["in-error-runt"] = in_error_runt;
        }
    }

    if(children.find("in-error-symbol") == children.end())
    {
        if(in_error_symbol != nullptr)
        {
            children["in-error-symbol"] = in_error_symbol;
        }
    }

    if(children.find("in-good-bytes") == children.end())
    {
        if(in_good_bytes != nullptr)
        {
            children["in-good-bytes"] = in_good_bytes;
        }
    }

    if(children.find("in-good-pkts") == children.end())
    {
        if(in_good_pkts != nullptr)
        {
            children["in-good-pkts"] = in_good_pkts;
        }
    }

    if(children.find("in-mcast-pkt") == children.end())
    {
        if(in_mcast_pkt != nullptr)
        {
            children["in-mcast-pkt"] = in_mcast_pkt;
        }
    }

    if(children.find("in-mib-giant") == children.end())
    {
        if(in_mib_giant != nullptr)
        {
            children["in-mib-giant"] = in_mib_giant;
        }
    }

    if(children.find("in-mib-jabber") == children.end())
    {
        if(in_mib_jabber != nullptr)
        {
            children["in-mib-jabber"] = in_mib_jabber;
        }
    }

    if(children.find("in-mibcrc") == children.end())
    {
        if(in_mibcrc != nullptr)
        {
            children["in-mibcrc"] = in_mibcrc;
        }
    }

    if(children.find("in-pause-frame") == children.end())
    {
        if(in_pause_frame != nullptr)
        {
            children["in-pause-frame"] = in_pause_frame;
        }
    }

    if(children.find("in-pkt64-octet") == children.end())
    {
        if(in_pkt64_octet != nullptr)
        {
            children["in-pkt64-octet"] = in_pkt64_octet;
        }
    }

    if(children.find("in-pkts1024-to1518-octets") == children.end())
    {
        if(in_pkts1024_to1518_octets != nullptr)
        {
            children["in-pkts1024-to1518-octets"] = in_pkts1024_to1518_octets;
        }
    }

    if(children.find("in-pkts128-to255-octets") == children.end())
    {
        if(in_pkts128_to255_octets != nullptr)
        {
            children["in-pkts128-to255-octets"] = in_pkts128_to255_octets;
        }
    }

    if(children.find("in-pkts1519-max-octets") == children.end())
    {
        if(in_pkts1519_max_octets != nullptr)
        {
            children["in-pkts1519-max-octets"] = in_pkts1519_max_octets;
        }
    }

    if(children.find("in-pkts256-to511-octets") == children.end())
    {
        if(in_pkts256_to511_octets != nullptr)
        {
            children["in-pkts256-to511-octets"] = in_pkts256_to511_octets;
        }
    }

    if(children.find("in-pkts512-to1023-octets") == children.end())
    {
        if(in_pkts512_to1023_octets != nullptr)
        {
            children["in-pkts512-to1023-octets"] = in_pkts512_to1023_octets;
        }
    }

    if(children.find("in-pkts65-to127-octets") == children.end())
    {
        if(in_pkts65_to127_octets != nullptr)
        {
            children["in-pkts65-to127-octets"] = in_pkts65_to127_octets;
        }
    }

    if(children.find("in-ucast-pkt") == children.end())
    {
        if(in_ucast_pkt != nullptr)
        {
            children["in-ucast-pkt"] = in_ucast_pkt;
        }
    }

    if(children.find("jabber-stat") == children.end())
    {
        if(jabber_stat != nullptr)
        {
            children["jabber-stat"] = jabber_stat;
        }
    }

    if(children.find("long-frames-stat") == children.end())
    {
        if(long_frames_stat != nullptr)
        {
            children["long-frames-stat"] = long_frames_stat;
        }
    }

    if(children.find("octet-stat") == children.end())
    {
        if(octet_stat != nullptr)
        {
            children["octet-stat"] = octet_stat;
        }
    }

    if(children.find("out8021q-frames") == children.end())
    {
        if(out8021q_frames != nullptr)
        {
            children["out8021q-frames"] = out8021q_frames;
        }
    }

    if(children.find("out-bcast-pkt") == children.end())
    {
        if(out_bcast_pkt != nullptr)
        {
            children["out-bcast-pkt"] = out_bcast_pkt;
        }
    }

    if(children.find("out-drop-abort") == children.end())
    {
        if(out_drop_abort != nullptr)
        {
            children["out-drop-abort"] = out_drop_abort;
        }
    }

    if(children.find("out-drop-other") == children.end())
    {
        if(out_drop_other != nullptr)
        {
            children["out-drop-other"] = out_drop_other;
        }
    }

    if(children.find("out-drop-underrun") == children.end())
    {
        if(out_drop_underrun != nullptr)
        {
            children["out-drop-underrun"] = out_drop_underrun;
        }
    }

    if(children.find("out-error-other") == children.end())
    {
        if(out_error_other != nullptr)
        {
            children["out-error-other"] = out_error_other;
        }
    }

    if(children.find("out-good-bytes") == children.end())
    {
        if(out_good_bytes != nullptr)
        {
            children["out-good-bytes"] = out_good_bytes;
        }
    }

    if(children.find("out-good-pkts") == children.end())
    {
        if(out_good_pkts != nullptr)
        {
            children["out-good-pkts"] = out_good_pkts;
        }
    }

    if(children.find("out-mcast-pkt") == children.end())
    {
        if(out_mcast_pkt != nullptr)
        {
            children["out-mcast-pkt"] = out_mcast_pkt;
        }
    }

    if(children.find("out-octets") == children.end())
    {
        if(out_octets != nullptr)
        {
            children["out-octets"] = out_octets;
        }
    }

    if(children.find("out-pause-frames") == children.end())
    {
        if(out_pause_frames != nullptr)
        {
            children["out-pause-frames"] = out_pause_frames;
        }
    }

    if(children.find("out-pkts10241518-octets") == children.end())
    {
        if(out_pkts10241518_octets != nullptr)
        {
            children["out-pkts10241518-octets"] = out_pkts10241518_octets;
        }
    }

    if(children.find("out-pkts128255-octets") == children.end())
    {
        if(out_pkts128255_octets != nullptr)
        {
            children["out-pkts128255-octets"] = out_pkts128255_octets;
        }
    }

    if(children.find("out-pkts1519-max-octets") == children.end())
    {
        if(out_pkts1519_max_octets != nullptr)
        {
            children["out-pkts1519-max-octets"] = out_pkts1519_max_octets;
        }
    }

    if(children.find("out-pkts256511-octets") == children.end())
    {
        if(out_pkts256511_octets != nullptr)
        {
            children["out-pkts256511-octets"] = out_pkts256511_octets;
        }
    }

    if(children.find("out-pkts5121023-octets") == children.end())
    {
        if(out_pkts5121023_octets != nullptr)
        {
            children["out-pkts5121023-octets"] = out_pkts5121023_octets;
        }
    }

    if(children.find("out-pkts65127-octets") == children.end())
    {
        if(out_pkts65127_octets != nullptr)
        {
            children["out-pkts65127-octets"] = out_pkts65127_octets;
        }
    }

    if(children.find("out-ucast-pkt") == children.end())
    {
        if(out_ucast_pkt != nullptr)
        {
            children["out-ucast-pkt"] = out_ucast_pkt;
        }
    }

    if(children.find("outpkt64octet") == children.end())
    {
        if(outpkt64octet != nullptr)
        {
            children["outpkt64octet"] = outpkt64octet;
        }
    }

    if(children.find("oversize-pkt-stat") == children.end())
    {
        if(oversize_pkt_stat != nullptr)
        {
            children["oversize-pkt-stat"] = oversize_pkt_stat;
        }
    }

    if(children.find("rx-pkt") == children.end())
    {
        if(rx_pkt != nullptr)
        {
            children["rx-pkt"] = rx_pkt;
        }
    }

    if(children.find("rx-util") == children.end())
    {
        if(rx_util != nullptr)
        {
            children["rx-util"] = rx_util;
        }
    }

    if(children.find("stat-pkt") == children.end())
    {
        if(stat_pkt != nullptr)
        {
            children["stat-pkt"] = stat_pkt;
        }
    }

    if(children.find("tx-bad-fcs") == children.end())
    {
        if(tx_bad_fcs != nullptr)
        {
            children["tx-bad-fcs"] = tx_bad_fcs;
        }
    }

    if(children.find("tx-fragments") == children.end())
    {
        if(tx_fragments != nullptr)
        {
            children["tx-fragments"] = tx_fragments;
        }
    }

    if(children.find("tx-jabber") == children.end())
    {
        if(tx_jabber != nullptr)
        {
            children["tx-jabber"] = tx_jabber;
        }
    }

    if(children.find("tx-oversized-pkt") == children.end())
    {
        if(tx_oversized_pkt != nullptr)
        {
            children["tx-oversized-pkt"] = tx_oversized_pkt;
        }
    }

    if(children.find("tx-pkt") == children.end())
    {
        if(tx_pkt != nullptr)
        {
            children["tx-pkt"] = tx_pkt;
        }
    }

    if(children.find("tx-undersized-pkt") == children.end())
    {
        if(tx_undersized_pkt != nullptr)
        {
            children["tx-undersized-pkt"] = tx_undersized_pkt;
        }
    }

    if(children.find("tx-util") == children.end())
    {
        if(tx_util != nullptr)
        {
            children["tx-util"] = tx_util;
        }
    }

    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "slot-number")
    {
        slot_number = value;
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::RxPkt::RxPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "rx-pkt"; yang_parent_name = "second30-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::RxPkt::~RxPkt()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::RxPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::RxPkt::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::RxPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-pkt";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::RxPkt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RxPkt' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::RxPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::RxPkt::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::RxPkt::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::StatPkt::StatPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "stat-pkt"; yang_parent_name = "second30-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::StatPkt::~StatPkt()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::StatPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::StatPkt::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::StatPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stat-pkt";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::StatPkt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StatPkt' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::StatPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::StatPkt::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::StatPkt::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OctetStat::OctetStat()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "octet-stat"; yang_parent_name = "second30-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OctetStat::~OctetStat()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OctetStat::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OctetStat::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OctetStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "octet-stat";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OctetStat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OctetStat' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OctetStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OctetStat::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OctetStat::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OversizePktStat::OversizePktStat()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "oversize-pkt-stat"; yang_parent_name = "second30-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OversizePktStat::~OversizePktStat()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OversizePktStat::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OversizePktStat::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OversizePktStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oversize-pkt-stat";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OversizePktStat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OversizePktStat' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OversizePktStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OversizePktStat::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OversizePktStat::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::FcsErrorsStat::FcsErrorsStat()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "fcs-errors-stat"; yang_parent_name = "second30-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::FcsErrorsStat::~FcsErrorsStat()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::FcsErrorsStat::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::FcsErrorsStat::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::FcsErrorsStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fcs-errors-stat";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::FcsErrorsStat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FcsErrorsStat' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::FcsErrorsStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::FcsErrorsStat::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::FcsErrorsStat::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::LongFramesStat::LongFramesStat()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "long-frames-stat"; yang_parent_name = "second30-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::LongFramesStat::~LongFramesStat()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::LongFramesStat::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::LongFramesStat::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::LongFramesStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "long-frames-stat";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::LongFramesStat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LongFramesStat' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::LongFramesStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::LongFramesStat::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::LongFramesStat::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::JabberStat::JabberStat()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "jabber-stat"; yang_parent_name = "second30-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::JabberStat::~JabberStat()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::JabberStat::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::JabberStat::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::JabberStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "jabber-stat";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::JabberStat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'JabberStat' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::JabberStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::JabberStat::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::JabberStat::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether64Octets::Ether64Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "ether64-octets"; yang_parent_name = "second30-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether64Octets::~Ether64Octets()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether64Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether64Octets::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether64Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether64-octets";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether64Octets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ether64Octets' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether64Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether64Octets::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether64Octets::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether65127Octet::Ether65127Octet()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "ether65127-octet"; yang_parent_name = "second30-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether65127Octet::~Ether65127Octet()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether65127Octet::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether65127Octet::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether65127Octet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether65127-octet";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether65127Octet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ether65127Octet' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether65127Octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether65127Octet::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether65127Octet::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether128255Octet::Ether128255Octet()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "ether128255-octet"; yang_parent_name = "second30-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether128255Octet::~Ether128255Octet()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether128255Octet::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether128255Octet::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether128255Octet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether128255-octet";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether128255Octet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ether128255Octet' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether128255Octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether128255Octet::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether128255Octet::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether256511Octet::Ether256511Octet()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "ether256511-octet"; yang_parent_name = "second30-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether256511Octet::~Ether256511Octet()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether256511Octet::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether256511Octet::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether256511Octet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether256511-octet";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether256511Octet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ether256511Octet' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether256511Octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether256511Octet::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether256511Octet::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether5121023Octet::Ether5121023Octet()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "ether5121023-octet"; yang_parent_name = "second30-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether5121023Octet::~Ether5121023Octet()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether5121023Octet::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether5121023Octet::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether5121023Octet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether5121023-octet";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether5121023Octet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ether5121023Octet' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether5121023Octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether5121023Octet::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether5121023Octet::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether10241518Octet::Ether10241518Octet()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "ether10241518-octet"; yang_parent_name = "second30-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether10241518Octet::~Ether10241518Octet()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether10241518Octet::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether10241518Octet::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether10241518Octet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether10241518-octet";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether10241518Octet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ether10241518Octet' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether10241518Octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether10241518Octet::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether10241518Octet::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InUcastPkt::InUcastPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-ucast-pkt"; yang_parent_name = "second30-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InUcastPkt::~InUcastPkt()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InUcastPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InUcastPkt::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InUcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-ucast-pkt";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InUcastPkt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InUcastPkt' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InUcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InUcastPkt::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InUcastPkt::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InMcastPkt::InMcastPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-mcast-pkt"; yang_parent_name = "second30-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InMcastPkt::~InMcastPkt()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InMcastPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InMcastPkt::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InMcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-mcast-pkt";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InMcastPkt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InMcastPkt' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InMcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InMcastPkt::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InMcastPkt::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InBcastPkt::InBcastPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-bcast-pkt"; yang_parent_name = "second30-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InBcastPkt::~InBcastPkt()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InBcastPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InBcastPkt::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InBcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-bcast-pkt";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InBcastPkt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InBcastPkt' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InBcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InBcastPkt::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InBcastPkt::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutUcastPkt::OutUcastPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "out-ucast-pkt"; yang_parent_name = "second30-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutUcastPkt::~OutUcastPkt()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutUcastPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutUcastPkt::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutUcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-ucast-pkt";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutUcastPkt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutUcastPkt' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutUcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutUcastPkt::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutUcastPkt::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutBcastPkt::OutBcastPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "out-bcast-pkt"; yang_parent_name = "second30-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutBcastPkt::~OutBcastPkt()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutBcastPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutBcastPkt::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutBcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-bcast-pkt";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutBcastPkt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutBcastPkt' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutBcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutBcastPkt::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutBcastPkt::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutMcastPkt::OutMcastPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "out-mcast-pkt"; yang_parent_name = "second30-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutMcastPkt::~OutMcastPkt()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutMcastPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutMcastPkt::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutMcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-mcast-pkt";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutMcastPkt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutMcastPkt' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutMcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutMcastPkt::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutMcastPkt::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxPkt::TxPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "tx-pkt"; yang_parent_name = "second30-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxPkt::~TxPkt()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxPkt::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-pkt";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxPkt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TxPkt' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxPkt::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxPkt::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::IfInErrors::IfInErrors()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "if-in-errors"; yang_parent_name = "second30-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::IfInErrors::~IfInErrors()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::IfInErrors::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::IfInErrors::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::IfInErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-in-errors";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::IfInErrors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IfInErrors' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::IfInErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::IfInErrors::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::IfInErrors::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::IfInOctets::IfInOctets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "if-in-octets"; yang_parent_name = "second30-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::IfInOctets::~IfInOctets()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::IfInOctets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::IfInOctets::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::IfInOctets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-in-octets";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::IfInOctets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IfInOctets' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::IfInOctets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::IfInOctets::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::IfInOctets::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::EtherStatMulticastPkt::EtherStatMulticastPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "ether-stat-multicast-pkt"; yang_parent_name = "second30-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::EtherStatMulticastPkt::~EtherStatMulticastPkt()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::EtherStatMulticastPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::EtherStatMulticastPkt::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::EtherStatMulticastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether-stat-multicast-pkt";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::EtherStatMulticastPkt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EtherStatMulticastPkt' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::EtherStatMulticastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::EtherStatMulticastPkt::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::EtherStatMulticastPkt::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::EtherStatBroadcastPkt::EtherStatBroadcastPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "ether-stat-broadcast-pkt"; yang_parent_name = "second30-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::EtherStatBroadcastPkt::~EtherStatBroadcastPkt()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::EtherStatBroadcastPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::EtherStatBroadcastPkt::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::EtherStatBroadcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether-stat-broadcast-pkt";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::EtherStatBroadcastPkt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EtherStatBroadcastPkt' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::EtherStatBroadcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::EtherStatBroadcastPkt::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::EtherStatBroadcastPkt::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::EtherStatUndersizedPkt::EtherStatUndersizedPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "ether-stat-undersized-pkt"; yang_parent_name = "second30-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::EtherStatUndersizedPkt::~EtherStatUndersizedPkt()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::EtherStatUndersizedPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::EtherStatUndersizedPkt::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::EtherStatUndersizedPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether-stat-undersized-pkt";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::EtherStatUndersizedPkt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EtherStatUndersizedPkt' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::EtherStatUndersizedPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::EtherStatUndersizedPkt::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::EtherStatUndersizedPkt::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutOctets::OutOctets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "out-octets"; yang_parent_name = "second30-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutOctets::~OutOctets()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutOctets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutOctets::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutOctets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-octets";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutOctets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutOctets' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutOctets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutOctets::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutOctets::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPauseFrame::InPauseFrame()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-pause-frame"; yang_parent_name = "second30-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPauseFrame::~InPauseFrame()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPauseFrame::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPauseFrame::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPauseFrame::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pause-frame";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPauseFrame::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InPauseFrame' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPauseFrame::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPauseFrame::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPauseFrame::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InGoodBytes::InGoodBytes()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-good-bytes"; yang_parent_name = "second30-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InGoodBytes::~InGoodBytes()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InGoodBytes::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InGoodBytes::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InGoodBytes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-good-bytes";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InGoodBytes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InGoodBytes' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InGoodBytes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InGoodBytes::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InGoodBytes::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::In8021QFrames::In8021QFrames()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in8021q-frames"; yang_parent_name = "second30-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::In8021QFrames::~In8021QFrames()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::In8021QFrames::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::In8021QFrames::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::In8021QFrames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in8021q-frames";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::In8021QFrames::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'In8021QFrames' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::In8021QFrames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::In8021QFrames::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::In8021QFrames::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkts1519MaxOctets::InPkts1519MaxOctets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-pkts1519-max-octets"; yang_parent_name = "second30-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkts1519MaxOctets::~InPkts1519MaxOctets()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkts1519MaxOctets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkts1519MaxOctets::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkts1519MaxOctets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts1519-max-octets";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkts1519MaxOctets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InPkts1519MaxOctets' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkts1519MaxOctets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkts1519MaxOctets::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkts1519MaxOctets::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InGoodPkts::InGoodPkts()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-good-pkts"; yang_parent_name = "second30-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InGoodPkts::~InGoodPkts()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InGoodPkts::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InGoodPkts::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InGoodPkts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-good-pkts";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InGoodPkts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InGoodPkts' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InGoodPkts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InGoodPkts::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InGoodPkts::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropOverrun::InDropOverrun()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-drop-overrun"; yang_parent_name = "second30-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropOverrun::~InDropOverrun()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropOverrun::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropOverrun::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropOverrun::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-drop-overrun";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropOverrun::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InDropOverrun' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropOverrun::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropOverrun::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropOverrun::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropAbort::InDropAbort()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-drop-abort"; yang_parent_name = "second30-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropAbort::~InDropAbort()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropAbort::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropAbort::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropAbort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-drop-abort";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropAbort::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InDropAbort' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropAbort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropAbort::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropAbort::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropInvalidVlan::InDropInvalidVlan()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-drop-invalid-vlan"; yang_parent_name = "second30-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropInvalidVlan::~InDropInvalidVlan()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropInvalidVlan::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropInvalidVlan::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropInvalidVlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-drop-invalid-vlan";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropInvalidVlan::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InDropInvalidVlan' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropInvalidVlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropInvalidVlan::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropInvalidVlan::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropInvalidDmac::InDropInvalidDmac()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-drop-invalid-dmac"; yang_parent_name = "second30-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropInvalidDmac::~InDropInvalidDmac()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropInvalidDmac::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropInvalidDmac::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropInvalidDmac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-drop-invalid-dmac";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropInvalidDmac::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InDropInvalidDmac' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropInvalidDmac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropInvalidDmac::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropInvalidDmac::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropInvalidEncap::InDropInvalidEncap()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-drop-invalid-encap"; yang_parent_name = "second30-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropInvalidEncap::~InDropInvalidEncap()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropInvalidEncap::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropInvalidEncap::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropInvalidEncap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-drop-invalid-encap";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropInvalidEncap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InDropInvalidEncap' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropInvalidEncap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropInvalidEncap::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropInvalidEncap::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropOther::InDropOther()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-drop-other"; yang_parent_name = "second30-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropOther::~InDropOther()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropOther::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropOther::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropOther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-drop-other";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropOther::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InDropOther' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropOther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropOther::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropOther::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InMibGiant::InMibGiant()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-mib-giant"; yang_parent_name = "second30-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InMibGiant::~InMibGiant()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InMibGiant::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InMibGiant::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InMibGiant::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-mib-giant";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InMibGiant::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InMibGiant' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InMibGiant::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InMibGiant::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InMibGiant::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InMibJabber::InMibJabber()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-mib-jabber"; yang_parent_name = "second30-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InMibJabber::~InMibJabber()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InMibJabber::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InMibJabber::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InMibJabber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-mib-jabber";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InMibJabber::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InMibJabber' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InMibJabber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InMibJabber::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InMibJabber::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InMibcrc::InMibcrc()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-mibcrc"; yang_parent_name = "second30-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InMibcrc::~InMibcrc()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InMibcrc::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InMibcrc::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InMibcrc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-mibcrc";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InMibcrc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InMibcrc' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InMibcrc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InMibcrc::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InMibcrc::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorCollisions::InErrorCollisions()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-error-collisions"; yang_parent_name = "second30-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorCollisions::~InErrorCollisions()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorCollisions::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorCollisions::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorCollisions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-collisions";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorCollisions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InErrorCollisions' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorCollisions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorCollisions::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorCollisions::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorSymbol::InErrorSymbol()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-error-symbol"; yang_parent_name = "second30-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorSymbol::~InErrorSymbol()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorSymbol::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorSymbol::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorSymbol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-symbol";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorSymbol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InErrorSymbol' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorSymbol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorSymbol::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorSymbol::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutGoodBytes::OutGoodBytes()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "out-good-bytes"; yang_parent_name = "second30-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutGoodBytes::~OutGoodBytes()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutGoodBytes::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutGoodBytes::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutGoodBytes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-good-bytes";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutGoodBytes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutGoodBytes' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutGoodBytes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutGoodBytes::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutGoodBytes::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Out8021QFrames::Out8021QFrames()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "out8021q-frames"; yang_parent_name = "second30-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Out8021QFrames::~Out8021QFrames()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Out8021QFrames::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Out8021QFrames::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Out8021QFrames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out8021q-frames";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Out8021QFrames::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Out8021QFrames' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Out8021QFrames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Out8021QFrames::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Out8021QFrames::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPauseFrames::OutPauseFrames()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "out-pause-frames"; yang_parent_name = "second30-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPauseFrames::~OutPauseFrames()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPauseFrames::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPauseFrames::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPauseFrames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pause-frames";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPauseFrames::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutPauseFrames' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPauseFrames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPauseFrames::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPauseFrames::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPkts1519MaxOctets::OutPkts1519MaxOctets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "out-pkts1519-max-octets"; yang_parent_name = "second30-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPkts1519MaxOctets::~OutPkts1519MaxOctets()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPkts1519MaxOctets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPkts1519MaxOctets::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPkts1519MaxOctets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts1519-max-octets";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPkts1519MaxOctets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutPkts1519MaxOctets' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPkts1519MaxOctets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPkts1519MaxOctets::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPkts1519MaxOctets::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutGoodPkts::OutGoodPkts()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "out-good-pkts"; yang_parent_name = "second30-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutGoodPkts::~OutGoodPkts()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutGoodPkts::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutGoodPkts::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutGoodPkts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-good-pkts";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutGoodPkts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutGoodPkts' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutGoodPkts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutGoodPkts::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutGoodPkts::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutDropUnderrun::OutDropUnderrun()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "out-drop-underrun"; yang_parent_name = "second30-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutDropUnderrun::~OutDropUnderrun()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutDropUnderrun::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutDropUnderrun::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutDropUnderrun::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-drop-underrun";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutDropUnderrun::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutDropUnderrun' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutDropUnderrun::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutDropUnderrun::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutDropUnderrun::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutDropAbort::OutDropAbort()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "out-drop-abort"; yang_parent_name = "second30-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutDropAbort::~OutDropAbort()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutDropAbort::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutDropAbort::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutDropAbort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-drop-abort";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutDropAbort::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutDropAbort' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutDropAbort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutDropAbort::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutDropAbort::set_value(const std::string & value_path, std::string value)
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


}
}

