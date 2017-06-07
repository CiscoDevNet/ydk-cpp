
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_55.hpp"
#include "Cisco_IOS_XE_native_56.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Limit::Limit()
    :
    rate{YType::uint16, "rate"}
{
    yang_name = "limit"; yang_parent_name = "snooping";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Limit::~Limit()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Limit::has_data() const
{
    return rate.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Limit::has_operation() const
{
    return is_set(operation)
	|| is_set(rate.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Limit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Limit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rate.is_set || is_set(rate.operation)) leaf_name_data.push_back(rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Limit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rate")
    {
        rate = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Vlan_::Vlan_()
    :
    id{YType::uint16, "id"}
    	,
    information(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Vlan_::Information>())
{
    information->parent = this;

    yang_name = "vlan"; yang_parent_name = "snooping";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Vlan_::~Vlan_()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Vlan_::has_data() const
{
    return id.is_set
	|| (information !=  nullptr && information->has_data());
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Vlan_::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| (information !=  nullptr && information->has_operation());
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Vlan_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Vlan_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vlan_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Vlan_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "information")
    {
        if(information == nullptr)
        {
            information = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Vlan_::Information>();
        }
        return information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Vlan_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(information != nullptr)
    {
        children["information"] = information;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Vlan_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Vlan_::Information::Information()
    :
    option(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Vlan_::Information::Option>())
{
    option->parent = this;

    yang_name = "information"; yang_parent_name = "vlan";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Vlan_::Information::~Information()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Vlan_::Information::has_data() const
{
    return (option !=  nullptr && option->has_data());
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Vlan_::Information::has_operation() const
{
    return is_set(operation)
	|| (option !=  nullptr && option->has_operation());
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Vlan_::Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "information";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Vlan_::Information::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Information' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Vlan_::Information::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "option")
    {
        if(option == nullptr)
        {
            option = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Vlan_::Information::Option>();
        }
        return option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Vlan_::Information::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(option != nullptr)
    {
        children["option"] = option;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Vlan_::Information::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Vlan_::Information::Option::Option()
    :
    format_type(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Vlan_::Information::Option::FormatType>())
{
    format_type->parent = this;

    yang_name = "option"; yang_parent_name = "information";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Vlan_::Information::Option::~Option()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Vlan_::Information::Option::has_data() const
{
    return (format_type !=  nullptr && format_type->has_data());
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Vlan_::Information::Option::has_operation() const
{
    return is_set(operation)
	|| (format_type !=  nullptr && format_type->has_operation());
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Vlan_::Information::Option::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Vlan_::Information::Option::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Option' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Vlan_::Information::Option::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "format-type")
    {
        if(format_type == nullptr)
        {
            format_type = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Vlan_::Information::Option::FormatType>();
        }
        return format_type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Vlan_::Information::Option::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(format_type != nullptr)
    {
        children["format-type"] = format_type;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Vlan_::Information::Option::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Vlan_::Information::Option::FormatType::FormatType()
    :
    circuit_id(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Vlan_::Information::Option::FormatType::CircuitId>())
{
    circuit_id->parent = this;

    yang_name = "format-type"; yang_parent_name = "option";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Vlan_::Information::Option::FormatType::~FormatType()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Vlan_::Information::Option::FormatType::has_data() const
{
    return (circuit_id !=  nullptr && circuit_id->has_data());
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Vlan_::Information::Option::FormatType::has_operation() const
{
    return is_set(operation)
	|| (circuit_id !=  nullptr && circuit_id->has_operation());
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Vlan_::Information::Option::FormatType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "format-type";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Vlan_::Information::Option::FormatType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FormatType' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Vlan_::Information::Option::FormatType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "circuit-id")
    {
        if(circuit_id == nullptr)
        {
            circuit_id = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Vlan_::Information::Option::FormatType::CircuitId>();
        }
        return circuit_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Vlan_::Information::Option::FormatType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(circuit_id != nullptr)
    {
        children["circuit-id"] = circuit_id;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Vlan_::Information::Option::FormatType::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Vlan_::Information::Option::FormatType::CircuitId::CircuitId()
    :
    string{YType::str, "string"}
{
    yang_name = "circuit-id"; yang_parent_name = "format-type";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Vlan_::Information::Option::FormatType::CircuitId::~CircuitId()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Vlan_::Information::Option::FormatType::CircuitId::has_data() const
{
    return string.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Vlan_::Information::Option::FormatType::CircuitId::has_operation() const
{
    return is_set(operation)
	|| is_set(string.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Vlan_::Information::Option::FormatType::CircuitId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "circuit-id";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Vlan_::Information::Option::FormatType::CircuitId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CircuitId' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (string.is_set || is_set(string.operation)) leaf_name_data.push_back(string.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Vlan_::Information::Option::FormatType::CircuitId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Vlan_::Information::Option::FormatType::CircuitId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Dhcp::Snooping::Vlan_::Information::Option::FormatType::CircuitId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string")
    {
        string = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::SummaryAddress::SummaryAddress()
{
    yang_name = "summary-address"; yang_parent_name = "Cisco-IOS-XE-interfaces_ip";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::SummaryAddress::~SummaryAddress()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::SummaryAddress::has_data() const
{
    for (std::size_t index=0; index<eigrp.size(); index++)
    {
        if(eigrp[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::SummaryAddress::has_operation() const
{
    for (std::size_t index=0; index<eigrp.size(); index++)
    {
        if(eigrp[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::SummaryAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-address";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::SummaryAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SummaryAddress' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::SummaryAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eigrp")
    {
        for(auto const & c : eigrp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::SummaryAddress::Eigrp>();
        c->parent = this;
        eigrp.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::SummaryAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : eigrp)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::SummaryAddress::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::SummaryAddress::Eigrp::Eigrp()
    :
    id{YType::str, "id"},
    ip{YType::str, "ip"},
    mask{YType::str, "mask"},
    metric{YType::uint32, "metric"}
{
    yang_name = "eigrp"; yang_parent_name = "summary-address";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::SummaryAddress::Eigrp::~Eigrp()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::SummaryAddress::Eigrp::has_data() const
{
    return id.is_set
	|| ip.is_set
	|| mask.is_set
	|| metric.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::SummaryAddress::Eigrp::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(ip.operation)
	|| is_set(mask.operation)
	|| is_set(metric.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::SummaryAddress::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::SummaryAddress::Eigrp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Eigrp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (mask.is_set || is_set(mask.operation)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::SummaryAddress::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::SummaryAddress::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::SummaryAddress::Eigrp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "ip")
    {
        ip = value;
    }
    if(value_path == "mask")
    {
        mask = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Verify()
    :
    source(nullptr) // presence node
	,unicast(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Unicast>())
{
    unicast->parent = this;

    yang_name = "verify"; yang_parent_name = "Cisco-IOS-XE-interfaces_ip";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::~Verify()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::has_data() const
{
    return (source !=  nullptr && source->has_data())
	|| (unicast !=  nullptr && unicast->has_data());
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::has_operation() const
{
    return is_set(operation)
	|| (source !=  nullptr && source->has_operation())
	|| (unicast !=  nullptr && unicast->has_operation());
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "verify";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Verify' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Source>();
        }
        return source;
    }

    if(child_yang_name == "unicast")
    {
        if(unicast == nullptr)
        {
            unicast = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Unicast>();
        }
        return unicast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(source != nullptr)
    {
        children["source"] = source;
    }

    if(unicast != nullptr)
    {
        children["unicast"] = unicast;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Source::Source()
    :
    vlan(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Source::Vlan_>())
{
    vlan->parent = this;

    yang_name = "source"; yang_parent_name = "verify";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Source::~Source()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Source::has_data() const
{
    return (vlan !=  nullptr && vlan->has_data());
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Source::has_operation() const
{
    return is_set(operation)
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Source::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Source' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Source::Vlan_>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vlan != nullptr)
    {
        children["vlan"] = vlan;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Source::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Source::Vlan_::Vlan_()
    :
    dhcp_snooping(nullptr) // presence node
{
    yang_name = "vlan"; yang_parent_name = "source";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Source::Vlan_::~Vlan_()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Source::Vlan_::has_data() const
{
    return (dhcp_snooping !=  nullptr && dhcp_snooping->has_data());
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Source::Vlan_::has_operation() const
{
    return is_set(operation)
	|| (dhcp_snooping !=  nullptr && dhcp_snooping->has_operation());
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Source::Vlan_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Source::Vlan_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vlan_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Source::Vlan_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcp-snooping")
    {
        if(dhcp_snooping == nullptr)
        {
            dhcp_snooping = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Source::Vlan_::DhcpSnooping>();
        }
        return dhcp_snooping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Source::Vlan_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dhcp_snooping != nullptr)
    {
        children["dhcp-snooping"] = dhcp_snooping;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Source::Vlan_::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Source::Vlan_::DhcpSnooping::DhcpSnooping()
    :
    port_security{YType::empty, "port-security"}
{
    yang_name = "dhcp-snooping"; yang_parent_name = "vlan";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Source::Vlan_::DhcpSnooping::~DhcpSnooping()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Source::Vlan_::DhcpSnooping::has_data() const
{
    return port_security.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Source::Vlan_::DhcpSnooping::has_operation() const
{
    return is_set(operation)
	|| is_set(port_security.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Source::Vlan_::DhcpSnooping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp-snooping";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Source::Vlan_::DhcpSnooping::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DhcpSnooping' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_security.is_set || is_set(port_security.operation)) leaf_name_data.push_back(port_security.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Source::Vlan_::DhcpSnooping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Source::Vlan_::DhcpSnooping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Source::Vlan_::DhcpSnooping::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "port-security")
    {
        port_security = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Unicast::Unicast()
    :
    reverse_path(nullptr) // presence node
	,source(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Unicast::Source>())
{
    source->parent = this;

    yang_name = "unicast"; yang_parent_name = "verify";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Unicast::~Unicast()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Unicast::has_data() const
{
    return (reverse_path !=  nullptr && reverse_path->has_data())
	|| (source !=  nullptr && source->has_data());
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Unicast::has_operation() const
{
    return is_set(operation)
	|| (reverse_path !=  nullptr && reverse_path->has_operation())
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Unicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unicast";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Unicast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Unicast' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Unicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reverse-path")
    {
        if(reverse_path == nullptr)
        {
            reverse_path = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Unicast::ReversePath>();
        }
        return reverse_path;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Unicast::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Unicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(reverse_path != nullptr)
    {
        children["reverse-path"] = reverse_path;
    }

    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Unicast::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Unicast::ReversePath::ReversePath()
{
    yang_name = "reverse-path"; yang_parent_name = "unicast";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Unicast::ReversePath::~ReversePath()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Unicast::ReversePath::has_data() const
{
    return false;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Unicast::ReversePath::has_operation() const
{
    return is_set(operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Unicast::ReversePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-path";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Unicast::ReversePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReversePath' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Unicast::ReversePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Unicast::ReversePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Unicast::ReversePath::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Unicast::Source::Source()
    :
    allow_default{YType::empty, "allow-default"},
    allow_self_ping{YType::empty, "allow-self-ping"},
    reachable_via{YType::enumeration, "reachable-via"}
{
    yang_name = "source"; yang_parent_name = "unicast";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Unicast::Source::~Source()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Unicast::Source::has_data() const
{
    return allow_default.is_set
	|| allow_self_ping.is_set
	|| reachable_via.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Unicast::Source::has_operation() const
{
    return is_set(operation)
	|| is_set(allow_default.operation)
	|| is_set(allow_self_ping.operation)
	|| is_set(reachable_via.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Unicast::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Unicast::Source::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Source' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow_default.is_set || is_set(allow_default.operation)) leaf_name_data.push_back(allow_default.get_name_leafdata());
    if (allow_self_ping.is_set || is_set(allow_self_ping.operation)) leaf_name_data.push_back(allow_self_ping.get_name_leafdata());
    if (reachable_via.is_set || is_set(reachable_via.operation)) leaf_name_data.push_back(reachable_via.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Unicast::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Unicast::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Unicast::Source::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "allow-default")
    {
        allow_default = value;
    }
    if(value_path == "allow-self-ping")
    {
        allow_self_ping = value;
    }
    if(value_path == "reachable-via")
    {
        reachable_via = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Nbar::Nbar()
    :
    protocol_discovery(nullptr) // presence node
{
    yang_name = "nbar"; yang_parent_name = "Cisco-IOS-XE-interfaces_ip";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Nbar::~Nbar()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Nbar::has_data() const
{
    return (protocol_discovery !=  nullptr && protocol_discovery->has_data());
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Nbar::has_operation() const
{
    return is_set(operation)
	|| (protocol_discovery !=  nullptr && protocol_discovery->has_operation());
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Nbar::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-nbar:nbar";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Nbar::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Nbar' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Nbar::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol-discovery")
    {
        if(protocol_discovery == nullptr)
        {
            protocol_discovery = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Nbar::ProtocolDiscovery>();
        }
        return protocol_discovery;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Nbar::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(protocol_discovery != nullptr)
    {
        children["protocol-discovery"] = protocol_discovery;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Nbar::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Nbar::ProtocolDiscovery::ProtocolDiscovery()
    :
    ipv4_ipv6{YType::enumeration, "ipv4-ipv6"}
{
    yang_name = "protocol-discovery"; yang_parent_name = "nbar";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Nbar::ProtocolDiscovery::~ProtocolDiscovery()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Nbar::ProtocolDiscovery::has_data() const
{
    return ipv4_ipv6.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Nbar::ProtocolDiscovery::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_ipv6.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Nbar::ProtocolDiscovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-discovery";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Nbar::ProtocolDiscovery::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtocolDiscovery' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_ipv6.is_set || is_set(ipv4_ipv6.operation)) leaf_name_data.push_back(ipv4_ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Nbar::ProtocolDiscovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Nbar::ProtocolDiscovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Nbar::ProtocolDiscovery::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-ipv6")
    {
        ipv4_ipv6 = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::CiscoIosXeInterfaces_Ipv6()
    :
    enable{YType::empty, "enable"},
    mtu{YType::uint16, "mtu"},
    redirects{YType::boolean, "redirects"}
    	,
    address(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address>())
	,destination_guard(nullptr) // presence node
	,dhcp(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Dhcp>())
	,nd(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Nd>())
	,no_pim(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::NoPim>())
	,pim(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Pim>())
{
    address->parent = this;

    dhcp->parent = this;

    nd->parent = this;

    no_pim->parent = this;

    pim->parent = this;

    yang_name = "Cisco-IOS-XE-interfaces_ipv6"; yang_parent_name = "Vlan";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::~CiscoIosXeInterfaces_Ipv6()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::has_data() const
{
    for (std::size_t index=0; index<traffic_filter.size(); index++)
    {
        if(traffic_filter[index]->has_data())
            return true;
    }
    return enable.is_set
	|| mtu.is_set
	|| redirects.is_set
	|| (address !=  nullptr && address->has_data())
	|| (destination_guard !=  nullptr && destination_guard->has_data())
	|| (dhcp !=  nullptr && dhcp->has_data())
	|| (nd !=  nullptr && nd->has_data())
	|| (no_pim !=  nullptr && no_pim->has_data())
	|| (pim !=  nullptr && pim->has_data());
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::has_operation() const
{
    for (std::size_t index=0; index<traffic_filter.size(); index++)
    {
        if(traffic_filter[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(mtu.operation)
	|| is_set(redirects.operation)
	|| (address !=  nullptr && address->has_operation())
	|| (destination_guard !=  nullptr && destination_guard->has_operation())
	|| (dhcp !=  nullptr && dhcp->has_operation())
	|| (nd !=  nullptr && nd->has_operation())
	|| (no_pim !=  nullptr && no_pim->has_operation())
	|| (pim !=  nullptr && pim->has_operation());
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-interfaces_ipv6";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CiscoIosXeInterfaces_Ipv6' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (redirects.is_set || is_set(redirects.operation)) leaf_name_data.push_back(redirects.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address>();
        }
        return address;
    }

    if(child_yang_name == "destination-guard")
    {
        if(destination_guard == nullptr)
        {
            destination_guard = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::DestinationGuard>();
        }
        return destination_guard;
    }

    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Dhcp>();
        }
        return dhcp;
    }

    if(child_yang_name == "nd")
    {
        if(nd == nullptr)
        {
            nd = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Nd>();
        }
        return nd;
    }

    if(child_yang_name == "no-pim")
    {
        if(no_pim == nullptr)
        {
            no_pim = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::NoPim>();
        }
        return no_pim;
    }

    if(child_yang_name == "pim")
    {
        if(pim == nullptr)
        {
            pim = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Pim>();
        }
        return pim;
    }

    if(child_yang_name == "traffic-filter")
    {
        for(auto const & c : traffic_filter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::TrafficFilter>();
        c->parent = this;
        traffic_filter.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    if(destination_guard != nullptr)
    {
        children["destination-guard"] = destination_guard;
    }

    if(dhcp != nullptr)
    {
        children["dhcp"] = dhcp;
    }

    if(nd != nullptr)
    {
        children["nd"] = nd;
    }

    if(no_pim != nullptr)
    {
        children["no-pim"] = no_pim;
    }

    if(pim != nullptr)
    {
        children["pim"] = pim;
    }

    for (auto const & c : traffic_filter)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "redirects")
    {
        redirects = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::DestinationGuard::DestinationGuard()
    :
    attach_policy{YType::str, "attach-policy"}
{
    yang_name = "destination-guard"; yang_parent_name = "Cisco-IOS-XE-interfaces_ipv6";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::DestinationGuard::~DestinationGuard()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::DestinationGuard::has_data() const
{
    return attach_policy.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::DestinationGuard::has_operation() const
{
    return is_set(operation)
	|| is_set(attach_policy.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::DestinationGuard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-guard";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::DestinationGuard::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DestinationGuard' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attach_policy.is_set || is_set(attach_policy.operation)) leaf_name_data.push_back(attach_policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::DestinationGuard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::DestinationGuard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::DestinationGuard::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "attach-policy")
    {
        attach_policy = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Dhcp::Dhcp()
    :
    guard(nullptr) // presence node
{
    yang_name = "dhcp"; yang_parent_name = "Cisco-IOS-XE-interfaces_ipv6";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Dhcp::~Dhcp()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Dhcp::has_data() const
{
    for (std::size_t index=0; index<server.size(); index++)
    {
        if(server[index]->has_data())
            return true;
    }
    return (guard !=  nullptr && guard->has_data());
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Dhcp::has_operation() const
{
    for (std::size_t index=0; index<server.size(); index++)
    {
        if(server[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (guard !=  nullptr && guard->has_operation());
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Dhcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dhcp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "guard")
    {
        if(guard == nullptr)
        {
            guard = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Dhcp::Guard>();
        }
        return guard;
    }

    if(child_yang_name == "server")
    {
        for(auto const & c : server)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Dhcp::Server>();
        c->parent = this;
        server.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(guard != nullptr)
    {
        children["guard"] = guard;
    }

    for (auto const & c : server)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Dhcp::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Dhcp::Server::Server()
    :
    word{YType::str, "word"},
    preference{YType::uint8, "preference"}
{
    yang_name = "server"; yang_parent_name = "dhcp";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Dhcp::Server::~Server()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Dhcp::Server::has_data() const
{
    return word.is_set
	|| preference.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Dhcp::Server::has_operation() const
{
    return is_set(operation)
	|| is_set(word.operation)
	|| is_set(preference.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Dhcp::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:server" <<"[word='" <<word <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Dhcp::Server::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Server' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word.is_set || is_set(word.operation)) leaf_name_data.push_back(word.get_name_leafdata());
    if (preference.is_set || is_set(preference.operation)) leaf_name_data.push_back(preference.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Dhcp::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Dhcp::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Dhcp::Server::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "word")
    {
        word = value;
    }
    if(value_path == "preference")
    {
        preference = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Dhcp::Guard::Guard()
    :
    attach_policy{YType::str, "attach-policy"}
{
    yang_name = "guard"; yang_parent_name = "dhcp";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Dhcp::Guard::~Guard()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Dhcp::Guard::has_data() const
{
    return attach_policy.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Dhcp::Guard::has_operation() const
{
    return is_set(operation)
	|| is_set(attach_policy.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Dhcp::Guard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:guard";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Dhcp::Guard::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Guard' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attach_policy.is_set || is_set(attach_policy.operation)) leaf_name_data.push_back(attach_policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Dhcp::Guard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Dhcp::Guard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Dhcp::Guard::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "attach-policy")
    {
        attach_policy = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address::Address()
    :
    autoconfig(nullptr) // presence node
	,dhcp(nullptr) // presence node
{
    yang_name = "address"; yang_parent_name = "Cisco-IOS-XE-interfaces_ipv6";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address::~Address()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address::has_data() const
{
    for (std::size_t index=0; index<link_local_address.size(); index++)
    {
        if(link_local_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<prefix_list.size(); index++)
    {
        if(prefix_list[index]->has_data())
            return true;
    }
    return (autoconfig !=  nullptr && autoconfig->has_data())
	|| (dhcp !=  nullptr && dhcp->has_data());
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address::has_operation() const
{
    for (std::size_t index=0; index<link_local_address.size(); index++)
    {
        if(link_local_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<prefix_list.size(); index++)
    {
        if(prefix_list[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (autoconfig !=  nullptr && autoconfig->has_operation())
	|| (dhcp !=  nullptr && dhcp->has_operation());
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "autoconfig")
    {
        if(autoconfig == nullptr)
        {
            autoconfig = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address::Autoconfig>();
        }
        return autoconfig;
    }

    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address::Dhcp>();
        }
        return dhcp;
    }

    if(child_yang_name == "link-local-address")
    {
        for(auto const & c : link_local_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address::LinkLocalAddress>();
        c->parent = this;
        link_local_address.push_back(c);
        return c;
    }

    if(child_yang_name == "prefix-list")
    {
        for(auto const & c : prefix_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address::PrefixList>();
        c->parent = this;
        prefix_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(autoconfig != nullptr)
    {
        children["autoconfig"] = autoconfig;
    }

    if(dhcp != nullptr)
    {
        children["dhcp"] = dhcp;
    }

    for (auto const & c : link_local_address)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : prefix_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address::Dhcp::Dhcp()
    :
    rapid_commit{YType::empty, "rapid-commit"}
{
    yang_name = "dhcp"; yang_parent_name = "address";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address::Dhcp::~Dhcp()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address::Dhcp::has_data() const
{
    return rapid_commit.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address::Dhcp::has_operation() const
{
    return is_set(operation)
	|| is_set(rapid_commit.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address::Dhcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dhcp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rapid_commit.is_set || is_set(rapid_commit.operation)) leaf_name_data.push_back(rapid_commit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address::Dhcp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rapid-commit")
    {
        rapid_commit = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address::Autoconfig::Autoconfig()
    :
    default_{YType::empty, "default"}
{
    yang_name = "autoconfig"; yang_parent_name = "address";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address::Autoconfig::~Autoconfig()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address::Autoconfig::has_data() const
{
    return default_.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address::Autoconfig::has_operation() const
{
    return is_set(operation)
	|| is_set(default_.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address::Autoconfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autoconfig";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address::Autoconfig::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Autoconfig' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.operation)) leaf_name_data.push_back(default_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address::Autoconfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address::Autoconfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address::Autoconfig::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "default")
    {
        default_ = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address::PrefixList::PrefixList()
    :
    prefix{YType::str, "prefix"},
    anycast{YType::empty, "anycast"},
    eui_64{YType::empty, "eui-64"}
{
    yang_name = "prefix-list"; yang_parent_name = "address";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address::PrefixList::~PrefixList()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address::PrefixList::has_data() const
{
    return prefix.is_set
	|| anycast.is_set
	|| eui_64.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address::PrefixList::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(anycast.operation)
	|| is_set(eui_64.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address::PrefixList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-list" <<"[prefix='" <<prefix <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address::PrefixList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefixList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (anycast.is_set || is_set(anycast.operation)) leaf_name_data.push_back(anycast.get_name_leafdata());
    if (eui_64.is_set || is_set(eui_64.operation)) leaf_name_data.push_back(eui_64.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address::PrefixList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address::PrefixList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address::PrefixList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "anycast")
    {
        anycast = value;
    }
    if(value_path == "eui-64")
    {
        eui_64 = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address::LinkLocalAddress::LinkLocalAddress()
    :
    address{YType::str, "address"},
    link_local{YType::empty, "link-local"}
{
    yang_name = "link-local-address"; yang_parent_name = "address";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address::LinkLocalAddress::~LinkLocalAddress()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address::LinkLocalAddress::has_data() const
{
    return address.is_set
	|| link_local.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address::LinkLocalAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(link_local.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address::LinkLocalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-local-address" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address::LinkLocalAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkLocalAddress' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (link_local.is_set || is_set(link_local.operation)) leaf_name_data.push_back(link_local.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address::LinkLocalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address::LinkLocalAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Address::LinkLocalAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "link-local")
    {
        link_local = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Nd::Nd()
{
    yang_name = "nd"; yang_parent_name = "Cisco-IOS-XE-interfaces_ipv6";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Nd::~Nd()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Nd::has_data() const
{
    return false;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Nd::has_operation() const
{
    return is_set(operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Nd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nd";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Nd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Nd' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Nd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Nd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Nd::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::TrafficFilter::TrafficFilter()
    :
    direction{YType::enumeration, "direction"},
    access_list{YType::str, "access-list"}
{
    yang_name = "traffic-filter"; yang_parent_name = "Cisco-IOS-XE-interfaces_ipv6";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::TrafficFilter::~TrafficFilter()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::TrafficFilter::has_data() const
{
    return direction.is_set
	|| access_list.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::TrafficFilter::has_operation() const
{
    return is_set(operation)
	|| is_set(direction.operation)
	|| is_set(access_list.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::TrafficFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-filter" <<"[direction='" <<direction <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::TrafficFilter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TrafficFilter' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.operation)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (access_list.is_set || is_set(access_list.operation)) leaf_name_data.push_back(access_list.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::TrafficFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::TrafficFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::TrafficFilter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "direction")
    {
        direction = value;
    }
    if(value_path == "access-list")
    {
        access_list = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::NoPim::NoPim()
    :
    pim{YType::boolean, "pim"}
{
    yang_name = "no-pim"; yang_parent_name = "Cisco-IOS-XE-interfaces_ipv6";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::NoPim::~NoPim()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::NoPim::has_data() const
{
    return pim.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::NoPim::has_operation() const
{
    return is_set(operation)
	|| is_set(pim.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::NoPim::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:no-pim";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::NoPim::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NoPim' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pim.is_set || is_set(pim.operation)) leaf_name_data.push_back(pim.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::NoPim::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::NoPim::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::NoPim::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pim")
    {
        pim = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Pim::Pim()
    :
    bfd{YType::empty, "bfd"},
    dr_priority{YType::uint32, "dr-priority"}
    	,
    bsr(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Pim::Bsr>())
{
    bsr->parent = this;

    yang_name = "pim"; yang_parent_name = "Cisco-IOS-XE-interfaces_ipv6";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Pim::~Pim()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Pim::has_data() const
{
    return bfd.is_set
	|| dr_priority.is_set
	|| (bsr !=  nullptr && bsr->has_data());
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Pim::has_operation() const
{
    return is_set(operation)
	|| is_set(bfd.operation)
	|| is_set(dr_priority.operation)
	|| (bsr !=  nullptr && bsr->has_operation());
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Pim::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:pim";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Pim::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pim' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd.is_set || is_set(bfd.operation)) leaf_name_data.push_back(bfd.get_name_leafdata());
    if (dr_priority.is_set || is_set(dr_priority.operation)) leaf_name_data.push_back(dr_priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Pim::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bsr")
    {
        if(bsr == nullptr)
        {
            bsr = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Pim::Bsr>();
        }
        return bsr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Pim::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bsr != nullptr)
    {
        children["bsr"] = bsr;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Pim::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bfd")
    {
        bfd = value;
    }
    if(value_path == "dr-priority")
    {
        dr_priority = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Pim::Bsr::Bsr()
    :
    border{YType::empty, "border"}
{
    yang_name = "bsr"; yang_parent_name = "pim";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Pim::Bsr::~Bsr()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Pim::Bsr::has_data() const
{
    return border.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Pim::Bsr::has_operation() const
{
    return is_set(operation)
	|| is_set(border.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Pim::Bsr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bsr";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Pim::Bsr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bsr' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (border.is_set || is_set(border.operation)) leaf_name_data.push_back(border.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Pim::Bsr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Pim::Bsr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::Pim::Bsr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "border")
    {
        border = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Logging::CiscoIosXeInterfaces_Logging()
    :
    event(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Logging::Event>())
{
    event->parent = this;

    yang_name = "Cisco-IOS-XE-interfaces_logging"; yang_parent_name = "Vlan";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Logging::~CiscoIosXeInterfaces_Logging()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Logging::has_data() const
{
    return (event !=  nullptr && event->has_data());
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Logging::has_operation() const
{
    return is_set(operation)
	|| (event !=  nullptr && event->has_operation());
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-interfaces_logging";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Logging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CiscoIosXeInterfaces_Logging' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "event")
    {
        if(event == nullptr)
        {
            event = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Logging::Event>();
        }
        return event;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(event != nullptr)
    {
        children["event"] = event;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Logging::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Logging::Event::Event()
    :
    bundle_status{YType::empty, "bundle-status"},
    link_status{YType::empty, "link-status"},
    nfas_status{YType::empty, "nfas-status"},
    power_inline_status{YType::empty, "power-inline-status"},
    status{YType::empty, "status"},
    trunk_status{YType::empty, "trunk-status"}
    	,
    spanning_tree(nullptr) // presence node
	,subif_link_status(nullptr) // presence node
{
    yang_name = "event"; yang_parent_name = "Cisco-IOS-XE-interfaces_logging";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Logging::Event::~Event()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Logging::Event::has_data() const
{
    return bundle_status.is_set
	|| link_status.is_set
	|| nfas_status.is_set
	|| power_inline_status.is_set
	|| status.is_set
	|| trunk_status.is_set
	|| (spanning_tree !=  nullptr && spanning_tree->has_data())
	|| (subif_link_status !=  nullptr && subif_link_status->has_data());
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Logging::Event::has_operation() const
{
    return is_set(operation)
	|| is_set(bundle_status.operation)
	|| is_set(link_status.operation)
	|| is_set(nfas_status.operation)
	|| is_set(power_inline_status.operation)
	|| is_set(status.operation)
	|| is_set(trunk_status.operation)
	|| (spanning_tree !=  nullptr && spanning_tree->has_operation())
	|| (subif_link_status !=  nullptr && subif_link_status->has_operation());
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Logging::Event::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Logging::Event::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Event' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_status.is_set || is_set(bundle_status.operation)) leaf_name_data.push_back(bundle_status.get_name_leafdata());
    if (link_status.is_set || is_set(link_status.operation)) leaf_name_data.push_back(link_status.get_name_leafdata());
    if (nfas_status.is_set || is_set(nfas_status.operation)) leaf_name_data.push_back(nfas_status.get_name_leafdata());
    if (power_inline_status.is_set || is_set(power_inline_status.operation)) leaf_name_data.push_back(power_inline_status.get_name_leafdata());
    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());
    if (trunk_status.is_set || is_set(trunk_status.operation)) leaf_name_data.push_back(trunk_status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Logging::Event::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spanning-tree")
    {
        if(spanning_tree == nullptr)
        {
            spanning_tree = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Logging::Event::SpanningTree>();
        }
        return spanning_tree;
    }

    if(child_yang_name == "subif-link-status")
    {
        if(subif_link_status == nullptr)
        {
            subif_link_status = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Logging::Event::SubifLinkStatus>();
        }
        return subif_link_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Logging::Event::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(spanning_tree != nullptr)
    {
        children["spanning-tree"] = spanning_tree;
    }

    if(subif_link_status != nullptr)
    {
        children["subif-link-status"] = subif_link_status;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Logging::Event::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bundle-status")
    {
        bundle_status = value;
    }
    if(value_path == "link-status")
    {
        link_status = value;
    }
    if(value_path == "nfas-status")
    {
        nfas_status = value;
    }
    if(value_path == "power-inline-status")
    {
        power_inline_status = value;
    }
    if(value_path == "status")
    {
        status = value;
    }
    if(value_path == "trunk-status")
    {
        trunk_status = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Logging::Event::SpanningTree::SpanningTree()
    :
    status{YType::empty, "status"}
{
    yang_name = "spanning-tree"; yang_parent_name = "event";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Logging::Event::SpanningTree::~SpanningTree()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Logging::Event::SpanningTree::has_data() const
{
    return status.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Logging::Event::SpanningTree::has_operation() const
{
    return is_set(operation)
	|| is_set(status.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Logging::Event::SpanningTree::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spanning-tree";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Logging::Event::SpanningTree::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SpanningTree' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Logging::Event::SpanningTree::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Logging::Event::SpanningTree::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Logging::Event::SpanningTree::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "status")
    {
        status = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Logging::Event::SubifLinkStatus::SubifLinkStatus()
    :
    ignore_bulk{YType::empty, "ignore-bulk"}
{
    yang_name = "subif-link-status"; yang_parent_name = "event";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Logging::Event::SubifLinkStatus::~SubifLinkStatus()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Logging::Event::SubifLinkStatus::has_data() const
{
    return ignore_bulk.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Logging::Event::SubifLinkStatus::has_operation() const
{
    return is_set(operation)
	|| is_set(ignore_bulk.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Logging::Event::SubifLinkStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subif-link-status";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Logging::Event::SubifLinkStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SubifLinkStatus' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore_bulk.is_set || is_set(ignore_bulk.operation)) leaf_name_data.push_back(ignore_bulk.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Logging::Event::SubifLinkStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Logging::Event::SubifLinkStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Logging::Event::SubifLinkStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ignore-bulk")
    {
        ignore_bulk = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Mdix::CiscoIosXeInterfaces_Mdix()
    :
    auto_{YType::boolean, "auto"}
{
    yang_name = "Cisco-IOS-XE-interfaces_mdix"; yang_parent_name = "Vlan";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Mdix::~CiscoIosXeInterfaces_Mdix()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Mdix::has_data() const
{
    return auto_.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Mdix::has_operation() const
{
    return is_set(operation)
	|| is_set(auto_.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Mdix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-interfaces_mdix";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Mdix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CiscoIosXeInterfaces_Mdix' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_.is_set || is_set(auto_.operation)) leaf_name_data.push_back(auto_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Mdix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Mdix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Mdix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "auto")
    {
        auto_ = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Mop::CiscoIosXeInterfaces_Mop()
    :
    enabled{YType::boolean, "enabled"}
{
    yang_name = "Cisco-IOS-XE-interfaces_mop"; yang_parent_name = "Vlan";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Mop::~CiscoIosXeInterfaces_Mop()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Mop::has_data() const
{
    return enabled.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Mop::has_operation() const
{
    return is_set(operation)
	|| is_set(enabled.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Mop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-interfaces_mop";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Mop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CiscoIosXeInterfaces_Mop' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.operation)) leaf_name_data.push_back(enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Mop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Mop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Mop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enabled")
    {
        enabled = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Interface_Qos::CiscoIosXeInterfaces_Interface_Qos()
    :
    trust(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Interface_Qos::Trust>())
{
    trust->parent = this;

    yang_name = "Cisco-IOS-XE-interfaces_interface_qos"; yang_parent_name = "Vlan";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Interface_Qos::~CiscoIosXeInterfaces_Interface_Qos()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Interface_Qos::has_data() const
{
    return (trust !=  nullptr && trust->has_data());
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Interface_Qos::has_operation() const
{
    return is_set(operation)
	|| (trust !=  nullptr && trust->has_operation());
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Interface_Qos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-interfaces_interface_qos";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Interface_Qos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CiscoIosXeInterfaces_Interface_Qos' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Interface_Qos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trust")
    {
        if(trust == nullptr)
        {
            trust = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Interface_Qos::Trust>();
        }
        return trust;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Interface_Qos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(trust != nullptr)
    {
        children["trust"] = trust;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Interface_Qos::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Interface_Qos::Trust::Trust()
    :
    device{YType::enumeration, "device"}
{
    yang_name = "trust"; yang_parent_name = "Cisco-IOS-XE-interfaces_interface_qos";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Interface_Qos::Trust::~Trust()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Interface_Qos::Trust::has_data() const
{
    return device.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Interface_Qos::Trust::has_operation() const
{
    return is_set(operation)
	|| is_set(device.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Interface_Qos::Trust::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trust";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Interface_Qos::Trust::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Trust' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device.is_set || is_set(device.operation)) leaf_name_data.push_back(device.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Interface_Qos::Trust::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Interface_Qos::Trust::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Interface_Qos::Trust::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "device")
    {
        device = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::CiscoIosXeInterfaces_Standby()
    :
    bfd{YType::empty, "bfd"},
    mac_refresh{YType::uint8, "mac-refresh"},
    version{YType::enumeration, "version"}
    	,
    delay(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::Delay>())
	,use_bia(nullptr) // presence node
{
    delay->parent = this;

    yang_name = "Cisco-IOS-XE-interfaces_standby"; yang_parent_name = "Vlan";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::~CiscoIosXeInterfaces_Standby()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::has_data() const
{
    for (std::size_t index=0; index<standby_list.size(); index++)
    {
        if(standby_list[index]->has_data())
            return true;
    }
    return bfd.is_set
	|| mac_refresh.is_set
	|| version.is_set
	|| (delay !=  nullptr && delay->has_data())
	|| (use_bia !=  nullptr && use_bia->has_data());
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::has_operation() const
{
    for (std::size_t index=0; index<standby_list.size(); index++)
    {
        if(standby_list[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(bfd.operation)
	|| is_set(mac_refresh.operation)
	|| is_set(version.operation)
	|| (delay !=  nullptr && delay->has_operation())
	|| (use_bia !=  nullptr && use_bia->has_operation());
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-interfaces_standby";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CiscoIosXeInterfaces_Standby' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd.is_set || is_set(bfd.operation)) leaf_name_data.push_back(bfd.get_name_leafdata());
    if (mac_refresh.is_set || is_set(mac_refresh.operation)) leaf_name_data.push_back(mac_refresh.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "standby-list")
    {
        for(auto const & c : standby_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList>();
        c->parent = this;
        standby_list.push_back(c);
        return c;
    }

    if(child_yang_name == "use-bia")
    {
        if(use_bia == nullptr)
        {
            use_bia = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::UseBia>();
        }
        return use_bia;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    for (auto const & c : standby_list)
    {
        children[c->get_segment_path()] = c;
    }

    if(use_bia != nullptr)
    {
        children["use-bia"] = use_bia;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bfd")
    {
        bfd = value;
    }
    if(value_path == "mac-refresh")
    {
        mac_refresh = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::Delay::Delay()
    :
    minimum{YType::uint16, "minimum"},
    reload{YType::uint16, "reload"}
{
    yang_name = "delay"; yang_parent_name = "Cisco-IOS-XE-interfaces_standby";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::Delay::~Delay()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::Delay::has_data() const
{
    return minimum.is_set
	|| reload.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::Delay::has_operation() const
{
    return is_set(operation)
	|| is_set(minimum.operation)
	|| is_set(reload.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::Delay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Delay' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (reload.is_set || is_set(reload.operation)) leaf_name_data.push_back(reload.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::Delay::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "reload")
    {
        reload = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::UseBia::UseBia()
    :
    scope(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::UseBia::Scope>())
{
    scope->parent = this;

    yang_name = "use-bia"; yang_parent_name = "Cisco-IOS-XE-interfaces_standby";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::UseBia::~UseBia()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::UseBia::has_data() const
{
    return (scope !=  nullptr && scope->has_data());
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::UseBia::has_operation() const
{
    return is_set(operation)
	|| (scope !=  nullptr && scope->has_operation());
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::UseBia::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "use-bia";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::UseBia::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UseBia' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::UseBia::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "scope")
    {
        if(scope == nullptr)
        {
            scope = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::UseBia::Scope>();
        }
        return scope;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::UseBia::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(scope != nullptr)
    {
        children["scope"] = scope;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::UseBia::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::UseBia::Scope::Scope()
    :
    interface{YType::empty, "interface"}
{
    yang_name = "scope"; yang_parent_name = "use-bia";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::UseBia::Scope::~Scope()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::UseBia::Scope::has_data() const
{
    return interface.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::UseBia::Scope::has_operation() const
{
    return is_set(operation)
	|| is_set(interface.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::UseBia::Scope::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scope";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::UseBia::Scope::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Scope' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::UseBia::Scope::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::UseBia::Scope::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::UseBia::Scope::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface")
    {
        interface = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::StandbyList()
    :
    group_number{YType::uint16, "group-number"},
    follow{YType::str, "follow"},
    ipv6{YType::str, "ipv6"},
    mac_address{YType::str, "mac-address"},
    name{YType::str, "name"},
    priority{YType::uint8, "priority"}
    	,
    authentication(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Authentication>())
	,ip(nullptr) // presence node
	,preempt(nullptr) // presence node
	,redirect(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect>())
	,timers(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Timers>())
{
    authentication->parent = this;

    redirect->parent = this;

    timers->parent = this;

    yang_name = "standby-list"; yang_parent_name = "Cisco-IOS-XE-interfaces_standby";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::~StandbyList()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::has_data() const
{
    for (std::size_t index=0; index<track.size(); index++)
    {
        if(track[index]->has_data())
            return true;
    }
    return group_number.is_set
	|| follow.is_set
	|| ipv6.is_set
	|| mac_address.is_set
	|| name.is_set
	|| priority.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (preempt !=  nullptr && preempt->has_data())
	|| (redirect !=  nullptr && redirect->has_data())
	|| (timers !=  nullptr && timers->has_data());
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::has_operation() const
{
    for (std::size_t index=0; index<track.size(); index++)
    {
        if(track[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(group_number.operation)
	|| is_set(follow.operation)
	|| is_set(ipv6.operation)
	|| is_set(mac_address.operation)
	|| is_set(name.operation)
	|| is_set(priority.operation)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (preempt !=  nullptr && preempt->has_operation())
	|| (redirect !=  nullptr && redirect->has_operation())
	|| (timers !=  nullptr && timers->has_operation());
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standby-list" <<"[group-number='" <<group_number <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StandbyList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_number.is_set || is_set(group_number.operation)) leaf_name_data.push_back(group_number.get_name_leafdata());
    if (follow.is_set || is_set(follow.operation)) leaf_name_data.push_back(follow.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "preempt")
    {
        if(preempt == nullptr)
        {
            preempt = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Preempt>();
        }
        return preempt;
    }

    if(child_yang_name == "redirect")
    {
        if(redirect == nullptr)
        {
            redirect = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect>();
        }
        return redirect;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Timers>();
        }
        return timers;
    }

    if(child_yang_name == "track")
    {
        for(auto const & c : track)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Track>();
        c->parent = this;
        track.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(preempt != nullptr)
    {
        children["preempt"] = preempt;
    }

    if(redirect != nullptr)
    {
        children["redirect"] = redirect;
    }

    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    for (auto const & c : track)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-number")
    {
        group_number = value;
    }
    if(value_path == "follow")
    {
        follow = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Authentication::Authentication()
    :
    text{YType::str, "text"},
    word{YType::str, "word"}
    	,
    md5(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Authentication::Md5>())
{
    md5->parent = this;

    yang_name = "authentication"; yang_parent_name = "standby-list";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Authentication::~Authentication()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Authentication::has_data() const
{
    return text.is_set
	|| word.is_set
	|| (md5 !=  nullptr && md5->has_data());
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Authentication::has_operation() const
{
    return is_set(operation)
	|| is_set(text.operation)
	|| is_set(word.operation)
	|| (md5 !=  nullptr && md5->has_operation());
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Authentication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Authentication' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (text.is_set || is_set(text.operation)) leaf_name_data.push_back(text.get_name_leafdata());
    if (word.is_set || is_set(word.operation)) leaf_name_data.push_back(word.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "md5")
    {
        if(md5 == nullptr)
        {
            md5 = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Authentication::Md5>();
        }
        return md5;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(md5 != nullptr)
    {
        children["md5"] = md5;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Authentication::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "text")
    {
        text = value;
    }
    if(value_path == "word")
    {
        word = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Authentication::Md5::Md5()
    :
    key_chain{YType::str, "key-chain"}
    	,
    key_string(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Authentication::Md5::KeyString>())
{
    key_string->parent = this;

    yang_name = "md5"; yang_parent_name = "authentication";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Authentication::Md5::~Md5()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Authentication::Md5::has_data() const
{
    return key_chain.is_set
	|| (key_string !=  nullptr && key_string->has_data());
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Authentication::Md5::has_operation() const
{
    return is_set(operation)
	|| is_set(key_chain.operation)
	|| (key_string !=  nullptr && key_string->has_operation());
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Authentication::Md5::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "md5";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Authentication::Md5::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Md5' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_chain.is_set || is_set(key_chain.operation)) leaf_name_data.push_back(key_chain.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Authentication::Md5::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Authentication::Md5::KeyString>();
        }
        return key_string;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Authentication::Md5::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_string != nullptr)
    {
        children["key-string"] = key_string;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Authentication::Md5::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "key-chain")
    {
        key_chain = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Authentication::Md5::KeyString::KeyString()
    :
    encrypt{YType::enumeration, "encrypt"},
    string{YType::str, "string"},
    timeout{YType::uint16, "timeout"}
{
    yang_name = "key-string"; yang_parent_name = "md5";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Authentication::Md5::KeyString::~KeyString()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Authentication::Md5::KeyString::has_data() const
{
    return encrypt.is_set
	|| string.is_set
	|| timeout.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Authentication::Md5::KeyString::has_operation() const
{
    return is_set(operation)
	|| is_set(encrypt.operation)
	|| is_set(string.operation)
	|| is_set(timeout.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Authentication::Md5::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Authentication::Md5::KeyString::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'KeyString' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encrypt.is_set || is_set(encrypt.operation)) leaf_name_data.push_back(encrypt.get_name_leafdata());
    if (string.is_set || is_set(string.operation)) leaf_name_data.push_back(string.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Authentication::Md5::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Authentication::Md5::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Authentication::Md5::KeyString::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "encrypt")
    {
        encrypt = value;
    }
    if(value_path == "string")
    {
        string = value;
    }
    if(value_path == "timeout")
    {
        timeout = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Ip::Ip()
    :
    address{YType::str, "address"},
    secondary{YType::empty, "secondary"}
{
    yang_name = "ip"; yang_parent_name = "standby-list";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Ip::~Ip()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Ip::has_data() const
{
    return address.is_set
	|| secondary.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Ip::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(secondary.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (secondary.is_set || is_set(secondary.operation)) leaf_name_data.push_back(secondary.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Ip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "secondary")
    {
        secondary = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Preempt::Preempt()
    :
    delay(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Preempt::Delay>())
{
    delay->parent = this;

    yang_name = "preempt"; yang_parent_name = "standby-list";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Preempt::~Preempt()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Preempt::has_data() const
{
    return (delay !=  nullptr && delay->has_data());
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Preempt::has_operation() const
{
    return is_set(operation)
	|| (delay !=  nullptr && delay->has_operation());
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Preempt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preempt";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Preempt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Preempt' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Preempt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Preempt::Delay>();
        }
        return delay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Preempt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Preempt::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Preempt::Delay::Delay()
    :
    minimum{YType::uint16, "minimum"},
    reload{YType::uint16, "reload"},
    sync{YType::uint16, "sync"}
{
    yang_name = "delay"; yang_parent_name = "preempt";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Preempt::Delay::~Delay()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Preempt::Delay::has_data() const
{
    return minimum.is_set
	|| reload.is_set
	|| sync.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Preempt::Delay::has_operation() const
{
    return is_set(operation)
	|| is_set(minimum.operation)
	|| is_set(reload.operation)
	|| is_set(sync.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Preempt::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Preempt::Delay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Delay' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (reload.is_set || is_set(reload.operation)) leaf_name_data.push_back(reload.get_name_leafdata());
    if (sync.is_set || is_set(sync.operation)) leaf_name_data.push_back(sync.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Preempt::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Preempt::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Preempt::Delay::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "minimum")
    {
        minimum = value;
    }
    if(value_path == "reload")
    {
        reload = value;
    }
    if(value_path == "sync")
    {
        sync = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Redirect()
    :
    unknown{YType::empty, "unknown"}
    	,
    advertisement(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Advertisement>())
	,timers(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Timers>())
{
    advertisement->parent = this;

    timers->parent = this;

    yang_name = "redirect"; yang_parent_name = "standby-list";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::~Redirect()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::has_data() const
{
    return unknown.is_set
	|| (advertisement !=  nullptr && advertisement->has_data())
	|| (timers !=  nullptr && timers->has_data());
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::has_operation() const
{
    return is_set(operation)
	|| is_set(unknown.operation)
	|| (advertisement !=  nullptr && advertisement->has_operation())
	|| (timers !=  nullptr && timers->has_operation());
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redirect";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Redirect' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unknown.is_set || is_set(unknown.operation)) leaf_name_data.push_back(unknown.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "advertisement")
    {
        if(advertisement == nullptr)
        {
            advertisement = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Advertisement>();
        }
        return advertisement;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Timers>();
        }
        return timers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(advertisement != nullptr)
    {
        children["advertisement"] = advertisement;
    }

    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unknown")
    {
        unknown = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Advertisement::Advertisement()
    :
    authentication(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Advertisement::Authentication>())
{
    authentication->parent = this;

    yang_name = "advertisement"; yang_parent_name = "redirect";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Advertisement::~Advertisement()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Advertisement::has_data() const
{
    return (authentication !=  nullptr && authentication->has_data());
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Advertisement::has_operation() const
{
    return is_set(operation)
	|| (authentication !=  nullptr && authentication->has_operation());
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Advertisement::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertisement";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Advertisement::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Advertisement' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Advertisement::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Advertisement::Authentication>();
        }
        return authentication;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Advertisement::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Advertisement::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Advertisement::Authentication::Authentication()
    :
    md5(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Advertisement::Authentication::Md5>())
{
    md5->parent = this;

    yang_name = "authentication"; yang_parent_name = "advertisement";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Advertisement::Authentication::~Authentication()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Advertisement::Authentication::has_data() const
{
    return (md5 !=  nullptr && md5->has_data());
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Advertisement::Authentication::has_operation() const
{
    return is_set(operation)
	|| (md5 !=  nullptr && md5->has_operation());
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Advertisement::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Advertisement::Authentication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Authentication' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Advertisement::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "md5")
    {
        if(md5 == nullptr)
        {
            md5 = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Advertisement::Authentication::Md5>();
        }
        return md5;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Advertisement::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(md5 != nullptr)
    {
        children["md5"] = md5;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Advertisement::Authentication::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::Md5()
    :
    key_chain{YType::str, "key-chain"}
    	,
    key_string(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString>())
{
    key_string->parent = this;

    yang_name = "md5"; yang_parent_name = "authentication";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::~Md5()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::has_data() const
{
    return key_chain.is_set
	|| (key_string !=  nullptr && key_string->has_data());
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::has_operation() const
{
    return is_set(operation)
	|| is_set(key_chain.operation)
	|| (key_string !=  nullptr && key_string->has_operation());
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "md5";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Md5' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_chain.is_set || is_set(key_chain.operation)) leaf_name_data.push_back(key_chain.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString>();
        }
        return key_string;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_string != nullptr)
    {
        children["key-string"] = key_string;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "key-chain")
    {
        key_chain = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::KeyString()
    :
    encrypt{YType::enumeration, "encrypt"},
    string{YType::str, "string"},
    timeout{YType::uint16, "timeout"}
{
    yang_name = "key-string"; yang_parent_name = "md5";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::~KeyString()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::has_data() const
{
    return encrypt.is_set
	|| string.is_set
	|| timeout.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::has_operation() const
{
    return is_set(operation)
	|| is_set(encrypt.operation)
	|| is_set(string.operation)
	|| is_set(timeout.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'KeyString' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encrypt.is_set || is_set(encrypt.operation)) leaf_name_data.push_back(encrypt.get_name_leafdata());
    if (string.is_set || is_set(string.operation)) leaf_name_data.push_back(string.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "encrypt")
    {
        encrypt = value;
    }
    if(value_path == "string")
    {
        string = value;
    }
    if(value_path == "timeout")
    {
        timeout = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Timers::Timers()
    :
    advertisement{YType::uint16, "advertisement"},
    holddown{YType::uint16, "holddown"}
{
    yang_name = "timers"; yang_parent_name = "redirect";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Timers::~Timers()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Timers::has_data() const
{
    return advertisement.is_set
	|| holddown.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Timers::has_operation() const
{
    return is_set(operation)
	|| is_set(advertisement.operation)
	|| is_set(holddown.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Timers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Timers' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertisement.is_set || is_set(advertisement.operation)) leaf_name_data.push_back(advertisement.get_name_leafdata());
    if (holddown.is_set || is_set(holddown.operation)) leaf_name_data.push_back(holddown.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Timers::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advertisement")
    {
        advertisement = value;
    }
    if(value_path == "holddown")
    {
        holddown = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Timers::Timers()
    :
    hello_interval(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Timers::HelloInterval>())
	,hold_time(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Timers::HoldTime>())
{
    hello_interval->parent = this;

    hold_time->parent = this;

    yang_name = "timers"; yang_parent_name = "standby-list";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Timers::~Timers()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Timers::has_data() const
{
    return (hello_interval !=  nullptr && hello_interval->has_data())
	|| (hold_time !=  nullptr && hold_time->has_data());
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Timers::has_operation() const
{
    return is_set(operation)
	|| (hello_interval !=  nullptr && hello_interval->has_operation())
	|| (hold_time !=  nullptr && hold_time->has_operation());
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Timers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Timers' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hello-interval")
    {
        if(hello_interval == nullptr)
        {
            hello_interval = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Timers::HelloInterval>();
        }
        return hello_interval;
    }

    if(child_yang_name == "hold-time")
    {
        if(hold_time == nullptr)
        {
            hold_time = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Timers::HoldTime>();
        }
        return hold_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(hello_interval != nullptr)
    {
        children["hello-interval"] = hello_interval;
    }

    if(hold_time != nullptr)
    {
        children["hold-time"] = hold_time;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Timers::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Timers::HelloInterval::HelloInterval()
    :
    msec{YType::uint16, "msec"},
    seconds{YType::uint8, "seconds"}
{
    yang_name = "hello-interval"; yang_parent_name = "timers";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Timers::HelloInterval::~HelloInterval()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Timers::HelloInterval::has_data() const
{
    return msec.is_set
	|| seconds.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Timers::HelloInterval::has_operation() const
{
    return is_set(operation)
	|| is_set(msec.operation)
	|| is_set(seconds.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Timers::HelloInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-interval";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Timers::HelloInterval::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HelloInterval' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msec.is_set || is_set(msec.operation)) leaf_name_data.push_back(msec.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Timers::HelloInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Timers::HelloInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Timers::HelloInterval::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "msec")
    {
        msec = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Timers::HoldTime::HoldTime()
    :
    msec{YType::uint16, "msec"},
    seconds{YType::uint8, "seconds"}
{
    yang_name = "hold-time"; yang_parent_name = "timers";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Timers::HoldTime::~HoldTime()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Timers::HoldTime::has_data() const
{
    return msec.is_set
	|| seconds.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Timers::HoldTime::has_operation() const
{
    return is_set(operation)
	|| is_set(msec.operation)
	|| is_set(seconds.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Timers::HoldTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hold-time";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Timers::HoldTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HoldTime' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msec.is_set || is_set(msec.operation)) leaf_name_data.push_back(msec.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Timers::HoldTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Timers::HoldTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Timers::HoldTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "msec")
    {
        msec = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Track::Track()
    :
    number{YType::uint16, "number"},
    decrement{YType::uint8, "decrement"},
    shutdown{YType::empty, "shutdown"}
{
    yang_name = "track"; yang_parent_name = "standby-list";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Track::~Track()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Track::has_data() const
{
    return number.is_set
	|| decrement.is_set
	|| shutdown.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Track::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| is_set(decrement.operation)
	|| is_set(shutdown.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Track::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Track::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Track' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());
    if (decrement.is_set || is_set(decrement.operation)) leaf_name_data.push_back(decrement.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.operation)) leaf_name_data.push_back(shutdown.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Track::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Track::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Track::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
    if(value_path == "decrement")
    {
        decrement = value;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_AccessSession::CiscoIosXeInterfaces_AccessSession()
    :
    closed{YType::empty, "closed"},
    host_mode{YType::enumeration, "host-mode"}
    	,
    port_control(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_AccessSession::PortControl>())
{
    port_control->parent = this;

    yang_name = "Cisco-IOS-XE-interfaces_access-session"; yang_parent_name = "Vlan";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_AccessSession::~CiscoIosXeInterfaces_AccessSession()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_AccessSession::has_data() const
{
    return closed.is_set
	|| host_mode.is_set
	|| (port_control !=  nullptr && port_control->has_data());
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_AccessSession::has_operation() const
{
    return is_set(operation)
	|| is_set(closed.operation)
	|| is_set(host_mode.operation)
	|| (port_control !=  nullptr && port_control->has_operation());
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_AccessSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-interfaces_access-session";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_AccessSession::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CiscoIosXeInterfaces_AccessSession' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (closed.is_set || is_set(closed.operation)) leaf_name_data.push_back(closed.get_name_leafdata());
    if (host_mode.is_set || is_set(host_mode.operation)) leaf_name_data.push_back(host_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_AccessSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-control")
    {
        if(port_control == nullptr)
        {
            port_control = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_AccessSession::PortControl>();
        }
        return port_control;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_AccessSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(port_control != nullptr)
    {
        children["port-control"] = port_control;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_AccessSession::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "closed")
    {
        closed = value;
    }
    if(value_path == "host-mode")
    {
        host_mode = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_AccessSession::PortControl::PortControl()
    :
    auto_{YType::empty, "auto"}
{
    yang_name = "port-control"; yang_parent_name = "Cisco-IOS-XE-interfaces_access-session";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_AccessSession::PortControl::~PortControl()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_AccessSession::PortControl::has_data() const
{
    return auto_.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_AccessSession::PortControl::has_operation() const
{
    return is_set(operation)
	|| is_set(auto_.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_AccessSession::PortControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-control";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_AccessSession::PortControl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PortControl' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_.is_set || is_set(auto_.operation)) leaf_name_data.push_back(auto_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_AccessSession::PortControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_AccessSession::PortControl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_AccessSession::PortControl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "auto")
    {
        auto_ = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::CiscoIosXeInterfaces_StormControl()
    :
    action(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Action>())
	,broadcast(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast>())
	,multicast(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Multicast>())
	,unicast(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast>())
{
    action->parent = this;

    broadcast->parent = this;

    multicast->parent = this;

    unicast->parent = this;

    yang_name = "Cisco-IOS-XE-interfaces_storm-control"; yang_parent_name = "Vlan";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::~CiscoIosXeInterfaces_StormControl()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::has_data() const
{
    return (action !=  nullptr && action->has_data())
	|| (broadcast !=  nullptr && broadcast->has_data())
	|| (multicast !=  nullptr && multicast->has_data())
	|| (unicast !=  nullptr && unicast->has_data());
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::has_operation() const
{
    return is_set(operation)
	|| (action !=  nullptr && action->has_operation())
	|| (broadcast !=  nullptr && broadcast->has_operation())
	|| (multicast !=  nullptr && multicast->has_operation())
	|| (unicast !=  nullptr && unicast->has_operation());
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-interfaces_storm-control";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CiscoIosXeInterfaces_StormControl' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Action>();
        }
        return action;
    }

    if(child_yang_name == "broadcast")
    {
        if(broadcast == nullptr)
        {
            broadcast = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast>();
        }
        return broadcast;
    }

    if(child_yang_name == "multicast")
    {
        if(multicast == nullptr)
        {
            multicast = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Multicast>();
        }
        return multicast;
    }

    if(child_yang_name == "unicast")
    {
        if(unicast == nullptr)
        {
            unicast = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast>();
        }
        return unicast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(action != nullptr)
    {
        children["action"] = action;
    }

    if(broadcast != nullptr)
    {
        children["broadcast"] = broadcast;
    }

    if(multicast != nullptr)
    {
        children["multicast"] = multicast;
    }

    if(unicast != nullptr)
    {
        children["unicast"] = unicast;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Action::Action()
    :
    level{YType::str, "level"},
    shutdown{YType::empty, "shutdown"},
    trap{YType::empty, "trap"}
{
    yang_name = "action"; yang_parent_name = "Cisco-IOS-XE-interfaces_storm-control";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Action::~Action()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Action::has_data() const
{
    return level.is_set
	|| shutdown.is_set
	|| trap.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Action::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation)
	|| is_set(shutdown.operation)
	|| is_set(trap.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Action::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Action' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.operation)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (trap.is_set || is_set(trap.operation)) leaf_name_data.push_back(trap.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Action::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
    }
    if(value_path == "trap")
    {
        trap = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast::Broadcast()
    :
    include(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast::Include>())
	,level(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast::Level>())
{
    include->parent = this;

    level->parent = this;

    yang_name = "broadcast"; yang_parent_name = "Cisco-IOS-XE-interfaces_storm-control";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast::~Broadcast()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast::has_data() const
{
    return (include !=  nullptr && include->has_data())
	|| (level !=  nullptr && level->has_data());
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast::has_operation() const
{
    return is_set(operation)
	|| (include !=  nullptr && include->has_operation())
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Broadcast' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "include")
    {
        if(include == nullptr)
        {
            include = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast::Include>();
        }
        return include;
    }

    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(include != nullptr)
    {
        children["include"] = include;
    }

    if(level != nullptr)
    {
        children["level"] = level;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast::Include::Include()
    :
    multicast{YType::empty, "multicast"}
{
    yang_name = "include"; yang_parent_name = "broadcast";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast::Include::~Include()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast::Include::has_data() const
{
    return multicast.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast::Include::has_operation() const
{
    return is_set(operation)
	|| is_set(multicast.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast::Include::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "include";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast::Include::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Include' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multicast.is_set || is_set(multicast.operation)) leaf_name_data.push_back(multicast.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast::Include::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast::Include::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast::Include::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "multicast")
    {
        multicast = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast::Level::Level()
    :
    threshold{YType::str, "threshold"}
    	,
    bps(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast::Level::Bps>())
	,pps(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast::Level::Pps>())
{
    bps->parent = this;

    pps->parent = this;

    yang_name = "level"; yang_parent_name = "broadcast";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast::Level::~Level()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast::Level::has_data() const
{
    return threshold.is_set
	|| (bps !=  nullptr && bps->has_data())
	|| (pps !=  nullptr && pps->has_data());
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast::Level::has_operation() const
{
    return is_set(operation)
	|| is_set(threshold.operation)
	|| (bps !=  nullptr && bps->has_operation())
	|| (pps !=  nullptr && pps->has_operation());
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast::Level::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Level' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bps")
    {
        if(bps == nullptr)
        {
            bps = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast::Level::Bps>();
        }
        return bps;
    }

    if(child_yang_name == "pps")
    {
        if(pps == nullptr)
        {
            pps = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast::Level::Pps>();
        }
        return pps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bps != nullptr)
    {
        children["bps"] = bps;
    }

    if(pps != nullptr)
    {
        children["pps"] = pps;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast::Level::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast::Level::Bps::Bps()
    :
    falling_threshold{YType::str, "falling-threshold"},
    rising_threshold{YType::str, "rising-threshold"}
{
    yang_name = "bps"; yang_parent_name = "level";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast::Level::Bps::~Bps()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast::Level::Bps::has_data() const
{
    return falling_threshold.is_set
	|| rising_threshold.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast::Level::Bps::has_operation() const
{
    return is_set(operation)
	|| is_set(falling_threshold.operation)
	|| is_set(rising_threshold.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast::Level::Bps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bps";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast::Level::Bps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bps' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (falling_threshold.is_set || is_set(falling_threshold.operation)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());
    if (rising_threshold.is_set || is_set(rising_threshold.operation)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast::Level::Bps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast::Level::Bps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast::Level::Bps::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast::Level::Pps::Pps()
    :
    falling_threshold{YType::str, "falling-threshold"},
    rising_threshold{YType::str, "rising-threshold"}
{
    yang_name = "pps"; yang_parent_name = "level";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast::Level::Pps::~Pps()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast::Level::Pps::has_data() const
{
    return falling_threshold.is_set
	|| rising_threshold.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast::Level::Pps::has_operation() const
{
    return is_set(operation)
	|| is_set(falling_threshold.operation)
	|| is_set(rising_threshold.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast::Level::Pps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pps";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast::Level::Pps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pps' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (falling_threshold.is_set || is_set(falling_threshold.operation)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());
    if (rising_threshold.is_set || is_set(rising_threshold.operation)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast::Level::Pps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast::Level::Pps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Broadcast::Level::Pps::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Multicast::Multicast()
    :
    level(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Multicast::Level>())
{
    level->parent = this;

    yang_name = "multicast"; yang_parent_name = "Cisco-IOS-XE-interfaces_storm-control";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Multicast::~Multicast()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Multicast::has_data() const
{
    return (level !=  nullptr && level->has_data());
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Multicast::has_operation() const
{
    return is_set(operation)
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Multicast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Multicast' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Multicast::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(level != nullptr)
    {
        children["level"] = level;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Multicast::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Multicast::Level::Level()
    :
    threshold{YType::str, "threshold"}
    	,
    bps(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Multicast::Level::Bps>())
	,pps(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Multicast::Level::Pps>())
{
    bps->parent = this;

    pps->parent = this;

    yang_name = "level"; yang_parent_name = "multicast";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Multicast::Level::~Level()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Multicast::Level::has_data() const
{
    return threshold.is_set
	|| (bps !=  nullptr && bps->has_data())
	|| (pps !=  nullptr && pps->has_data());
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Multicast::Level::has_operation() const
{
    return is_set(operation)
	|| is_set(threshold.operation)
	|| (bps !=  nullptr && bps->has_operation())
	|| (pps !=  nullptr && pps->has_operation());
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Multicast::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Multicast::Level::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Level' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Multicast::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bps")
    {
        if(bps == nullptr)
        {
            bps = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Multicast::Level::Bps>();
        }
        return bps;
    }

    if(child_yang_name == "pps")
    {
        if(pps == nullptr)
        {
            pps = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Multicast::Level::Pps>();
        }
        return pps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Multicast::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bps != nullptr)
    {
        children["bps"] = bps;
    }

    if(pps != nullptr)
    {
        children["pps"] = pps;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Multicast::Level::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Multicast::Level::Bps::Bps()
    :
    falling_threshold{YType::str, "falling-threshold"},
    rising_threshold{YType::str, "rising-threshold"}
{
    yang_name = "bps"; yang_parent_name = "level";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Multicast::Level::Bps::~Bps()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Multicast::Level::Bps::has_data() const
{
    return falling_threshold.is_set
	|| rising_threshold.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Multicast::Level::Bps::has_operation() const
{
    return is_set(operation)
	|| is_set(falling_threshold.operation)
	|| is_set(rising_threshold.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Multicast::Level::Bps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bps";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Multicast::Level::Bps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bps' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (falling_threshold.is_set || is_set(falling_threshold.operation)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());
    if (rising_threshold.is_set || is_set(rising_threshold.operation)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Multicast::Level::Bps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Multicast::Level::Bps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Multicast::Level::Bps::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Multicast::Level::Pps::Pps()
    :
    falling_threshold{YType::str, "falling-threshold"},
    rising_threshold{YType::str, "rising-threshold"}
{
    yang_name = "pps"; yang_parent_name = "level";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Multicast::Level::Pps::~Pps()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Multicast::Level::Pps::has_data() const
{
    return falling_threshold.is_set
	|| rising_threshold.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Multicast::Level::Pps::has_operation() const
{
    return is_set(operation)
	|| is_set(falling_threshold.operation)
	|| is_set(rising_threshold.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Multicast::Level::Pps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pps";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Multicast::Level::Pps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pps' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (falling_threshold.is_set || is_set(falling_threshold.operation)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());
    if (rising_threshold.is_set || is_set(rising_threshold.operation)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Multicast::Level::Pps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Multicast::Level::Pps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Multicast::Level::Pps::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast::Unicast()
    :
    level(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast::Level>())
{
    level->parent = this;

    yang_name = "unicast"; yang_parent_name = "Cisco-IOS-XE-interfaces_storm-control";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast::~Unicast()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast::has_data() const
{
    return (level !=  nullptr && level->has_data());
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast::has_operation() const
{
    return is_set(operation)
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unicast";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Unicast' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(level != nullptr)
    {
        children["level"] = level;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast::Level::Level()
    :
    bps(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast::Level::Bps>())
	,pps(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast::Level::Pps>())
	,threshold(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast::Level::Threshold>())
{
    bps->parent = this;

    pps->parent = this;

    threshold->parent = this;

    yang_name = "level"; yang_parent_name = "unicast";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast::Level::~Level()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast::Level::has_data() const
{
    return (bps !=  nullptr && bps->has_data())
	|| (pps !=  nullptr && pps->has_data())
	|| (threshold !=  nullptr && threshold->has_data());
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast::Level::has_operation() const
{
    return is_set(operation)
	|| (bps !=  nullptr && bps->has_operation())
	|| (pps !=  nullptr && pps->has_operation())
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast::Level::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Level' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bps")
    {
        if(bps == nullptr)
        {
            bps = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast::Level::Bps>();
        }
        return bps;
    }

    if(child_yang_name == "pps")
    {
        if(pps == nullptr)
        {
            pps = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast::Level::Pps>();
        }
        return pps;
    }

    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast::Level::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bps != nullptr)
    {
        children["bps"] = bps;
    }

    if(pps != nullptr)
    {
        children["pps"] = pps;
    }

    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast::Level::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast::Level::Threshold::Threshold()
    :
    falling_threshold{YType::str, "falling-threshold"},
    rising_threshold{YType::str, "rising-threshold"}
{
    yang_name = "threshold"; yang_parent_name = "level";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast::Level::Threshold::~Threshold()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast::Level::Threshold::has_data() const
{
    return falling_threshold.is_set
	|| rising_threshold.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast::Level::Threshold::has_operation() const
{
    return is_set(operation)
	|| is_set(falling_threshold.operation)
	|| is_set(rising_threshold.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast::Level::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast::Level::Threshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Threshold' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (falling_threshold.is_set || is_set(falling_threshold.operation)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());
    if (rising_threshold.is_set || is_set(rising_threshold.operation)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast::Level::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast::Level::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast::Level::Threshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast::Level::Bps::Bps()
    :
    falling_threshold{YType::str, "falling-threshold"},
    rising_threshold{YType::str, "rising-threshold"}
{
    yang_name = "bps"; yang_parent_name = "level";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast::Level::Bps::~Bps()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast::Level::Bps::has_data() const
{
    return falling_threshold.is_set
	|| rising_threshold.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast::Level::Bps::has_operation() const
{
    return is_set(operation)
	|| is_set(falling_threshold.operation)
	|| is_set(rising_threshold.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast::Level::Bps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bps";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast::Level::Bps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bps' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (falling_threshold.is_set || is_set(falling_threshold.operation)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());
    if (rising_threshold.is_set || is_set(rising_threshold.operation)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast::Level::Bps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast::Level::Bps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast::Level::Bps::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast::Level::Pps::Pps()
    :
    falling_threshold{YType::str, "falling-threshold"},
    rising_threshold{YType::str, "rising-threshold"}
{
    yang_name = "pps"; yang_parent_name = "level";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast::Level::Pps::~Pps()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast::Level::Pps::has_data() const
{
    return falling_threshold.is_set
	|| rising_threshold.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast::Level::Pps::has_operation() const
{
    return is_set(operation)
	|| is_set(falling_threshold.operation)
	|| is_set(rising_threshold.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast::Level::Pps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pps";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast::Level::Pps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pps' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (falling_threshold.is_set || is_set(falling_threshold.operation)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());
    if (rising_threshold.is_set || is_set(rising_threshold.operation)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast::Level::Pps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast::Level::Pps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_StormControl::Unicast::Level::Pps::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Trust::CiscoIosXeInterfaces_Trust()
    :
    device{YType::enumeration, "device"}
{
    yang_name = "Cisco-IOS-XE-interfaces_trust"; yang_parent_name = "Vlan";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Trust::~CiscoIosXeInterfaces_Trust()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Trust::has_data() const
{
    return device.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Trust::has_operation() const
{
    return is_set(operation)
	|| is_set(device.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Trust::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-interfaces_trust";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Trust::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CiscoIosXeInterfaces_Trust' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device.is_set || is_set(device.operation)) leaf_name_data.push_back(device.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Trust::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Trust::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Trust::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "device")
    {
        device = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Utd::CiscoIosXeInterfaces_Utd()
    :
    enable{YType::empty, "enable"}
{
    yang_name = "Cisco-IOS-XE-interfaces_utd"; yang_parent_name = "Vlan";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Utd::~CiscoIosXeInterfaces_Utd()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Utd::has_data() const
{
    return enable.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Utd::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Utd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-interfaces_utd";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Utd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CiscoIosXeInterfaces_Utd' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Utd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Utd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Utd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_PriorityQueue::CiscoIosXeInterfaces_PriorityQueue()
    :
    out{YType::empty, "out"}
    	,
    cos_map(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_PriorityQueue::CosMap>())
{
    cos_map->parent = this;

    yang_name = "Cisco-IOS-XE-interfaces_priority-queue"; yang_parent_name = "Vlan";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_PriorityQueue::~CiscoIosXeInterfaces_PriorityQueue()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_PriorityQueue::has_data() const
{
    return out.is_set
	|| (cos_map !=  nullptr && cos_map->has_data());
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_PriorityQueue::has_operation() const
{
    return is_set(operation)
	|| is_set(out.operation)
	|| (cos_map !=  nullptr && cos_map->has_operation());
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_PriorityQueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-interfaces_priority-queue";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_PriorityQueue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CiscoIosXeInterfaces_PriorityQueue' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (out.is_set || is_set(out.operation)) leaf_name_data.push_back(out.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_PriorityQueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cos-map")
    {
        if(cos_map == nullptr)
        {
            cos_map = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_PriorityQueue::CosMap>();
        }
        return cos_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_PriorityQueue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cos_map != nullptr)
    {
        children["cos-map"] = cos_map;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_PriorityQueue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "out")
    {
        out = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_PriorityQueue::CosMap::CosMap()
    :
    cos_values{YType::uint8, "cos-values"},
    id{YType::uint8, "id"}
{
    yang_name = "cos-map"; yang_parent_name = "Cisco-IOS-XE-interfaces_priority-queue";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_PriorityQueue::CosMap::~CosMap()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_PriorityQueue::CosMap::has_data() const
{
    for (auto const & leaf : cos_values.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return id.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_PriorityQueue::CosMap::has_operation() const
{
    for (auto const & leaf : cos_values.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(cos_values.operation)
	|| is_set(id.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_PriorityQueue::CosMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cos-map";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_PriorityQueue::CosMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CosMap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());

    auto cos_values_name_datas = cos_values.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cos_values_name_datas.begin(), cos_values_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_PriorityQueue::CosMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_PriorityQueue::CosMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_PriorityQueue::CosMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cos-values")
    {
        cos_values.append(value);
    }
    if(value_path == "id")
    {
        id = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_RcvQueue::CiscoIosXeInterfaces_RcvQueue()
{
    yang_name = "Cisco-IOS-XE-interfaces_rcv-queue"; yang_parent_name = "Vlan";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_RcvQueue::~CiscoIosXeInterfaces_RcvQueue()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_RcvQueue::has_data() const
{
    for (std::size_t index=0; index<cos_map.size(); index++)
    {
        if(cos_map[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_RcvQueue::has_operation() const
{
    for (std::size_t index=0; index<cos_map.size(); index++)
    {
        if(cos_map[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_RcvQueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-interfaces_rcv-queue";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_RcvQueue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CiscoIosXeInterfaces_RcvQueue' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_RcvQueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cos-map")
    {
        for(auto const & c : cos_map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_RcvQueue::CosMap>();
        c->parent = this;
        cos_map.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_RcvQueue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cos_map)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_RcvQueue::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Vlan::CiscoIosXeInterfaces_RcvQueue::CosMap::CosMap()
    :
    queue_id{YType::uint8, "queue-id"},
    threshold_id{YType::uint8, "threshold-id"},
    cos_values{YType::uint8, "cos-values"}
{
    yang_name = "cos-map"; yang_parent_name = "Cisco-IOS-XE-interfaces_rcv-queue";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_RcvQueue::CosMap::~CosMap()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_RcvQueue::CosMap::has_data() const
{
    for (auto const & leaf : cos_values.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return queue_id.is_set
	|| threshold_id.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_RcvQueue::CosMap::has_operation() const
{
    for (auto const & leaf : cos_values.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(queue_id.operation)
	|| is_set(threshold_id.operation)
	|| is_set(cos_values.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_RcvQueue::CosMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cos-map" <<"[queue-id='" <<queue_id <<"']" <<"[threshold-id='" <<threshold_id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_RcvQueue::CosMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CosMap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (queue_id.is_set || is_set(queue_id.operation)) leaf_name_data.push_back(queue_id.get_name_leafdata());
    if (threshold_id.is_set || is_set(threshold_id.operation)) leaf_name_data.push_back(threshold_id.get_name_leafdata());

    auto cos_values_name_datas = cos_values.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cos_values_name_datas.begin(), cos_values_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_RcvQueue::CosMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_RcvQueue::CosMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_RcvQueue::CosMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "queue-id")
    {
        queue_id = value;
    }
    if(value_path == "threshold-id")
    {
        threshold_id = value;
    }
    if(value_path == "cos-values")
    {
        cos_values.append(value);
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::CiscoIosXeInterfaces_Peer()
    :
    default_(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_>())
{
    default_->parent = this;

    yang_name = "Cisco-IOS-XE-interfaces_peer"; yang_parent_name = "Vlan";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::~CiscoIosXeInterfaces_Peer()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::has_data() const
{
    return (default_ !=  nullptr && default_->has_data());
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::has_operation() const
{
    return is_set(operation)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-interfaces_peer";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CiscoIosXeInterfaces_Peer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_::Default_()
    :
    ip(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_::Ip>())
{
    ip->parent = this;

    yang_name = "default"; yang_parent_name = "Cisco-IOS-XE-interfaces_peer";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_::~Default_()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_::has_data() const
{
    return (ip !=  nullptr && ip->has_data());
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_::has_operation() const
{
    return is_set(operation)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Default_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_::Ip::Ip()
    :
    address(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_::Ip::Address>())
{
    address->parent = this;

    yang_name = "ip"; yang_parent_name = "default";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_::Ip::~Ip()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_::Ip::has_data() const
{
    return (address !=  nullptr && address->has_data());
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_::Ip::has_operation() const
{
    return is_set(operation)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_::Ip::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_::Ip::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_::Ip::Address::Address()
    :
    dhcp{YType::empty, "dhcp"}
    	,
    dhcp_pool(nullptr) // presence node
	,pool(nullptr) // presence node
{
    yang_name = "address"; yang_parent_name = "ip";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_::Ip::Address::~Address()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_::Ip::Address::has_data() const
{
    return dhcp.is_set
	|| (dhcp_pool !=  nullptr && dhcp_pool->has_data())
	|| (pool !=  nullptr && pool->has_data());
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_::Ip::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(dhcp.operation)
	|| (dhcp_pool !=  nullptr && dhcp_pool->has_operation())
	|| (pool !=  nullptr && pool->has_operation());
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_::Ip::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_::Ip::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dhcp.is_set || is_set(dhcp.operation)) leaf_name_data.push_back(dhcp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_::Ip::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcp-pool")
    {
        if(dhcp_pool == nullptr)
        {
            dhcp_pool = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_::Ip::Address::DhcpPool>();
        }
        return dhcp_pool;
    }

    if(child_yang_name == "pool")
    {
        if(pool == nullptr)
        {
            pool = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_::Ip::Address::Pool>();
        }
        return pool;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_::Ip::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dhcp_pool != nullptr)
    {
        children["dhcp-pool"] = dhcp_pool;
    }

    if(pool != nullptr)
    {
        children["pool"] = pool;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_::Ip::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dhcp")
    {
        dhcp = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_::Ip::Address::DhcpPool::DhcpPool()
    :
    pools{YType::str, "pools"}
{
    yang_name = "dhcp-pool"; yang_parent_name = "address";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_::Ip::Address::DhcpPool::~DhcpPool()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_::Ip::Address::DhcpPool::has_data() const
{
    return pools.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_::Ip::Address::DhcpPool::has_operation() const
{
    return is_set(operation)
	|| is_set(pools.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_::Ip::Address::DhcpPool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp-pool";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_::Ip::Address::DhcpPool::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DhcpPool' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pools.is_set || is_set(pools.operation)) leaf_name_data.push_back(pools.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_::Ip::Address::DhcpPool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_::Ip::Address::DhcpPool::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_::Ip::Address::DhcpPool::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pools")
    {
        pools = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_::Ip::Address::Pool::Pool()
    :
    pools{YType::str, "pools"}
{
    yang_name = "pool"; yang_parent_name = "address";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_::Ip::Address::Pool::~Pool()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_::Ip::Address::Pool::has_data() const
{
    return pools.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_::Ip::Address::Pool::has_operation() const
{
    return is_set(operation)
	|| is_set(pools.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_::Ip::Address::Pool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pool";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_::Ip::Address::Pool::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pool' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pools.is_set || is_set(pools.operation)) leaf_name_data.push_back(pools.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_::Ip::Address::Pool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_::Ip::Address::Pool::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Peer::Default_::Ip::Address::Pool::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pools")
    {
        pools = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_PmPath::CiscoIosXeInterfaces_PmPath()
    :
    interface_id{YType::uint8, "interface-id"},
    name{YType::str, "name"}
{
    yang_name = "Cisco-IOS-XE-interfaces_pm-path"; yang_parent_name = "Vlan";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_PmPath::~CiscoIosXeInterfaces_PmPath()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_PmPath::has_data() const
{
    return interface_id.is_set
	|| name.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_PmPath::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_id.operation)
	|| is_set(name.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_PmPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-interfaces_pm-path";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_PmPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CiscoIosXeInterfaces_PmPath' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_id.is_set || is_set(interface_id.operation)) leaf_name_data.push_back(interface_id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_PmPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_PmPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_PmPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-id")
    {
        interface_id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Interface::Vlan::Crypto::Crypto()
    :
    ipsec(std::make_shared<Native::Interface::Vlan::Crypto::Ipsec>())
	,map(std::make_shared<Native::Interface::Vlan::Crypto::Map>())
{
    ipsec->parent = this;

    map->parent = this;

    yang_name = "crypto"; yang_parent_name = "Vlan";
}

Native::Interface::Vlan::Crypto::~Crypto()
{
}

bool Native::Interface::Vlan::Crypto::has_data() const
{
    return (ipsec !=  nullptr && ipsec->has_data())
	|| (map !=  nullptr && map->has_data());
}

bool Native::Interface::Vlan::Crypto::has_operation() const
{
    return is_set(operation)
	|| (ipsec !=  nullptr && ipsec->has_operation())
	|| (map !=  nullptr && map->has_operation());
}

std::string Native::Interface::Vlan::Crypto::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-crypto:crypto";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::Crypto::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Crypto' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::Crypto::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipsec")
    {
        if(ipsec == nullptr)
        {
            ipsec = std::make_shared<Native::Interface::Vlan::Crypto::Ipsec>();
        }
        return ipsec;
    }

    if(child_yang_name == "map")
    {
        if(map == nullptr)
        {
            map = std::make_shared<Native::Interface::Vlan::Crypto::Map>();
        }
        return map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::Crypto::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipsec != nullptr)
    {
        children["ipsec"] = ipsec;
    }

    if(map != nullptr)
    {
        children["map"] = map;
    }

    return children;
}

void Native::Interface::Vlan::Crypto::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Vlan::Crypto::Map::Map()
    :
    redundancy{YType::str, "redundancy"},
    stateful{YType::empty, "stateful"},
    tag{YType::str, "tag"}
{
    yang_name = "map"; yang_parent_name = "crypto";
}

Native::Interface::Vlan::Crypto::Map::~Map()
{
}

bool Native::Interface::Vlan::Crypto::Map::has_data() const
{
    return redundancy.is_set
	|| stateful.is_set
	|| tag.is_set;
}

bool Native::Interface::Vlan::Crypto::Map::has_operation() const
{
    return is_set(operation)
	|| is_set(redundancy.operation)
	|| is_set(stateful.operation)
	|| is_set(tag.operation);
}

std::string Native::Interface::Vlan::Crypto::Map::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::Crypto::Map::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Map' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (redundancy.is_set || is_set(redundancy.operation)) leaf_name_data.push_back(redundancy.get_name_leafdata());
    if (stateful.is_set || is_set(stateful.operation)) leaf_name_data.push_back(stateful.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::Crypto::Map::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::Crypto::Map::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::Crypto::Map::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "redundancy")
    {
        redundancy = value;
    }
    if(value_path == "stateful")
    {
        stateful = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
}

Native::Interface::Vlan::Crypto::Ipsec::Ipsec()
    :
    df_bit{YType::enumeration, "df-bit"},
    fragmentation{YType::enumeration, "fragmentation"}
{
    yang_name = "ipsec"; yang_parent_name = "crypto";
}

Native::Interface::Vlan::Crypto::Ipsec::~Ipsec()
{
}

bool Native::Interface::Vlan::Crypto::Ipsec::has_data() const
{
    return df_bit.is_set
	|| fragmentation.is_set;
}

bool Native::Interface::Vlan::Crypto::Ipsec::has_operation() const
{
    return is_set(operation)
	|| is_set(df_bit.operation)
	|| is_set(fragmentation.operation);
}

std::string Native::Interface::Vlan::Crypto::Ipsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsec";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::Crypto::Ipsec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipsec' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (df_bit.is_set || is_set(df_bit.operation)) leaf_name_data.push_back(df_bit.get_name_leafdata());
    if (fragmentation.is_set || is_set(fragmentation.operation)) leaf_name_data.push_back(fragmentation.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::Crypto::Ipsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::Crypto::Ipsec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::Crypto::Ipsec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "df-bit")
    {
        df_bit = value;
    }
    if(value_path == "fragmentation")
    {
        fragmentation = value;
    }
}

Native::Interface::Vlan::Cts::Cts()
    :
    manual(nullptr) // presence node
{
    yang_name = "cts"; yang_parent_name = "Vlan";
}

Native::Interface::Vlan::Cts::~Cts()
{
}

bool Native::Interface::Vlan::Cts::has_data() const
{
    return (manual !=  nullptr && manual->has_data());
}

bool Native::Interface::Vlan::Cts::has_operation() const
{
    return is_set(operation)
	|| (manual !=  nullptr && manual->has_operation());
}

std::string Native::Interface::Vlan::Cts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-cts:cts";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::Cts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cts' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::Cts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "manual")
    {
        if(manual == nullptr)
        {
            manual = std::make_shared<Native::Interface::Vlan::Cts::Manual>();
        }
        return manual;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::Cts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(manual != nullptr)
    {
        children["manual"] = manual;
    }

    return children;
}

void Native::Interface::Vlan::Cts::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Vlan::Cts::Manual::Manual()
    :
    policy(std::make_shared<Native::Interface::Vlan::Cts::Manual::Policy>())
	,propagate(std::make_shared<Native::Interface::Vlan::Cts::Manual::Propagate>())
	,sap(std::make_shared<Native::Interface::Vlan::Cts::Manual::Sap>())
{
    policy->parent = this;

    propagate->parent = this;

    sap->parent = this;

    yang_name = "manual"; yang_parent_name = "cts";
}

Native::Interface::Vlan::Cts::Manual::~Manual()
{
}

bool Native::Interface::Vlan::Cts::Manual::has_data() const
{
    return (policy !=  nullptr && policy->has_data())
	|| (propagate !=  nullptr && propagate->has_data())
	|| (sap !=  nullptr && sap->has_data());
}

bool Native::Interface::Vlan::Cts::Manual::has_operation() const
{
    return is_set(operation)
	|| (policy !=  nullptr && policy->has_operation())
	|| (propagate !=  nullptr && propagate->has_operation())
	|| (sap !=  nullptr && sap->has_operation());
}

std::string Native::Interface::Vlan::Cts::Manual::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "manual";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::Cts::Manual::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Manual' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::Cts::Manual::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy")
    {
        if(policy == nullptr)
        {
            policy = std::make_shared<Native::Interface::Vlan::Cts::Manual::Policy>();
        }
        return policy;
    }

    if(child_yang_name == "propagate")
    {
        if(propagate == nullptr)
        {
            propagate = std::make_shared<Native::Interface::Vlan::Cts::Manual::Propagate>();
        }
        return propagate;
    }

    if(child_yang_name == "sap")
    {
        if(sap == nullptr)
        {
            sap = std::make_shared<Native::Interface::Vlan::Cts::Manual::Sap>();
        }
        return sap;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::Cts::Manual::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(policy != nullptr)
    {
        children["policy"] = policy;
    }

    if(propagate != nullptr)
    {
        children["propagate"] = propagate;
    }

    if(sap != nullptr)
    {
        children["sap"] = sap;
    }

    return children;
}

void Native::Interface::Vlan::Cts::Manual::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Vlan::Cts::Manual::Policy::Policy()
    :
    static_(std::make_shared<Native::Interface::Vlan::Cts::Manual::Policy::Static_>())
{
    static_->parent = this;

    yang_name = "policy"; yang_parent_name = "manual";
}

Native::Interface::Vlan::Cts::Manual::Policy::~Policy()
{
}

bool Native::Interface::Vlan::Cts::Manual::Policy::has_data() const
{
    return (static_ !=  nullptr && static_->has_data());
}

bool Native::Interface::Vlan::Cts::Manual::Policy::has_operation() const
{
    return is_set(operation)
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Interface::Vlan::Cts::Manual::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::Cts::Manual::Policy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Policy' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::Cts::Manual::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Interface::Vlan::Cts::Manual::Policy::Static_>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::Cts::Manual::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(static_ != nullptr)
    {
        children["static"] = static_;
    }

    return children;
}

void Native::Interface::Vlan::Cts::Manual::Policy::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Vlan::Cts::Manual::Policy::Static_::Static_()
    :
    sgt{YType::uint16, "sgt"},
    trusted{YType::empty, "trusted"}
{
    yang_name = "static"; yang_parent_name = "policy";
}

Native::Interface::Vlan::Cts::Manual::Policy::Static_::~Static_()
{
}

bool Native::Interface::Vlan::Cts::Manual::Policy::Static_::has_data() const
{
    return sgt.is_set
	|| trusted.is_set;
}

bool Native::Interface::Vlan::Cts::Manual::Policy::Static_::has_operation() const
{
    return is_set(operation)
	|| is_set(sgt.operation)
	|| is_set(trusted.operation);
}

std::string Native::Interface::Vlan::Cts::Manual::Policy::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::Cts::Manual::Policy::Static_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Static_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sgt.is_set || is_set(sgt.operation)) leaf_name_data.push_back(sgt.get_name_leafdata());
    if (trusted.is_set || is_set(trusted.operation)) leaf_name_data.push_back(trusted.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::Cts::Manual::Policy::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::Cts::Manual::Policy::Static_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::Cts::Manual::Policy::Static_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sgt")
    {
        sgt = value;
    }
    if(value_path == "trusted")
    {
        trusted = value;
    }
}

Native::Interface::Vlan::Cts::Manual::Sap::Sap()
{
    yang_name = "sap"; yang_parent_name = "manual";
}

Native::Interface::Vlan::Cts::Manual::Sap::~Sap()
{
}

bool Native::Interface::Vlan::Cts::Manual::Sap::has_data() const
{
    for (std::size_t index=0; index<pmk.size(); index++)
    {
        if(pmk[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::Vlan::Cts::Manual::Sap::has_operation() const
{
    for (std::size_t index=0; index<pmk.size(); index++)
    {
        if(pmk[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Interface::Vlan::Cts::Manual::Sap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sap";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::Cts::Manual::Sap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::Cts::Manual::Sap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pmk")
    {
        for(auto const & c : pmk)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Vlan::Cts::Manual::Sap::Pmk>();
        c->parent = this;
        pmk.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::Cts::Manual::Sap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : pmk)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Vlan::Cts::Manual::Sap::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Vlan::Cts::Manual::Sap::Pmk::Pmk()
    :
    word{YType::str, "word"}
    	,
    mode_list(std::make_shared<Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList>())
{
    mode_list->parent = this;

    yang_name = "pmk"; yang_parent_name = "sap";
}

Native::Interface::Vlan::Cts::Manual::Sap::Pmk::~Pmk()
{
}

bool Native::Interface::Vlan::Cts::Manual::Sap::Pmk::has_data() const
{
    return word.is_set
	|| (mode_list !=  nullptr && mode_list->has_data());
}

bool Native::Interface::Vlan::Cts::Manual::Sap::Pmk::has_operation() const
{
    return is_set(operation)
	|| is_set(word.operation)
	|| (mode_list !=  nullptr && mode_list->has_operation());
}

std::string Native::Interface::Vlan::Cts::Manual::Sap::Pmk::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmk" <<"[word='" <<word <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::Cts::Manual::Sap::Pmk::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pmk' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word.is_set || is_set(word.operation)) leaf_name_data.push_back(word.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::Cts::Manual::Sap::Pmk::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mode-list")
    {
        if(mode_list == nullptr)
        {
            mode_list = std::make_shared<Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList>();
        }
        return mode_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::Cts::Manual::Sap::Pmk::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mode_list != nullptr)
    {
        children["mode-list"] = mode_list;
    }

    return children;
}

void Native::Interface::Vlan::Cts::Manual::Sap::Pmk::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "word")
    {
        word = value;
    }
}

Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::ModeList()
    :
    gcm_encrypt(nullptr) // presence node
	,no_encap(nullptr) // presence node
{
    yang_name = "mode-list"; yang_parent_name = "pmk";
}

Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::~ModeList()
{
}

bool Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::has_data() const
{
    return (gcm_encrypt !=  nullptr && gcm_encrypt->has_data())
	|| (no_encap !=  nullptr && no_encap->has_data());
}

bool Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::has_operation() const
{
    return is_set(operation)
	|| (gcm_encrypt !=  nullptr && gcm_encrypt->has_operation())
	|| (no_encap !=  nullptr && no_encap->has_operation());
}

std::string Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode-list";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ModeList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gcm-encrypt")
    {
        if(gcm_encrypt == nullptr)
        {
            gcm_encrypt = std::make_shared<Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt>();
        }
        return gcm_encrypt;
    }

    if(child_yang_name == "no-encap")
    {
        if(no_encap == nullptr)
        {
            no_encap = std::make_shared<Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::NoEncap>();
        }
        return no_encap;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(gcm_encrypt != nullptr)
    {
        children["gcm-encrypt"] = gcm_encrypt;
    }

    if(no_encap != nullptr)
    {
        children["no-encap"] = no_encap;
    }

    return children;
}

void Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::GcmEncrypt()
    :
    gmac(nullptr) // presence node
{
    yang_name = "gcm-encrypt"; yang_parent_name = "mode-list";
}

Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::~GcmEncrypt()
{
}

bool Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::has_data() const
{
    return (gmac !=  nullptr && gmac->has_data());
}

bool Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::has_operation() const
{
    return is_set(operation)
	|| (gmac !=  nullptr && gmac->has_operation());
}

std::string Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gcm-encrypt";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GcmEncrypt' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gmac")
    {
        if(gmac == nullptr)
        {
            gmac = std::make_shared<Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac>();
        }
        return gmac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(gmac != nullptr)
    {
        children["gmac"] = gmac;
    }

    return children;
}

void Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::Gmac()
    :
    null{YType::empty, "null"}
{
    yang_name = "gmac"; yang_parent_name = "gcm-encrypt";
}

Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::~Gmac()
{
}

bool Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::has_data() const
{
    return null.is_set;
}

bool Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::has_operation() const
{
    return is_set(operation)
	|| is_set(null.operation);
}

std::string Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gmac";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Gmac' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (null.is_set || is_set(null.operation)) leaf_name_data.push_back(null.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "null")
    {
        null = value;
    }
}

Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::NoEncap::NoEncap()
    :
    gmac(nullptr) // presence node
{
    yang_name = "no-encap"; yang_parent_name = "mode-list";
}

Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::NoEncap::~NoEncap()
{
}

bool Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::NoEncap::has_data() const
{
    return (gmac !=  nullptr && gmac->has_data());
}

bool Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::NoEncap::has_operation() const
{
    return is_set(operation)
	|| (gmac !=  nullptr && gmac->has_operation());
}

std::string Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::NoEncap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "no-encap";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::NoEncap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NoEncap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::NoEncap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gmac")
    {
        if(gmac == nullptr)
        {
            gmac = std::make_shared<Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac>();
        }
        return gmac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::NoEncap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(gmac != nullptr)
    {
        children["gmac"] = gmac;
    }

    return children;
}

void Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::NoEncap::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::Gmac()
    :
    gcm_encrypt{YType::empty, "gcm-encrypt"}
{
    yang_name = "gmac"; yang_parent_name = "no-encap";
}

Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::~Gmac()
{
}

bool Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::has_data() const
{
    return gcm_encrypt.is_set;
}

bool Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::has_operation() const
{
    return is_set(operation)
	|| is_set(gcm_encrypt.operation);
}

std::string Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gmac";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Gmac' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gcm_encrypt.is_set || is_set(gcm_encrypt.operation)) leaf_name_data.push_back(gcm_encrypt.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "gcm-encrypt")
    {
        gcm_encrypt = value;
    }
}

Native::Interface::Vlan::Cts::Manual::Propagate::Propagate()
    :
    sgt{YType::boolean, "sgt"}
{
    yang_name = "propagate"; yang_parent_name = "manual";
}

Native::Interface::Vlan::Cts::Manual::Propagate::~Propagate()
{
}

bool Native::Interface::Vlan::Cts::Manual::Propagate::has_data() const
{
    return sgt.is_set;
}

bool Native::Interface::Vlan::Cts::Manual::Propagate::has_operation() const
{
    return is_set(operation)
	|| is_set(sgt.operation);
}

std::string Native::Interface::Vlan::Cts::Manual::Propagate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "propagate";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::Cts::Manual::Propagate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Propagate' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sgt.is_set || is_set(sgt.operation)) leaf_name_data.push_back(sgt.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::Cts::Manual::Propagate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::Cts::Manual::Propagate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::Cts::Manual::Propagate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sgt")
    {
        sgt = value;
    }
}

Native::Interface::Vlan::ServicePolicy::ServicePolicy()
    :
    history{YType::empty, "history"},
    input{YType::str, "input"},
    output{YType::str, "output"}
    	,
    type(std::make_shared<Native::Interface::Vlan::ServicePolicy::Type>())
{
    type->parent = this;

    yang_name = "service-policy"; yang_parent_name = "Vlan";
}

Native::Interface::Vlan::ServicePolicy::~ServicePolicy()
{
}

bool Native::Interface::Vlan::ServicePolicy::has_data() const
{
    return history.is_set
	|| input.is_set
	|| output.is_set
	|| (type !=  nullptr && type->has_data());
}

bool Native::Interface::Vlan::ServicePolicy::has_operation() const
{
    return is_set(operation)
	|| is_set(history.operation)
	|| is_set(input.operation)
	|| is_set(output.operation)
	|| (type !=  nullptr && type->has_operation());
}

std::string Native::Interface::Vlan::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:service-policy";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::ServicePolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServicePolicy' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history.is_set || is_set(history.operation)) leaf_name_data.push_back(history.get_name_leafdata());
    if (input.is_set || is_set(input.operation)) leaf_name_data.push_back(input.get_name_leafdata());
    if (output.is_set || is_set(output.operation)) leaf_name_data.push_back(output.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Native::Interface::Vlan::ServicePolicy::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(type != nullptr)
    {
        children["type"] = type;
    }

    return children;
}

void Native::Interface::Vlan::ServicePolicy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "history")
    {
        history = value;
    }
    if(value_path == "input")
    {
        input = value;
    }
    if(value_path == "output")
    {
        output = value;
    }
}

Native::Interface::Vlan::ServicePolicy::Type::Type()
    :
    control(std::make_shared<Native::Interface::Vlan::ServicePolicy::Type::Control>())
	,performance_monitor(std::make_shared<Native::Interface::Vlan::ServicePolicy::Type::PerformanceMonitor>())
	,service_chain(std::make_shared<Native::Interface::Vlan::ServicePolicy::Type::ServiceChain>())
{
    control->parent = this;

    performance_monitor->parent = this;

    service_chain->parent = this;

    yang_name = "type"; yang_parent_name = "service-policy";
}

Native::Interface::Vlan::ServicePolicy::Type::~Type()
{
}

bool Native::Interface::Vlan::ServicePolicy::Type::has_data() const
{
    return (control !=  nullptr && control->has_data())
	|| (performance_monitor !=  nullptr && performance_monitor->has_data())
	|| (service_chain !=  nullptr && service_chain->has_data());
}

bool Native::Interface::Vlan::ServicePolicy::Type::has_operation() const
{
    return is_set(operation)
	|| (control !=  nullptr && control->has_operation())
	|| (performance_monitor !=  nullptr && performance_monitor->has_operation())
	|| (service_chain !=  nullptr && service_chain->has_operation());
}

std::string Native::Interface::Vlan::ServicePolicy::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::ServicePolicy::Type::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Type' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::ServicePolicy::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "control")
    {
        if(control == nullptr)
        {
            control = std::make_shared<Native::Interface::Vlan::ServicePolicy::Type::Control>();
        }
        return control;
    }

    if(child_yang_name == "performance-monitor")
    {
        if(performance_monitor == nullptr)
        {
            performance_monitor = std::make_shared<Native::Interface::Vlan::ServicePolicy::Type::PerformanceMonitor>();
        }
        return performance_monitor;
    }

    if(child_yang_name == "service-chain")
    {
        if(service_chain == nullptr)
        {
            service_chain = std::make_shared<Native::Interface::Vlan::ServicePolicy::Type::ServiceChain>();
        }
        return service_chain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::ServicePolicy::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(control != nullptr)
    {
        children["control"] = control;
    }

    if(performance_monitor != nullptr)
    {
        children["performance-monitor"] = performance_monitor;
    }

    if(service_chain != nullptr)
    {
        children["service-chain"] = service_chain;
    }

    return children;
}

void Native::Interface::Vlan::ServicePolicy::Type::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Vlan::ServicePolicy::Type::Control::Control()
    :
    subscriber{YType::str, "subscriber"}
{
    yang_name = "control"; yang_parent_name = "type";
}

Native::Interface::Vlan::ServicePolicy::Type::Control::~Control()
{
}

bool Native::Interface::Vlan::ServicePolicy::Type::Control::has_data() const
{
    return subscriber.is_set;
}

bool Native::Interface::Vlan::ServicePolicy::Type::Control::has_operation() const
{
    return is_set(operation)
	|| is_set(subscriber.operation);
}

std::string Native::Interface::Vlan::ServicePolicy::Type::Control::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "control";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::ServicePolicy::Type::Control::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Control' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscriber.is_set || is_set(subscriber.operation)) leaf_name_data.push_back(subscriber.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::ServicePolicy::Type::Control::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::ServicePolicy::Type::Control::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::ServicePolicy::Type::Control::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "subscriber")
    {
        subscriber = value;
    }
}

Native::Interface::Vlan::ServicePolicy::Type::PerformanceMonitor::PerformanceMonitor()
    :
    direction{YType::enumeration, "direction"},
    name{YType::str, "name"}
{
    yang_name = "performance-monitor"; yang_parent_name = "type";
}

Native::Interface::Vlan::ServicePolicy::Type::PerformanceMonitor::~PerformanceMonitor()
{
}

bool Native::Interface::Vlan::ServicePolicy::Type::PerformanceMonitor::has_data() const
{
    return direction.is_set
	|| name.is_set;
}

bool Native::Interface::Vlan::ServicePolicy::Type::PerformanceMonitor::has_operation() const
{
    return is_set(operation)
	|| is_set(direction.operation)
	|| is_set(name.operation);
}

std::string Native::Interface::Vlan::ServicePolicy::Type::PerformanceMonitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "performance-monitor";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::ServicePolicy::Type::PerformanceMonitor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PerformanceMonitor' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.operation)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::ServicePolicy::Type::PerformanceMonitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::ServicePolicy::Type::PerformanceMonitor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::ServicePolicy::Type::PerformanceMonitor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "direction")
    {
        direction = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::ServiceChain()
    :
    input(std::make_shared<Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Input>())
	,output(std::make_shared<Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Output>())
{
    input->parent = this;

    output->parent = this;

    yang_name = "service-chain"; yang_parent_name = "type";
}

Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::~ServiceChain()
{
}

bool Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-chain";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServiceChain' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    if(output != nullptr)
    {
        children["output"] = output;
    }

    return children;
}

void Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Input::Input()
    :
    name{YType::str, "name"}
{
    yang_name = "input"; yang_parent_name = "service-chain";
}

Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Input::~Input()
{
}

bool Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Input::has_data() const
{
    return name.is_set;
}

bool Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation);
}

std::string Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Input' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Output::Output()
    :
    name{YType::str, "name"}
{
    yang_name = "output"; yang_parent_name = "service-chain";
}

Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Output::~Output()
{
}

bool Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Output::has_data() const
{
    return name.is_set;
}

bool Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Output::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation);
}

std::string Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Output::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Output' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Output::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Interface::Vlan::Lisp::Lisp()
    :
    extended_subnet_mode{YType::empty, "extended-subnet-mode"}
    	,
    mobility(std::make_shared<Native::Interface::Vlan::Lisp::Mobility>())
{
    mobility->parent = this;

    yang_name = "lisp"; yang_parent_name = "Vlan";
}

Native::Interface::Vlan::Lisp::~Lisp()
{
}

bool Native::Interface::Vlan::Lisp::has_data() const
{
    return extended_subnet_mode.is_set
	|| (mobility !=  nullptr && mobility->has_data());
}

bool Native::Interface::Vlan::Lisp::has_operation() const
{
    return is_set(operation)
	|| is_set(extended_subnet_mode.operation)
	|| (mobility !=  nullptr && mobility->has_operation());
}

std::string Native::Interface::Vlan::Lisp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-lisp:lisp";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::Lisp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lisp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extended_subnet_mode.is_set || is_set(extended_subnet_mode.operation)) leaf_name_data.push_back(extended_subnet_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::Lisp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mobility")
    {
        if(mobility == nullptr)
        {
            mobility = std::make_shared<Native::Interface::Vlan::Lisp::Mobility>();
        }
        return mobility;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::Lisp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mobility != nullptr)
    {
        children["mobility"] = mobility;
    }

    return children;
}

void Native::Interface::Vlan::Lisp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "extended-subnet-mode")
    {
        extended_subnet_mode = value;
    }
}

Native::Interface::Vlan::Lisp::Mobility::Mobility()
    :
    discover(std::make_shared<Native::Interface::Vlan::Lisp::Mobility::Discover>())
	,dynamic_eid(std::make_shared<Native::Interface::Vlan::Lisp::Mobility::DynamicEid>())
	,liveness(std::make_shared<Native::Interface::Vlan::Lisp::Mobility::Liveness>())
{
    discover->parent = this;

    dynamic_eid->parent = this;

    liveness->parent = this;

    yang_name = "mobility"; yang_parent_name = "lisp";
}

Native::Interface::Vlan::Lisp::Mobility::~Mobility()
{
}

bool Native::Interface::Vlan::Lisp::Mobility::has_data() const
{
    return (discover !=  nullptr && discover->has_data())
	|| (dynamic_eid !=  nullptr && dynamic_eid->has_data())
	|| (liveness !=  nullptr && liveness->has_data());
}

bool Native::Interface::Vlan::Lisp::Mobility::has_operation() const
{
    return is_set(operation)
	|| (discover !=  nullptr && discover->has_operation())
	|| (dynamic_eid !=  nullptr && dynamic_eid->has_operation())
	|| (liveness !=  nullptr && liveness->has_operation());
}

std::string Native::Interface::Vlan::Lisp::Mobility::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobility";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::Lisp::Mobility::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mobility' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::Lisp::Mobility::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "discover")
    {
        if(discover == nullptr)
        {
            discover = std::make_shared<Native::Interface::Vlan::Lisp::Mobility::Discover>();
        }
        return discover;
    }

    if(child_yang_name == "dynamic-eid")
    {
        if(dynamic_eid == nullptr)
        {
            dynamic_eid = std::make_shared<Native::Interface::Vlan::Lisp::Mobility::DynamicEid>();
        }
        return dynamic_eid;
    }

    if(child_yang_name == "liveness")
    {
        if(liveness == nullptr)
        {
            liveness = std::make_shared<Native::Interface::Vlan::Lisp::Mobility::Liveness>();
        }
        return liveness;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::Lisp::Mobility::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(discover != nullptr)
    {
        children["discover"] = discover;
    }

    if(dynamic_eid != nullptr)
    {
        children["dynamic-eid"] = dynamic_eid;
    }

    if(liveness != nullptr)
    {
        children["liveness"] = liveness;
    }

    return children;
}

void Native::Interface::Vlan::Lisp::Mobility::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Vlan::Lisp::Mobility::DynamicEid::DynamicEid()
    :
    dynamic_eid_name{YType::str, "dynamic-eid-name"},
    nbr_proxy_reply{YType::empty, "nbr-proxy-reply"},
    requests{YType::uint8, "requests"}
{
    yang_name = "dynamic-eid"; yang_parent_name = "mobility";
}

Native::Interface::Vlan::Lisp::Mobility::DynamicEid::~DynamicEid()
{
}

bool Native::Interface::Vlan::Lisp::Mobility::DynamicEid::has_data() const
{
    return dynamic_eid_name.is_set
	|| nbr_proxy_reply.is_set
	|| requests.is_set;
}

bool Native::Interface::Vlan::Lisp::Mobility::DynamicEid::has_operation() const
{
    return is_set(operation)
	|| is_set(dynamic_eid_name.operation)
	|| is_set(nbr_proxy_reply.operation)
	|| is_set(requests.operation);
}

std::string Native::Interface::Vlan::Lisp::Mobility::DynamicEid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic-eid";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::Lisp::Mobility::DynamicEid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DynamicEid' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dynamic_eid_name.is_set || is_set(dynamic_eid_name.operation)) leaf_name_data.push_back(dynamic_eid_name.get_name_leafdata());
    if (nbr_proxy_reply.is_set || is_set(nbr_proxy_reply.operation)) leaf_name_data.push_back(nbr_proxy_reply.get_name_leafdata());
    if (requests.is_set || is_set(requests.operation)) leaf_name_data.push_back(requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::Lisp::Mobility::DynamicEid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::Lisp::Mobility::DynamicEid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::Lisp::Mobility::DynamicEid::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dynamic-eid-name")
    {
        dynamic_eid_name = value;
    }
    if(value_path == "nbr-proxy-reply")
    {
        nbr_proxy_reply = value;
    }
    if(value_path == "requests")
    {
        requests = value;
    }
}

Native::Interface::Vlan::Lisp::Mobility::Discover::Discover()
    :
    arp{YType::boolean, "arp"}
{
    yang_name = "discover"; yang_parent_name = "mobility";
}

Native::Interface::Vlan::Lisp::Mobility::Discover::~Discover()
{
}

bool Native::Interface::Vlan::Lisp::Mobility::Discover::has_data() const
{
    return arp.is_set;
}

bool Native::Interface::Vlan::Lisp::Mobility::Discover::has_operation() const
{
    return is_set(operation)
	|| is_set(arp.operation);
}

std::string Native::Interface::Vlan::Lisp::Mobility::Discover::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discover";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::Lisp::Mobility::Discover::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Discover' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (arp.is_set || is_set(arp.operation)) leaf_name_data.push_back(arp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::Lisp::Mobility::Discover::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::Lisp::Mobility::Discover::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::Lisp::Mobility::Discover::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "arp")
    {
        arp = value;
    }
}

Native::Interface::Vlan::Lisp::Mobility::Liveness::Liveness()
    :
    test{YType::boolean, "test"},
    ttl{YType::uint8, "ttl"}
{
    yang_name = "liveness"; yang_parent_name = "mobility";
}

Native::Interface::Vlan::Lisp::Mobility::Liveness::~Liveness()
{
}

bool Native::Interface::Vlan::Lisp::Mobility::Liveness::has_data() const
{
    return test.is_set
	|| ttl.is_set;
}

bool Native::Interface::Vlan::Lisp::Mobility::Liveness::has_operation() const
{
    return is_set(operation)
	|| is_set(test.operation)
	|| is_set(ttl.operation);
}

std::string Native::Interface::Vlan::Lisp::Mobility::Liveness::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "liveness";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::Lisp::Mobility::Liveness::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Liveness' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (test.is_set || is_set(test.operation)) leaf_name_data.push_back(test.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.operation)) leaf_name_data.push_back(ttl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::Lisp::Mobility::Liveness::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::Lisp::Mobility::Liveness::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::Lisp::Mobility::Liveness::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "test")
    {
        test = value;
    }
    if(value_path == "ttl")
    {
        ttl = value;
    }
}

Native::Interface::Vlan::PrivateVlan::PrivateVlan()
    :
    mapping{YType::str, "mapping"}
{
    yang_name = "private-vlan"; yang_parent_name = "Vlan";
}

Native::Interface::Vlan::PrivateVlan::~PrivateVlan()
{
}

bool Native::Interface::Vlan::PrivateVlan::has_data() const
{
    return mapping.is_set;
}

bool Native::Interface::Vlan::PrivateVlan::has_operation() const
{
    return is_set(operation)
	|| is_set(mapping.operation);
}

std::string Native::Interface::Vlan::PrivateVlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vlan:private-vlan";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::PrivateVlan::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrivateVlan' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mapping.is_set || is_set(mapping.operation)) leaf_name_data.push_back(mapping.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::PrivateVlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::PrivateVlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::PrivateVlan::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mapping")
    {
        mapping = value;
    }
}

Native::Interface::Vlan::Vrrp::Vrrp()
    :
    number{YType::uint8, "number"}
{
    yang_name = "vrrp"; yang_parent_name = "Vlan";
}

Native::Interface::Vlan::Vrrp::~Vrrp()
{
}

bool Native::Interface::Vlan::Vrrp::has_data() const
{
    for (std::size_t index=0; index<ip.size(); index++)
    {
        if(ip[index]->has_data())
            return true;
    }
    return number.is_set;
}

bool Native::Interface::Vlan::Vrrp::has_operation() const
{
    for (std::size_t index=0; index<ip.size(); index++)
    {
        if(ip[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(number.operation);
}

std::string Native::Interface::Vlan::Vrrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vlan:vrrp" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::Vrrp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrrp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::Vrrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        for(auto const & c : ip)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Vlan::Vrrp::Ip>();
        c->parent = this;
        ip.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::Vrrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ip)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Vlan::Vrrp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
}

Native::Interface::Vlan::Vrrp::Ip::Ip()
    :
    ipv4{YType::str, "ipv4"},
    secondary{YType::empty, "secondary"}
{
    yang_name = "ip"; yang_parent_name = "vrrp";
}

Native::Interface::Vlan::Vrrp::Ip::~Ip()
{
}

bool Native::Interface::Vlan::Vrrp::Ip::has_data() const
{
    return ipv4.is_set
	|| secondary.is_set;
}

bool Native::Interface::Vlan::Vrrp::Ip::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4.operation)
	|| is_set(secondary.operation);
}

std::string Native::Interface::Vlan::Vrrp::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip" <<"[ipv4='" <<ipv4 <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::Vrrp::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (secondary.is_set || is_set(secondary.operation)) leaf_name_data.push_back(secondary.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::Vrrp::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::Vrrp::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::Vrrp::Ip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "secondary")
    {
        secondary = value;
    }
}

Native::Interface::Vlan::Glbp::Glbp()
{
    yang_name = "glbp"; yang_parent_name = "Vlan";
}

Native::Interface::Vlan::Glbp::~Glbp()
{
}

bool Native::Interface::Vlan::Glbp::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::Vlan::Glbp::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Interface::Vlan::Glbp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vlan:glbp";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::Glbp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Glbp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::Glbp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        for(auto const & c : range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Vlan::Glbp::Range>();
        c->parent = this;
        range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::Glbp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Vlan::Glbp::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Vlan::Glbp::Range::Range()
    :
    range{YType::uint16, "range"},
    name{YType::str, "name"},
    priority{YType::uint8, "priority"}
    	,
    forwarder(std::make_shared<Native::Interface::Vlan::Glbp::Range::Forwarder>())
	,ip(nullptr) // presence node
	,preempt(nullptr) // presence node
	,timers(std::make_shared<Native::Interface::Vlan::Glbp::Range::Timers>())
	,weighting(std::make_shared<Native::Interface::Vlan::Glbp::Range::Weighting>())
{
    forwarder->parent = this;

    timers->parent = this;

    weighting->parent = this;

    yang_name = "range"; yang_parent_name = "glbp";
}

Native::Interface::Vlan::Glbp::Range::~Range()
{
}

bool Native::Interface::Vlan::Glbp::Range::has_data() const
{
    return range.is_set
	|| name.is_set
	|| priority.is_set
	|| (forwarder !=  nullptr && forwarder->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (preempt !=  nullptr && preempt->has_data())
	|| (timers !=  nullptr && timers->has_data())
	|| (weighting !=  nullptr && weighting->has_data());
}

bool Native::Interface::Vlan::Glbp::Range::has_operation() const
{
    return is_set(operation)
	|| is_set(range.operation)
	|| is_set(name.operation)
	|| is_set(priority.operation)
	|| (forwarder !=  nullptr && forwarder->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (preempt !=  nullptr && preempt->has_operation())
	|| (timers !=  nullptr && timers->has_operation())
	|| (weighting !=  nullptr && weighting->has_operation());
}

std::string Native::Interface::Vlan::Glbp::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range" <<"[range='" <<range <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::Glbp::Range::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Range' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.operation)) leaf_name_data.push_back(range.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::Glbp::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forwarder")
    {
        if(forwarder == nullptr)
        {
            forwarder = std::make_shared<Native::Interface::Vlan::Glbp::Range::Forwarder>();
        }
        return forwarder;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Interface::Vlan::Glbp::Range::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "preempt")
    {
        if(preempt == nullptr)
        {
            preempt = std::make_shared<Native::Interface::Vlan::Glbp::Range::Preempt>();
        }
        return preempt;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Interface::Vlan::Glbp::Range::Timers>();
        }
        return timers;
    }

    if(child_yang_name == "weighting")
    {
        if(weighting == nullptr)
        {
            weighting = std::make_shared<Native::Interface::Vlan::Glbp::Range::Weighting>();
        }
        return weighting;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::Glbp::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(forwarder != nullptr)
    {
        children["forwarder"] = forwarder;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(preempt != nullptr)
    {
        children["preempt"] = preempt;
    }

    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    if(weighting != nullptr)
    {
        children["weighting"] = weighting;
    }

    return children;
}

void Native::Interface::Vlan::Glbp::Range::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "range")
    {
        range = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
}

Native::Interface::Vlan::Glbp::Range::Forwarder::Forwarder()
    :
    preempt(nullptr) // presence node
{
    yang_name = "forwarder"; yang_parent_name = "range";
}

Native::Interface::Vlan::Glbp::Range::Forwarder::~Forwarder()
{
}

bool Native::Interface::Vlan::Glbp::Range::Forwarder::has_data() const
{
    return (preempt !=  nullptr && preempt->has_data());
}

bool Native::Interface::Vlan::Glbp::Range::Forwarder::has_operation() const
{
    return is_set(operation)
	|| (preempt !=  nullptr && preempt->has_operation());
}

std::string Native::Interface::Vlan::Glbp::Range::Forwarder::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarder";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::Glbp::Range::Forwarder::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Forwarder' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::Glbp::Range::Forwarder::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "preempt")
    {
        if(preempt == nullptr)
        {
            preempt = std::make_shared<Native::Interface::Vlan::Glbp::Range::Forwarder::Preempt>();
        }
        return preempt;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::Glbp::Range::Forwarder::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(preempt != nullptr)
    {
        children["preempt"] = preempt;
    }

    return children;
}

void Native::Interface::Vlan::Glbp::Range::Forwarder::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Vlan::Glbp::Range::Forwarder::Preempt::Preempt()
    :
    delay(std::make_shared<Native::Interface::Vlan::Glbp::Range::Forwarder::Preempt::Delay>())
{
    delay->parent = this;

    yang_name = "preempt"; yang_parent_name = "forwarder";
}

Native::Interface::Vlan::Glbp::Range::Forwarder::Preempt::~Preempt()
{
}

bool Native::Interface::Vlan::Glbp::Range::Forwarder::Preempt::has_data() const
{
    return (delay !=  nullptr && delay->has_data());
}

bool Native::Interface::Vlan::Glbp::Range::Forwarder::Preempt::has_operation() const
{
    return is_set(operation)
	|| (delay !=  nullptr && delay->has_operation());
}

std::string Native::Interface::Vlan::Glbp::Range::Forwarder::Preempt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preempt";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::Glbp::Range::Forwarder::Preempt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Preempt' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::Glbp::Range::Forwarder::Preempt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::Vlan::Glbp::Range::Forwarder::Preempt::Delay>();
        }
        return delay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::Glbp::Range::Forwarder::Preempt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    return children;
}

void Native::Interface::Vlan::Glbp::Range::Forwarder::Preempt::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Vlan::Glbp::Range::Forwarder::Preempt::Delay::Delay()
    :
    minimum{YType::uint16, "minimum"}
{
    yang_name = "delay"; yang_parent_name = "preempt";
}

Native::Interface::Vlan::Glbp::Range::Forwarder::Preempt::Delay::~Delay()
{
}

bool Native::Interface::Vlan::Glbp::Range::Forwarder::Preempt::Delay::has_data() const
{
    return minimum.is_set;
}

bool Native::Interface::Vlan::Glbp::Range::Forwarder::Preempt::Delay::has_operation() const
{
    return is_set(operation)
	|| is_set(minimum.operation);
}

std::string Native::Interface::Vlan::Glbp::Range::Forwarder::Preempt::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::Glbp::Range::Forwarder::Preempt::Delay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Delay' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::Glbp::Range::Forwarder::Preempt::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::Glbp::Range::Forwarder::Preempt::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::Glbp::Range::Forwarder::Preempt::Delay::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "minimum")
    {
        minimum = value;
    }
}

Native::Interface::Vlan::Glbp::Range::Ip::Ip()
{
    yang_name = "ip"; yang_parent_name = "range";
}

Native::Interface::Vlan::Glbp::Range::Ip::~Ip()
{
}

bool Native::Interface::Vlan::Glbp::Range::Ip::has_data() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::Vlan::Glbp::Range::Ip::has_operation() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Interface::Vlan::Glbp::Range::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::Glbp::Range::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::Glbp::Range::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        for(auto const & c : ipv4)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Vlan::Glbp::Range::Ip::Ipv4>();
        c->parent = this;
        ipv4.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::Glbp::Range::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Vlan::Glbp::Range::Ip::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Vlan::Glbp::Range::Ip::Ipv4::Ipv4()
    :
    ipv4{YType::str, "ipv4"}
{
    yang_name = "ipv4"; yang_parent_name = "ip";
}

Native::Interface::Vlan::Glbp::Range::Ip::Ipv4::~Ipv4()
{
}

bool Native::Interface::Vlan::Glbp::Range::Ip::Ipv4::has_data() const
{
    return ipv4.is_set;
}

bool Native::Interface::Vlan::Glbp::Range::Ip::Ipv4::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4.operation);
}

std::string Native::Interface::Vlan::Glbp::Range::Ip::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4" <<"[ipv4='" <<ipv4 <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::Glbp::Range::Ip::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::Glbp::Range::Ip::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::Glbp::Range::Ip::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::Glbp::Range::Ip::Ipv4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
}

Native::Interface::Vlan::Glbp::Range::Preempt::Preempt()
    :
    delay(std::make_shared<Native::Interface::Vlan::Glbp::Range::Preempt::Delay>())
{
    delay->parent = this;

    yang_name = "preempt"; yang_parent_name = "range";
}

Native::Interface::Vlan::Glbp::Range::Preempt::~Preempt()
{
}

bool Native::Interface::Vlan::Glbp::Range::Preempt::has_data() const
{
    return (delay !=  nullptr && delay->has_data());
}

bool Native::Interface::Vlan::Glbp::Range::Preempt::has_operation() const
{
    return is_set(operation)
	|| (delay !=  nullptr && delay->has_operation());
}

std::string Native::Interface::Vlan::Glbp::Range::Preempt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preempt";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::Glbp::Range::Preempt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Preempt' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::Glbp::Range::Preempt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::Vlan::Glbp::Range::Preempt::Delay>();
        }
        return delay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::Glbp::Range::Preempt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    return children;
}

void Native::Interface::Vlan::Glbp::Range::Preempt::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Vlan::Glbp::Range::Preempt::Delay::Delay()
    :
    minimum{YType::uint16, "minimum"}
{
    yang_name = "delay"; yang_parent_name = "preempt";
}

Native::Interface::Vlan::Glbp::Range::Preempt::Delay::~Delay()
{
}

bool Native::Interface::Vlan::Glbp::Range::Preempt::Delay::has_data() const
{
    return minimum.is_set;
}

bool Native::Interface::Vlan::Glbp::Range::Preempt::Delay::has_operation() const
{
    return is_set(operation)
	|| is_set(minimum.operation);
}

std::string Native::Interface::Vlan::Glbp::Range::Preempt::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::Glbp::Range::Preempt::Delay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Delay' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum.is_set || is_set(minimum.operation)) leaf_name_data.push_back(minimum.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::Glbp::Range::Preempt::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::Glbp::Range::Preempt::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::Glbp::Range::Preempt::Delay::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "minimum")
    {
        minimum = value;
    }
}

Native::Interface::Vlan::Glbp::Range::Weighting::Weighting()
    :
    track(std::make_shared<Native::Interface::Vlan::Glbp::Range::Weighting::Track>())
{
    track->parent = this;

    yang_name = "weighting"; yang_parent_name = "range";
}

Native::Interface::Vlan::Glbp::Range::Weighting::~Weighting()
{
}

bool Native::Interface::Vlan::Glbp::Range::Weighting::has_data() const
{
    for (std::size_t index=0; index<value_.size(); index++)
    {
        if(value_[index]->has_data())
            return true;
    }
    return (track !=  nullptr && track->has_data());
}

bool Native::Interface::Vlan::Glbp::Range::Weighting::has_operation() const
{
    for (std::size_t index=0; index<value_.size(); index++)
    {
        if(value_[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (track !=  nullptr && track->has_operation());
}

std::string Native::Interface::Vlan::Glbp::Range::Weighting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weighting";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::Glbp::Range::Weighting::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Weighting' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::Glbp::Range::Weighting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "track")
    {
        if(track == nullptr)
        {
            track = std::make_shared<Native::Interface::Vlan::Glbp::Range::Weighting::Track>();
        }
        return track;
    }

    if(child_yang_name == "value")
    {
        for(auto const & c : value_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Vlan::Glbp::Range::Weighting::Value_>();
        c->parent = this;
        value_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::Glbp::Range::Weighting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(track != nullptr)
    {
        children["track"] = track;
    }

    for (auto const & c : value_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Vlan::Glbp::Range::Weighting::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Vlan::Glbp::Range::Weighting::Value_::Value_()
    :
    value_{YType::int8, "value"},
    lower{YType::int8, "lower"},
    upper{YType::int8, "upper"}
{
    yang_name = "value"; yang_parent_name = "weighting";
}

Native::Interface::Vlan::Glbp::Range::Weighting::Value_::~Value_()
{
}

bool Native::Interface::Vlan::Glbp::Range::Weighting::Value_::has_data() const
{
    return value_.is_set
	|| lower.is_set
	|| upper.is_set;
}

bool Native::Interface::Vlan::Glbp::Range::Weighting::Value_::has_operation() const
{
    return is_set(operation)
	|| is_set(value_.operation)
	|| is_set(lower.operation)
	|| is_set(upper.operation);
}

std::string Native::Interface::Vlan::Glbp::Range::Weighting::Value_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "value" <<"[value='" <<value_ <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::Glbp::Range::Weighting::Value_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Value_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (lower.is_set || is_set(lower.operation)) leaf_name_data.push_back(lower.get_name_leafdata());
    if (upper.is_set || is_set(upper.operation)) leaf_name_data.push_back(upper.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::Glbp::Range::Weighting::Value_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::Glbp::Range::Weighting::Value_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::Glbp::Range::Weighting::Value_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "value")
    {
        value_ = value;
    }
    if(value_path == "lower")
    {
        lower = value;
    }
    if(value_path == "upper")
    {
        upper = value;
    }
}

Native::Interface::Vlan::Glbp::Range::Weighting::Track::Track()
{
    yang_name = "track"; yang_parent_name = "weighting";
}

Native::Interface::Vlan::Glbp::Range::Weighting::Track::~Track()
{
}

bool Native::Interface::Vlan::Glbp::Range::Weighting::Track::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::Vlan::Glbp::Range::Weighting::Track::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Interface::Vlan::Glbp::Range::Weighting::Track::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::Glbp::Range::Weighting::Track::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Track' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::Glbp::Range::Weighting::Track::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        for(auto const & c : range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Vlan::Glbp::Range::Weighting::Track::Range_>();
        c->parent = this;
        range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::Glbp::Range::Weighting::Track::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Vlan::Glbp::Range::Weighting::Track::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Vlan::Glbp::Range::Weighting::Track::Range_::Range_()
    :
    range{YType::uint16, "range"},
    decrement{YType::uint8, "decrement"}
{
    yang_name = "range"; yang_parent_name = "track";
}

Native::Interface::Vlan::Glbp::Range::Weighting::Track::Range_::~Range_()
{
}

bool Native::Interface::Vlan::Glbp::Range::Weighting::Track::Range_::has_data() const
{
    return range.is_set
	|| decrement.is_set;
}

bool Native::Interface::Vlan::Glbp::Range::Weighting::Track::Range_::has_operation() const
{
    return is_set(operation)
	|| is_set(range.operation)
	|| is_set(decrement.operation);
}

std::string Native::Interface::Vlan::Glbp::Range::Weighting::Track::Range_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range" <<"[range='" <<range <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::Glbp::Range::Weighting::Track::Range_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Range_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.operation)) leaf_name_data.push_back(range.get_name_leafdata());
    if (decrement.is_set || is_set(decrement.operation)) leaf_name_data.push_back(decrement.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::Glbp::Range::Weighting::Track::Range_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::Glbp::Range::Weighting::Track::Range_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::Glbp::Range::Weighting::Track::Range_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "range")
    {
        range = value;
    }
    if(value_path == "decrement")
    {
        decrement = value;
    }
}

Native::Interface::Vlan::Glbp::Range::Timers::Timers()
    :
    msec(std::make_shared<Native::Interface::Vlan::Glbp::Range::Timers::Msec>())
{
    msec->parent = this;

    yang_name = "timers"; yang_parent_name = "range";
}

Native::Interface::Vlan::Glbp::Range::Timers::~Timers()
{
}

bool Native::Interface::Vlan::Glbp::Range::Timers::has_data() const
{
    return (msec !=  nullptr && msec->has_data());
}

bool Native::Interface::Vlan::Glbp::Range::Timers::has_operation() const
{
    return is_set(operation)
	|| (msec !=  nullptr && msec->has_operation());
}

std::string Native::Interface::Vlan::Glbp::Range::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::Glbp::Range::Timers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Timers' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::Glbp::Range::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "msec")
    {
        if(msec == nullptr)
        {
            msec = std::make_shared<Native::Interface::Vlan::Glbp::Range::Timers::Msec>();
        }
        return msec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::Glbp::Range::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(msec != nullptr)
    {
        children["msec"] = msec;
    }

    return children;
}

void Native::Interface::Vlan::Glbp::Range::Timers::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Vlan::Glbp::Range::Timers::Msec::Msec()
{
    yang_name = "msec"; yang_parent_name = "timers";
}

Native::Interface::Vlan::Glbp::Range::Timers::Msec::~Msec()
{
}

bool Native::Interface::Vlan::Glbp::Range::Timers::Msec::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::Vlan::Glbp::Range::Timers::Msec::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Interface::Vlan::Glbp::Range::Timers::Msec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msec";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::Glbp::Range::Timers::Msec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Msec' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::Glbp::Range::Timers::Msec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        for(auto const & c : range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Vlan::Glbp::Range::Timers::Msec::Range_>();
        c->parent = this;
        range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::Glbp::Range::Timers::Msec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Vlan::Glbp::Range::Timers::Msec::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Vlan::Glbp::Range::Timers::Msec::Range_::Range_()
    :
    range{YType::uint16, "range"},
    range0{YType::uint8, "range0"}
{
    yang_name = "range"; yang_parent_name = "msec";
}

Native::Interface::Vlan::Glbp::Range::Timers::Msec::Range_::~Range_()
{
}

bool Native::Interface::Vlan::Glbp::Range::Timers::Msec::Range_::has_data() const
{
    return range.is_set
	|| range0.is_set;
}

bool Native::Interface::Vlan::Glbp::Range::Timers::Msec::Range_::has_operation() const
{
    return is_set(operation)
	|| is_set(range.operation)
	|| is_set(range0.operation);
}

std::string Native::Interface::Vlan::Glbp::Range::Timers::Msec::Range_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range" <<"[range='" <<range <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::Glbp::Range::Timers::Msec::Range_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Range_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.operation)) leaf_name_data.push_back(range.get_name_leafdata());
    if (range0.is_set || is_set(range0.operation)) leaf_name_data.push_back(range0.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::Glbp::Range::Timers::Msec::Range_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::Glbp::Range::Timers::Msec::Range_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::Glbp::Range::Timers::Msec::Range_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "range")
    {
        range = value;
    }
    if(value_path == "range0")
    {
        range0 = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_SwitchportConf::CiscoIosXeInterfaces_SwitchportConf()
    :
    switchport{YType::boolean, "switchport"}
{
    yang_name = "Cisco-IOS-XE-interfaces_switchport-conf"; yang_parent_name = "Vlan";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_SwitchportConf::~CiscoIosXeInterfaces_SwitchportConf()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_SwitchportConf::has_data() const
{
    return switchport.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_SwitchportConf::has_operation() const
{
    return is_set(operation)
	|| is_set(switchport.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_SwitchportConf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vlan:Cisco-IOS-XE-interfaces_switchport-conf";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_SwitchportConf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CiscoIosXeInterfaces_SwitchportConf' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switchport.is_set || is_set(switchport.operation)) leaf_name_data.push_back(switchport.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_SwitchportConf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_SwitchportConf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_SwitchportConf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "switchport")
    {
        switchport = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Switchport::CiscoIosXeInterfaces_Switchport()
{
    yang_name = "Cisco-IOS-XE-interfaces_switchport"; yang_parent_name = "Vlan";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Switchport::~CiscoIosXeInterfaces_Switchport()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Switchport::has_data() const
{
    return false;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Switchport::has_operation() const
{
    return is_set(operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Switchport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vlan:Cisco-IOS-XE-interfaces_switchport";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Switchport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CiscoIosXeInterfaces_Switchport' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Switchport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Switchport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Switchport::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Arp::CiscoIosXeInterfaces_Arp()
    :
    timeout{YType::uint32, "timeout"}
{
    yang_name = "Cisco-IOS-XE-interfaces_arp"; yang_parent_name = "Vlan";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Arp::~CiscoIosXeInterfaces_Arp()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Arp::has_data() const
{
    return timeout.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Arp::has_operation() const
{
    return is_set(operation)
	|| is_set(timeout.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Arp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vlan:Cisco-IOS-XE-interfaces_arp";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Arp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CiscoIosXeInterfaces_Arp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Arp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Arp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Arp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "timeout")
    {
        timeout = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::CiscoIosXeInterfaces_Backup()
    :
    delay(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Delay>())
	,interface(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_>())
	,load(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Load>())
{
    delay->parent = this;

    interface->parent = this;

    load->parent = this;

    yang_name = "Cisco-IOS-XE-interfaces_backup"; yang_parent_name = "Vlan";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::~CiscoIosXeInterfaces_Backup()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::has_data() const
{
    return (delay !=  nullptr && delay->has_data())
	|| (interface !=  nullptr && interface->has_data())
	|| (load !=  nullptr && load->has_data());
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::has_operation() const
{
    return is_set(operation)
	|| (delay !=  nullptr && delay->has_operation())
	|| (interface !=  nullptr && interface->has_operation())
	|| (load !=  nullptr && load->has_operation());
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vlan:Cisco-IOS-XE-interfaces_backup";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CiscoIosXeInterfaces_Backup' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_>();
        }
        return interface;
    }

    if(child_yang_name == "load")
    {
        if(load == nullptr)
        {
            load = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Load>();
        }
        return load;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    if(load != nullptr)
    {
        children["load"] = load;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Delay::Delay()
    :
    failure{YType::str, "failure"},
    secondary_disable{YType::str, "secondary-disable"}
{
    yang_name = "delay"; yang_parent_name = "Cisco-IOS-XE-interfaces_backup";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Delay::~Delay()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Delay::has_data() const
{
    return failure.is_set
	|| secondary_disable.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Delay::has_operation() const
{
    return is_set(operation)
	|| is_set(failure.operation)
	|| is_set(secondary_disable.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Delay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Delay' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (failure.is_set || is_set(failure.operation)) leaf_name_data.push_back(failure.get_name_leafdata());
    if (secondary_disable.is_set || is_set(secondary_disable.operation)) leaf_name_data.push_back(secondary_disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Delay::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "failure")
    {
        failure = value;
    }
    if(value_path == "secondary-disable")
    {
        secondary_disable = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::Interface_()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cellular{YType::str, "Cellular"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    lisp{YType::uint16, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    serial{YType::str, "Serial"},
    sm{YType::str, "SM"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"},
    virtual_template{YType::uint16, "Virtual-Template"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vlan{YType::uint16, "Vlan"}
    	,
    atm_acrsubinterface(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::AtmAcrsubinterface>())
	,atm_subinterface(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::AtmSubinterface>())
	,lisp_subinterface(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::LispSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::PortChannelSubinterface>())
{
    atm_acrsubinterface->parent = this;

    atm_subinterface->parent = this;

    lisp_subinterface->parent = this;

    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "Cisco-IOS-XE-interfaces_backup";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::~Interface_()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::has_data() const
{
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cellular.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| serial.is_set
	|| sm.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| virtual_template.is_set
	|| virtualportgroup.is_set
	|| vlan.is_set
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::has_operation() const
{
    return is_set(operation)
	|| is_set(appnav_compress.operation)
	|| is_set(appnav_uncompress.operation)
	|| is_set(atm.operation)
	|| is_set(atm_acr.operation)
	|| is_set(bdi.operation)
	|| is_set(cellular.operation)
	|| is_set(cem.operation)
	|| is_set(cem_acr.operation)
	|| is_set(embedded_service_engine.operation)
	|| is_set(fastethernet.operation)
	|| is_set(gigabitethernet.operation)
	|| is_set(lisp.operation)
	|| is_set(loopback.operation)
	|| is_set(multilink.operation)
	|| is_set(nve.operation)
	|| is_set(overlay.operation)
	|| is_set(port_channel.operation)
	|| is_set(pseudowire.operation)
	|| is_set(serial.operation)
	|| is_set(sm.operation)
	|| is_set(tengigabitethernet.operation)
	|| is_set(tunnel.operation)
	|| is_set(vasileft.operation)
	|| is_set(vasiright.operation)
	|| is_set(virtual_template.operation)
	|| is_set(virtualportgroup.operation)
	|| is_set(vlan.operation)
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.operation)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.operation)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.operation)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.operation)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.operation)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.operation)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (cem.is_set || is_set(cem.operation)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.operation)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.operation)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.operation)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.operation)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.operation)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.operation)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.operation)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.operation)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.operation)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.operation)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.operation)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (serial.is_set || is_set(serial.operation)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (sm.is_set || is_set(sm.operation)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.operation)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.operation)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.operation)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.operation)) leaf_name_data.push_back(vasiright.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.operation)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.operation)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.operation)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::AtmAcrsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::AtmSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::LispSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atm_acrsubinterface != nullptr)
    {
        children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(atm_subinterface != nullptr)
    {
        children["ATM-subinterface"] = atm_subinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress = value;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress = value;
    }
    if(value_path == "ATM")
    {
        atm = value;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
    }
    if(value_path == "BDI")
    {
        bdi = value;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
    }
    if(value_path == "CEM")
    {
        cem = value;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr = value;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine = value;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet = value;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
    }
    if(value_path == "LISP")
    {
        lisp = value;
    }
    if(value_path == "Loopback")
    {
        loopback = value;
    }
    if(value_path == "Multilink")
    {
        multilink = value;
    }
    if(value_path == "nve")
    {
        nve = value;
    }
    if(value_path == "overlay")
    {
        overlay = value;
    }
    if(value_path == "Port-channel")
    {
        port_channel = value;
    }
    if(value_path == "pseudowire")
    {
        pseudowire = value;
    }
    if(value_path == "Serial")
    {
        serial = value;
    }
    if(value_path == "SM")
    {
        sm = value;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
    }
    if(value_path == "vasileft")
    {
        vasileft = value;
    }
    if(value_path == "vasiright")
    {
        vasiright = value;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::AtmSubinterface::AtmSubinterface()
    :
    atm{YType::str, "ATM"}
{
    yang_name = "ATM-subinterface"; yang_parent_name = "interface";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::AtmSubinterface::~AtmSubinterface()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::AtmSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::AtmSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(atm.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::AtmSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::AtmSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AtmSubinterface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.operation)) leaf_name_data.push_back(atm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::AtmSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::AtmSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::AtmSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ATM")
    {
        atm = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::AtmAcrsubinterface::AtmAcrsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{
    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::AtmAcrsubinterface::~AtmAcrsubinterface()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::AtmAcrsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::AtmAcrsubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(atm_acr.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::AtmAcrsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::AtmAcrsubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AtmAcrsubinterface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.operation)) leaf_name_data.push_back(atm_acr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::AtmAcrsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::AtmAcrsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::AtmAcrsubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::LispSubinterface::LispSubinterface()
    :
    lisp{YType::str, "LISP"}
{
    yang_name = "LISP-subinterface"; yang_parent_name = "interface";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::LispSubinterface::~LispSubinterface()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::LispSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::LispSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(lisp.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::LispSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::LispSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LispSubinterface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.operation)) leaf_name_data.push_back(lisp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::LispSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::LispSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::LispSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "LISP")
    {
        lisp = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{
    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::PortChannelSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(port_channel.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::PortChannelSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PortChannelSubinterface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.operation)) leaf_name_data.push_back(port_channel.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Interface_::PortChannelSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Load::Load()
    :
    kickin{YType::str, "kickin"},
    kickout{YType::str, "kickout"}
{
    yang_name = "load"; yang_parent_name = "Cisco-IOS-XE-interfaces_backup";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Load::~Load()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Load::has_data() const
{
    return kickin.is_set
	|| kickout.is_set;
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Load::has_operation() const
{
    return is_set(operation)
	|| is_set(kickin.operation)
	|| is_set(kickout.operation);
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Load::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Load::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Load' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (kickin.is_set || is_set(kickin.operation)) leaf_name_data.push_back(kickin.get_name_leafdata());
    if (kickout.is_set || is_set(kickout.operation)) leaf_name_data.push_back(kickout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Load::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Load::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Backup::Load::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "kickin")
    {
        kickin = value;
    }
    if(value_path == "kickout")
    {
        kickout = value;
    }
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Cemoudp::CiscoIosXeInterfaces_Cemoudp()
    :
    reserve(std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Cemoudp::Reserve>())
{
    reserve->parent = this;

    yang_name = "Cisco-IOS-XE-interfaces_cemoudp"; yang_parent_name = "Vlan";
}

Native::Interface::Vlan::CiscoIosXeInterfaces_Cemoudp::~CiscoIosXeInterfaces_Cemoudp()
{
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Cemoudp::has_data() const
{
    return (reserve !=  nullptr && reserve->has_data());
}

bool Native::Interface::Vlan::CiscoIosXeInterfaces_Cemoudp::has_operation() const
{
    return is_set(operation)
	|| (reserve !=  nullptr && reserve->has_operation());
}

std::string Native::Interface::Vlan::CiscoIosXeInterfaces_Cemoudp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vlan:Cisco-IOS-XE-interfaces_cemoudp";

    return path_buffer.str();

}

const EntityPath Native::Interface::Vlan::CiscoIosXeInterfaces_Cemoudp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CiscoIosXeInterfaces_Cemoudp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIosXeInterfaces_Cemoudp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reserve")
    {
        if(reserve == nullptr)
        {
            reserve = std::make_shared<Native::Interface::Vlan::CiscoIosXeInterfaces_Cemoudp::Reserve>();
        }
        return reserve;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIosXeInterfaces_Cemoudp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(reserve != nullptr)
    {
        children["reserve"] = reserve;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIosXeInterfaces_Cemoudp::set_value(const std::string & value_path, std::string value)
{
}

const Enum::YLeaf Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Unicast::Source::ReachableViaEnum::any {0, "any"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Verify::Unicast::Source::ReachableViaEnum::rx {1, "rx"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Nbar::ProtocolDiscovery::Ipv4Ipv6Enum::ipv4 {0, "ipv4"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIosXeInterfaces_Ip::Nbar::ProtocolDiscovery::Ipv4Ipv6Enum::ipv6 {1, "ipv6"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::TrafficFilter::DirectionEnum::in {0, "in"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIosXeInterfaces_Ipv6::TrafficFilter::DirectionEnum::out {1, "out"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIosXeInterfaces_Interface_Qos::Trust::DeviceEnum::cisco_phone {0, "cisco-phone"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::VersionEnum::Y_1 {0, "1"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::VersionEnum::Y_2 {1, "2"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Ipv6Enum::autoconfig {0, "autoconfig"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Authentication::Md5::KeyString::EncryptEnum::Y_0 {0, "0"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Authentication::Md5::KeyString::EncryptEnum::Y_7 {1, "7"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::EncryptEnum::Y_0 {0, "0"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIosXeInterfaces_Standby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::EncryptEnum::Y_7 {1, "7"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIosXeInterfaces_AccessSession::HostModeEnum::multi_auth {0, "multi-auth"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIosXeInterfaces_AccessSession::HostModeEnum::multi_domain {1, "multi-domain"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIosXeInterfaces_AccessSession::HostModeEnum::multi_host {2, "multi-host"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIosXeInterfaces_AccessSession::HostModeEnum::single_host {3, "single-host"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIosXeInterfaces_Trust::DeviceEnum::cisco_phone {0, "cisco-phone"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIosXeInterfaces_Trust::DeviceEnum::cts {1, "cts"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIosXeInterfaces_Trust::DeviceEnum::ip_camera {2, "ip-camera"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIosXeInterfaces_Trust::DeviceEnum::media_player {3, "media-player"};

const Enum::YLeaf Native::Interface::Vlan::Crypto::Ipsec::DfBitEnum::clear {0, "clear"};
const Enum::YLeaf Native::Interface::Vlan::Crypto::Ipsec::DfBitEnum::copy {1, "copy"};
const Enum::YLeaf Native::Interface::Vlan::Crypto::Ipsec::DfBitEnum::set {2, "set"};

const Enum::YLeaf Native::Interface::Vlan::Crypto::Ipsec::FragmentationEnum::after_encryption {0, "after-encryption"};
const Enum::YLeaf Native::Interface::Vlan::Crypto::Ipsec::FragmentationEnum::before_encryption {1, "before-encryption"};

const Enum::YLeaf Native::Interface::Vlan::ServicePolicy::Type::PerformanceMonitor::DirectionEnum::input {0, "input"};
const Enum::YLeaf Native::Interface::Vlan::ServicePolicy::Type::PerformanceMonitor::DirectionEnum::output {1, "output"};


}
}

