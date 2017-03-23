
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_pmengine_oper_4.hpp"
#include "Cisco_IOS_XR_pmengine_oper_5.hpp"

namespace ydk {
namespace Cisco_IOS_XR_pmengine_oper {

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutDropOther::OutDropOther()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "out-drop-other"; yang_parent_name = "second30-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutDropOther::~OutDropOther()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutDropOther::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutDropOther::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutDropOther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-drop-other";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutDropOther::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutDropOther' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutDropOther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutDropOther::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutDropOther::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutErrorOther::OutErrorOther()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "out-error-other"; yang_parent_name = "second30-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutErrorOther::~OutErrorOther()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutErrorOther::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutErrorOther::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutErrorOther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-error-other";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutErrorOther::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutErrorOther' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutErrorOther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutErrorOther::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutErrorOther::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorGiant::InErrorGiant()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-error-giant"; yang_parent_name = "second30-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorGiant::~InErrorGiant()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorGiant::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorGiant::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorGiant::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-giant";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorGiant::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InErrorGiant' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorGiant::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorGiant::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorGiant::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorRunt::InErrorRunt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-error-runt"; yang_parent_name = "second30-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorRunt::~InErrorRunt()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorRunt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorRunt::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorRunt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-runt";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorRunt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InErrorRunt' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorRunt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorRunt::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorRunt::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorJabbers::InErrorJabbers()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-error-jabbers"; yang_parent_name = "second30-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorJabbers::~InErrorJabbers()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorJabbers::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorJabbers::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorJabbers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-jabbers";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorJabbers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InErrorJabbers' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorJabbers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorJabbers::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorJabbers::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorFragments::InErrorFragments()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-error-fragments"; yang_parent_name = "second30-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorFragments::~InErrorFragments()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorFragments::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorFragments::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorFragments::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-fragments";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorFragments::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InErrorFragments' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorFragments::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorFragments::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorFragments::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorOther::InErrorOther()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-error-other"; yang_parent_name = "second30-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorOther::~InErrorOther()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorOther::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorOther::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorOther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-other";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorOther::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InErrorOther' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorOther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorOther::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorOther::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkt64Octet::InPkt64Octet()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-pkt64-octet"; yang_parent_name = "second30-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkt64Octet::~InPkt64Octet()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkt64Octet::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkt64Octet::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkt64Octet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkt64-octet";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkt64Octet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InPkt64Octet' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkt64Octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkt64Octet::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkt64Octet::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkts65To127Octets::InPkts65To127Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-pkts65-to127-octets"; yang_parent_name = "second30-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkts65To127Octets::~InPkts65To127Octets()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkts65To127Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkts65To127Octets::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkts65To127Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts65-to127-octets";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkts65To127Octets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InPkts65To127Octets' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkts65To127Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkts65To127Octets::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkts65To127Octets::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkts128To255Octets::InPkts128To255Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-pkts128-to255-octets"; yang_parent_name = "second30-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkts128To255Octets::~InPkts128To255Octets()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkts128To255Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkts128To255Octets::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkts128To255Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts128-to255-octets";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkts128To255Octets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InPkts128To255Octets' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkts128To255Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkts128To255Octets::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkts128To255Octets::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkts256To511Octets::InPkts256To511Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-pkts256-to511-octets"; yang_parent_name = "second30-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkts256To511Octets::~InPkts256To511Octets()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkts256To511Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkts256To511Octets::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkts256To511Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts256-to511-octets";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkts256To511Octets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InPkts256To511Octets' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkts256To511Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkts256To511Octets::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkts256To511Octets::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkts512To1023Octets::InPkts512To1023Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-pkts512-to1023-octets"; yang_parent_name = "second30-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkts512To1023Octets::~InPkts512To1023Octets()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkts512To1023Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkts512To1023Octets::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkts512To1023Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts512-to1023-octets";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkts512To1023Octets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InPkts512To1023Octets' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkts512To1023Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkts512To1023Octets::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkts512To1023Octets::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkts1024To1518Octets::InPkts1024To1518Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-pkts1024-to1518-octets"; yang_parent_name = "second30-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkts1024To1518Octets::~InPkts1024To1518Octets()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkts1024To1518Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkts1024To1518Octets::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkts1024To1518Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts1024-to1518-octets";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkts1024To1518Octets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InPkts1024To1518Octets' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkts1024To1518Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkts1024To1518Octets::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkts1024To1518Octets::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Outpkt64Octet::Outpkt64Octet()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "outpkt64octet"; yang_parent_name = "second30-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Outpkt64Octet::~Outpkt64Octet()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Outpkt64Octet::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Outpkt64Octet::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Outpkt64Octet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outpkt64octet";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Outpkt64Octet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Outpkt64Octet' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Outpkt64Octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Outpkt64Octet::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Outpkt64Octet::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPkts65127Octets::OutPkts65127Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "out-pkts65127-octets"; yang_parent_name = "second30-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPkts65127Octets::~OutPkts65127Octets()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPkts65127Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPkts65127Octets::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPkts65127Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts65127-octets";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPkts65127Octets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutPkts65127Octets' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPkts65127Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPkts65127Octets::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPkts65127Octets::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPkts128255Octets::OutPkts128255Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "out-pkts128255-octets"; yang_parent_name = "second30-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPkts128255Octets::~OutPkts128255Octets()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPkts128255Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPkts128255Octets::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPkts128255Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts128255-octets";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPkts128255Octets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutPkts128255Octets' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPkts128255Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPkts128255Octets::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPkts128255Octets::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPkts256511Octets::OutPkts256511Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "out-pkts256511-octets"; yang_parent_name = "second30-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPkts256511Octets::~OutPkts256511Octets()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPkts256511Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPkts256511Octets::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPkts256511Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts256511-octets";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPkts256511Octets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutPkts256511Octets' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPkts256511Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPkts256511Octets::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPkts256511Octets::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPkts5121023Octets::OutPkts5121023Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "out-pkts5121023-octets"; yang_parent_name = "second30-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPkts5121023Octets::~OutPkts5121023Octets()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPkts5121023Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPkts5121023Octets::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPkts5121023Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts5121023-octets";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPkts5121023Octets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutPkts5121023Octets' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPkts5121023Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPkts5121023Octets::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPkts5121023Octets::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPkts10241518Octets::OutPkts10241518Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "out-pkts10241518-octets"; yang_parent_name = "second30-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPkts10241518Octets::~OutPkts10241518Octets()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPkts10241518Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPkts10241518Octets::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPkts10241518Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts10241518-octets";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPkts10241518Octets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutPkts10241518Octets' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPkts10241518Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPkts10241518Octets::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPkts10241518Octets::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::RxUtil::RxUtil()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "rx-util"; yang_parent_name = "second30-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::RxUtil::~RxUtil()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::RxUtil::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::RxUtil::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::RxUtil::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-util";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::RxUtil::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RxUtil' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::RxUtil::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::RxUtil::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::RxUtil::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxUtil::TxUtil()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "tx-util"; yang_parent_name = "second30-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxUtil::~TxUtil()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxUtil::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxUtil::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxUtil::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-util";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxUtil::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TxUtil' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxUtil::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxUtil::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxUtil::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxUndersizedPkt::TxUndersizedPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "tx-undersized-pkt"; yang_parent_name = "second30-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxUndersizedPkt::~TxUndersizedPkt()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxUndersizedPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxUndersizedPkt::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxUndersizedPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-undersized-pkt";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxUndersizedPkt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TxUndersizedPkt' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxUndersizedPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxUndersizedPkt::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxUndersizedPkt::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxOversizedPkt::TxOversizedPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "tx-oversized-pkt"; yang_parent_name = "second30-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxOversizedPkt::~TxOversizedPkt()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxOversizedPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxOversizedPkt::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxOversizedPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-oversized-pkt";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxOversizedPkt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TxOversizedPkt' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxOversizedPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxOversizedPkt::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxOversizedPkt::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxFragments::TxFragments()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "tx-fragments"; yang_parent_name = "second30-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxFragments::~TxFragments()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxFragments::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxFragments::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxFragments::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-fragments";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxFragments::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TxFragments' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxFragments::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxFragments::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxFragments::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxJabber::TxJabber()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "tx-jabber"; yang_parent_name = "second30-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxJabber::~TxJabber()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxJabber::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxJabber::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxJabber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-jabber";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxJabber::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TxJabber' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxJabber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxJabber::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxJabber::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxBadFcs::TxBadFcs()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "tx-bad-fcs"; yang_parent_name = "second30-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxBadFcs::~TxBadFcs()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxBadFcs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxBadFcs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxBadFcs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-bad-fcs";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxBadFcs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TxBadFcs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxBadFcs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxBadFcs::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxBadFcs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24()
    :
    ethernet_hour24_ether_s(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS>())
{
    ethernet_hour24_ether_s->parent = this;
    children["ethernet-hour24-ether-s"] = ethernet_hour24_ether_s;

    yang_name = "ethernet-hour24"; yang_parent_name = "ethernet-current";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::~EthernetHour24()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::has_data() const
{
    return (ethernet_hour24_ether_s !=  nullptr && ethernet_hour24_ether_s->has_data());
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::has_operation() const
{
    return is_set(operation)
	|| (ethernet_hour24_ether_s !=  nullptr && ethernet_hour24_ether_s->has_operation());
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-hour24";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EthernetHour24' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ethernet-hour24-ether-s")
    {
        if(ethernet_hour24_ether_s != nullptr)
        {
            children["ethernet-hour24-ether-s"] = ethernet_hour24_ether_s;
        }
        else
        {
            ethernet_hour24_ether_s = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS>();
            ethernet_hour24_ether_s->parent = this;
            children["ethernet-hour24-ether-s"] = ethernet_hour24_ether_s;
        }
        return children.at("ethernet-hour24-ether-s");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::get_children()
{
    if(children.find("ethernet-hour24-ether-s") == children.end())
    {
        if(ethernet_hour24_ether_s != nullptr)
        {
            children["ethernet-hour24-ether-s"] = ethernet_hour24_ether_s;
        }
    }

    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24EtherS()
{
    yang_name = "ethernet-hour24-ether-s"; yang_parent_name = "ethernet-hour24";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::~EthernetHour24EtherS()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::has_data() const
{
    for (std::size_t index=0; index<ethernet_hour24_ether.size(); index++)
    {
        if(ethernet_hour24_ether[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::has_operation() const
{
    for (std::size_t index=0; index<ethernet_hour24_ether.size(); index++)
    {
        if(ethernet_hour24_ether[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-hour24-ether-s";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EthernetHour24EtherS' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ethernet-hour24-ether")
    {
        for(auto const & c : ethernet_hour24_ether)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether>();
        c->parent = this;
        ethernet_hour24_ether.push_back(std::move(c));
        children[segment_path] = ethernet_hour24_ether.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::get_children()
{
    for (auto const & c : ethernet_hour24_ether)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::EthernetHour24Ether()
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
    ether10241518_octet(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Ether10241518Octet>())
	,ether128255_octet(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Ether128255Octet>())
	,ether256511_octet(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Ether256511Octet>())
	,ether5121023_octet(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Ether5121023Octet>())
	,ether64_octets(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Ether64Octets>())
	,ether65127_octet(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Ether65127Octet>())
	,ether_stat_broadcast_pkt(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::EtherStatBroadcastPkt>())
	,ether_stat_multicast_pkt(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::EtherStatMulticastPkt>())
	,ether_stat_undersized_pkt(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::EtherStatUndersizedPkt>())
	,fcs_errors_stat(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::FcsErrorsStat>())
	,if_in_errors(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::IfInErrors>())
	,if_in_octets(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::IfInOctets>())
	,in8021q_frames(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::In8021QFrames>())
	,in_bcast_pkt(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InBcastPkt>())
	,in_drop_abort(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InDropAbort>())
	,in_drop_invalid_dmac(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InDropInvalidDmac>())
	,in_drop_invalid_encap(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InDropInvalidEncap>())
	,in_drop_invalid_vlan(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InDropInvalidVlan>())
	,in_drop_other(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InDropOther>())
	,in_drop_overrun(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InDropOverrun>())
	,in_error_collisions(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorCollisions>())
	,in_error_fragments(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorFragments>())
	,in_error_giant(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorGiant>())
	,in_error_jabbers(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorJabbers>())
	,in_error_other(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorOther>())
	,in_error_runt(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorRunt>())
	,in_error_symbol(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorSymbol>())
	,in_good_bytes(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InGoodBytes>())
	,in_good_pkts(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InGoodPkts>())
	,in_mcast_pkt(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InMcastPkt>())
	,in_mib_giant(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InMibGiant>())
	,in_mib_jabber(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InMibJabber>())
	,in_mibcrc(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InMibcrc>())
	,in_pause_frame(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPauseFrame>())
	,in_pkt64_octet(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkt64Octet>())
	,in_pkts1024_to1518_octets(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts1024To1518Octets>())
	,in_pkts128_to255_octets(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts128To255Octets>())
	,in_pkts1519_max_octets(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts1519MaxOctets>())
	,in_pkts256_to511_octets(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts256To511Octets>())
	,in_pkts512_to1023_octets(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts512To1023Octets>())
	,in_pkts65_to127_octets(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts65To127Octets>())
	,in_ucast_pkt(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InUcastPkt>())
	,jabber_stat(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::JabberStat>())
	,long_frames_stat(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::LongFramesStat>())
	,octet_stat(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OctetStat>())
	,out8021q_frames(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Out8021QFrames>())
	,out_bcast_pkt(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutBcastPkt>())
	,out_drop_abort(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutDropAbort>())
	,out_drop_other(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutDropOther>())
	,out_drop_underrun(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutDropUnderrun>())
	,out_error_other(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutErrorOther>())
	,out_good_bytes(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutGoodBytes>())
	,out_good_pkts(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutGoodPkts>())
	,out_mcast_pkt(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutMcastPkt>())
	,out_octets(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutOctets>())
	,out_pause_frames(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPauseFrames>())
	,out_pkts10241518_octets(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts10241518Octets>())
	,out_pkts128255_octets(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts128255Octets>())
	,out_pkts1519_max_octets(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts1519MaxOctets>())
	,out_pkts256511_octets(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts256511Octets>())
	,out_pkts5121023_octets(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts5121023Octets>())
	,out_pkts65127_octets(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts65127Octets>())
	,out_ucast_pkt(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutUcastPkt>())
	,outpkt64octet(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Outpkt64Octet>())
	,oversize_pkt_stat(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OversizePktStat>())
	,rx_pkt(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::RxPkt>())
	,rx_util(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::RxUtil>())
	,stat_pkt(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::StatPkt>())
	,tx_bad_fcs(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxBadFcs>())
	,tx_fragments(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxFragments>())
	,tx_jabber(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxJabber>())
	,tx_oversized_pkt(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxOversizedPkt>())
	,tx_pkt(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxPkt>())
	,tx_undersized_pkt(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxUndersizedPkt>())
	,tx_util(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxUtil>())
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

    yang_name = "ethernet-hour24-ether"; yang_parent_name = "ethernet-hour24-ether-s";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::~EthernetHour24Ether()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::has_data() const
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

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::has_operation() const
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

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-hour24-ether" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EthernetHour24Ether' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            ether10241518_octet = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Ether10241518Octet>();
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
            ether128255_octet = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Ether128255Octet>();
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
            ether256511_octet = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Ether256511Octet>();
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
            ether5121023_octet = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Ether5121023Octet>();
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
            ether64_octets = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Ether64Octets>();
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
            ether65127_octet = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Ether65127Octet>();
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
            ether_stat_broadcast_pkt = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::EtherStatBroadcastPkt>();
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
            ether_stat_multicast_pkt = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::EtherStatMulticastPkt>();
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
            ether_stat_undersized_pkt = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::EtherStatUndersizedPkt>();
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
            fcs_errors_stat = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::FcsErrorsStat>();
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
            if_in_errors = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::IfInErrors>();
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
            if_in_octets = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::IfInOctets>();
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
            in8021q_frames = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::In8021QFrames>();
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
            in_bcast_pkt = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InBcastPkt>();
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
            in_drop_abort = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InDropAbort>();
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
            in_drop_invalid_dmac = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InDropInvalidDmac>();
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
            in_drop_invalid_encap = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InDropInvalidEncap>();
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
            in_drop_invalid_vlan = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InDropInvalidVlan>();
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
            in_drop_other = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InDropOther>();
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
            in_drop_overrun = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InDropOverrun>();
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
            in_error_collisions = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorCollisions>();
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
            in_error_fragments = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorFragments>();
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
            in_error_giant = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorGiant>();
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
            in_error_jabbers = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorJabbers>();
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
            in_error_other = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorOther>();
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
            in_error_runt = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorRunt>();
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
            in_error_symbol = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorSymbol>();
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
            in_good_bytes = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InGoodBytes>();
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
            in_good_pkts = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InGoodPkts>();
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
            in_mcast_pkt = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InMcastPkt>();
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
            in_mib_giant = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InMibGiant>();
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
            in_mib_jabber = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InMibJabber>();
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
            in_mibcrc = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InMibcrc>();
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
            in_pause_frame = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPauseFrame>();
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
            in_pkt64_octet = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkt64Octet>();
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
            in_pkts1024_to1518_octets = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts1024To1518Octets>();
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
            in_pkts128_to255_octets = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts128To255Octets>();
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
            in_pkts1519_max_octets = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts1519MaxOctets>();
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
            in_pkts256_to511_octets = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts256To511Octets>();
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
            in_pkts512_to1023_octets = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts512To1023Octets>();
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
            in_pkts65_to127_octets = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts65To127Octets>();
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
            in_ucast_pkt = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InUcastPkt>();
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
            jabber_stat = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::JabberStat>();
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
            long_frames_stat = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::LongFramesStat>();
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
            octet_stat = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OctetStat>();
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
            out8021q_frames = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Out8021QFrames>();
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
            out_bcast_pkt = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutBcastPkt>();
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
            out_drop_abort = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutDropAbort>();
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
            out_drop_other = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutDropOther>();
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
            out_drop_underrun = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutDropUnderrun>();
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
            out_error_other = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutErrorOther>();
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
            out_good_bytes = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutGoodBytes>();
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
            out_good_pkts = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutGoodPkts>();
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
            out_mcast_pkt = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutMcastPkt>();
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
            out_octets = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutOctets>();
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
            out_pause_frames = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPauseFrames>();
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
            out_pkts10241518_octets = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts10241518Octets>();
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
            out_pkts128255_octets = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts128255Octets>();
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
            out_pkts1519_max_octets = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts1519MaxOctets>();
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
            out_pkts256511_octets = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts256511Octets>();
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
            out_pkts5121023_octets = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts5121023Octets>();
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
            out_pkts65127_octets = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts65127Octets>();
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
            out_ucast_pkt = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutUcastPkt>();
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
            outpkt64octet = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Outpkt64Octet>();
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
            oversize_pkt_stat = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OversizePktStat>();
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
            rx_pkt = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::RxPkt>();
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
            rx_util = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::RxUtil>();
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
            stat_pkt = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::StatPkt>();
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
            tx_bad_fcs = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxBadFcs>();
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
            tx_fragments = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxFragments>();
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
            tx_jabber = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxJabber>();
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
            tx_oversized_pkt = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxOversizedPkt>();
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
            tx_pkt = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxPkt>();
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
            tx_undersized_pkt = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxUndersizedPkt>();
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
            tx_util = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxUtil>();
            tx_util->parent = this;
            children["tx-util"] = tx_util;
        }
        return children.at("tx-util");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::get_children()
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

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::RxPkt::RxPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "rx-pkt"; yang_parent_name = "ethernet-hour24-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::RxPkt::~RxPkt()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::RxPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::RxPkt::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::RxPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-pkt";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::RxPkt::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::RxPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::RxPkt::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::RxPkt::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::StatPkt::StatPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "stat-pkt"; yang_parent_name = "ethernet-hour24-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::StatPkt::~StatPkt()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::StatPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::StatPkt::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::StatPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stat-pkt";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::StatPkt::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::StatPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::StatPkt::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::StatPkt::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OctetStat::OctetStat()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "octet-stat"; yang_parent_name = "ethernet-hour24-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OctetStat::~OctetStat()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OctetStat::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OctetStat::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OctetStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "octet-stat";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OctetStat::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OctetStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OctetStat::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OctetStat::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OversizePktStat::OversizePktStat()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "oversize-pkt-stat"; yang_parent_name = "ethernet-hour24-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OversizePktStat::~OversizePktStat()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OversizePktStat::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OversizePktStat::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OversizePktStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oversize-pkt-stat";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OversizePktStat::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OversizePktStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OversizePktStat::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OversizePktStat::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::FcsErrorsStat::FcsErrorsStat()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "fcs-errors-stat"; yang_parent_name = "ethernet-hour24-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::FcsErrorsStat::~FcsErrorsStat()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::FcsErrorsStat::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::FcsErrorsStat::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::FcsErrorsStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fcs-errors-stat";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::FcsErrorsStat::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::FcsErrorsStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::FcsErrorsStat::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::FcsErrorsStat::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::LongFramesStat::LongFramesStat()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "long-frames-stat"; yang_parent_name = "ethernet-hour24-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::LongFramesStat::~LongFramesStat()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::LongFramesStat::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::LongFramesStat::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::LongFramesStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "long-frames-stat";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::LongFramesStat::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::LongFramesStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::LongFramesStat::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::LongFramesStat::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::JabberStat::JabberStat()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "jabber-stat"; yang_parent_name = "ethernet-hour24-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::JabberStat::~JabberStat()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::JabberStat::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::JabberStat::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::JabberStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "jabber-stat";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::JabberStat::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::JabberStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::JabberStat::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::JabberStat::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Ether64Octets::Ether64Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "ether64-octets"; yang_parent_name = "ethernet-hour24-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Ether64Octets::~Ether64Octets()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Ether64Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Ether64Octets::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Ether64Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether64-octets";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Ether64Octets::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Ether64Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Ether64Octets::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Ether64Octets::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Ether65127Octet::Ether65127Octet()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "ether65127-octet"; yang_parent_name = "ethernet-hour24-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Ether65127Octet::~Ether65127Octet()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Ether65127Octet::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Ether65127Octet::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Ether65127Octet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether65127-octet";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Ether65127Octet::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Ether65127Octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Ether65127Octet::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Ether65127Octet::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Ether128255Octet::Ether128255Octet()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "ether128255-octet"; yang_parent_name = "ethernet-hour24-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Ether128255Octet::~Ether128255Octet()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Ether128255Octet::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Ether128255Octet::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Ether128255Octet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether128255-octet";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Ether128255Octet::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Ether128255Octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Ether128255Octet::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Ether128255Octet::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Ether256511Octet::Ether256511Octet()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "ether256511-octet"; yang_parent_name = "ethernet-hour24-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Ether256511Octet::~Ether256511Octet()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Ether256511Octet::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Ether256511Octet::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Ether256511Octet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether256511-octet";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Ether256511Octet::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Ether256511Octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Ether256511Octet::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Ether256511Octet::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Ether5121023Octet::Ether5121023Octet()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "ether5121023-octet"; yang_parent_name = "ethernet-hour24-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Ether5121023Octet::~Ether5121023Octet()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Ether5121023Octet::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Ether5121023Octet::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Ether5121023Octet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether5121023-octet";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Ether5121023Octet::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Ether5121023Octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Ether5121023Octet::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Ether5121023Octet::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Ether10241518Octet::Ether10241518Octet()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "ether10241518-octet"; yang_parent_name = "ethernet-hour24-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Ether10241518Octet::~Ether10241518Octet()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Ether10241518Octet::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Ether10241518Octet::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Ether10241518Octet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether10241518-octet";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Ether10241518Octet::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Ether10241518Octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Ether10241518Octet::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Ether10241518Octet::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InUcastPkt::InUcastPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-ucast-pkt"; yang_parent_name = "ethernet-hour24-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InUcastPkt::~InUcastPkt()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InUcastPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InUcastPkt::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InUcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-ucast-pkt";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InUcastPkt::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InUcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InUcastPkt::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InUcastPkt::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InMcastPkt::InMcastPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-mcast-pkt"; yang_parent_name = "ethernet-hour24-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InMcastPkt::~InMcastPkt()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InMcastPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InMcastPkt::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InMcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-mcast-pkt";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InMcastPkt::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InMcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InMcastPkt::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InMcastPkt::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InBcastPkt::InBcastPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-bcast-pkt"; yang_parent_name = "ethernet-hour24-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InBcastPkt::~InBcastPkt()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InBcastPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InBcastPkt::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InBcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-bcast-pkt";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InBcastPkt::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InBcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InBcastPkt::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InBcastPkt::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutUcastPkt::OutUcastPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "out-ucast-pkt"; yang_parent_name = "ethernet-hour24-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutUcastPkt::~OutUcastPkt()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutUcastPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutUcastPkt::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutUcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-ucast-pkt";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutUcastPkt::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutUcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutUcastPkt::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutUcastPkt::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutBcastPkt::OutBcastPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "out-bcast-pkt"; yang_parent_name = "ethernet-hour24-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutBcastPkt::~OutBcastPkt()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutBcastPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutBcastPkt::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutBcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-bcast-pkt";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutBcastPkt::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutBcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutBcastPkt::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutBcastPkt::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutMcastPkt::OutMcastPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "out-mcast-pkt"; yang_parent_name = "ethernet-hour24-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutMcastPkt::~OutMcastPkt()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutMcastPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutMcastPkt::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutMcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-mcast-pkt";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutMcastPkt::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutMcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutMcastPkt::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutMcastPkt::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxPkt::TxPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "tx-pkt"; yang_parent_name = "ethernet-hour24-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxPkt::~TxPkt()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxPkt::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-pkt";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxPkt::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxPkt::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxPkt::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::IfInErrors::IfInErrors()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "if-in-errors"; yang_parent_name = "ethernet-hour24-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::IfInErrors::~IfInErrors()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::IfInErrors::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::IfInErrors::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::IfInErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-in-errors";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::IfInErrors::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::IfInErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::IfInErrors::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::IfInErrors::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::IfInOctets::IfInOctets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "if-in-octets"; yang_parent_name = "ethernet-hour24-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::IfInOctets::~IfInOctets()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::IfInOctets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::IfInOctets::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::IfInOctets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-in-octets";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::IfInOctets::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::IfInOctets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::IfInOctets::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::IfInOctets::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::EtherStatMulticastPkt::EtherStatMulticastPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "ether-stat-multicast-pkt"; yang_parent_name = "ethernet-hour24-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::EtherStatMulticastPkt::~EtherStatMulticastPkt()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::EtherStatMulticastPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::EtherStatMulticastPkt::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::EtherStatMulticastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether-stat-multicast-pkt";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::EtherStatMulticastPkt::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::EtherStatMulticastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::EtherStatMulticastPkt::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::EtherStatMulticastPkt::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::EtherStatBroadcastPkt::EtherStatBroadcastPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "ether-stat-broadcast-pkt"; yang_parent_name = "ethernet-hour24-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::EtherStatBroadcastPkt::~EtherStatBroadcastPkt()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::EtherStatBroadcastPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::EtherStatBroadcastPkt::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::EtherStatBroadcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether-stat-broadcast-pkt";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::EtherStatBroadcastPkt::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::EtherStatBroadcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::EtherStatBroadcastPkt::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::EtherStatBroadcastPkt::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::EtherStatUndersizedPkt::EtherStatUndersizedPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "ether-stat-undersized-pkt"; yang_parent_name = "ethernet-hour24-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::EtherStatUndersizedPkt::~EtherStatUndersizedPkt()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::EtherStatUndersizedPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::EtherStatUndersizedPkt::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::EtherStatUndersizedPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether-stat-undersized-pkt";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::EtherStatUndersizedPkt::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::EtherStatUndersizedPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::EtherStatUndersizedPkt::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::EtherStatUndersizedPkt::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutOctets::OutOctets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "out-octets"; yang_parent_name = "ethernet-hour24-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutOctets::~OutOctets()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutOctets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutOctets::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutOctets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-octets";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutOctets::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutOctets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutOctets::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutOctets::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPauseFrame::InPauseFrame()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-pause-frame"; yang_parent_name = "ethernet-hour24-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPauseFrame::~InPauseFrame()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPauseFrame::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPauseFrame::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPauseFrame::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pause-frame";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPauseFrame::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPauseFrame::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPauseFrame::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPauseFrame::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InGoodBytes::InGoodBytes()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-good-bytes"; yang_parent_name = "ethernet-hour24-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InGoodBytes::~InGoodBytes()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InGoodBytes::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InGoodBytes::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InGoodBytes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-good-bytes";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InGoodBytes::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InGoodBytes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InGoodBytes::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InGoodBytes::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::In8021QFrames::In8021QFrames()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in8021q-frames"; yang_parent_name = "ethernet-hour24-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::In8021QFrames::~In8021QFrames()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::In8021QFrames::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::In8021QFrames::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::In8021QFrames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in8021q-frames";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::In8021QFrames::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::In8021QFrames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::In8021QFrames::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::In8021QFrames::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts1519MaxOctets::InPkts1519MaxOctets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-pkts1519-max-octets"; yang_parent_name = "ethernet-hour24-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts1519MaxOctets::~InPkts1519MaxOctets()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts1519MaxOctets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts1519MaxOctets::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts1519MaxOctets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts1519-max-octets";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts1519MaxOctets::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts1519MaxOctets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts1519MaxOctets::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts1519MaxOctets::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InGoodPkts::InGoodPkts()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-good-pkts"; yang_parent_name = "ethernet-hour24-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InGoodPkts::~InGoodPkts()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InGoodPkts::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InGoodPkts::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InGoodPkts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-good-pkts";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InGoodPkts::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InGoodPkts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InGoodPkts::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InGoodPkts::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InDropOverrun::InDropOverrun()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-drop-overrun"; yang_parent_name = "ethernet-hour24-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InDropOverrun::~InDropOverrun()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InDropOverrun::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InDropOverrun::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InDropOverrun::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-drop-overrun";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InDropOverrun::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InDropOverrun::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InDropOverrun::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InDropOverrun::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InDropAbort::InDropAbort()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-drop-abort"; yang_parent_name = "ethernet-hour24-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InDropAbort::~InDropAbort()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InDropAbort::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InDropAbort::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InDropAbort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-drop-abort";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InDropAbort::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InDropAbort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InDropAbort::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InDropAbort::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InDropInvalidVlan::InDropInvalidVlan()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-drop-invalid-vlan"; yang_parent_name = "ethernet-hour24-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InDropInvalidVlan::~InDropInvalidVlan()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InDropInvalidVlan::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InDropInvalidVlan::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InDropInvalidVlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-drop-invalid-vlan";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InDropInvalidVlan::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InDropInvalidVlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InDropInvalidVlan::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InDropInvalidVlan::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InDropInvalidDmac::InDropInvalidDmac()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-drop-invalid-dmac"; yang_parent_name = "ethernet-hour24-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InDropInvalidDmac::~InDropInvalidDmac()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InDropInvalidDmac::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InDropInvalidDmac::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InDropInvalidDmac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-drop-invalid-dmac";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InDropInvalidDmac::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InDropInvalidDmac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InDropInvalidDmac::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InDropInvalidDmac::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InDropInvalidEncap::InDropInvalidEncap()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-drop-invalid-encap"; yang_parent_name = "ethernet-hour24-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InDropInvalidEncap::~InDropInvalidEncap()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InDropInvalidEncap::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InDropInvalidEncap::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InDropInvalidEncap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-drop-invalid-encap";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InDropInvalidEncap::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InDropInvalidEncap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InDropInvalidEncap::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InDropInvalidEncap::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InDropOther::InDropOther()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-drop-other"; yang_parent_name = "ethernet-hour24-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InDropOther::~InDropOther()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InDropOther::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InDropOther::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InDropOther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-drop-other";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InDropOther::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InDropOther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InDropOther::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InDropOther::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InMibGiant::InMibGiant()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-mib-giant"; yang_parent_name = "ethernet-hour24-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InMibGiant::~InMibGiant()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InMibGiant::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InMibGiant::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InMibGiant::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-mib-giant";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InMibGiant::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InMibGiant::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InMibGiant::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InMibGiant::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InMibJabber::InMibJabber()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-mib-jabber"; yang_parent_name = "ethernet-hour24-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InMibJabber::~InMibJabber()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InMibJabber::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InMibJabber::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InMibJabber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-mib-jabber";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InMibJabber::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InMibJabber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InMibJabber::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InMibJabber::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InMibcrc::InMibcrc()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-mibcrc"; yang_parent_name = "ethernet-hour24-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InMibcrc::~InMibcrc()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InMibcrc::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InMibcrc::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InMibcrc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-mibcrc";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InMibcrc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InMibcrc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InMibcrc::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InMibcrc::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorCollisions::InErrorCollisions()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-error-collisions"; yang_parent_name = "ethernet-hour24-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorCollisions::~InErrorCollisions()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorCollisions::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorCollisions::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorCollisions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-collisions";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorCollisions::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorCollisions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorCollisions::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorCollisions::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorSymbol::InErrorSymbol()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-error-symbol"; yang_parent_name = "ethernet-hour24-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorSymbol::~InErrorSymbol()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorSymbol::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorSymbol::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorSymbol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-symbol";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorSymbol::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorSymbol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorSymbol::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorSymbol::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutGoodBytes::OutGoodBytes()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "out-good-bytes"; yang_parent_name = "ethernet-hour24-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutGoodBytes::~OutGoodBytes()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutGoodBytes::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutGoodBytes::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutGoodBytes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-good-bytes";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutGoodBytes::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutGoodBytes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutGoodBytes::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutGoodBytes::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Out8021QFrames::Out8021QFrames()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "out8021q-frames"; yang_parent_name = "ethernet-hour24-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Out8021QFrames::~Out8021QFrames()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Out8021QFrames::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Out8021QFrames::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Out8021QFrames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out8021q-frames";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Out8021QFrames::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Out8021QFrames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Out8021QFrames::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Out8021QFrames::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPauseFrames::OutPauseFrames()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "out-pause-frames"; yang_parent_name = "ethernet-hour24-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPauseFrames::~OutPauseFrames()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPauseFrames::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPauseFrames::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPauseFrames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pause-frames";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPauseFrames::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPauseFrames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPauseFrames::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPauseFrames::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts1519MaxOctets::OutPkts1519MaxOctets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "out-pkts1519-max-octets"; yang_parent_name = "ethernet-hour24-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts1519MaxOctets::~OutPkts1519MaxOctets()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts1519MaxOctets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts1519MaxOctets::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts1519MaxOctets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts1519-max-octets";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts1519MaxOctets::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts1519MaxOctets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts1519MaxOctets::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts1519MaxOctets::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutGoodPkts::OutGoodPkts()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "out-good-pkts"; yang_parent_name = "ethernet-hour24-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutGoodPkts::~OutGoodPkts()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutGoodPkts::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutGoodPkts::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutGoodPkts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-good-pkts";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutGoodPkts::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutGoodPkts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutGoodPkts::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutGoodPkts::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutDropUnderrun::OutDropUnderrun()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "out-drop-underrun"; yang_parent_name = "ethernet-hour24-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutDropUnderrun::~OutDropUnderrun()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutDropUnderrun::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutDropUnderrun::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutDropUnderrun::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-drop-underrun";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutDropUnderrun::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutDropUnderrun::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutDropUnderrun::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutDropUnderrun::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutDropAbort::OutDropAbort()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "out-drop-abort"; yang_parent_name = "ethernet-hour24-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutDropAbort::~OutDropAbort()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutDropAbort::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutDropAbort::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutDropAbort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-drop-abort";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutDropAbort::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutDropAbort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutDropAbort::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutDropAbort::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutDropOther::OutDropOther()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "out-drop-other"; yang_parent_name = "ethernet-hour24-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutDropOther::~OutDropOther()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutDropOther::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutDropOther::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutDropOther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-drop-other";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutDropOther::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutDropOther' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutDropOther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutDropOther::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutDropOther::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutErrorOther::OutErrorOther()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "out-error-other"; yang_parent_name = "ethernet-hour24-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutErrorOther::~OutErrorOther()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutErrorOther::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutErrorOther::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutErrorOther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-error-other";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutErrorOther::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutErrorOther' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutErrorOther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutErrorOther::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutErrorOther::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorGiant::InErrorGiant()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-error-giant"; yang_parent_name = "ethernet-hour24-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorGiant::~InErrorGiant()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorGiant::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorGiant::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorGiant::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-giant";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorGiant::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InErrorGiant' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorGiant::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorGiant::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorGiant::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorRunt::InErrorRunt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-error-runt"; yang_parent_name = "ethernet-hour24-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorRunt::~InErrorRunt()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorRunt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorRunt::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorRunt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-runt";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorRunt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InErrorRunt' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorRunt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorRunt::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorRunt::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorJabbers::InErrorJabbers()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-error-jabbers"; yang_parent_name = "ethernet-hour24-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorJabbers::~InErrorJabbers()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorJabbers::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorJabbers::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorJabbers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-jabbers";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorJabbers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InErrorJabbers' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorJabbers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorJabbers::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorJabbers::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorFragments::InErrorFragments()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-error-fragments"; yang_parent_name = "ethernet-hour24-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorFragments::~InErrorFragments()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorFragments::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorFragments::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorFragments::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-fragments";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorFragments::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InErrorFragments' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorFragments::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorFragments::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorFragments::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorOther::InErrorOther()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-error-other"; yang_parent_name = "ethernet-hour24-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorOther::~InErrorOther()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorOther::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorOther::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorOther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-other";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorOther::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InErrorOther' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorOther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorOther::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InErrorOther::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkt64Octet::InPkt64Octet()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-pkt64-octet"; yang_parent_name = "ethernet-hour24-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkt64Octet::~InPkt64Octet()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkt64Octet::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkt64Octet::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkt64Octet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkt64-octet";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkt64Octet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InPkt64Octet' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkt64Octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkt64Octet::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkt64Octet::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts65To127Octets::InPkts65To127Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-pkts65-to127-octets"; yang_parent_name = "ethernet-hour24-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts65To127Octets::~InPkts65To127Octets()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts65To127Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts65To127Octets::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts65To127Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts65-to127-octets";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts65To127Octets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InPkts65To127Octets' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts65To127Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts65To127Octets::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts65To127Octets::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts128To255Octets::InPkts128To255Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-pkts128-to255-octets"; yang_parent_name = "ethernet-hour24-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts128To255Octets::~InPkts128To255Octets()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts128To255Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts128To255Octets::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts128To255Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts128-to255-octets";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts128To255Octets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InPkts128To255Octets' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts128To255Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts128To255Octets::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts128To255Octets::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts256To511Octets::InPkts256To511Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-pkts256-to511-octets"; yang_parent_name = "ethernet-hour24-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts256To511Octets::~InPkts256To511Octets()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts256To511Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts256To511Octets::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts256To511Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts256-to511-octets";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts256To511Octets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InPkts256To511Octets' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts256To511Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts256To511Octets::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts256To511Octets::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts512To1023Octets::InPkts512To1023Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-pkts512-to1023-octets"; yang_parent_name = "ethernet-hour24-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts512To1023Octets::~InPkts512To1023Octets()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts512To1023Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts512To1023Octets::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts512To1023Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts512-to1023-octets";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts512To1023Octets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InPkts512To1023Octets' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts512To1023Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts512To1023Octets::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts512To1023Octets::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts1024To1518Octets::InPkts1024To1518Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-pkts1024-to1518-octets"; yang_parent_name = "ethernet-hour24-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts1024To1518Octets::~InPkts1024To1518Octets()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts1024To1518Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts1024To1518Octets::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts1024To1518Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts1024-to1518-octets";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts1024To1518Octets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InPkts1024To1518Octets' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts1024To1518Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts1024To1518Octets::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::InPkts1024To1518Octets::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Outpkt64Octet::Outpkt64Octet()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "outpkt64octet"; yang_parent_name = "ethernet-hour24-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Outpkt64Octet::~Outpkt64Octet()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Outpkt64Octet::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Outpkt64Octet::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Outpkt64Octet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outpkt64octet";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Outpkt64Octet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Outpkt64Octet' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Outpkt64Octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Outpkt64Octet::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::Outpkt64Octet::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts65127Octets::OutPkts65127Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "out-pkts65127-octets"; yang_parent_name = "ethernet-hour24-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts65127Octets::~OutPkts65127Octets()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts65127Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts65127Octets::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts65127Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts65127-octets";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts65127Octets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutPkts65127Octets' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts65127Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts65127Octets::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts65127Octets::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts128255Octets::OutPkts128255Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "out-pkts128255-octets"; yang_parent_name = "ethernet-hour24-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts128255Octets::~OutPkts128255Octets()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts128255Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts128255Octets::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts128255Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts128255-octets";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts128255Octets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutPkts128255Octets' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts128255Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts128255Octets::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts128255Octets::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts256511Octets::OutPkts256511Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "out-pkts256511-octets"; yang_parent_name = "ethernet-hour24-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts256511Octets::~OutPkts256511Octets()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts256511Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts256511Octets::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts256511Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts256511-octets";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts256511Octets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutPkts256511Octets' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts256511Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts256511Octets::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts256511Octets::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts5121023Octets::OutPkts5121023Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "out-pkts5121023-octets"; yang_parent_name = "ethernet-hour24-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts5121023Octets::~OutPkts5121023Octets()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts5121023Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts5121023Octets::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts5121023Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts5121023-octets";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts5121023Octets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutPkts5121023Octets' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts5121023Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts5121023Octets::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts5121023Octets::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts10241518Octets::OutPkts10241518Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "out-pkts10241518-octets"; yang_parent_name = "ethernet-hour24-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts10241518Octets::~OutPkts10241518Octets()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts10241518Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts10241518Octets::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts10241518Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts10241518-octets";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts10241518Octets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutPkts10241518Octets' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts10241518Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts10241518Octets::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::OutPkts10241518Octets::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::RxUtil::RxUtil()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "rx-util"; yang_parent_name = "ethernet-hour24-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::RxUtil::~RxUtil()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::RxUtil::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::RxUtil::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::RxUtil::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-util";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::RxUtil::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RxUtil' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::RxUtil::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::RxUtil::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::RxUtil::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxUtil::TxUtil()
    :
    data{YType::str, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::str, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "tx-util"; yang_parent_name = "ethernet-hour24-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxUtil::~TxUtil()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxUtil::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxUtil::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxUtil::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-util";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxUtil::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TxUtil' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxUtil::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxUtil::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxUtil::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxUndersizedPkt::TxUndersizedPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "tx-undersized-pkt"; yang_parent_name = "ethernet-hour24-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxUndersizedPkt::~TxUndersizedPkt()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxUndersizedPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxUndersizedPkt::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxUndersizedPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-undersized-pkt";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxUndersizedPkt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TxUndersizedPkt' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxUndersizedPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxUndersizedPkt::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxUndersizedPkt::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxOversizedPkt::TxOversizedPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "tx-oversized-pkt"; yang_parent_name = "ethernet-hour24-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxOversizedPkt::~TxOversizedPkt()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxOversizedPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxOversizedPkt::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxOversizedPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-oversized-pkt";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxOversizedPkt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TxOversizedPkt' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxOversizedPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxOversizedPkt::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxOversizedPkt::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxFragments::TxFragments()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "tx-fragments"; yang_parent_name = "ethernet-hour24-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxFragments::~TxFragments()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxFragments::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxFragments::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxFragments::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-fragments";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxFragments::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TxFragments' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxFragments::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxFragments::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxFragments::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxJabber::TxJabber()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "tx-jabber"; yang_parent_name = "ethernet-hour24-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxJabber::~TxJabber()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxJabber::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxJabber::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxJabber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-jabber";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxJabber::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TxJabber' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxJabber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxJabber::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxJabber::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxBadFcs::TxBadFcs()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "tx-bad-fcs"; yang_parent_name = "ethernet-hour24-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxBadFcs::~TxBadFcs()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxBadFcs::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxBadFcs::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxBadFcs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-bad-fcs";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxBadFcs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TxBadFcs' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxBadFcs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxBadFcs::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24::EthernetHour24EtherS::EthernetHour24Ether::TxBadFcs::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15()
    :
    minute15_ethers(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers>())
{
    minute15_ethers->parent = this;
    children["minute15-ethers"] = minute15_ethers;

    yang_name = "minute15"; yang_parent_name = "ethernet-current";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::~Minute15()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::has_data() const
{
    return (minute15_ethers !=  nullptr && minute15_ethers->has_data());
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::has_operation() const
{
    return is_set(operation)
	|| (minute15_ethers !=  nullptr && minute15_ethers->has_operation());
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Minute15' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "minute15-ethers")
    {
        if(minute15_ethers != nullptr)
        {
            children["minute15-ethers"] = minute15_ethers;
        }
        else
        {
            minute15_ethers = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers>();
            minute15_ethers->parent = this;
            children["minute15-ethers"] = minute15_ethers;
        }
        return children.at("minute15-ethers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::get_children()
{
    if(children.find("minute15-ethers") == children.end())
    {
        if(minute15_ethers != nullptr)
        {
            children["minute15-ethers"] = minute15_ethers;
        }
    }

    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ethers()
{
    yang_name = "minute15-ethers"; yang_parent_name = "minute15";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::~Minute15Ethers()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::has_data() const
{
    for (std::size_t index=0; index<minute15_ether.size(); index++)
    {
        if(minute15_ether[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::has_operation() const
{
    for (std::size_t index=0; index<minute15_ether.size(); index++)
    {
        if(minute15_ether[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-ethers";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Minute15Ethers' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "minute15-ether")
    {
        for(auto const & c : minute15_ether)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether>();
        c->parent = this;
        minute15_ether.push_back(std::move(c));
        children[segment_path] = minute15_ether.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::get_children()
{
    for (auto const & c : minute15_ether)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::set_value(const std::string & value_path, std::string value)
{
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Minute15Ether()
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
    ether10241518_octet(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether10241518Octet>())
	,ether128255_octet(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether128255Octet>())
	,ether256511_octet(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether256511Octet>())
	,ether5121023_octet(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether5121023Octet>())
	,ether64_octets(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether64Octets>())
	,ether65127_octet(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether65127Octet>())
	,ether_stat_broadcast_pkt(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::EtherStatBroadcastPkt>())
	,ether_stat_multicast_pkt(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::EtherStatMulticastPkt>())
	,ether_stat_undersized_pkt(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::EtherStatUndersizedPkt>())
	,fcs_errors_stat(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::FcsErrorsStat>())
	,if_in_errors(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::IfInErrors>())
	,if_in_octets(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::IfInOctets>())
	,in8021q_frames(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::In8021QFrames>())
	,in_bcast_pkt(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InBcastPkt>())
	,in_drop_abort(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropAbort>())
	,in_drop_invalid_dmac(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropInvalidDmac>())
	,in_drop_invalid_encap(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropInvalidEncap>())
	,in_drop_invalid_vlan(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropInvalidVlan>())
	,in_drop_other(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropOther>())
	,in_drop_overrun(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropOverrun>())
	,in_error_collisions(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorCollisions>())
	,in_error_fragments(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorFragments>())
	,in_error_giant(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorGiant>())
	,in_error_jabbers(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorJabbers>())
	,in_error_other(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorOther>())
	,in_error_runt(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorRunt>())
	,in_error_symbol(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorSymbol>())
	,in_good_bytes(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InGoodBytes>())
	,in_good_pkts(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InGoodPkts>())
	,in_mcast_pkt(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMcastPkt>())
	,in_mib_giant(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMibGiant>())
	,in_mib_jabber(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMibJabber>())
	,in_mibcrc(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMibcrc>())
	,in_pause_frame(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPauseFrame>())
	,in_pkt64_octet(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkt64Octet>())
	,in_pkts1024_to1518_octets(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts1024To1518Octets>())
	,in_pkts128_to255_octets(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts128To255Octets>())
	,in_pkts1519_max_octets(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts1519MaxOctets>())
	,in_pkts256_to511_octets(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts256To511Octets>())
	,in_pkts512_to1023_octets(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts512To1023Octets>())
	,in_pkts65_to127_octets(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts65To127Octets>())
	,in_ucast_pkt(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InUcastPkt>())
	,jabber_stat(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::JabberStat>())
	,long_frames_stat(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::LongFramesStat>())
	,octet_stat(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OctetStat>())
	,out8021q_frames(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Out8021QFrames>())
	,out_bcast_pkt(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutBcastPkt>())
	,out_drop_abort(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutDropAbort>())
	,out_drop_other(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutDropOther>())
	,out_drop_underrun(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutDropUnderrun>())
	,out_error_other(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutErrorOther>())
	,out_good_bytes(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutGoodBytes>())
	,out_good_pkts(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutGoodPkts>())
	,out_mcast_pkt(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutMcastPkt>())
	,out_octets(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutOctets>())
	,out_pause_frames(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPauseFrames>())
	,out_pkts10241518_octets(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts10241518Octets>())
	,out_pkts128255_octets(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts128255Octets>())
	,out_pkts1519_max_octets(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts1519MaxOctets>())
	,out_pkts256511_octets(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts256511Octets>())
	,out_pkts5121023_octets(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts5121023Octets>())
	,out_pkts65127_octets(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts65127Octets>())
	,out_ucast_pkt(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutUcastPkt>())
	,outpkt64octet(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Outpkt64Octet>())
	,oversize_pkt_stat(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OversizePktStat>())
	,rx_pkt(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::RxPkt>())
	,rx_util(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::RxUtil>())
	,stat_pkt(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::StatPkt>())
	,tx_bad_fcs(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxBadFcs>())
	,tx_fragments(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxFragments>())
	,tx_jabber(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxJabber>())
	,tx_oversized_pkt(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxOversizedPkt>())
	,tx_pkt(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxPkt>())
	,tx_undersized_pkt(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxUndersizedPkt>())
	,tx_util(std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxUtil>())
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

    yang_name = "minute15-ether"; yang_parent_name = "minute15-ethers";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::~Minute15Ether()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::has_data() const
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

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::has_operation() const
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

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minute15-ether" <<"[slot-number='" <<slot_number <<"']";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Minute15Ether' in Cisco_IOS_XR_pmengine_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            ether10241518_octet = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether10241518Octet>();
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
            ether128255_octet = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether128255Octet>();
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
            ether256511_octet = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether256511Octet>();
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
            ether5121023_octet = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether5121023Octet>();
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
            ether64_octets = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether64Octets>();
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
            ether65127_octet = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether65127Octet>();
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
            ether_stat_broadcast_pkt = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::EtherStatBroadcastPkt>();
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
            ether_stat_multicast_pkt = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::EtherStatMulticastPkt>();
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
            ether_stat_undersized_pkt = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::EtherStatUndersizedPkt>();
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
            fcs_errors_stat = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::FcsErrorsStat>();
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
            if_in_errors = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::IfInErrors>();
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
            if_in_octets = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::IfInOctets>();
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
            in8021q_frames = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::In8021QFrames>();
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
            in_bcast_pkt = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InBcastPkt>();
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
            in_drop_abort = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropAbort>();
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
            in_drop_invalid_dmac = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropInvalidDmac>();
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
            in_drop_invalid_encap = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropInvalidEncap>();
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
            in_drop_invalid_vlan = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropInvalidVlan>();
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
            in_drop_other = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropOther>();
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
            in_drop_overrun = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropOverrun>();
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
            in_error_collisions = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorCollisions>();
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
            in_error_fragments = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorFragments>();
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
            in_error_giant = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorGiant>();
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
            in_error_jabbers = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorJabbers>();
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
            in_error_other = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorOther>();
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
            in_error_runt = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorRunt>();
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
            in_error_symbol = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorSymbol>();
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
            in_good_bytes = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InGoodBytes>();
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
            in_good_pkts = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InGoodPkts>();
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
            in_mcast_pkt = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMcastPkt>();
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
            in_mib_giant = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMibGiant>();
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
            in_mib_jabber = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMibJabber>();
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
            in_mibcrc = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMibcrc>();
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
            in_pause_frame = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPauseFrame>();
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
            in_pkt64_octet = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkt64Octet>();
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
            in_pkts1024_to1518_octets = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts1024To1518Octets>();
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
            in_pkts128_to255_octets = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts128To255Octets>();
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
            in_pkts1519_max_octets = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts1519MaxOctets>();
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
            in_pkts256_to511_octets = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts256To511Octets>();
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
            in_pkts512_to1023_octets = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts512To1023Octets>();
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
            in_pkts65_to127_octets = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts65To127Octets>();
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
            in_ucast_pkt = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InUcastPkt>();
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
            jabber_stat = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::JabberStat>();
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
            long_frames_stat = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::LongFramesStat>();
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
            octet_stat = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OctetStat>();
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
            out8021q_frames = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Out8021QFrames>();
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
            out_bcast_pkt = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutBcastPkt>();
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
            out_drop_abort = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutDropAbort>();
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
            out_drop_other = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutDropOther>();
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
            out_drop_underrun = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutDropUnderrun>();
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
            out_error_other = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutErrorOther>();
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
            out_good_bytes = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutGoodBytes>();
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
            out_good_pkts = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutGoodPkts>();
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
            out_mcast_pkt = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutMcastPkt>();
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
            out_octets = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutOctets>();
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
            out_pause_frames = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPauseFrames>();
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
            out_pkts10241518_octets = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts10241518Octets>();
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
            out_pkts128255_octets = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts128255Octets>();
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
            out_pkts1519_max_octets = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts1519MaxOctets>();
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
            out_pkts256511_octets = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts256511Octets>();
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
            out_pkts5121023_octets = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts5121023Octets>();
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
            out_pkts65127_octets = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutPkts65127Octets>();
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
            out_ucast_pkt = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutUcastPkt>();
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
            outpkt64octet = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Outpkt64Octet>();
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
            oversize_pkt_stat = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OversizePktStat>();
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
            rx_pkt = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::RxPkt>();
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
            rx_util = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::RxUtil>();
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
            stat_pkt = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::StatPkt>();
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
            tx_bad_fcs = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxBadFcs>();
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
            tx_fragments = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxFragments>();
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
            tx_jabber = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxJabber>();
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
            tx_oversized_pkt = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxOversizedPkt>();
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
            tx_pkt = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxPkt>();
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
            tx_undersized_pkt = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxUndersizedPkt>();
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
            tx_util = std::make_shared<PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxUtil>();
            tx_util->parent = this;
            children["tx-util"] = tx_util;
        }
        return children.at("tx-util");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::get_children()
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

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::RxPkt::RxPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "rx-pkt"; yang_parent_name = "minute15-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::RxPkt::~RxPkt()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::RxPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::RxPkt::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::RxPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-pkt";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::RxPkt::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::RxPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::RxPkt::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::RxPkt::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::StatPkt::StatPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "stat-pkt"; yang_parent_name = "minute15-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::StatPkt::~StatPkt()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::StatPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::StatPkt::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::StatPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stat-pkt";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::StatPkt::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::StatPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::StatPkt::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::StatPkt::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OctetStat::OctetStat()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "octet-stat"; yang_parent_name = "minute15-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OctetStat::~OctetStat()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OctetStat::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OctetStat::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OctetStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "octet-stat";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OctetStat::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OctetStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OctetStat::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OctetStat::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OversizePktStat::OversizePktStat()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "oversize-pkt-stat"; yang_parent_name = "minute15-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OversizePktStat::~OversizePktStat()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OversizePktStat::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OversizePktStat::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OversizePktStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oversize-pkt-stat";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OversizePktStat::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OversizePktStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OversizePktStat::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OversizePktStat::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::FcsErrorsStat::FcsErrorsStat()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "fcs-errors-stat"; yang_parent_name = "minute15-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::FcsErrorsStat::~FcsErrorsStat()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::FcsErrorsStat::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::FcsErrorsStat::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::FcsErrorsStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fcs-errors-stat";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::FcsErrorsStat::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::FcsErrorsStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::FcsErrorsStat::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::FcsErrorsStat::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::LongFramesStat::LongFramesStat()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "long-frames-stat"; yang_parent_name = "minute15-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::LongFramesStat::~LongFramesStat()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::LongFramesStat::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::LongFramesStat::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::LongFramesStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "long-frames-stat";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::LongFramesStat::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::LongFramesStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::LongFramesStat::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::LongFramesStat::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::JabberStat::JabberStat()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "jabber-stat"; yang_parent_name = "minute15-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::JabberStat::~JabberStat()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::JabberStat::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::JabberStat::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::JabberStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "jabber-stat";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::JabberStat::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::JabberStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::JabberStat::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::JabberStat::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether64Octets::Ether64Octets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "ether64-octets"; yang_parent_name = "minute15-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether64Octets::~Ether64Octets()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether64Octets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether64Octets::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether64Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether64-octets";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether64Octets::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether64Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether64Octets::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether64Octets::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether65127Octet::Ether65127Octet()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "ether65127-octet"; yang_parent_name = "minute15-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether65127Octet::~Ether65127Octet()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether65127Octet::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether65127Octet::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether65127Octet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether65127-octet";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether65127Octet::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether65127Octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether65127Octet::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether65127Octet::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether128255Octet::Ether128255Octet()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "ether128255-octet"; yang_parent_name = "minute15-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether128255Octet::~Ether128255Octet()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether128255Octet::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether128255Octet::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether128255Octet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether128255-octet";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether128255Octet::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether128255Octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether128255Octet::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether128255Octet::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether256511Octet::Ether256511Octet()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "ether256511-octet"; yang_parent_name = "minute15-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether256511Octet::~Ether256511Octet()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether256511Octet::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether256511Octet::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether256511Octet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether256511-octet";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether256511Octet::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether256511Octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether256511Octet::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether256511Octet::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether5121023Octet::Ether5121023Octet()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "ether5121023-octet"; yang_parent_name = "minute15-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether5121023Octet::~Ether5121023Octet()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether5121023Octet::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether5121023Octet::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether5121023Octet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether5121023-octet";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether5121023Octet::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether5121023Octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether5121023Octet::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether5121023Octet::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether10241518Octet::Ether10241518Octet()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "ether10241518-octet"; yang_parent_name = "minute15-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether10241518Octet::~Ether10241518Octet()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether10241518Octet::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether10241518Octet::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether10241518Octet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether10241518-octet";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether10241518Octet::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether10241518Octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether10241518Octet::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::Ether10241518Octet::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InUcastPkt::InUcastPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-ucast-pkt"; yang_parent_name = "minute15-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InUcastPkt::~InUcastPkt()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InUcastPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InUcastPkt::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InUcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-ucast-pkt";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InUcastPkt::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InUcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InUcastPkt::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InUcastPkt::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMcastPkt::InMcastPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-mcast-pkt"; yang_parent_name = "minute15-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMcastPkt::~InMcastPkt()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMcastPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMcastPkt::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-mcast-pkt";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMcastPkt::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMcastPkt::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMcastPkt::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InBcastPkt::InBcastPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-bcast-pkt"; yang_parent_name = "minute15-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InBcastPkt::~InBcastPkt()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InBcastPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InBcastPkt::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InBcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-bcast-pkt";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InBcastPkt::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InBcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InBcastPkt::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InBcastPkt::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutUcastPkt::OutUcastPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "out-ucast-pkt"; yang_parent_name = "minute15-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutUcastPkt::~OutUcastPkt()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutUcastPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutUcastPkt::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutUcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-ucast-pkt";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutUcastPkt::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutUcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutUcastPkt::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutUcastPkt::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutBcastPkt::OutBcastPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "out-bcast-pkt"; yang_parent_name = "minute15-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutBcastPkt::~OutBcastPkt()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutBcastPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutBcastPkt::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutBcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-bcast-pkt";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutBcastPkt::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutBcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutBcastPkt::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutBcastPkt::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutMcastPkt::OutMcastPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "out-mcast-pkt"; yang_parent_name = "minute15-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutMcastPkt::~OutMcastPkt()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutMcastPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutMcastPkt::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutMcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-mcast-pkt";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutMcastPkt::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutMcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutMcastPkt::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutMcastPkt::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxPkt::TxPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "tx-pkt"; yang_parent_name = "minute15-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxPkt::~TxPkt()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxPkt::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-pkt";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxPkt::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxPkt::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::TxPkt::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::IfInErrors::IfInErrors()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "if-in-errors"; yang_parent_name = "minute15-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::IfInErrors::~IfInErrors()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::IfInErrors::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::IfInErrors::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::IfInErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-in-errors";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::IfInErrors::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::IfInErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::IfInErrors::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::IfInErrors::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::IfInOctets::IfInOctets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "if-in-octets"; yang_parent_name = "minute15-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::IfInOctets::~IfInOctets()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::IfInOctets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::IfInOctets::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::IfInOctets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-in-octets";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::IfInOctets::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::IfInOctets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::IfInOctets::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::IfInOctets::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::EtherStatMulticastPkt::EtherStatMulticastPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "ether-stat-multicast-pkt"; yang_parent_name = "minute15-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::EtherStatMulticastPkt::~EtherStatMulticastPkt()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::EtherStatMulticastPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::EtherStatMulticastPkt::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::EtherStatMulticastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether-stat-multicast-pkt";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::EtherStatMulticastPkt::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::EtherStatMulticastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::EtherStatMulticastPkt::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::EtherStatMulticastPkt::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::EtherStatBroadcastPkt::EtherStatBroadcastPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "ether-stat-broadcast-pkt"; yang_parent_name = "minute15-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::EtherStatBroadcastPkt::~EtherStatBroadcastPkt()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::EtherStatBroadcastPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::EtherStatBroadcastPkt::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::EtherStatBroadcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether-stat-broadcast-pkt";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::EtherStatBroadcastPkt::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::EtherStatBroadcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::EtherStatBroadcastPkt::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::EtherStatBroadcastPkt::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::EtherStatUndersizedPkt::EtherStatUndersizedPkt()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "ether-stat-undersized-pkt"; yang_parent_name = "minute15-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::EtherStatUndersizedPkt::~EtherStatUndersizedPkt()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::EtherStatUndersizedPkt::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::EtherStatUndersizedPkt::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::EtherStatUndersizedPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether-stat-undersized-pkt";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::EtherStatUndersizedPkt::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::EtherStatUndersizedPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::EtherStatUndersizedPkt::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::EtherStatUndersizedPkt::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutOctets::OutOctets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "out-octets"; yang_parent_name = "minute15-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutOctets::~OutOctets()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutOctets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutOctets::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutOctets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-octets";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutOctets::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutOctets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutOctets::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutOctets::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPauseFrame::InPauseFrame()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-pause-frame"; yang_parent_name = "minute15-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPauseFrame::~InPauseFrame()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPauseFrame::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPauseFrame::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPauseFrame::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pause-frame";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPauseFrame::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPauseFrame::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPauseFrame::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPauseFrame::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InGoodBytes::InGoodBytes()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-good-bytes"; yang_parent_name = "minute15-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InGoodBytes::~InGoodBytes()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InGoodBytes::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InGoodBytes::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InGoodBytes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-good-bytes";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InGoodBytes::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InGoodBytes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InGoodBytes::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InGoodBytes::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::In8021QFrames::In8021QFrames()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in8021q-frames"; yang_parent_name = "minute15-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::In8021QFrames::~In8021QFrames()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::In8021QFrames::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::In8021QFrames::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::In8021QFrames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in8021q-frames";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::In8021QFrames::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::In8021QFrames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::In8021QFrames::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::In8021QFrames::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts1519MaxOctets::InPkts1519MaxOctets()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-pkts1519-max-octets"; yang_parent_name = "minute15-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts1519MaxOctets::~InPkts1519MaxOctets()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts1519MaxOctets::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts1519MaxOctets::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts1519MaxOctets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts1519-max-octets";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts1519MaxOctets::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts1519MaxOctets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts1519MaxOctets::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InPkts1519MaxOctets::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InGoodPkts::InGoodPkts()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-good-pkts"; yang_parent_name = "minute15-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InGoodPkts::~InGoodPkts()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InGoodPkts::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InGoodPkts::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InGoodPkts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-good-pkts";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InGoodPkts::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InGoodPkts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InGoodPkts::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InGoodPkts::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropOverrun::InDropOverrun()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-drop-overrun"; yang_parent_name = "minute15-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropOverrun::~InDropOverrun()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropOverrun::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropOverrun::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropOverrun::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-drop-overrun";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropOverrun::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropOverrun::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropOverrun::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropOverrun::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropAbort::InDropAbort()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-drop-abort"; yang_parent_name = "minute15-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropAbort::~InDropAbort()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropAbort::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropAbort::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropAbort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-drop-abort";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropAbort::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropAbort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropAbort::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropAbort::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropInvalidVlan::InDropInvalidVlan()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-drop-invalid-vlan"; yang_parent_name = "minute15-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropInvalidVlan::~InDropInvalidVlan()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropInvalidVlan::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropInvalidVlan::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropInvalidVlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-drop-invalid-vlan";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropInvalidVlan::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropInvalidVlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropInvalidVlan::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropInvalidVlan::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropInvalidDmac::InDropInvalidDmac()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-drop-invalid-dmac"; yang_parent_name = "minute15-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropInvalidDmac::~InDropInvalidDmac()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropInvalidDmac::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropInvalidDmac::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropInvalidDmac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-drop-invalid-dmac";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropInvalidDmac::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropInvalidDmac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropInvalidDmac::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropInvalidDmac::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropInvalidEncap::InDropInvalidEncap()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-drop-invalid-encap"; yang_parent_name = "minute15-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropInvalidEncap::~InDropInvalidEncap()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropInvalidEncap::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropInvalidEncap::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropInvalidEncap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-drop-invalid-encap";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropInvalidEncap::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropInvalidEncap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropInvalidEncap::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropInvalidEncap::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropOther::InDropOther()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-drop-other"; yang_parent_name = "minute15-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropOther::~InDropOther()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropOther::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropOther::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropOther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-drop-other";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropOther::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropOther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropOther::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InDropOther::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMibGiant::InMibGiant()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-mib-giant"; yang_parent_name = "minute15-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMibGiant::~InMibGiant()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMibGiant::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMibGiant::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMibGiant::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-mib-giant";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMibGiant::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMibGiant::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMibGiant::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMibGiant::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMibJabber::InMibJabber()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-mib-jabber"; yang_parent_name = "minute15-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMibJabber::~InMibJabber()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMibJabber::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMibJabber::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMibJabber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-mib-jabber";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMibJabber::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMibJabber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMibJabber::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMibJabber::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMibcrc::InMibcrc()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-mibcrc"; yang_parent_name = "minute15-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMibcrc::~InMibcrc()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMibcrc::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMibcrc::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMibcrc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-mibcrc";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMibcrc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMibcrc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMibcrc::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InMibcrc::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorCollisions::InErrorCollisions()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-error-collisions"; yang_parent_name = "minute15-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorCollisions::~InErrorCollisions()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorCollisions::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorCollisions::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorCollisions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-collisions";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorCollisions::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorCollisions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorCollisions::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorCollisions::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorSymbol::InErrorSymbol()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "in-error-symbol"; yang_parent_name = "minute15-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorSymbol::~InErrorSymbol()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorSymbol::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorSymbol::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorSymbol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-symbol";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorSymbol::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorSymbol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorSymbol::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::InErrorSymbol::set_value(const std::string & value_path, std::string value)
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

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutGoodBytes::OutGoodBytes()
    :
    data{YType::uint64, "data"},
    tca_report{YType::boolean, "tca-report"},
    threshold{YType::uint64, "threshold"},
    valid{YType::boolean, "valid"}
{
    yang_name = "out-good-bytes"; yang_parent_name = "minute15-ether";
}

PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutGoodBytes::~OutGoodBytes()
{
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutGoodBytes::has_data() const
{
    return data.is_set
	|| tca_report.is_set
	|| threshold.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutGoodBytes::has_operation() const
{
    return is_set(operation)
	|| is_set(data.operation)
	|| is_set(tca_report.operation)
	|| is_set(threshold.operation)
	|| is_set(valid.operation);
}

std::string PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutGoodBytes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-good-bytes";

    return path_buffer.str();

}

EntityPath PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutGoodBytes::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutGoodBytes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutGoodBytes::get_children()
{
    return children;
}

void PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15::Minute15Ethers::Minute15Ether::OutGoodBytes::set_value(const std::string & value_path, std::string value)
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

