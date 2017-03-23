
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_pmengine_oper_1.hpp"
#include "Cisco_IOS_XR_pmengine_oper_2.hpp"

namespace ydk {
namespace Cisco_IOS_XR_pmengine_oper {

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesrFe::SesrFe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{
    yang_name = "sesr-fe"; yang_parent_name = "otu-second30otn";
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesrFe::~SesrFe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesrFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesrFe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesrFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sesr-fe";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesrFe::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesrFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesrFe::get_children()
{
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::SesrFe::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::UasFe::UasFe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{
    yang_name = "uas-fe"; yang_parent_name = "otu-second30otn";
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::UasFe::~UasFe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::UasFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::UasFe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::UasFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uas-fe";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::UasFe::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::UasFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::UasFe::get_children()
{
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::UasFe::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BbeFe::BbeFe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{
    yang_name = "bbe-fe"; yang_parent_name = "otu-second30otn";
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BbeFe::~BbeFe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BbeFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BbeFe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BbeFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bbe-fe";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BbeFe::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BbeFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BbeFe::get_children()
{
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BbeFe::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BberFe::BberFe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{
    yang_name = "bber-fe"; yang_parent_name = "otu-second30otn";
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BberFe::~BberFe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BberFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BberFe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BberFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bber-fe";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BberFe::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BberFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BberFe::get_children()
{
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::BberFe::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::FcFe::FcFe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{
    yang_name = "fc-fe"; yang_parent_name = "otu-second30otn";
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::FcFe::~FcFe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::FcFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::FcFe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::FcFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fc-fe";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::FcFe::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::FcFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::FcFe::get_children()
{
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuSecond30::OtuSecond30Otns::OtuSecond30Otn::FcFe::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24()
    :
    otu_hour24fecs(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs>())
	,otu_hour24otns(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns>())
{
    otu_hour24fecs->parent = this;
    children["otu-hour24fecs"] = otu_hour24fecs;

    otu_hour24otns->parent = this;
    children["otu-hour24otns"] = otu_hour24otns;

    yang_name = "otu-hour24"; yang_parent_name = "otu-current";
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::~OtuHour24()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::has_data() const
{
    return (otu_hour24fecs !=  nullptr && otu_hour24fecs->has_data())
	|| (otu_hour24otns !=  nullptr && otu_hour24otns->has_data());
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::has_operation() const
{
    return is_set(operation)
	|| (otu_hour24fecs !=  nullptr && otu_hour24fecs->has_operation())
	|| (otu_hour24otns !=  nullptr && otu_hour24otns->has_operation());
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-hour24";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OtuHour24' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "otu-hour24fecs")
    {
        if(otu_hour24fecs != nullptr)
        {
            children["otu-hour24fecs"] = otu_hour24fecs;
        }
        else
        {
            otu_hour24fecs = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs>();
            otu_hour24fecs->parent = this;
            children["otu-hour24fecs"] = otu_hour24fecs;
        }
        return children.at("otu-hour24fecs");
    }

    if(child_yang_name == "otu-hour24otns")
    {
        if(otu_hour24otns != nullptr)
        {
            children["otu-hour24otns"] = otu_hour24otns;
        }
        else
        {
            otu_hour24otns = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns>();
            otu_hour24otns->parent = this;
            children["otu-hour24otns"] = otu_hour24otns;
        }
        return children.at("otu-hour24otns");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::get_children()
{
    if(children.find("otu-hour24fecs") == children.end())
    {
        if(otu_hour24fecs != nullptr)
        {
            children["otu-hour24fecs"] = otu_hour24fecs;
        }
    }

    if(children.find("otu-hour24otns") == children.end())
    {
        if(otu_hour24otns != nullptr)
        {
            children["otu-hour24otns"] = otu_hour24otns;
        }
    }

    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fecs()
{
    yang_name = "otu-hour24fecs"; yang_parent_name = "otu-hour24";
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::~OtuHour24Fecs()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::has_data() const
{
    for (std::size_t index=0; index<otu_hour24fec.size(); index++)
    {
        if(otu_hour24fec[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::has_operation() const
{
    for (std::size_t index=0; index<otu_hour24fec.size(); index++)
    {
        if(otu_hour24fec[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-hour24fecs";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OtuHour24Fecs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "otu-hour24fec")
    {
        for(auto const & c : otu_hour24fec)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec>();
        c->parent = this;
        otu_hour24fec.push_back(std::move(c));
        children[segment_path] = otu_hour24fec.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::get_children()
{
    for (auto const & c : otu_hour24fec)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::OtuHour24Fec()
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
    ec_bits(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::EcBits>())
	,post_fec_ber(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::PostFecBer>())
	,pre_fec_ber(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::PreFecBer>())
	,q(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::Q>())
	,qmargin(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::Qmargin>())
	,uc_words(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::UcWords>())
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

    yang_name = "otu-hour24fec"; yang_parent_name = "otu-hour24fecs";
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::~OtuHour24Fec()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::has_data() const
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

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::has_operation() const
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

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-hour24fec" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OtuHour24Fec' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            ec_bits = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::EcBits>();
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
            post_fec_ber = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::PostFecBer>();
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
            pre_fec_ber = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::PreFecBer>();
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
            q = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::Q>();
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
            qmargin = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::Qmargin>();
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
            uc_words = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::UcWords>();
            uc_words->parent = this;
            children["uc-words"] = uc_words;
        }
        return children.at("uc-words");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::get_children()
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

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::EcBits::EcBits()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "ec-bits"; yang_parent_name = "otu-hour24fec";
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::EcBits::~EcBits()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::EcBits::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::EcBits::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::EcBits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ec-bits";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::EcBits::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::EcBits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::EcBits::get_children()
{
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::EcBits::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::UcWords::UcWords()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "uc-words"; yang_parent_name = "otu-hour24fec";
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::UcWords::~UcWords()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::UcWords::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::UcWords::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::UcWords::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uc-words";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::UcWords::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::UcWords::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::UcWords::get_children()
{
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::UcWords::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::PreFecBer::PreFecBer()
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
    yang_name = "pre-fec-ber"; yang_parent_name = "otu-hour24fec";
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::PreFecBer::~PreFecBer()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::PreFecBer::has_data() const
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

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::PreFecBer::has_operation() const
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

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::PreFecBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-fec-ber";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::PreFecBer::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::PreFecBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::PreFecBer::get_children()
{
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::PreFecBer::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::PostFecBer::PostFecBer()
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
    yang_name = "post-fec-ber"; yang_parent_name = "otu-hour24fec";
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::PostFecBer::~PostFecBer()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::PostFecBer::has_data() const
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

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::PostFecBer::has_operation() const
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

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::PostFecBer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "post-fec-ber";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::PostFecBer::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::PostFecBer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::PostFecBer::get_children()
{
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::PostFecBer::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::Q::Q()
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
    yang_name = "q"; yang_parent_name = "otu-hour24fec";
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::Q::~Q()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::Q::has_data() const
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

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::Q::has_operation() const
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

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::Q::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "q";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::Q::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::Q::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::Q::get_children()
{
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::Q::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::Qmargin::Qmargin()
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
    yang_name = "qmargin"; yang_parent_name = "otu-hour24fec";
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::Qmargin::~Qmargin()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::Qmargin::has_data() const
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

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::Qmargin::has_operation() const
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

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::Qmargin::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qmargin";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::Qmargin::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::Qmargin::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::Qmargin::get_children()
{
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Fecs::OtuHour24Fec::Qmargin::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otns()
{
    yang_name = "otu-hour24otns"; yang_parent_name = "otu-hour24";
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::~OtuHour24Otns()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::has_data() const
{
    for (std::size_t index=0; index<otu_hour24otn.size(); index++)
    {
        if(otu_hour24otn[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::has_operation() const
{
    for (std::size_t index=0; index<otu_hour24otn.size(); index++)
    {
        if(otu_hour24otn[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-hour24otns";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OtuHour24Otns' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "otu-hour24otn")
    {
        for(auto const & c : otu_hour24otn)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn>();
        c->parent = this;
        otu_hour24otn.push_back(std::move(c));
        children[segment_path] = otu_hour24otn.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::get_children()
{
    for (auto const & c : otu_hour24otn)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::OtuHour24Otn()
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
    bbe_fe(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BbeFe>())
	,bbe_ne(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BbeNe>())
	,bber_fe(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BberFe>())
	,bber_ne(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BberNe>())
	,es_fe(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsFe>())
	,es_ne(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsNe>())
	,esr_fe(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsrFe>())
	,esr_ne(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsrNe>())
	,fc_fe(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::FcFe>())
	,fc_ne(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::FcNe>())
	,lbc(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::Lbc>())
	,ses_fe(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesFe>())
	,ses_ne(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesNe>())
	,sesr_fe(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesrFe>())
	,sesr_ne(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesrNe>())
	,uas_fe(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::UasFe>())
	,uas_ne(std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::UasNe>())
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

    yang_name = "otu-hour24otn"; yang_parent_name = "otu-hour24otns";
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::~OtuHour24Otn()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::has_data() const
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

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::has_operation() const
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

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otu-hour24otn" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OtuHour24Otn' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            bbe_fe = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BbeFe>();
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
            bbe_ne = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BbeNe>();
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
            bber_fe = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BberFe>();
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
            bber_ne = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BberNe>();
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
            es_fe = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsFe>();
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
            es_ne = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsNe>();
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
            esr_fe = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsrFe>();
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
            esr_ne = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsrNe>();
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
            fc_fe = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::FcFe>();
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
            fc_ne = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::FcNe>();
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
            lbc = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::Lbc>();
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
            ses_fe = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesFe>();
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
            ses_ne = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesNe>();
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
            sesr_fe = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesrFe>();
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
            sesr_ne = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesrNe>();
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
            uas_fe = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::UasFe>();
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
            uas_ne = std::make_shared<PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::UasNe>();
            uas_ne->parent = this;
            children["uas-ne"] = uas_ne;
        }
        return children.at("uas-ne");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::get_children()
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

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::Lbc::Lbc()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{
    yang_name = "lbc"; yang_parent_name = "otu-hour24otn";
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::Lbc::~Lbc()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::Lbc::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::Lbc::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::Lbc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lbc";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::Lbc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::Lbc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::Lbc::get_children()
{
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::Lbc::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsNe::EsNe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{
    yang_name = "es-ne"; yang_parent_name = "otu-hour24otn";
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsNe::~EsNe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsNe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es-ne";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsNe::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsNe::get_children()
{
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsNe::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsrNe::EsrNe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{
    yang_name = "esr-ne"; yang_parent_name = "otu-hour24otn";
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsrNe::~EsrNe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsrNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsrNe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsrNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esr-ne";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsrNe::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsrNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsrNe::get_children()
{
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsrNe::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesNe::SesNe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{
    yang_name = "ses-ne"; yang_parent_name = "otu-hour24otn";
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesNe::~SesNe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesNe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ses-ne";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesNe::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesNe::get_children()
{
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesNe::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesrNe::SesrNe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{
    yang_name = "sesr-ne"; yang_parent_name = "otu-hour24otn";
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesrNe::~SesrNe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesrNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesrNe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesrNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sesr-ne";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesrNe::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesrNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesrNe::get_children()
{
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesrNe::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::UasNe::UasNe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{
    yang_name = "uas-ne"; yang_parent_name = "otu-hour24otn";
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::UasNe::~UasNe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::UasNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::UasNe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::UasNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uas-ne";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::UasNe::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::UasNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::UasNe::get_children()
{
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::UasNe::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BbeNe::BbeNe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{
    yang_name = "bbe-ne"; yang_parent_name = "otu-hour24otn";
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BbeNe::~BbeNe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BbeNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BbeNe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BbeNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bbe-ne";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BbeNe::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BbeNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BbeNe::get_children()
{
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BbeNe::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BberNe::BberNe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{
    yang_name = "bber-ne"; yang_parent_name = "otu-hour24otn";
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BberNe::~BberNe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BberNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BberNe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BberNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bber-ne";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BberNe::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BberNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BberNe::get_children()
{
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BberNe::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::FcNe::FcNe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{
    yang_name = "fc-ne"; yang_parent_name = "otu-hour24otn";
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::FcNe::~FcNe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::FcNe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::FcNe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::FcNe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fc-ne";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::FcNe::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::FcNe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::FcNe::get_children()
{
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::FcNe::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsFe::EsFe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{
    yang_name = "es-fe"; yang_parent_name = "otu-hour24otn";
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsFe::~EsFe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsFe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es-fe";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsFe::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsFe::get_children()
{
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsFe::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsrFe::EsrFe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{
    yang_name = "esr-fe"; yang_parent_name = "otu-hour24otn";
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsrFe::~EsrFe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsrFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsrFe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsrFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "esr-fe";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsrFe::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsrFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsrFe::get_children()
{
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::EsrFe::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesFe::SesFe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{
    yang_name = "ses-fe"; yang_parent_name = "otu-hour24otn";
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesFe::~SesFe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesFe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ses-fe";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesFe::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesFe::get_children()
{
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesFe::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesrFe::SesrFe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{
    yang_name = "sesr-fe"; yang_parent_name = "otu-hour24otn";
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesrFe::~SesrFe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesrFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesrFe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesrFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sesr-fe";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesrFe::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesrFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesrFe::get_children()
{
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::SesrFe::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::UasFe::UasFe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{
    yang_name = "uas-fe"; yang_parent_name = "otu-hour24otn";
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::UasFe::~UasFe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::UasFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::UasFe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::UasFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uas-fe";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::UasFe::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::UasFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::UasFe::get_children()
{
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::UasFe::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BbeFe::BbeFe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{
    yang_name = "bbe-fe"; yang_parent_name = "otu-hour24otn";
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BbeFe::~BbeFe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BbeFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BbeFe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BbeFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bbe-fe";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BbeFe::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BbeFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BbeFe::get_children()
{
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BbeFe::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BberFe::BberFe()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{
    yang_name = "bber-fe"; yang_parent_name = "otu-hour24otn";
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BberFe::~BberFe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BberFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BberFe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BberFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bber-fe";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BberFe::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BberFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BberFe::get_children()
{
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::BberFe::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::FcFe::FcFe()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"}
{
    yang_name = "fc-fe"; yang_parent_name = "otu-hour24otn";
}

PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::FcFe::~FcFe()
{
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::FcFe::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::FcFe::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::FcFe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fc-fe";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::FcFe::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::FcFe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::FcFe::get_children()
{
    return children;
}

void PerformanceManagement::Otu::OtuPorts::OtuPort::OtuCurrent::OtuHour24::OtuHour24Otns::OtuHour24Otn::FcFe::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Stm::Stm()
    :
    stm_ports(std::make_shared<PerformanceManagement::Stm::StmPorts>())
{
    stm_ports->parent = this;
    children["stm-ports"] = stm_ports;

    yang_name = "stm"; yang_parent_name = "performance-management";
}

PerformanceManagement::Stm::~Stm()
{
}

bool PerformanceManagement::Stm::has_data() const
{
    return (stm_ports !=  nullptr && stm_ports->has_data());
}

bool PerformanceManagement::Stm::has_operation() const
{
    return is_set(operation)
	|| (stm_ports !=  nullptr && stm_ports->has_operation());
}

std::string PerformanceManagement::Stm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stm";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Stm::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Stm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "stm-ports")
    {
        if(stm_ports != nullptr)
        {
            children["stm-ports"] = stm_ports;
        }
        else
        {
            stm_ports = std::make_shared<PerformanceManagement::Stm::StmPorts>();
            stm_ports->parent = this;
            children["stm-ports"] = stm_ports;
        }
        return children.at("stm-ports");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Stm::get_children()
{
    if(children.find("stm-ports") == children.end())
    {
        if(stm_ports != nullptr)
        {
            children["stm-ports"] = stm_ports;
        }
    }

    return children;
}

void PerformanceManagement::Stm::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Stm::StmPorts::StmPorts()
{
    yang_name = "stm-ports"; yang_parent_name = "stm";
}

PerformanceManagement::Stm::StmPorts::~StmPorts()
{
}

bool PerformanceManagement::Stm::StmPorts::has_data() const
{
    for (std::size_t index=0; index<stm_port.size(); index++)
    {
        if(stm_port[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Stm::StmPorts::has_operation() const
{
    for (std::size_t index=0; index<stm_port.size(); index++)
    {
        if(stm_port[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerformanceManagement::Stm::StmPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stm-ports";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Stm::StmPorts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management/stm/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "stm-port")
    {
        for(auto const & c : stm_port)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort>();
        c->parent = this;
        stm_port.push_back(std::move(c));
        children[segment_path] = stm_port.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Stm::StmPorts::get_children()
{
    for (auto const & c : stm_port)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PerformanceManagement::Stm::StmPorts::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Stm::StmPorts::StmPort::StmPort()
    :
    name{YType::str, "name"}
    	,
    stm_current(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent>())
{
    stm_current->parent = this;
    children["stm-current"] = stm_current;

    yang_name = "stm-port"; yang_parent_name = "stm-ports";
}

PerformanceManagement::Stm::StmPorts::StmPort::~StmPort()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::has_data() const
{
    return name.is_set
	|| (stm_current !=  nullptr && stm_current->has_data());
}

bool PerformanceManagement::Stm::StmPorts::StmPort::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (stm_current !=  nullptr && stm_current->has_operation());
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stm-port" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Stm::StmPorts::StmPort::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management/stm/stm-ports/" << get_segment_path();
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

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "stm-current")
    {
        if(stm_current != nullptr)
        {
            children["stm-current"] = stm_current;
        }
        else
        {
            stm_current = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent>();
            stm_current->parent = this;
            children["stm-current"] = stm_current;
        }
        return children.at("stm-current");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Stm::StmPorts::StmPort::get_children()
{
    if(children.find("stm-current") == children.end())
    {
        if(stm_current != nullptr)
        {
            children["stm-current"] = stm_current;
        }
    }

    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmCurrent()
    :
    stm_hour24(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24>())
	,stm_minute15(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15>())
{
    stm_hour24->parent = this;
    children["stm-hour24"] = stm_hour24;

    stm_minute15->parent = this;
    children["stm-minute15"] = stm_minute15;

    yang_name = "stm-current"; yang_parent_name = "stm-port";
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::~StmCurrent()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::has_data() const
{
    return (stm_hour24 !=  nullptr && stm_hour24->has_data())
	|| (stm_minute15 !=  nullptr && stm_minute15->has_data());
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::has_operation() const
{
    return is_set(operation)
	|| (stm_hour24 !=  nullptr && stm_hour24->has_operation())
	|| (stm_minute15 !=  nullptr && stm_minute15->has_operation());
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stm-current";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StmCurrent' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "stm-hour24")
    {
        if(stm_hour24 != nullptr)
        {
            children["stm-hour24"] = stm_hour24;
        }
        else
        {
            stm_hour24 = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24>();
            stm_hour24->parent = this;
            children["stm-hour24"] = stm_hour24;
        }
        return children.at("stm-hour24");
    }

    if(child_yang_name == "stm-minute15")
    {
        if(stm_minute15 != nullptr)
        {
            children["stm-minute15"] = stm_minute15;
        }
        else
        {
            stm_minute15 = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15>();
            stm_minute15->parent = this;
            children["stm-minute15"] = stm_minute15;
        }
        return children.at("stm-minute15");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::get_children()
{
    if(children.find("stm-hour24") == children.end())
    {
        if(stm_hour24 != nullptr)
        {
            children["stm-hour24"] = stm_hour24;
        }
    }

    if(children.find("stm-minute15") == children.end())
    {
        if(stm_minute15 != nullptr)
        {
            children["stm-minute15"] = stm_minute15;
        }
    }

    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24()
    :
    stm_hour24stms(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms>())
{
    stm_hour24stms->parent = this;
    children["stm-hour24stms"] = stm_hour24stms;

    yang_name = "stm-hour24"; yang_parent_name = "stm-current";
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::~StmHour24()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::has_data() const
{
    return (stm_hour24stms !=  nullptr && stm_hour24stms->has_data());
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::has_operation() const
{
    return is_set(operation)
	|| (stm_hour24stms !=  nullptr && stm_hour24stms->has_operation());
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stm-hour24";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StmHour24' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "stm-hour24stms")
    {
        if(stm_hour24stms != nullptr)
        {
            children["stm-hour24stms"] = stm_hour24stms;
        }
        else
        {
            stm_hour24stms = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms>();
            stm_hour24stms->parent = this;
            children["stm-hour24stms"] = stm_hour24stms;
        }
        return children.at("stm-hour24stms");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::get_children()
{
    if(children.find("stm-hour24stms") == children.end())
    {
        if(stm_hour24stms != nullptr)
        {
            children["stm-hour24stms"] = stm_hour24stms;
        }
    }

    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stms()
{
    yang_name = "stm-hour24stms"; yang_parent_name = "stm-hour24";
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::~StmHour24Stms()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::has_data() const
{
    for (std::size_t index=0; index<stm_hour24stm.size(); index++)
    {
        if(stm_hour24stm[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::has_operation() const
{
    for (std::size_t index=0; index<stm_hour24stm.size(); index++)
    {
        if(stm_hour24stm[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stm-hour24stms";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StmHour24Stms' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "stm-hour24stm")
    {
        for(auto const & c : stm_hour24stm)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm>();
        c->parent = this;
        stm_hour24stm.push_back(std::move(c));
        children[segment_path] = stm_hour24stm.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::get_children()
{
    for (auto const & c : stm_hour24stm)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::StmHour24Stm()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    last_clear_time{YType::str, "last-clear-time"},
    timestamp{YType::str, "timestamp"},
    valid{YType::boolean, "valid"}
    	,
    fe_line(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine>())
	,line(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line>())
	,section(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section>())
{
    fe_line->parent = this;
    children["fe-line"] = fe_line;

    line->parent = this;
    children["line"] = line;

    section->parent = this;
    children["section"] = section;

    yang_name = "stm-hour24stm"; yang_parent_name = "stm-hour24stms";
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::~StmHour24Stm()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::has_data() const
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

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::has_operation() const
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

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stm-hour24stm" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StmHour24Stm' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            fe_line = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine>();
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
            line = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line>();
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
            section = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section>();
            section->parent = this;
            children["section"] = section;
        }
        return children.at("section");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::get_children()
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

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::Section()
    :
    section_status{YType::int32, "section-status"}
    	,
    section_bb_es(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionBbEs>())
	,section_bbe_rs(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionBbeRs>())
	,section_e_bs(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionEBs>())
	,section_e_ss(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionESs>())
	,section_es_rs(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionEsRs>())
	,section_se_ss(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionSeSs>())
	,section_ses_rs(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionSesRs>())
	,section_ua_ss(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionUaSs>())
{
    section_bb_es->parent = this;
    children["section-bb-es"] = section_bb_es;

    section_bbe_rs->parent = this;
    children["section-bbe-rs"] = section_bbe_rs;

    section_e_bs->parent = this;
    children["section-e-bs"] = section_e_bs;

    section_e_ss->parent = this;
    children["section-e-ss"] = section_e_ss;

    section_es_rs->parent = this;
    children["section-es-rs"] = section_es_rs;

    section_se_ss->parent = this;
    children["section-se-ss"] = section_se_ss;

    section_ses_rs->parent = this;
    children["section-ses-rs"] = section_ses_rs;

    section_ua_ss->parent = this;
    children["section-ua-ss"] = section_ua_ss;

    yang_name = "section"; yang_parent_name = "stm-hour24stm";
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::~Section()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::has_data() const
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

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::has_operation() const
{
    return is_set(operation)
	|| is_set(section_status.operation)
	|| (section_bb_es !=  nullptr && section_bb_es->has_operation())
	|| (section_bbe_rs !=  nullptr && section_bbe_rs->has_operation())
	|| (section_e_bs !=  nullptr && section_e_bs->has_operation())
	|| (section_e_ss !=  nullptr && section_e_ss->has_operation())
	|| (section_es_rs !=  nullptr && section_es_rs->has_operation())
	|| (section_se_ss !=  nullptr && section_se_ss->has_operation())
	|| (section_ses_rs !=  nullptr && section_ses_rs->has_operation())
	|| (section_ua_ss !=  nullptr && section_ua_ss->has_operation());
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "section-bb-es")
    {
        if(section_bb_es != nullptr)
        {
            children["section-bb-es"] = section_bb_es;
        }
        else
        {
            section_bb_es = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionBbEs>();
            section_bb_es->parent = this;
            children["section-bb-es"] = section_bb_es;
        }
        return children.at("section-bb-es");
    }

    if(child_yang_name == "section-bbe-rs")
    {
        if(section_bbe_rs != nullptr)
        {
            children["section-bbe-rs"] = section_bbe_rs;
        }
        else
        {
            section_bbe_rs = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionBbeRs>();
            section_bbe_rs->parent = this;
            children["section-bbe-rs"] = section_bbe_rs;
        }
        return children.at("section-bbe-rs");
    }

    if(child_yang_name == "section-e-bs")
    {
        if(section_e_bs != nullptr)
        {
            children["section-e-bs"] = section_e_bs;
        }
        else
        {
            section_e_bs = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionEBs>();
            section_e_bs->parent = this;
            children["section-e-bs"] = section_e_bs;
        }
        return children.at("section-e-bs");
    }

    if(child_yang_name == "section-e-ss")
    {
        if(section_e_ss != nullptr)
        {
            children["section-e-ss"] = section_e_ss;
        }
        else
        {
            section_e_ss = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionESs>();
            section_e_ss->parent = this;
            children["section-e-ss"] = section_e_ss;
        }
        return children.at("section-e-ss");
    }

    if(child_yang_name == "section-es-rs")
    {
        if(section_es_rs != nullptr)
        {
            children["section-es-rs"] = section_es_rs;
        }
        else
        {
            section_es_rs = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionEsRs>();
            section_es_rs->parent = this;
            children["section-es-rs"] = section_es_rs;
        }
        return children.at("section-es-rs");
    }

    if(child_yang_name == "section-se-ss")
    {
        if(section_se_ss != nullptr)
        {
            children["section-se-ss"] = section_se_ss;
        }
        else
        {
            section_se_ss = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionSeSs>();
            section_se_ss->parent = this;
            children["section-se-ss"] = section_se_ss;
        }
        return children.at("section-se-ss");
    }

    if(child_yang_name == "section-ses-rs")
    {
        if(section_ses_rs != nullptr)
        {
            children["section-ses-rs"] = section_ses_rs;
        }
        else
        {
            section_ses_rs = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionSesRs>();
            section_ses_rs->parent = this;
            children["section-ses-rs"] = section_ses_rs;
        }
        return children.at("section-ses-rs");
    }

    if(child_yang_name == "section-ua-ss")
    {
        if(section_ua_ss != nullptr)
        {
            children["section-ua-ss"] = section_ua_ss;
        }
        else
        {
            section_ua_ss = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionUaSs>();
            section_ua_ss->parent = this;
            children["section-ua-ss"] = section_ua_ss;
        }
        return children.at("section-ua-ss");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::get_children()
{
    if(children.find("section-bb-es") == children.end())
    {
        if(section_bb_es != nullptr)
        {
            children["section-bb-es"] = section_bb_es;
        }
    }

    if(children.find("section-bbe-rs") == children.end())
    {
        if(section_bbe_rs != nullptr)
        {
            children["section-bbe-rs"] = section_bbe_rs;
        }
    }

    if(children.find("section-e-bs") == children.end())
    {
        if(section_e_bs != nullptr)
        {
            children["section-e-bs"] = section_e_bs;
        }
    }

    if(children.find("section-e-ss") == children.end())
    {
        if(section_e_ss != nullptr)
        {
            children["section-e-ss"] = section_e_ss;
        }
    }

    if(children.find("section-es-rs") == children.end())
    {
        if(section_es_rs != nullptr)
        {
            children["section-es-rs"] = section_es_rs;
        }
    }

    if(children.find("section-se-ss") == children.end())
    {
        if(section_se_ss != nullptr)
        {
            children["section-se-ss"] = section_se_ss;
        }
    }

    if(children.find("section-ses-rs") == children.end())
    {
        if(section_ses_rs != nullptr)
        {
            children["section-ses-rs"] = section_ses_rs;
        }
    }

    if(children.find("section-ua-ss") == children.end())
    {
        if(section_ua_ss != nullptr)
        {
            children["section-ua-ss"] = section_ua_ss;
        }
    }

    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "section-status")
    {
        section_status = value;
    }
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionESs::SectionESs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "section-e-ss"; yang_parent_name = "section";
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionESs::~SectionESs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionESs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionESs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-e-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionESs::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionESs::get_children()
{
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionESs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionEsRs::SectionEsRs()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{
    yang_name = "section-es-rs"; yang_parent_name = "section";
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionEsRs::~SectionEsRs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionEsRs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionEsRs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionEsRs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-es-rs";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionEsRs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SectionEsRs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionEsRs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionEsRs::get_children()
{
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionEsRs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionBbEs::SectionBbEs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "section-bb-es"; yang_parent_name = "section";
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionBbEs::~SectionBbEs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionBbEs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionBbEs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionBbEs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-bb-es";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionBbEs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SectionBbEs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionBbEs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionBbEs::get_children()
{
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionBbEs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionBbeRs::SectionBbeRs()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{
    yang_name = "section-bbe-rs"; yang_parent_name = "section";
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionBbeRs::~SectionBbeRs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionBbeRs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionBbeRs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionBbeRs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-bbe-rs";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionBbeRs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SectionBbeRs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionBbeRs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionBbeRs::get_children()
{
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionBbeRs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionSeSs::SectionSeSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "section-se-ss"; yang_parent_name = "section";
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionSeSs::~SectionSeSs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionSeSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionSeSs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-se-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionSeSs::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionSeSs::get_children()
{
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionSeSs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionSesRs::SectionSesRs()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{
    yang_name = "section-ses-rs"; yang_parent_name = "section";
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionSesRs::~SectionSesRs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionSesRs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionSesRs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionSesRs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-ses-rs";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionSesRs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SectionSesRs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionSesRs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionSesRs::get_children()
{
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionSesRs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionUaSs::SectionUaSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "section-ua-ss"; yang_parent_name = "section";
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionUaSs::~SectionUaSs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionUaSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionUaSs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionUaSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-ua-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionUaSs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SectionUaSs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionUaSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionUaSs::get_children()
{
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionUaSs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionEBs::SectionEBs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "section-e-bs"; yang_parent_name = "section";
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionEBs::~SectionEBs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionEBs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionEBs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionEBs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-e-bs";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionEBs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SectionEBs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionEBs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionEBs::get_children()
{
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Section::SectionEBs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::Line()
    :
    line_status{YType::int32, "line-status"}
    	,
    line_bb_es(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineBbEs>())
	,line_bbe_rs(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineBbeRs>())
	,line_e_bs(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineEBs>())
	,line_e_ss(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineESs>())
	,line_es_rs(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineEsRs>())
	,line_se_ss(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineSeSs>())
	,line_ses_rs(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineSesRs>())
	,line_ua_ss(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineUaSs>())
{
    line_bb_es->parent = this;
    children["line-bb-es"] = line_bb_es;

    line_bbe_rs->parent = this;
    children["line-bbe-rs"] = line_bbe_rs;

    line_e_bs->parent = this;
    children["line-e-bs"] = line_e_bs;

    line_e_ss->parent = this;
    children["line-e-ss"] = line_e_ss;

    line_es_rs->parent = this;
    children["line-es-rs"] = line_es_rs;

    line_se_ss->parent = this;
    children["line-se-ss"] = line_se_ss;

    line_ses_rs->parent = this;
    children["line-ses-rs"] = line_ses_rs;

    line_ua_ss->parent = this;
    children["line-ua-ss"] = line_ua_ss;

    yang_name = "line"; yang_parent_name = "stm-hour24stm";
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::~Line()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::has_data() const
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

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::has_operation() const
{
    return is_set(operation)
	|| is_set(line_status.operation)
	|| (line_bb_es !=  nullptr && line_bb_es->has_operation())
	|| (line_bbe_rs !=  nullptr && line_bbe_rs->has_operation())
	|| (line_e_bs !=  nullptr && line_e_bs->has_operation())
	|| (line_e_ss !=  nullptr && line_e_ss->has_operation())
	|| (line_es_rs !=  nullptr && line_es_rs->has_operation())
	|| (line_se_ss !=  nullptr && line_se_ss->has_operation())
	|| (line_ses_rs !=  nullptr && line_ses_rs->has_operation())
	|| (line_ua_ss !=  nullptr && line_ua_ss->has_operation());
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "line-bb-es")
    {
        if(line_bb_es != nullptr)
        {
            children["line-bb-es"] = line_bb_es;
        }
        else
        {
            line_bb_es = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineBbEs>();
            line_bb_es->parent = this;
            children["line-bb-es"] = line_bb_es;
        }
        return children.at("line-bb-es");
    }

    if(child_yang_name == "line-bbe-rs")
    {
        if(line_bbe_rs != nullptr)
        {
            children["line-bbe-rs"] = line_bbe_rs;
        }
        else
        {
            line_bbe_rs = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineBbeRs>();
            line_bbe_rs->parent = this;
            children["line-bbe-rs"] = line_bbe_rs;
        }
        return children.at("line-bbe-rs");
    }

    if(child_yang_name == "line-e-bs")
    {
        if(line_e_bs != nullptr)
        {
            children["line-e-bs"] = line_e_bs;
        }
        else
        {
            line_e_bs = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineEBs>();
            line_e_bs->parent = this;
            children["line-e-bs"] = line_e_bs;
        }
        return children.at("line-e-bs");
    }

    if(child_yang_name == "line-e-ss")
    {
        if(line_e_ss != nullptr)
        {
            children["line-e-ss"] = line_e_ss;
        }
        else
        {
            line_e_ss = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineESs>();
            line_e_ss->parent = this;
            children["line-e-ss"] = line_e_ss;
        }
        return children.at("line-e-ss");
    }

    if(child_yang_name == "line-es-rs")
    {
        if(line_es_rs != nullptr)
        {
            children["line-es-rs"] = line_es_rs;
        }
        else
        {
            line_es_rs = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineEsRs>();
            line_es_rs->parent = this;
            children["line-es-rs"] = line_es_rs;
        }
        return children.at("line-es-rs");
    }

    if(child_yang_name == "line-se-ss")
    {
        if(line_se_ss != nullptr)
        {
            children["line-se-ss"] = line_se_ss;
        }
        else
        {
            line_se_ss = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineSeSs>();
            line_se_ss->parent = this;
            children["line-se-ss"] = line_se_ss;
        }
        return children.at("line-se-ss");
    }

    if(child_yang_name == "line-ses-rs")
    {
        if(line_ses_rs != nullptr)
        {
            children["line-ses-rs"] = line_ses_rs;
        }
        else
        {
            line_ses_rs = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineSesRs>();
            line_ses_rs->parent = this;
            children["line-ses-rs"] = line_ses_rs;
        }
        return children.at("line-ses-rs");
    }

    if(child_yang_name == "line-ua-ss")
    {
        if(line_ua_ss != nullptr)
        {
            children["line-ua-ss"] = line_ua_ss;
        }
        else
        {
            line_ua_ss = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineUaSs>();
            line_ua_ss->parent = this;
            children["line-ua-ss"] = line_ua_ss;
        }
        return children.at("line-ua-ss");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::get_children()
{
    if(children.find("line-bb-es") == children.end())
    {
        if(line_bb_es != nullptr)
        {
            children["line-bb-es"] = line_bb_es;
        }
    }

    if(children.find("line-bbe-rs") == children.end())
    {
        if(line_bbe_rs != nullptr)
        {
            children["line-bbe-rs"] = line_bbe_rs;
        }
    }

    if(children.find("line-e-bs") == children.end())
    {
        if(line_e_bs != nullptr)
        {
            children["line-e-bs"] = line_e_bs;
        }
    }

    if(children.find("line-e-ss") == children.end())
    {
        if(line_e_ss != nullptr)
        {
            children["line-e-ss"] = line_e_ss;
        }
    }

    if(children.find("line-es-rs") == children.end())
    {
        if(line_es_rs != nullptr)
        {
            children["line-es-rs"] = line_es_rs;
        }
    }

    if(children.find("line-se-ss") == children.end())
    {
        if(line_se_ss != nullptr)
        {
            children["line-se-ss"] = line_se_ss;
        }
    }

    if(children.find("line-ses-rs") == children.end())
    {
        if(line_ses_rs != nullptr)
        {
            children["line-ses-rs"] = line_ses_rs;
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

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "line-status")
    {
        line_status = value;
    }
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineESs::LineESs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "line-e-ss"; yang_parent_name = "line";
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineESs::~LineESs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineESs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineESs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-e-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineESs::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineESs::get_children()
{
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineESs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineEsRs::LineEsRs()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{
    yang_name = "line-es-rs"; yang_parent_name = "line";
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineEsRs::~LineEsRs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineEsRs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineEsRs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineEsRs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-es-rs";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineEsRs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LineEsRs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineEsRs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineEsRs::get_children()
{
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineEsRs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineBbEs::LineBbEs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "line-bb-es"; yang_parent_name = "line";
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineBbEs::~LineBbEs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineBbEs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineBbEs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineBbEs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-bb-es";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineBbEs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LineBbEs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineBbEs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineBbEs::get_children()
{
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineBbEs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineBbeRs::LineBbeRs()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{
    yang_name = "line-bbe-rs"; yang_parent_name = "line";
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineBbeRs::~LineBbeRs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineBbeRs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineBbeRs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineBbeRs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-bbe-rs";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineBbeRs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LineBbeRs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineBbeRs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineBbeRs::get_children()
{
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineBbeRs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineSeSs::LineSeSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "line-se-ss"; yang_parent_name = "line";
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineSeSs::~LineSeSs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineSeSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineSeSs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-se-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineSeSs::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineSeSs::get_children()
{
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineSeSs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineSesRs::LineSesRs()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{
    yang_name = "line-ses-rs"; yang_parent_name = "line";
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineSesRs::~LineSesRs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineSesRs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineSesRs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineSesRs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-ses-rs";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineSesRs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LineSesRs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineSesRs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineSesRs::get_children()
{
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineSesRs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineUaSs::LineUaSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "line-ua-ss"; yang_parent_name = "line";
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineUaSs::~LineUaSs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineUaSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineUaSs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineUaSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-ua-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineUaSs::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineUaSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineUaSs::get_children()
{
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineUaSs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineEBs::LineEBs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "line-e-bs"; yang_parent_name = "line";
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineEBs::~LineEBs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineEBs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineEBs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineEBs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-e-bs";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineEBs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LineEBs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineEBs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineEBs::get_children()
{
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::Line::LineEBs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FeLine()
    :
    far_end_line_bbe_rs(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineBbeRs>())
	,far_end_line_e_bs(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineEBs>())
	,far_end_line_e_ss(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineESs>())
	,far_end_line_ebb_es(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineEbbEs>())
	,far_end_line_es_rs(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineEsRs>())
	,far_end_line_se_ss(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineSeSs>())
	,far_end_line_ses_rs(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineSesRs>())
	,far_end_line_ua_ss(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineUaSs>())
{
    far_end_line_bbe_rs->parent = this;
    children["far-end-line-bbe-rs"] = far_end_line_bbe_rs;

    far_end_line_e_bs->parent = this;
    children["far-end-line-e-bs"] = far_end_line_e_bs;

    far_end_line_e_ss->parent = this;
    children["far-end-line-e-ss"] = far_end_line_e_ss;

    far_end_line_ebb_es->parent = this;
    children["far-end-line-ebb-es"] = far_end_line_ebb_es;

    far_end_line_es_rs->parent = this;
    children["far-end-line-es-rs"] = far_end_line_es_rs;

    far_end_line_se_ss->parent = this;
    children["far-end-line-se-ss"] = far_end_line_se_ss;

    far_end_line_ses_rs->parent = this;
    children["far-end-line-ses-rs"] = far_end_line_ses_rs;

    far_end_line_ua_ss->parent = this;
    children["far-end-line-ua-ss"] = far_end_line_ua_ss;

    yang_name = "fe-line"; yang_parent_name = "stm-hour24stm";
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::~FeLine()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::has_data() const
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

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::has_operation() const
{
    return is_set(operation)
	|| (far_end_line_bbe_rs !=  nullptr && far_end_line_bbe_rs->has_operation())
	|| (far_end_line_e_bs !=  nullptr && far_end_line_e_bs->has_operation())
	|| (far_end_line_e_ss !=  nullptr && far_end_line_e_ss->has_operation())
	|| (far_end_line_ebb_es !=  nullptr && far_end_line_ebb_es->has_operation())
	|| (far_end_line_es_rs !=  nullptr && far_end_line_es_rs->has_operation())
	|| (far_end_line_se_ss !=  nullptr && far_end_line_se_ss->has_operation())
	|| (far_end_line_ses_rs !=  nullptr && far_end_line_ses_rs->has_operation())
	|| (far_end_line_ua_ss !=  nullptr && far_end_line_ua_ss->has_operation());
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fe-line";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "far-end-line-bbe-rs")
    {
        if(far_end_line_bbe_rs != nullptr)
        {
            children["far-end-line-bbe-rs"] = far_end_line_bbe_rs;
        }
        else
        {
            far_end_line_bbe_rs = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineBbeRs>();
            far_end_line_bbe_rs->parent = this;
            children["far-end-line-bbe-rs"] = far_end_line_bbe_rs;
        }
        return children.at("far-end-line-bbe-rs");
    }

    if(child_yang_name == "far-end-line-e-bs")
    {
        if(far_end_line_e_bs != nullptr)
        {
            children["far-end-line-e-bs"] = far_end_line_e_bs;
        }
        else
        {
            far_end_line_e_bs = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineEBs>();
            far_end_line_e_bs->parent = this;
            children["far-end-line-e-bs"] = far_end_line_e_bs;
        }
        return children.at("far-end-line-e-bs");
    }

    if(child_yang_name == "far-end-line-e-ss")
    {
        if(far_end_line_e_ss != nullptr)
        {
            children["far-end-line-e-ss"] = far_end_line_e_ss;
        }
        else
        {
            far_end_line_e_ss = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineESs>();
            far_end_line_e_ss->parent = this;
            children["far-end-line-e-ss"] = far_end_line_e_ss;
        }
        return children.at("far-end-line-e-ss");
    }

    if(child_yang_name == "far-end-line-ebb-es")
    {
        if(far_end_line_ebb_es != nullptr)
        {
            children["far-end-line-ebb-es"] = far_end_line_ebb_es;
        }
        else
        {
            far_end_line_ebb_es = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineEbbEs>();
            far_end_line_ebb_es->parent = this;
            children["far-end-line-ebb-es"] = far_end_line_ebb_es;
        }
        return children.at("far-end-line-ebb-es");
    }

    if(child_yang_name == "far-end-line-es-rs")
    {
        if(far_end_line_es_rs != nullptr)
        {
            children["far-end-line-es-rs"] = far_end_line_es_rs;
        }
        else
        {
            far_end_line_es_rs = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineEsRs>();
            far_end_line_es_rs->parent = this;
            children["far-end-line-es-rs"] = far_end_line_es_rs;
        }
        return children.at("far-end-line-es-rs");
    }

    if(child_yang_name == "far-end-line-se-ss")
    {
        if(far_end_line_se_ss != nullptr)
        {
            children["far-end-line-se-ss"] = far_end_line_se_ss;
        }
        else
        {
            far_end_line_se_ss = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineSeSs>();
            far_end_line_se_ss->parent = this;
            children["far-end-line-se-ss"] = far_end_line_se_ss;
        }
        return children.at("far-end-line-se-ss");
    }

    if(child_yang_name == "far-end-line-ses-rs")
    {
        if(far_end_line_ses_rs != nullptr)
        {
            children["far-end-line-ses-rs"] = far_end_line_ses_rs;
        }
        else
        {
            far_end_line_ses_rs = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineSesRs>();
            far_end_line_ses_rs->parent = this;
            children["far-end-line-ses-rs"] = far_end_line_ses_rs;
        }
        return children.at("far-end-line-ses-rs");
    }

    if(child_yang_name == "far-end-line-ua-ss")
    {
        if(far_end_line_ua_ss != nullptr)
        {
            children["far-end-line-ua-ss"] = far_end_line_ua_ss;
        }
        else
        {
            far_end_line_ua_ss = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineUaSs>();
            far_end_line_ua_ss->parent = this;
            children["far-end-line-ua-ss"] = far_end_line_ua_ss;
        }
        return children.at("far-end-line-ua-ss");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::get_children()
{
    if(children.find("far-end-line-bbe-rs") == children.end())
    {
        if(far_end_line_bbe_rs != nullptr)
        {
            children["far-end-line-bbe-rs"] = far_end_line_bbe_rs;
        }
    }

    if(children.find("far-end-line-e-bs") == children.end())
    {
        if(far_end_line_e_bs != nullptr)
        {
            children["far-end-line-e-bs"] = far_end_line_e_bs;
        }
    }

    if(children.find("far-end-line-e-ss") == children.end())
    {
        if(far_end_line_e_ss != nullptr)
        {
            children["far-end-line-e-ss"] = far_end_line_e_ss;
        }
    }

    if(children.find("far-end-line-ebb-es") == children.end())
    {
        if(far_end_line_ebb_es != nullptr)
        {
            children["far-end-line-ebb-es"] = far_end_line_ebb_es;
        }
    }

    if(children.find("far-end-line-es-rs") == children.end())
    {
        if(far_end_line_es_rs != nullptr)
        {
            children["far-end-line-es-rs"] = far_end_line_es_rs;
        }
    }

    if(children.find("far-end-line-se-ss") == children.end())
    {
        if(far_end_line_se_ss != nullptr)
        {
            children["far-end-line-se-ss"] = far_end_line_se_ss;
        }
    }

    if(children.find("far-end-line-ses-rs") == children.end())
    {
        if(far_end_line_ses_rs != nullptr)
        {
            children["far-end-line-ses-rs"] = far_end_line_ses_rs;
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

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineESs::FarEndLineESs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "far-end-line-e-ss"; yang_parent_name = "fe-line";
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineESs::~FarEndLineESs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineESs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineESs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-e-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineESs::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineESs::get_children()
{
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineESs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineEsRs::FarEndLineEsRs()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{
    yang_name = "far-end-line-es-rs"; yang_parent_name = "fe-line";
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineEsRs::~FarEndLineEsRs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineEsRs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineEsRs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineEsRs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-es-rs";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineEsRs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FarEndLineEsRs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineEsRs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineEsRs::get_children()
{
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineEsRs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineEbbEs::FarEndLineEbbEs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "far-end-line-ebb-es"; yang_parent_name = "fe-line";
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineEbbEs::~FarEndLineEbbEs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineEbbEs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineEbbEs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineEbbEs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-ebb-es";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineEbbEs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FarEndLineEbbEs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineEbbEs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineEbbEs::get_children()
{
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineEbbEs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineBbeRs::FarEndLineBbeRs()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{
    yang_name = "far-end-line-bbe-rs"; yang_parent_name = "fe-line";
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineBbeRs::~FarEndLineBbeRs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineBbeRs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineBbeRs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineBbeRs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-bbe-rs";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineBbeRs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FarEndLineBbeRs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineBbeRs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineBbeRs::get_children()
{
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineBbeRs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineSeSs::FarEndLineSeSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "far-end-line-se-ss"; yang_parent_name = "fe-line";
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineSeSs::~FarEndLineSeSs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineSeSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineSeSs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-se-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineSeSs::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineSeSs::get_children()
{
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineSeSs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineSesRs::FarEndLineSesRs()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{
    yang_name = "far-end-line-ses-rs"; yang_parent_name = "fe-line";
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineSesRs::~FarEndLineSesRs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineSesRs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineSesRs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineSesRs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-ses-rs";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineSesRs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FarEndLineSesRs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineSesRs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineSesRs::get_children()
{
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineSesRs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineUaSs::FarEndLineUaSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "far-end-line-ua-ss"; yang_parent_name = "fe-line";
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineUaSs::~FarEndLineUaSs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineUaSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineUaSs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineUaSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-ua-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineUaSs::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineUaSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineUaSs::get_children()
{
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineUaSs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineEBs::FarEndLineEBs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "far-end-line-e-bs"; yang_parent_name = "fe-line";
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineEBs::~FarEndLineEBs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineEBs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineEBs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineEBs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-e-bs";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineEBs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FarEndLineEBs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineEBs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineEBs::get_children()
{
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmHour24::StmHour24Stms::StmHour24Stm::FeLine::FarEndLineEBs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15()
    :
    stm_minute15stms(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms>())
{
    stm_minute15stms->parent = this;
    children["stm-minute15stms"] = stm_minute15stms;

    yang_name = "stm-minute15"; yang_parent_name = "stm-current";
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::~StmMinute15()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::has_data() const
{
    return (stm_minute15stms !=  nullptr && stm_minute15stms->has_data());
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::has_operation() const
{
    return is_set(operation)
	|| (stm_minute15stms !=  nullptr && stm_minute15stms->has_operation());
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stm-minute15";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StmMinute15' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "stm-minute15stms")
    {
        if(stm_minute15stms != nullptr)
        {
            children["stm-minute15stms"] = stm_minute15stms;
        }
        else
        {
            stm_minute15stms = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms>();
            stm_minute15stms->parent = this;
            children["stm-minute15stms"] = stm_minute15stms;
        }
        return children.at("stm-minute15stms");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::get_children()
{
    if(children.find("stm-minute15stms") == children.end())
    {
        if(stm_minute15stms != nullptr)
        {
            children["stm-minute15stms"] = stm_minute15stms;
        }
    }

    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stms()
{
    yang_name = "stm-minute15stms"; yang_parent_name = "stm-minute15";
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::~StmMinute15Stms()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::has_data() const
{
    for (std::size_t index=0; index<stm_minute15stm.size(); index++)
    {
        if(stm_minute15stm[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::has_operation() const
{
    for (std::size_t index=0; index<stm_minute15stm.size(); index++)
    {
        if(stm_minute15stm[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stm-minute15stms";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StmMinute15Stms' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "stm-minute15stm")
    {
        for(auto const & c : stm_minute15stm)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm>();
        c->parent = this;
        stm_minute15stm.push_back(std::move(c));
        children[segment_path] = stm_minute15stm.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::get_children()
{
    for (auto const & c : stm_minute15stm)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::StmMinute15Stm()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    last_clear_time{YType::str, "last-clear-time"},
    timestamp{YType::str, "timestamp"},
    valid{YType::boolean, "valid"}
    	,
    fe_line(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine>())
	,line(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line>())
	,section(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section>())
{
    fe_line->parent = this;
    children["fe-line"] = fe_line;

    line->parent = this;
    children["line"] = line;

    section->parent = this;
    children["section"] = section;

    yang_name = "stm-minute15stm"; yang_parent_name = "stm-minute15stms";
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::~StmMinute15Stm()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::has_data() const
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

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::has_operation() const
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

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stm-minute15stm" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StmMinute15Stm' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            fe_line = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine>();
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
            line = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line>();
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
            section = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section>();
            section->parent = this;
            children["section"] = section;
        }
        return children.at("section");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::get_children()
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

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::Section()
    :
    section_status{YType::int32, "section-status"}
    	,
    section_bb_es(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionBbEs>())
	,section_bbe_rs(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionBbeRs>())
	,section_e_bs(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionEBs>())
	,section_e_ss(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionESs>())
	,section_es_rs(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionEsRs>())
	,section_se_ss(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionSeSs>())
	,section_ses_rs(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionSesRs>())
	,section_ua_ss(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionUaSs>())
{
    section_bb_es->parent = this;
    children["section-bb-es"] = section_bb_es;

    section_bbe_rs->parent = this;
    children["section-bbe-rs"] = section_bbe_rs;

    section_e_bs->parent = this;
    children["section-e-bs"] = section_e_bs;

    section_e_ss->parent = this;
    children["section-e-ss"] = section_e_ss;

    section_es_rs->parent = this;
    children["section-es-rs"] = section_es_rs;

    section_se_ss->parent = this;
    children["section-se-ss"] = section_se_ss;

    section_ses_rs->parent = this;
    children["section-ses-rs"] = section_ses_rs;

    section_ua_ss->parent = this;
    children["section-ua-ss"] = section_ua_ss;

    yang_name = "section"; yang_parent_name = "stm-minute15stm";
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::~Section()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::has_data() const
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

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::has_operation() const
{
    return is_set(operation)
	|| is_set(section_status.operation)
	|| (section_bb_es !=  nullptr && section_bb_es->has_operation())
	|| (section_bbe_rs !=  nullptr && section_bbe_rs->has_operation())
	|| (section_e_bs !=  nullptr && section_e_bs->has_operation())
	|| (section_e_ss !=  nullptr && section_e_ss->has_operation())
	|| (section_es_rs !=  nullptr && section_es_rs->has_operation())
	|| (section_se_ss !=  nullptr && section_se_ss->has_operation())
	|| (section_ses_rs !=  nullptr && section_ses_rs->has_operation())
	|| (section_ua_ss !=  nullptr && section_ua_ss->has_operation());
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "section-bb-es")
    {
        if(section_bb_es != nullptr)
        {
            children["section-bb-es"] = section_bb_es;
        }
        else
        {
            section_bb_es = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionBbEs>();
            section_bb_es->parent = this;
            children["section-bb-es"] = section_bb_es;
        }
        return children.at("section-bb-es");
    }

    if(child_yang_name == "section-bbe-rs")
    {
        if(section_bbe_rs != nullptr)
        {
            children["section-bbe-rs"] = section_bbe_rs;
        }
        else
        {
            section_bbe_rs = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionBbeRs>();
            section_bbe_rs->parent = this;
            children["section-bbe-rs"] = section_bbe_rs;
        }
        return children.at("section-bbe-rs");
    }

    if(child_yang_name == "section-e-bs")
    {
        if(section_e_bs != nullptr)
        {
            children["section-e-bs"] = section_e_bs;
        }
        else
        {
            section_e_bs = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionEBs>();
            section_e_bs->parent = this;
            children["section-e-bs"] = section_e_bs;
        }
        return children.at("section-e-bs");
    }

    if(child_yang_name == "section-e-ss")
    {
        if(section_e_ss != nullptr)
        {
            children["section-e-ss"] = section_e_ss;
        }
        else
        {
            section_e_ss = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionESs>();
            section_e_ss->parent = this;
            children["section-e-ss"] = section_e_ss;
        }
        return children.at("section-e-ss");
    }

    if(child_yang_name == "section-es-rs")
    {
        if(section_es_rs != nullptr)
        {
            children["section-es-rs"] = section_es_rs;
        }
        else
        {
            section_es_rs = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionEsRs>();
            section_es_rs->parent = this;
            children["section-es-rs"] = section_es_rs;
        }
        return children.at("section-es-rs");
    }

    if(child_yang_name == "section-se-ss")
    {
        if(section_se_ss != nullptr)
        {
            children["section-se-ss"] = section_se_ss;
        }
        else
        {
            section_se_ss = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionSeSs>();
            section_se_ss->parent = this;
            children["section-se-ss"] = section_se_ss;
        }
        return children.at("section-se-ss");
    }

    if(child_yang_name == "section-ses-rs")
    {
        if(section_ses_rs != nullptr)
        {
            children["section-ses-rs"] = section_ses_rs;
        }
        else
        {
            section_ses_rs = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionSesRs>();
            section_ses_rs->parent = this;
            children["section-ses-rs"] = section_ses_rs;
        }
        return children.at("section-ses-rs");
    }

    if(child_yang_name == "section-ua-ss")
    {
        if(section_ua_ss != nullptr)
        {
            children["section-ua-ss"] = section_ua_ss;
        }
        else
        {
            section_ua_ss = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionUaSs>();
            section_ua_ss->parent = this;
            children["section-ua-ss"] = section_ua_ss;
        }
        return children.at("section-ua-ss");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::get_children()
{
    if(children.find("section-bb-es") == children.end())
    {
        if(section_bb_es != nullptr)
        {
            children["section-bb-es"] = section_bb_es;
        }
    }

    if(children.find("section-bbe-rs") == children.end())
    {
        if(section_bbe_rs != nullptr)
        {
            children["section-bbe-rs"] = section_bbe_rs;
        }
    }

    if(children.find("section-e-bs") == children.end())
    {
        if(section_e_bs != nullptr)
        {
            children["section-e-bs"] = section_e_bs;
        }
    }

    if(children.find("section-e-ss") == children.end())
    {
        if(section_e_ss != nullptr)
        {
            children["section-e-ss"] = section_e_ss;
        }
    }

    if(children.find("section-es-rs") == children.end())
    {
        if(section_es_rs != nullptr)
        {
            children["section-es-rs"] = section_es_rs;
        }
    }

    if(children.find("section-se-ss") == children.end())
    {
        if(section_se_ss != nullptr)
        {
            children["section-se-ss"] = section_se_ss;
        }
    }

    if(children.find("section-ses-rs") == children.end())
    {
        if(section_ses_rs != nullptr)
        {
            children["section-ses-rs"] = section_ses_rs;
        }
    }

    if(children.find("section-ua-ss") == children.end())
    {
        if(section_ua_ss != nullptr)
        {
            children["section-ua-ss"] = section_ua_ss;
        }
    }

    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "section-status")
    {
        section_status = value;
    }
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionESs::SectionESs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "section-e-ss"; yang_parent_name = "section";
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionESs::~SectionESs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionESs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionESs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-e-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionESs::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionESs::get_children()
{
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionESs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionEsRs::SectionEsRs()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{
    yang_name = "section-es-rs"; yang_parent_name = "section";
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionEsRs::~SectionEsRs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionEsRs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionEsRs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionEsRs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-es-rs";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionEsRs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SectionEsRs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionEsRs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionEsRs::get_children()
{
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionEsRs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionBbEs::SectionBbEs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "section-bb-es"; yang_parent_name = "section";
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionBbEs::~SectionBbEs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionBbEs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionBbEs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionBbEs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-bb-es";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionBbEs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SectionBbEs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionBbEs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionBbEs::get_children()
{
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionBbEs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionBbeRs::SectionBbeRs()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{
    yang_name = "section-bbe-rs"; yang_parent_name = "section";
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionBbeRs::~SectionBbeRs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionBbeRs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionBbeRs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionBbeRs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-bbe-rs";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionBbeRs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SectionBbeRs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionBbeRs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionBbeRs::get_children()
{
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionBbeRs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionSeSs::SectionSeSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "section-se-ss"; yang_parent_name = "section";
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionSeSs::~SectionSeSs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionSeSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionSeSs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-se-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionSeSs::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionSeSs::get_children()
{
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionSeSs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionSesRs::SectionSesRs()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{
    yang_name = "section-ses-rs"; yang_parent_name = "section";
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionSesRs::~SectionSesRs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionSesRs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionSesRs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionSesRs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-ses-rs";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionSesRs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SectionSesRs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionSesRs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionSesRs::get_children()
{
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionSesRs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionUaSs::SectionUaSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "section-ua-ss"; yang_parent_name = "section";
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionUaSs::~SectionUaSs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionUaSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionUaSs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionUaSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-ua-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionUaSs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SectionUaSs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionUaSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionUaSs::get_children()
{
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionUaSs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionEBs::SectionEBs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "section-e-bs"; yang_parent_name = "section";
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionEBs::~SectionEBs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionEBs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionEBs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionEBs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-e-bs";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionEBs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SectionEBs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionEBs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionEBs::get_children()
{
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Section::SectionEBs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::Line()
    :
    line_status{YType::int32, "line-status"}
    	,
    line_bb_es(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineBbEs>())
	,line_bbe_rs(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineBbeRs>())
	,line_e_bs(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineEBs>())
	,line_e_ss(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineESs>())
	,line_es_rs(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineEsRs>())
	,line_se_ss(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineSeSs>())
	,line_ses_rs(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineSesRs>())
	,line_ua_ss(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineUaSs>())
{
    line_bb_es->parent = this;
    children["line-bb-es"] = line_bb_es;

    line_bbe_rs->parent = this;
    children["line-bbe-rs"] = line_bbe_rs;

    line_e_bs->parent = this;
    children["line-e-bs"] = line_e_bs;

    line_e_ss->parent = this;
    children["line-e-ss"] = line_e_ss;

    line_es_rs->parent = this;
    children["line-es-rs"] = line_es_rs;

    line_se_ss->parent = this;
    children["line-se-ss"] = line_se_ss;

    line_ses_rs->parent = this;
    children["line-ses-rs"] = line_ses_rs;

    line_ua_ss->parent = this;
    children["line-ua-ss"] = line_ua_ss;

    yang_name = "line"; yang_parent_name = "stm-minute15stm";
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::~Line()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::has_data() const
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

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::has_operation() const
{
    return is_set(operation)
	|| is_set(line_status.operation)
	|| (line_bb_es !=  nullptr && line_bb_es->has_operation())
	|| (line_bbe_rs !=  nullptr && line_bbe_rs->has_operation())
	|| (line_e_bs !=  nullptr && line_e_bs->has_operation())
	|| (line_e_ss !=  nullptr && line_e_ss->has_operation())
	|| (line_es_rs !=  nullptr && line_es_rs->has_operation())
	|| (line_se_ss !=  nullptr && line_se_ss->has_operation())
	|| (line_ses_rs !=  nullptr && line_ses_rs->has_operation())
	|| (line_ua_ss !=  nullptr && line_ua_ss->has_operation());
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "line-bb-es")
    {
        if(line_bb_es != nullptr)
        {
            children["line-bb-es"] = line_bb_es;
        }
        else
        {
            line_bb_es = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineBbEs>();
            line_bb_es->parent = this;
            children["line-bb-es"] = line_bb_es;
        }
        return children.at("line-bb-es");
    }

    if(child_yang_name == "line-bbe-rs")
    {
        if(line_bbe_rs != nullptr)
        {
            children["line-bbe-rs"] = line_bbe_rs;
        }
        else
        {
            line_bbe_rs = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineBbeRs>();
            line_bbe_rs->parent = this;
            children["line-bbe-rs"] = line_bbe_rs;
        }
        return children.at("line-bbe-rs");
    }

    if(child_yang_name == "line-e-bs")
    {
        if(line_e_bs != nullptr)
        {
            children["line-e-bs"] = line_e_bs;
        }
        else
        {
            line_e_bs = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineEBs>();
            line_e_bs->parent = this;
            children["line-e-bs"] = line_e_bs;
        }
        return children.at("line-e-bs");
    }

    if(child_yang_name == "line-e-ss")
    {
        if(line_e_ss != nullptr)
        {
            children["line-e-ss"] = line_e_ss;
        }
        else
        {
            line_e_ss = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineESs>();
            line_e_ss->parent = this;
            children["line-e-ss"] = line_e_ss;
        }
        return children.at("line-e-ss");
    }

    if(child_yang_name == "line-es-rs")
    {
        if(line_es_rs != nullptr)
        {
            children["line-es-rs"] = line_es_rs;
        }
        else
        {
            line_es_rs = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineEsRs>();
            line_es_rs->parent = this;
            children["line-es-rs"] = line_es_rs;
        }
        return children.at("line-es-rs");
    }

    if(child_yang_name == "line-se-ss")
    {
        if(line_se_ss != nullptr)
        {
            children["line-se-ss"] = line_se_ss;
        }
        else
        {
            line_se_ss = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineSeSs>();
            line_se_ss->parent = this;
            children["line-se-ss"] = line_se_ss;
        }
        return children.at("line-se-ss");
    }

    if(child_yang_name == "line-ses-rs")
    {
        if(line_ses_rs != nullptr)
        {
            children["line-ses-rs"] = line_ses_rs;
        }
        else
        {
            line_ses_rs = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineSesRs>();
            line_ses_rs->parent = this;
            children["line-ses-rs"] = line_ses_rs;
        }
        return children.at("line-ses-rs");
    }

    if(child_yang_name == "line-ua-ss")
    {
        if(line_ua_ss != nullptr)
        {
            children["line-ua-ss"] = line_ua_ss;
        }
        else
        {
            line_ua_ss = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineUaSs>();
            line_ua_ss->parent = this;
            children["line-ua-ss"] = line_ua_ss;
        }
        return children.at("line-ua-ss");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::get_children()
{
    if(children.find("line-bb-es") == children.end())
    {
        if(line_bb_es != nullptr)
        {
            children["line-bb-es"] = line_bb_es;
        }
    }

    if(children.find("line-bbe-rs") == children.end())
    {
        if(line_bbe_rs != nullptr)
        {
            children["line-bbe-rs"] = line_bbe_rs;
        }
    }

    if(children.find("line-e-bs") == children.end())
    {
        if(line_e_bs != nullptr)
        {
            children["line-e-bs"] = line_e_bs;
        }
    }

    if(children.find("line-e-ss") == children.end())
    {
        if(line_e_ss != nullptr)
        {
            children["line-e-ss"] = line_e_ss;
        }
    }

    if(children.find("line-es-rs") == children.end())
    {
        if(line_es_rs != nullptr)
        {
            children["line-es-rs"] = line_es_rs;
        }
    }

    if(children.find("line-se-ss") == children.end())
    {
        if(line_se_ss != nullptr)
        {
            children["line-se-ss"] = line_se_ss;
        }
    }

    if(children.find("line-ses-rs") == children.end())
    {
        if(line_ses_rs != nullptr)
        {
            children["line-ses-rs"] = line_ses_rs;
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

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "line-status")
    {
        line_status = value;
    }
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineESs::LineESs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "line-e-ss"; yang_parent_name = "line";
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineESs::~LineESs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineESs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineESs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-e-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineESs::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineESs::get_children()
{
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineESs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineEsRs::LineEsRs()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{
    yang_name = "line-es-rs"; yang_parent_name = "line";
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineEsRs::~LineEsRs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineEsRs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineEsRs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineEsRs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-es-rs";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineEsRs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LineEsRs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineEsRs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineEsRs::get_children()
{
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineEsRs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineBbEs::LineBbEs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "line-bb-es"; yang_parent_name = "line";
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineBbEs::~LineBbEs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineBbEs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineBbEs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineBbEs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-bb-es";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineBbEs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LineBbEs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineBbEs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineBbEs::get_children()
{
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineBbEs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineBbeRs::LineBbeRs()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{
    yang_name = "line-bbe-rs"; yang_parent_name = "line";
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineBbeRs::~LineBbeRs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineBbeRs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineBbeRs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineBbeRs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-bbe-rs";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineBbeRs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LineBbeRs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineBbeRs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineBbeRs::get_children()
{
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineBbeRs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineSeSs::LineSeSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "line-se-ss"; yang_parent_name = "line";
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineSeSs::~LineSeSs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineSeSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineSeSs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-se-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineSeSs::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineSeSs::get_children()
{
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineSeSs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineSesRs::LineSesRs()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{
    yang_name = "line-ses-rs"; yang_parent_name = "line";
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineSesRs::~LineSesRs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineSesRs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineSesRs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineSesRs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-ses-rs";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineSesRs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LineSesRs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineSesRs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineSesRs::get_children()
{
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineSesRs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineUaSs::LineUaSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "line-ua-ss"; yang_parent_name = "line";
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineUaSs::~LineUaSs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineUaSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineUaSs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineUaSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-ua-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineUaSs::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineUaSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineUaSs::get_children()
{
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineUaSs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineEBs::LineEBs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "line-e-bs"; yang_parent_name = "line";
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineEBs::~LineEBs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineEBs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineEBs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineEBs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-e-bs";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineEBs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LineEBs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineEBs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineEBs::get_children()
{
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::Line::LineEBs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FeLine()
    :
    far_end_line_bbe_rs(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineBbeRs>())
	,far_end_line_e_bs(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineEBs>())
	,far_end_line_e_ss(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineESs>())
	,far_end_line_ebb_es(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineEbbEs>())
	,far_end_line_es_rs(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineEsRs>())
	,far_end_line_se_ss(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineSeSs>())
	,far_end_line_ses_rs(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineSesRs>())
	,far_end_line_ua_ss(std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineUaSs>())
{
    far_end_line_bbe_rs->parent = this;
    children["far-end-line-bbe-rs"] = far_end_line_bbe_rs;

    far_end_line_e_bs->parent = this;
    children["far-end-line-e-bs"] = far_end_line_e_bs;

    far_end_line_e_ss->parent = this;
    children["far-end-line-e-ss"] = far_end_line_e_ss;

    far_end_line_ebb_es->parent = this;
    children["far-end-line-ebb-es"] = far_end_line_ebb_es;

    far_end_line_es_rs->parent = this;
    children["far-end-line-es-rs"] = far_end_line_es_rs;

    far_end_line_se_ss->parent = this;
    children["far-end-line-se-ss"] = far_end_line_se_ss;

    far_end_line_ses_rs->parent = this;
    children["far-end-line-ses-rs"] = far_end_line_ses_rs;

    far_end_line_ua_ss->parent = this;
    children["far-end-line-ua-ss"] = far_end_line_ua_ss;

    yang_name = "fe-line"; yang_parent_name = "stm-minute15stm";
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::~FeLine()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::has_data() const
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

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::has_operation() const
{
    return is_set(operation)
	|| (far_end_line_bbe_rs !=  nullptr && far_end_line_bbe_rs->has_operation())
	|| (far_end_line_e_bs !=  nullptr && far_end_line_e_bs->has_operation())
	|| (far_end_line_e_ss !=  nullptr && far_end_line_e_ss->has_operation())
	|| (far_end_line_ebb_es !=  nullptr && far_end_line_ebb_es->has_operation())
	|| (far_end_line_es_rs !=  nullptr && far_end_line_es_rs->has_operation())
	|| (far_end_line_se_ss !=  nullptr && far_end_line_se_ss->has_operation())
	|| (far_end_line_ses_rs !=  nullptr && far_end_line_ses_rs->has_operation())
	|| (far_end_line_ua_ss !=  nullptr && far_end_line_ua_ss->has_operation());
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fe-line";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "far-end-line-bbe-rs")
    {
        if(far_end_line_bbe_rs != nullptr)
        {
            children["far-end-line-bbe-rs"] = far_end_line_bbe_rs;
        }
        else
        {
            far_end_line_bbe_rs = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineBbeRs>();
            far_end_line_bbe_rs->parent = this;
            children["far-end-line-bbe-rs"] = far_end_line_bbe_rs;
        }
        return children.at("far-end-line-bbe-rs");
    }

    if(child_yang_name == "far-end-line-e-bs")
    {
        if(far_end_line_e_bs != nullptr)
        {
            children["far-end-line-e-bs"] = far_end_line_e_bs;
        }
        else
        {
            far_end_line_e_bs = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineEBs>();
            far_end_line_e_bs->parent = this;
            children["far-end-line-e-bs"] = far_end_line_e_bs;
        }
        return children.at("far-end-line-e-bs");
    }

    if(child_yang_name == "far-end-line-e-ss")
    {
        if(far_end_line_e_ss != nullptr)
        {
            children["far-end-line-e-ss"] = far_end_line_e_ss;
        }
        else
        {
            far_end_line_e_ss = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineESs>();
            far_end_line_e_ss->parent = this;
            children["far-end-line-e-ss"] = far_end_line_e_ss;
        }
        return children.at("far-end-line-e-ss");
    }

    if(child_yang_name == "far-end-line-ebb-es")
    {
        if(far_end_line_ebb_es != nullptr)
        {
            children["far-end-line-ebb-es"] = far_end_line_ebb_es;
        }
        else
        {
            far_end_line_ebb_es = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineEbbEs>();
            far_end_line_ebb_es->parent = this;
            children["far-end-line-ebb-es"] = far_end_line_ebb_es;
        }
        return children.at("far-end-line-ebb-es");
    }

    if(child_yang_name == "far-end-line-es-rs")
    {
        if(far_end_line_es_rs != nullptr)
        {
            children["far-end-line-es-rs"] = far_end_line_es_rs;
        }
        else
        {
            far_end_line_es_rs = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineEsRs>();
            far_end_line_es_rs->parent = this;
            children["far-end-line-es-rs"] = far_end_line_es_rs;
        }
        return children.at("far-end-line-es-rs");
    }

    if(child_yang_name == "far-end-line-se-ss")
    {
        if(far_end_line_se_ss != nullptr)
        {
            children["far-end-line-se-ss"] = far_end_line_se_ss;
        }
        else
        {
            far_end_line_se_ss = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineSeSs>();
            far_end_line_se_ss->parent = this;
            children["far-end-line-se-ss"] = far_end_line_se_ss;
        }
        return children.at("far-end-line-se-ss");
    }

    if(child_yang_name == "far-end-line-ses-rs")
    {
        if(far_end_line_ses_rs != nullptr)
        {
            children["far-end-line-ses-rs"] = far_end_line_ses_rs;
        }
        else
        {
            far_end_line_ses_rs = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineSesRs>();
            far_end_line_ses_rs->parent = this;
            children["far-end-line-ses-rs"] = far_end_line_ses_rs;
        }
        return children.at("far-end-line-ses-rs");
    }

    if(child_yang_name == "far-end-line-ua-ss")
    {
        if(far_end_line_ua_ss != nullptr)
        {
            children["far-end-line-ua-ss"] = far_end_line_ua_ss;
        }
        else
        {
            far_end_line_ua_ss = std::make_shared<PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineUaSs>();
            far_end_line_ua_ss->parent = this;
            children["far-end-line-ua-ss"] = far_end_line_ua_ss;
        }
        return children.at("far-end-line-ua-ss");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::get_children()
{
    if(children.find("far-end-line-bbe-rs") == children.end())
    {
        if(far_end_line_bbe_rs != nullptr)
        {
            children["far-end-line-bbe-rs"] = far_end_line_bbe_rs;
        }
    }

    if(children.find("far-end-line-e-bs") == children.end())
    {
        if(far_end_line_e_bs != nullptr)
        {
            children["far-end-line-e-bs"] = far_end_line_e_bs;
        }
    }

    if(children.find("far-end-line-e-ss") == children.end())
    {
        if(far_end_line_e_ss != nullptr)
        {
            children["far-end-line-e-ss"] = far_end_line_e_ss;
        }
    }

    if(children.find("far-end-line-ebb-es") == children.end())
    {
        if(far_end_line_ebb_es != nullptr)
        {
            children["far-end-line-ebb-es"] = far_end_line_ebb_es;
        }
    }

    if(children.find("far-end-line-es-rs") == children.end())
    {
        if(far_end_line_es_rs != nullptr)
        {
            children["far-end-line-es-rs"] = far_end_line_es_rs;
        }
    }

    if(children.find("far-end-line-se-ss") == children.end())
    {
        if(far_end_line_se_ss != nullptr)
        {
            children["far-end-line-se-ss"] = far_end_line_se_ss;
        }
    }

    if(children.find("far-end-line-ses-rs") == children.end())
    {
        if(far_end_line_ses_rs != nullptr)
        {
            children["far-end-line-ses-rs"] = far_end_line_ses_rs;
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

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineESs::FarEndLineESs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "far-end-line-e-ss"; yang_parent_name = "fe-line";
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineESs::~FarEndLineESs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineESs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineESs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-e-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineESs::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineESs::get_children()
{
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineESs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineEsRs::FarEndLineEsRs()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{
    yang_name = "far-end-line-es-rs"; yang_parent_name = "fe-line";
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineEsRs::~FarEndLineEsRs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineEsRs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineEsRs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineEsRs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-es-rs";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineEsRs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FarEndLineEsRs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineEsRs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineEsRs::get_children()
{
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineEsRs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineEbbEs::FarEndLineEbbEs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "far-end-line-ebb-es"; yang_parent_name = "fe-line";
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineEbbEs::~FarEndLineEbbEs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineEbbEs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineEbbEs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineEbbEs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-ebb-es";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineEbbEs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FarEndLineEbbEs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineEbbEs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineEbbEs::get_children()
{
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineEbbEs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineBbeRs::FarEndLineBbeRs()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{
    yang_name = "far-end-line-bbe-rs"; yang_parent_name = "fe-line";
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineBbeRs::~FarEndLineBbeRs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineBbeRs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineBbeRs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineBbeRs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-bbe-rs";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineBbeRs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FarEndLineBbeRs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineBbeRs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineBbeRs::get_children()
{
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineBbeRs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineSeSs::FarEndLineSeSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "far-end-line-se-ss"; yang_parent_name = "fe-line";
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineSeSs::~FarEndLineSeSs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineSeSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineSeSs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-se-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineSeSs::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineSeSs::get_children()
{
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineSeSs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineSesRs::FarEndLineSesRs()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"}
{
    yang_name = "far-end-line-ses-rs"; yang_parent_name = "fe-line";
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineSesRs::~FarEndLineSesRs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineSesRs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineSesRs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineSesRs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-ses-rs";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineSesRs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FarEndLineSesRs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineSesRs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineSesRs::get_children()
{
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineSesRs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineUaSs::FarEndLineUaSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "far-end-line-ua-ss"; yang_parent_name = "fe-line";
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineUaSs::~FarEndLineUaSs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineUaSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineUaSs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineUaSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-ua-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineUaSs::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineUaSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineUaSs::get_children()
{
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineUaSs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineEBs::FarEndLineEBs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "far-end-line-e-bs"; yang_parent_name = "fe-line";
}

PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineEBs::~FarEndLineEBs()
{
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineEBs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineEBs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineEBs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-e-bs";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineEBs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FarEndLineEBs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineEBs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineEBs::get_children()
{
    return children;
}

void PerformanceManagement::Stm::StmPorts::StmPort::StmCurrent::StmMinute15::StmMinute15Stms::StmMinute15Stm::FeLine::FarEndLineEBs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Sonet::Sonet()
    :
    sonet_ports(std::make_shared<PerformanceManagement::Sonet::SonetPorts>())
{
    sonet_ports->parent = this;
    children["sonet-ports"] = sonet_ports;

    yang_name = "sonet"; yang_parent_name = "performance-management";
}

PerformanceManagement::Sonet::~Sonet()
{
}

bool PerformanceManagement::Sonet::has_data() const
{
    return (sonet_ports !=  nullptr && sonet_ports->has_data());
}

bool PerformanceManagement::Sonet::has_operation() const
{
    return is_set(operation)
	|| (sonet_ports !=  nullptr && sonet_ports->has_operation());
}

std::string PerformanceManagement::Sonet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Sonet::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Sonet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sonet-ports")
    {
        if(sonet_ports != nullptr)
        {
            children["sonet-ports"] = sonet_ports;
        }
        else
        {
            sonet_ports = std::make_shared<PerformanceManagement::Sonet::SonetPorts>();
            sonet_ports->parent = this;
            children["sonet-ports"] = sonet_ports;
        }
        return children.at("sonet-ports");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Sonet::get_children()
{
    if(children.find("sonet-ports") == children.end())
    {
        if(sonet_ports != nullptr)
        {
            children["sonet-ports"] = sonet_ports;
        }
    }

    return children;
}

void PerformanceManagement::Sonet::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Sonet::SonetPorts::SonetPorts()
{
    yang_name = "sonet-ports"; yang_parent_name = "sonet";
}

PerformanceManagement::Sonet::SonetPorts::~SonetPorts()
{
}

bool PerformanceManagement::Sonet::SonetPorts::has_data() const
{
    for (std::size_t index=0; index<sonet_port.size(); index++)
    {
        if(sonet_port[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Sonet::SonetPorts::has_operation() const
{
    for (std::size_t index=0; index<sonet_port.size(); index++)
    {
        if(sonet_port[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerformanceManagement::Sonet::SonetPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-ports";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Sonet::SonetPorts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management/sonet/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sonet-port")
    {
        for(auto const & c : sonet_port)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort>();
        c->parent = this;
        sonet_port.push_back(std::move(c));
        children[segment_path] = sonet_port.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Sonet::SonetPorts::get_children()
{
    for (auto const & c : sonet_port)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PerformanceManagement::Sonet::SonetPorts::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetPort()
    :
    name{YType::str, "name"}
    	,
    sonet_current(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent>())
{
    sonet_current->parent = this;
    children["sonet-current"] = sonet_current;

    yang_name = "sonet-port"; yang_parent_name = "sonet-ports";
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::~SonetPort()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::has_data() const
{
    return name.is_set
	|| (sonet_current !=  nullptr && sonet_current->has_data());
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (sonet_current !=  nullptr && sonet_current->has_operation());
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-port" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Sonet::SonetPorts::SonetPort::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management/sonet/sonet-ports/" << get_segment_path();
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

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sonet-current")
    {
        if(sonet_current != nullptr)
        {
            children["sonet-current"] = sonet_current;
        }
        else
        {
            sonet_current = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent>();
            sonet_current->parent = this;
            children["sonet-current"] = sonet_current;
        }
        return children.at("sonet-current");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Sonet::SonetPorts::SonetPort::get_children()
{
    if(children.find("sonet-current") == children.end())
    {
        if(sonet_current != nullptr)
        {
            children["sonet-current"] = sonet_current;
        }
    }

    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetCurrent()
    :
    sonet_hour24(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24>())
	,sonet_minute15(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15>())
{
    sonet_hour24->parent = this;
    children["sonet-hour24"] = sonet_hour24;

    sonet_minute15->parent = this;
    children["sonet-minute15"] = sonet_minute15;

    yang_name = "sonet-current"; yang_parent_name = "sonet-port";
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::~SonetCurrent()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::has_data() const
{
    return (sonet_hour24 !=  nullptr && sonet_hour24->has_data())
	|| (sonet_minute15 !=  nullptr && sonet_minute15->has_data());
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::has_operation() const
{
    return is_set(operation)
	|| (sonet_hour24 !=  nullptr && sonet_hour24->has_operation())
	|| (sonet_minute15 !=  nullptr && sonet_minute15->has_operation());
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-current";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SonetCurrent' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sonet-hour24")
    {
        if(sonet_hour24 != nullptr)
        {
            children["sonet-hour24"] = sonet_hour24;
        }
        else
        {
            sonet_hour24 = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24>();
            sonet_hour24->parent = this;
            children["sonet-hour24"] = sonet_hour24;
        }
        return children.at("sonet-hour24");
    }

    if(child_yang_name == "sonet-minute15")
    {
        if(sonet_minute15 != nullptr)
        {
            children["sonet-minute15"] = sonet_minute15;
        }
        else
        {
            sonet_minute15 = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15>();
            sonet_minute15->parent = this;
            children["sonet-minute15"] = sonet_minute15;
        }
        return children.at("sonet-minute15");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::get_children()
{
    if(children.find("sonet-hour24") == children.end())
    {
        if(sonet_hour24 != nullptr)
        {
            children["sonet-hour24"] = sonet_hour24;
        }
    }

    if(children.find("sonet-minute15") == children.end())
    {
        if(sonet_minute15 != nullptr)
        {
            children["sonet-minute15"] = sonet_minute15;
        }
    }

    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15()
    :
    sonet_minute15_paths(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths>())
	,sonet_minute15ocns(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns>())
{
    sonet_minute15_paths->parent = this;
    children["sonet-minute15-paths"] = sonet_minute15_paths;

    sonet_minute15ocns->parent = this;
    children["sonet-minute15ocns"] = sonet_minute15ocns;

    yang_name = "sonet-minute15"; yang_parent_name = "sonet-current";
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
    return is_set(operation)
	|| (sonet_minute15_paths !=  nullptr && sonet_minute15_paths->has_operation())
	|| (sonet_minute15ocns !=  nullptr && sonet_minute15ocns->has_operation());
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-minute15";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SonetMinute15' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sonet-minute15-paths")
    {
        if(sonet_minute15_paths != nullptr)
        {
            children["sonet-minute15-paths"] = sonet_minute15_paths;
        }
        else
        {
            sonet_minute15_paths = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths>();
            sonet_minute15_paths->parent = this;
            children["sonet-minute15-paths"] = sonet_minute15_paths;
        }
        return children.at("sonet-minute15-paths");
    }

    if(child_yang_name == "sonet-minute15ocns")
    {
        if(sonet_minute15ocns != nullptr)
        {
            children["sonet-minute15ocns"] = sonet_minute15ocns;
        }
        else
        {
            sonet_minute15ocns = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns>();
            sonet_minute15ocns->parent = this;
            children["sonet-minute15ocns"] = sonet_minute15ocns;
        }
        return children.at("sonet-minute15ocns");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::get_children()
{
    if(children.find("sonet-minute15-paths") == children.end())
    {
        if(sonet_minute15_paths != nullptr)
        {
            children["sonet-minute15-paths"] = sonet_minute15_paths;
        }
    }

    if(children.find("sonet-minute15ocns") == children.end())
    {
        if(sonet_minute15ocns != nullptr)
        {
            children["sonet-minute15ocns"] = sonet_minute15ocns;
        }
    }

    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Paths()
{
    yang_name = "sonet-minute15-paths"; yang_parent_name = "sonet-minute15";
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
    return is_set(operation);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-minute15-paths";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SonetMinute15Paths' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sonet-minute15-path")
    {
        for(auto const & c : sonet_minute15_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path>();
        c->parent = this;
        sonet_minute15_path.push_back(std::move(c));
        children[segment_path] = sonet_minute15_path.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::get_children()
{
    for (auto const & c : sonet_minute15_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::SonetMinute15Path()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    last_clear_time{YType::str, "last-clear-time"},
    timestamp{YType::str, "timestamp"},
    valid{YType::boolean, "valid"}
    	,
    fe_path(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::FePath>())
	,path(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path>())
{
    fe_path->parent = this;
    children["fe-path"] = fe_path;

    path->parent = this;
    children["path"] = path;

    yang_name = "sonet-minute15-path"; yang_parent_name = "sonet-minute15-paths";
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::~SonetMinute15Path()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::has_data() const
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::has_operation() const
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

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-minute15-path" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SonetMinute15Path' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            fe_path = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::FePath>();
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
            path = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path>();
            path->parent = this;
            children["path"] = path;
        }
        return children.at("path");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::get_children()
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::Path()
    :
    path_status{YType::int32, "path-status"},
    path_width{YType::enumeration, "path-width"}
    	,
    path_c_vs(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathCVs>())
	,path_e_ss(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathESs>())
	,path_se_ss(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathSeSs>())
	,path_ua_ss(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathUaSs>())
{
    path_c_vs->parent = this;
    children["path-c-vs"] = path_c_vs;

    path_e_ss->parent = this;
    children["path-e-ss"] = path_e_ss;

    path_se_ss->parent = this;
    children["path-se-ss"] = path_se_ss;

    path_ua_ss->parent = this;
    children["path-ua-ss"] = path_ua_ss;

    yang_name = "path"; yang_parent_name = "sonet-minute15-path";
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::~Path()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::has_data() const
{
    return path_status.is_set
	|| path_width.is_set
	|| (path_c_vs !=  nullptr && path_c_vs->has_data())
	|| (path_e_ss !=  nullptr && path_e_ss->has_data())
	|| (path_se_ss !=  nullptr && path_se_ss->has_data())
	|| (path_ua_ss !=  nullptr && path_ua_ss->has_data());
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::has_operation() const
{
    return is_set(operation)
	|| is_set(path_status.operation)
	|| is_set(path_width.operation)
	|| (path_c_vs !=  nullptr && path_c_vs->has_operation())
	|| (path_e_ss !=  nullptr && path_e_ss->has_operation())
	|| (path_se_ss !=  nullptr && path_se_ss->has_operation())
	|| (path_ua_ss !=  nullptr && path_ua_ss->has_operation());
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            path_c_vs = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathCVs>();
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
            path_e_ss = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathESs>();
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
            path_se_ss = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathSeSs>();
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
            path_ua_ss = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathUaSs>();
            path_ua_ss->parent = this;
            children["path-ua-ss"] = path_ua_ss;
        }
        return children.at("path-ua-ss");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::get_children()
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathESs::PathESs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "path-e-ss"; yang_parent_name = "path";
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathESs::~PathESs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathESs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathESs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-e-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathESs::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathESs::get_children()
{
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathESs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathSeSs::PathSeSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "path-se-ss"; yang_parent_name = "path";
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathSeSs::~PathSeSs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathSeSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathSeSs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-se-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathSeSs::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathSeSs::get_children()
{
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathSeSs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathCVs::PathCVs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "path-c-vs"; yang_parent_name = "path";
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathCVs::~PathCVs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathCVs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathCVs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathCVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-c-vs";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathCVs::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathCVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathCVs::get_children()
{
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathCVs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathUaSs::PathUaSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "path-ua-ss"; yang_parent_name = "path";
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathUaSs::~PathUaSs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathUaSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathUaSs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathUaSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-ua-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathUaSs::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathUaSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathUaSs::get_children()
{
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathUaSs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::FePath::FePath()
    :
    far_end_path_c_vs{YType::uint32, "far-end-path-c-vs"},
    far_end_path_e_ss{YType::uint32, "far-end-path-e-ss"},
    far_end_path_se_ss{YType::uint32, "far-end-path-se-ss"},
    far_end_path_ua_ss{YType::uint32, "far-end-path-ua-ss"}
{
    yang_name = "fe-path"; yang_parent_name = "sonet-minute15-path";
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::FePath::~FePath()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::FePath::has_data() const
{
    return far_end_path_c_vs.is_set
	|| far_end_path_e_ss.is_set
	|| far_end_path_se_ss.is_set
	|| far_end_path_ua_ss.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::FePath::has_operation() const
{
    return is_set(operation)
	|| is_set(far_end_path_c_vs.operation)
	|| is_set(far_end_path_e_ss.operation)
	|| is_set(far_end_path_se_ss.operation)
	|| is_set(far_end_path_ua_ss.operation);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::FePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fe-path";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::FePath::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::FePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::FePath::get_children()
{
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::FePath::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocns()
{
    yang_name = "sonet-minute15ocns"; yang_parent_name = "sonet-minute15";
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
    return is_set(operation);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-minute15ocns";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SonetMinute15Ocns' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sonet-minute15ocn")
    {
        for(auto const & c : sonet_minute15ocn)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn>();
        c->parent = this;
        sonet_minute15ocn.push_back(std::move(c));
        children[segment_path] = sonet_minute15ocn.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::get_children()
{
    for (auto const & c : sonet_minute15ocn)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::SonetMinute15Ocn()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    last_clear_time{YType::str, "last-clear-time"},
    timestamp{YType::str, "timestamp"},
    valid{YType::boolean, "valid"}
    	,
    fe_line(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine>())
	,line(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line>())
	,section(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section>())
{
    fe_line->parent = this;
    children["fe-line"] = fe_line;

    line->parent = this;
    children["line"] = line;

    section->parent = this;
    children["section"] = section;

    yang_name = "sonet-minute15ocn"; yang_parent_name = "sonet-minute15ocns";
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::~SonetMinute15Ocn()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::has_data() const
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::has_operation() const
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

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-minute15ocn" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SonetMinute15Ocn' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            fe_line = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine>();
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
            line = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line>();
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
            section = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section>();
            section->parent = this;
            children["section"] = section;
        }
        return children.at("section");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::get_children()
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::Section()
    :
    section_status{YType::int32, "section-status"}
    	,
    section_c_vs(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionCVs>())
	,section_e_ss(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionESs>())
	,section_se_ss(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSeSs>())
	,section_sef_ss(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSefSs>())
{
    section_c_vs->parent = this;
    children["section-c-vs"] = section_c_vs;

    section_e_ss->parent = this;
    children["section-e-ss"] = section_e_ss;

    section_se_ss->parent = this;
    children["section-se-ss"] = section_se_ss;

    section_sef_ss->parent = this;
    children["section-sef-ss"] = section_sef_ss;

    yang_name = "section"; yang_parent_name = "sonet-minute15ocn";
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::~Section()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::has_data() const
{
    return section_status.is_set
	|| (section_c_vs !=  nullptr && section_c_vs->has_data())
	|| (section_e_ss !=  nullptr && section_e_ss->has_data())
	|| (section_se_ss !=  nullptr && section_se_ss->has_data())
	|| (section_sef_ss !=  nullptr && section_sef_ss->has_data());
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::has_operation() const
{
    return is_set(operation)
	|| is_set(section_status.operation)
	|| (section_c_vs !=  nullptr && section_c_vs->has_operation())
	|| (section_e_ss !=  nullptr && section_e_ss->has_operation())
	|| (section_se_ss !=  nullptr && section_se_ss->has_operation())
	|| (section_sef_ss !=  nullptr && section_sef_ss->has_operation());
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            section_c_vs = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionCVs>();
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
            section_e_ss = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionESs>();
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
            section_se_ss = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSeSs>();
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
            section_sef_ss = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSefSs>();
            section_sef_ss->parent = this;
            children["section-sef-ss"] = section_sef_ss;
        }
        return children.at("section-sef-ss");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::get_children()
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "section-status")
    {
        section_status = value;
    }
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionESs::SectionESs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "section-e-ss"; yang_parent_name = "section";
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionESs::~SectionESs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionESs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionESs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-e-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionESs::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionESs::get_children()
{
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionESs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSeSs::SectionSeSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "section-se-ss"; yang_parent_name = "section";
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSeSs::~SectionSeSs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSeSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSeSs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-se-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSeSs::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSeSs::get_children()
{
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSeSs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSefSs::SectionSefSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "section-sef-ss"; yang_parent_name = "section";
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSefSs::~SectionSefSs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSefSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSefSs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSefSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-sef-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSefSs::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSefSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSefSs::get_children()
{
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSefSs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionCVs::SectionCVs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "section-c-vs"; yang_parent_name = "section";
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionCVs::~SectionCVs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionCVs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionCVs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionCVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-c-vs";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionCVs::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionCVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionCVs::get_children()
{
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionCVs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::Line()
    :
    line_status{YType::int32, "line-status"}
    	,
    line_c_vs(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineCVs>())
	,line_e_ss(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineESs>())
	,line_fc_ls(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineFcLs>())
	,line_se_ss(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineSeSs>())
	,line_ua_ss(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineUaSs>())
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

    yang_name = "line"; yang_parent_name = "sonet-minute15ocn";
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::~Line()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::has_data() const
{
    return line_status.is_set
	|| (line_c_vs !=  nullptr && line_c_vs->has_data())
	|| (line_e_ss !=  nullptr && line_e_ss->has_data())
	|| (line_fc_ls !=  nullptr && line_fc_ls->has_data())
	|| (line_se_ss !=  nullptr && line_se_ss->has_data())
	|| (line_ua_ss !=  nullptr && line_ua_ss->has_data());
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::has_operation() const
{
    return is_set(operation)
	|| is_set(line_status.operation)
	|| (line_c_vs !=  nullptr && line_c_vs->has_operation())
	|| (line_e_ss !=  nullptr && line_e_ss->has_operation())
	|| (line_fc_ls !=  nullptr && line_fc_ls->has_operation())
	|| (line_se_ss !=  nullptr && line_se_ss->has_operation())
	|| (line_ua_ss !=  nullptr && line_ua_ss->has_operation());
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            line_c_vs = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineCVs>();
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
            line_e_ss = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineESs>();
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
            line_fc_ls = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineFcLs>();
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
            line_se_ss = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineSeSs>();
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
            line_ua_ss = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineUaSs>();
            line_ua_ss->parent = this;
            children["line-ua-ss"] = line_ua_ss;
        }
        return children.at("line-ua-ss");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::get_children()
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "line-status")
    {
        line_status = value;
    }
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineESs::LineESs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "line-e-ss"; yang_parent_name = "line";
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineESs::~LineESs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineESs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineESs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-e-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineESs::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineESs::get_children()
{
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineESs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineSeSs::LineSeSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "line-se-ss"; yang_parent_name = "line";
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineSeSs::~LineSeSs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineSeSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineSeSs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-se-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineSeSs::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineSeSs::get_children()
{
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineSeSs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineCVs::LineCVs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "line-c-vs"; yang_parent_name = "line";
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineCVs::~LineCVs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineCVs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineCVs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineCVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-c-vs";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineCVs::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineCVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineCVs::get_children()
{
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineCVs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineUaSs::LineUaSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "line-ua-ss"; yang_parent_name = "line";
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineUaSs::~LineUaSs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineUaSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineUaSs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineUaSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-ua-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineUaSs::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineUaSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineUaSs::get_children()
{
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineUaSs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineFcLs::LineFcLs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "line-fc-ls"; yang_parent_name = "line";
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineFcLs::~LineFcLs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineFcLs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineFcLs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineFcLs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-fc-ls";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineFcLs::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineFcLs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineFcLs::get_children()
{
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineFcLs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FeLine()
    :
    far_end_line_c_vs(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineCVs>())
	,far_end_line_e_ss(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineESs>())
	,far_end_line_fc_ls(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineFcLs>())
	,far_end_line_se_ss(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineSeSs>())
	,far_end_line_ua_ss(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineUaSs>())
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

    yang_name = "fe-line"; yang_parent_name = "sonet-minute15ocn";
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::~FeLine()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::has_data() const
{
    return (far_end_line_c_vs !=  nullptr && far_end_line_c_vs->has_data())
	|| (far_end_line_e_ss !=  nullptr && far_end_line_e_ss->has_data())
	|| (far_end_line_fc_ls !=  nullptr && far_end_line_fc_ls->has_data())
	|| (far_end_line_se_ss !=  nullptr && far_end_line_se_ss->has_data())
	|| (far_end_line_ua_ss !=  nullptr && far_end_line_ua_ss->has_data());
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::has_operation() const
{
    return is_set(operation)
	|| (far_end_line_c_vs !=  nullptr && far_end_line_c_vs->has_operation())
	|| (far_end_line_e_ss !=  nullptr && far_end_line_e_ss->has_operation())
	|| (far_end_line_fc_ls !=  nullptr && far_end_line_fc_ls->has_operation())
	|| (far_end_line_se_ss !=  nullptr && far_end_line_se_ss->has_operation())
	|| (far_end_line_ua_ss !=  nullptr && far_end_line_ua_ss->has_operation());
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fe-line";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            far_end_line_c_vs = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineCVs>();
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
            far_end_line_e_ss = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineESs>();
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
            far_end_line_fc_ls = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineFcLs>();
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
            far_end_line_se_ss = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineSeSs>();
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
            far_end_line_ua_ss = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineUaSs>();
            far_end_line_ua_ss->parent = this;
            children["far-end-line-ua-ss"] = far_end_line_ua_ss;
        }
        return children.at("far-end-line-ua-ss");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::get_children()
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineESs::FarEndLineESs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "far-end-line-e-ss"; yang_parent_name = "fe-line";
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineESs::~FarEndLineESs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineESs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineESs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-e-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineESs::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineESs::get_children()
{
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineESs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineSeSs::FarEndLineSeSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "far-end-line-se-ss"; yang_parent_name = "fe-line";
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineSeSs::~FarEndLineSeSs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineSeSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineSeSs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-se-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineSeSs::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineSeSs::get_children()
{
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineSeSs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineCVs::FarEndLineCVs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "far-end-line-c-vs"; yang_parent_name = "fe-line";
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineCVs::~FarEndLineCVs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineCVs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineCVs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineCVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-c-vs";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineCVs::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineCVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineCVs::get_children()
{
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineCVs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineUaSs::FarEndLineUaSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "far-end-line-ua-ss"; yang_parent_name = "fe-line";
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineUaSs::~FarEndLineUaSs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineUaSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineUaSs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineUaSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-ua-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineUaSs::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineUaSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineUaSs::get_children()
{
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineUaSs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineFcLs::FarEndLineFcLs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "far-end-line-fc-ls"; yang_parent_name = "fe-line";
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineFcLs::~FarEndLineFcLs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineFcLs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineFcLs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineFcLs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-fc-ls";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineFcLs::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineFcLs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineFcLs::get_children()
{
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineFcLs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24()
    :
    sonet_hour24_paths(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths>())
	,sonet_hour24ocns(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns>())
{
    sonet_hour24_paths->parent = this;
    children["sonet-hour24-paths"] = sonet_hour24_paths;

    sonet_hour24ocns->parent = this;
    children["sonet-hour24ocns"] = sonet_hour24ocns;

    yang_name = "sonet-hour24"; yang_parent_name = "sonet-current";
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::~SonetHour24()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::has_data() const
{
    return (sonet_hour24_paths !=  nullptr && sonet_hour24_paths->has_data())
	|| (sonet_hour24ocns !=  nullptr && sonet_hour24ocns->has_data());
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::has_operation() const
{
    return is_set(operation)
	|| (sonet_hour24_paths !=  nullptr && sonet_hour24_paths->has_operation())
	|| (sonet_hour24ocns !=  nullptr && sonet_hour24ocns->has_operation());
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-hour24";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SonetHour24' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sonet-hour24-paths")
    {
        if(sonet_hour24_paths != nullptr)
        {
            children["sonet-hour24-paths"] = sonet_hour24_paths;
        }
        else
        {
            sonet_hour24_paths = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths>();
            sonet_hour24_paths->parent = this;
            children["sonet-hour24-paths"] = sonet_hour24_paths;
        }
        return children.at("sonet-hour24-paths");
    }

    if(child_yang_name == "sonet-hour24ocns")
    {
        if(sonet_hour24ocns != nullptr)
        {
            children["sonet-hour24ocns"] = sonet_hour24ocns;
        }
        else
        {
            sonet_hour24ocns = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns>();
            sonet_hour24ocns->parent = this;
            children["sonet-hour24ocns"] = sonet_hour24ocns;
        }
        return children.at("sonet-hour24ocns");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::get_children()
{
    if(children.find("sonet-hour24-paths") == children.end())
    {
        if(sonet_hour24_paths != nullptr)
        {
            children["sonet-hour24-paths"] = sonet_hour24_paths;
        }
    }

    if(children.find("sonet-hour24ocns") == children.end())
    {
        if(sonet_hour24ocns != nullptr)
        {
            children["sonet-hour24ocns"] = sonet_hour24ocns;
        }
    }

    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocns()
{
    yang_name = "sonet-hour24ocns"; yang_parent_name = "sonet-hour24";
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
    return is_set(operation);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-hour24ocns";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SonetHour24Ocns' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sonet-hour24ocn")
    {
        for(auto const & c : sonet_hour24ocn)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn>();
        c->parent = this;
        sonet_hour24ocn.push_back(std::move(c));
        children[segment_path] = sonet_hour24ocn.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::get_children()
{
    for (auto const & c : sonet_hour24ocn)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::SonetHour24Ocn()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    last_clear_time{YType::str, "last-clear-time"},
    timestamp{YType::str, "timestamp"},
    valid{YType::boolean, "valid"}
    	,
    fe_line(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine>())
	,line(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line>())
	,section(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section>())
{
    fe_line->parent = this;
    children["fe-line"] = fe_line;

    line->parent = this;
    children["line"] = line;

    section->parent = this;
    children["section"] = section;

    yang_name = "sonet-hour24ocn"; yang_parent_name = "sonet-hour24ocns";
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::~SonetHour24Ocn()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::has_data() const
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

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::has_operation() const
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

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-hour24ocn" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SonetHour24Ocn' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            fe_line = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine>();
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
            line = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line>();
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
            section = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section>();
            section->parent = this;
            children["section"] = section;
        }
        return children.at("section");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::get_children()
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::Section()
    :
    section_status{YType::int32, "section-status"}
    	,
    section_c_vs(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionCVs>())
	,section_e_ss(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionESs>())
	,section_se_ss(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSeSs>())
	,section_sef_ss(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSefSs>())
{
    section_c_vs->parent = this;
    children["section-c-vs"] = section_c_vs;

    section_e_ss->parent = this;
    children["section-e-ss"] = section_e_ss;

    section_se_ss->parent = this;
    children["section-se-ss"] = section_se_ss;

    section_sef_ss->parent = this;
    children["section-sef-ss"] = section_sef_ss;

    yang_name = "section"; yang_parent_name = "sonet-hour24ocn";
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::~Section()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::has_data() const
{
    return section_status.is_set
	|| (section_c_vs !=  nullptr && section_c_vs->has_data())
	|| (section_e_ss !=  nullptr && section_e_ss->has_data())
	|| (section_se_ss !=  nullptr && section_se_ss->has_data())
	|| (section_sef_ss !=  nullptr && section_sef_ss->has_data());
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::has_operation() const
{
    return is_set(operation)
	|| is_set(section_status.operation)
	|| (section_c_vs !=  nullptr && section_c_vs->has_operation())
	|| (section_e_ss !=  nullptr && section_e_ss->has_operation())
	|| (section_se_ss !=  nullptr && section_se_ss->has_operation())
	|| (section_sef_ss !=  nullptr && section_sef_ss->has_operation());
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            section_c_vs = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionCVs>();
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
            section_e_ss = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionESs>();
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
            section_se_ss = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSeSs>();
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
            section_sef_ss = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSefSs>();
            section_sef_ss->parent = this;
            children["section-sef-ss"] = section_sef_ss;
        }
        return children.at("section-sef-ss");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::get_children()
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "section-status")
    {
        section_status = value;
    }
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionESs::SectionESs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "section-e-ss"; yang_parent_name = "section";
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionESs::~SectionESs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionESs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionESs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-e-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionESs::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionESs::get_children()
{
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionESs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSeSs::SectionSeSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "section-se-ss"; yang_parent_name = "section";
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSeSs::~SectionSeSs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSeSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSeSs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-se-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSeSs::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSeSs::get_children()
{
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSeSs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSefSs::SectionSefSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "section-sef-ss"; yang_parent_name = "section";
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSefSs::~SectionSefSs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSefSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSefSs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSefSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-sef-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSefSs::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSefSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSefSs::get_children()
{
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSefSs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionCVs::SectionCVs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "section-c-vs"; yang_parent_name = "section";
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionCVs::~SectionCVs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionCVs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionCVs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionCVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section-c-vs";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionCVs::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionCVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionCVs::get_children()
{
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionCVs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::Line()
    :
    line_status{YType::int32, "line-status"}
    	,
    line_c_vs(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineCVs>())
	,line_e_ss(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineESs>())
	,line_fc_ls(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineFcLs>())
	,line_se_ss(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineSeSs>())
	,line_ua_ss(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineUaSs>())
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

    yang_name = "line"; yang_parent_name = "sonet-hour24ocn";
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::~Line()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::has_data() const
{
    return line_status.is_set
	|| (line_c_vs !=  nullptr && line_c_vs->has_data())
	|| (line_e_ss !=  nullptr && line_e_ss->has_data())
	|| (line_fc_ls !=  nullptr && line_fc_ls->has_data())
	|| (line_se_ss !=  nullptr && line_se_ss->has_data())
	|| (line_ua_ss !=  nullptr && line_ua_ss->has_data());
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::has_operation() const
{
    return is_set(operation)
	|| is_set(line_status.operation)
	|| (line_c_vs !=  nullptr && line_c_vs->has_operation())
	|| (line_e_ss !=  nullptr && line_e_ss->has_operation())
	|| (line_fc_ls !=  nullptr && line_fc_ls->has_operation())
	|| (line_se_ss !=  nullptr && line_se_ss->has_operation())
	|| (line_ua_ss !=  nullptr && line_ua_ss->has_operation());
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            line_c_vs = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineCVs>();
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
            line_e_ss = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineESs>();
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
            line_fc_ls = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineFcLs>();
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
            line_se_ss = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineSeSs>();
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
            line_ua_ss = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineUaSs>();
            line_ua_ss->parent = this;
            children["line-ua-ss"] = line_ua_ss;
        }
        return children.at("line-ua-ss");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::get_children()
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "line-status")
    {
        line_status = value;
    }
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineESs::LineESs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "line-e-ss"; yang_parent_name = "line";
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineESs::~LineESs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineESs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineESs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-e-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineESs::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineESs::get_children()
{
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineESs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineSeSs::LineSeSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "line-se-ss"; yang_parent_name = "line";
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineSeSs::~LineSeSs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineSeSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineSeSs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-se-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineSeSs::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineSeSs::get_children()
{
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineSeSs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineCVs::LineCVs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "line-c-vs"; yang_parent_name = "line";
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineCVs::~LineCVs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineCVs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineCVs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineCVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-c-vs";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineCVs::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineCVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineCVs::get_children()
{
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineCVs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineUaSs::LineUaSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "line-ua-ss"; yang_parent_name = "line";
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineUaSs::~LineUaSs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineUaSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineUaSs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineUaSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-ua-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineUaSs::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineUaSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineUaSs::get_children()
{
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineUaSs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineFcLs::LineFcLs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "line-fc-ls"; yang_parent_name = "line";
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineFcLs::~LineFcLs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineFcLs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineFcLs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineFcLs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-fc-ls";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineFcLs::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineFcLs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineFcLs::get_children()
{
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineFcLs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FeLine()
    :
    far_end_line_c_vs(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineCVs>())
	,far_end_line_e_ss(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineESs>())
	,far_end_line_fc_ls(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineFcLs>())
	,far_end_line_se_ss(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineSeSs>())
	,far_end_line_ua_ss(std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineUaSs>())
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

    yang_name = "fe-line"; yang_parent_name = "sonet-hour24ocn";
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::~FeLine()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::has_data() const
{
    return (far_end_line_c_vs !=  nullptr && far_end_line_c_vs->has_data())
	|| (far_end_line_e_ss !=  nullptr && far_end_line_e_ss->has_data())
	|| (far_end_line_fc_ls !=  nullptr && far_end_line_fc_ls->has_data())
	|| (far_end_line_se_ss !=  nullptr && far_end_line_se_ss->has_data())
	|| (far_end_line_ua_ss !=  nullptr && far_end_line_ua_ss->has_data());
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::has_operation() const
{
    return is_set(operation)
	|| (far_end_line_c_vs !=  nullptr && far_end_line_c_vs->has_operation())
	|| (far_end_line_e_ss !=  nullptr && far_end_line_e_ss->has_operation())
	|| (far_end_line_fc_ls !=  nullptr && far_end_line_fc_ls->has_operation())
	|| (far_end_line_se_ss !=  nullptr && far_end_line_se_ss->has_operation())
	|| (far_end_line_ua_ss !=  nullptr && far_end_line_ua_ss->has_operation());
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fe-line";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            far_end_line_c_vs = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineCVs>();
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
            far_end_line_e_ss = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineESs>();
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
            far_end_line_fc_ls = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineFcLs>();
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
            far_end_line_se_ss = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineSeSs>();
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
            far_end_line_ua_ss = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineUaSs>();
            far_end_line_ua_ss->parent = this;
            children["far-end-line-ua-ss"] = far_end_line_ua_ss;
        }
        return children.at("far-end-line-ua-ss");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::get_children()
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

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineESs::FarEndLineESs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "far-end-line-e-ss"; yang_parent_name = "fe-line";
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineESs::~FarEndLineESs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineESs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineESs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineESs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-e-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineESs::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineESs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineESs::get_children()
{
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineESs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineSeSs::FarEndLineSeSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "far-end-line-se-ss"; yang_parent_name = "fe-line";
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineSeSs::~FarEndLineSeSs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineSeSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineSeSs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineSeSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-se-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineSeSs::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineSeSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineSeSs::get_children()
{
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineSeSs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineCVs::FarEndLineCVs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "far-end-line-c-vs"; yang_parent_name = "fe-line";
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineCVs::~FarEndLineCVs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineCVs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineCVs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineCVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-c-vs";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineCVs::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineCVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineCVs::get_children()
{
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineCVs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineUaSs::FarEndLineUaSs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "far-end-line-ua-ss"; yang_parent_name = "fe-line";
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineUaSs::~FarEndLineUaSs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineUaSs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineUaSs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineUaSs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-ua-ss";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineUaSs::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineUaSs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineUaSs::get_children()
{
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineUaSs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineFcLs::FarEndLineFcLs()
    :
    data{YType::uint32, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "far-end-line-fc-ls"; yang_parent_name = "fe-line";
}

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineFcLs::~FarEndLineFcLs()
{
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineFcLs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set;
}

bool PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineFcLs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineFcLs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "far-end-line-fc-ls";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineFcLs::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineFcLs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineFcLs::get_children()
{
    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineFcLs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Paths()
{
    yang_name = "sonet-hour24-paths"; yang_parent_name = "sonet-hour24";
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
    return is_set(operation);
}

std::string PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sonet-hour24-paths";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SonetHour24Paths' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sonet-hour24-path")
    {
        for(auto const & c : sonet_hour24_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path>();
        c->parent = this;
        sonet_hour24_path.push_back(std::move(c));
        children[segment_path] = sonet_hour24_path.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::get_children()
{
    for (auto const & c : sonet_hour24_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::set_value(const std::string & value_path, std::string value)
{
}


}
}

