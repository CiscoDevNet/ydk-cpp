
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_fia_hw_profile_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_fia_hw_profile_cfg {

HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths::Ipv4UnicastPrefixLength::Ipv4UnicastPrefixLength()
    :
    	prefix_length{YType::uint32, "prefix-length"},
	 ipv4_unicast_prefix_percent{YType::str, "ipv4-unicast-prefix-percent"}
{
    yang_name = "ipv4-unicast-prefix-length"; yang_parent_name = "ipv4-unicast-prefix-lengths";
}

HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths::Ipv4UnicastPrefixLength::~Ipv4UnicastPrefixLength()
{
}

bool HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths::Ipv4UnicastPrefixLength::has_data() const
{
    return prefix_length.is_set
	|| ipv4_unicast_prefix_percent.is_set;
}

bool HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths::Ipv4UnicastPrefixLength::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix_length.operation)
	|| is_set(ipv4_unicast_prefix_percent.operation);
}

std::string HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths::Ipv4UnicastPrefixLength::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-unicast-prefix-length" <<"[prefix-length='" <<prefix_length.get() <<"']";

    return path_buffer.str();

}

EntityPath HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths::Ipv4UnicastPrefixLength::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/profile/tcam-table/fib-table/ipv4-address/ipv4-unicast/ipv4-unicast-prefix-lengths/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (ipv4_unicast_prefix_percent.is_set || is_set(ipv4_unicast_prefix_percent.operation)) leaf_name_data.push_back(ipv4_unicast_prefix_percent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths::Ipv4UnicastPrefixLength::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths::Ipv4UnicastPrefixLength::get_children()
{
    return children;
}

void HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths::Ipv4UnicastPrefixLength::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "ipv4-unicast-prefix-percent")
    {
        ipv4_unicast_prefix_percent = value;
    }
}

HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths::Ipv4UnicastPrefixLengths()
{
    yang_name = "ipv4-unicast-prefix-lengths"; yang_parent_name = "ipv4-unicast";
}

HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths::~Ipv4UnicastPrefixLengths()
{
}

bool HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths::has_data() const
{
    for (std::size_t index=0; index<ipv4_unicast_prefix_length.size(); index++)
    {
        if(ipv4_unicast_prefix_length[index]->has_data())
            return true;
    }
    return false;
}

bool HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths::has_operation() const
{
    for (std::size_t index=0; index<ipv4_unicast_prefix_length.size(); index++)
    {
        if(ipv4_unicast_prefix_length[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-unicast-prefix-lengths";

    return path_buffer.str();

}

EntityPath HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/profile/tcam-table/fib-table/ipv4-address/ipv4-unicast/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4-unicast-prefix-length")
    {
        for(auto const & c : ipv4_unicast_prefix_length)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths::Ipv4UnicastPrefixLength>();
        c->parent = this;
        ipv4_unicast_prefix_length.push_back(std::move(c));
        children[segment_path] = ipv4_unicast_prefix_length.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths::get_children()
{
    for (auto const & c : ipv4_unicast_prefix_length)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths::set_value(const std::string & value_path, std::string value)
{
}

HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4Unicast()
    :
    	ipv4_unicast_percent{YType::uint32, "ipv4-unicast-percent"}
    	,
    ipv4_unicast_prefix_lengths(std::make_unique<HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths>())
{
    ipv4_unicast_prefix_lengths->parent = this;
    children["ipv4-unicast-prefix-lengths"] = ipv4_unicast_prefix_lengths.get();

    yang_name = "ipv4-unicast"; yang_parent_name = "ipv4-address";
}

HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::~Ipv4Unicast()
{
}

bool HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::has_data() const
{
    return ipv4_unicast_percent.is_set
	|| (ipv4_unicast_prefix_lengths !=  nullptr && ipv4_unicast_prefix_lengths->has_data());
}

bool HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_unicast_percent.operation)
	|| (ipv4_unicast_prefix_lengths !=  nullptr && ipv4_unicast_prefix_lengths->has_operation());
}

std::string HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-unicast";

    return path_buffer.str();

}

EntityPath HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/profile/tcam-table/fib-table/ipv4-address/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_unicast_percent.is_set || is_set(ipv4_unicast_percent.operation)) leaf_name_data.push_back(ipv4_unicast_percent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4-unicast-prefix-lengths")
    {
        if(ipv4_unicast_prefix_lengths != nullptr)
        {
            children["ipv4-unicast-prefix-lengths"] = ipv4_unicast_prefix_lengths.get();
        }
        else
        {
            ipv4_unicast_prefix_lengths = std::make_unique<HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths>();
            ipv4_unicast_prefix_lengths->parent = this;
            children["ipv4-unicast-prefix-lengths"] = ipv4_unicast_prefix_lengths.get();
        }
        return children.at("ipv4-unicast-prefix-lengths");
    }

    return nullptr;
}

std::map<std::string, Entity*> & HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::get_children()
{
    if(children.find("ipv4-unicast-prefix-lengths") == children.end())
    {
        if(ipv4_unicast_prefix_lengths != nullptr)
        {
            children["ipv4-unicast-prefix-lengths"] = ipv4_unicast_prefix_lengths.get();
        }
    }

    return children;
}

void HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-unicast-percent")
    {
        ipv4_unicast_percent = value;
    }
}

HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Address()
    :
    ipv4_unicast(std::make_unique<HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast>())
{
    ipv4_unicast->parent = this;
    children["ipv4-unicast"] = ipv4_unicast.get();

    yang_name = "ipv4-address"; yang_parent_name = "fib-table";
}

HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::~Ipv4Address()
{
}

bool HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::has_data() const
{
    return (ipv4_unicast !=  nullptr && ipv4_unicast->has_data());
}

bool HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::has_operation() const
{
    return is_set(operation)
	|| (ipv4_unicast !=  nullptr && ipv4_unicast->has_operation());
}

std::string HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-address";

    return path_buffer.str();

}

EntityPath HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/profile/tcam-table/fib-table/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4-unicast")
    {
        if(ipv4_unicast != nullptr)
        {
            children["ipv4-unicast"] = ipv4_unicast.get();
        }
        else
        {
            ipv4_unicast = std::make_unique<HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast>();
            ipv4_unicast->parent = this;
            children["ipv4-unicast"] = ipv4_unicast.get();
        }
        return children.at("ipv4-unicast");
    }

    return nullptr;
}

std::map<std::string, Entity*> & HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::get_children()
{
    if(children.find("ipv4-unicast") == children.end())
    {
        if(ipv4_unicast != nullptr)
        {
            children["ipv4-unicast"] = ipv4_unicast.get();
        }
    }

    return children;
}

void HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::set_value(const std::string & value_path, std::string value)
{
}

HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths::Ipv6UnicastPrefixLength::Ipv6UnicastPrefixLength()
    :
    	prefix_length{YType::uint32, "prefix-length"},
	 ipv6_unicast_prefix_percent{YType::str, "ipv6-unicast-prefix-percent"}
{
    yang_name = "ipv6-unicast-prefix-length"; yang_parent_name = "ipv6-unicast-prefix-lengths";
}

HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths::Ipv6UnicastPrefixLength::~Ipv6UnicastPrefixLength()
{
}

bool HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths::Ipv6UnicastPrefixLength::has_data() const
{
    return prefix_length.is_set
	|| ipv6_unicast_prefix_percent.is_set;
}

bool HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths::Ipv6UnicastPrefixLength::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix_length.operation)
	|| is_set(ipv6_unicast_prefix_percent.operation);
}

std::string HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths::Ipv6UnicastPrefixLength::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-unicast-prefix-length" <<"[prefix-length='" <<prefix_length.get() <<"']";

    return path_buffer.str();

}

EntityPath HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths::Ipv6UnicastPrefixLength::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/profile/tcam-table/fib-table/ipv6-address/ipv6-unicast/ipv6-unicast-prefix-lengths/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (ipv6_unicast_prefix_percent.is_set || is_set(ipv6_unicast_prefix_percent.operation)) leaf_name_data.push_back(ipv6_unicast_prefix_percent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths::Ipv6UnicastPrefixLength::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths::Ipv6UnicastPrefixLength::get_children()
{
    return children;
}

void HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths::Ipv6UnicastPrefixLength::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "ipv6-unicast-prefix-percent")
    {
        ipv6_unicast_prefix_percent = value;
    }
}

HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths::Ipv6UnicastPrefixLengths()
{
    yang_name = "ipv6-unicast-prefix-lengths"; yang_parent_name = "ipv6-unicast";
}

HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths::~Ipv6UnicastPrefixLengths()
{
}

bool HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths::has_data() const
{
    for (std::size_t index=0; index<ipv6_unicast_prefix_length.size(); index++)
    {
        if(ipv6_unicast_prefix_length[index]->has_data())
            return true;
    }
    return false;
}

bool HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths::has_operation() const
{
    for (std::size_t index=0; index<ipv6_unicast_prefix_length.size(); index++)
    {
        if(ipv6_unicast_prefix_length[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-unicast-prefix-lengths";

    return path_buffer.str();

}

EntityPath HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/profile/tcam-table/fib-table/ipv6-address/ipv6-unicast/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv6-unicast-prefix-length")
    {
        for(auto const & c : ipv6_unicast_prefix_length)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths::Ipv6UnicastPrefixLength>();
        c->parent = this;
        ipv6_unicast_prefix_length.push_back(std::move(c));
        children[segment_path] = ipv6_unicast_prefix_length.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths::get_children()
{
    for (auto const & c : ipv6_unicast_prefix_length)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths::set_value(const std::string & value_path, std::string value)
{
}

HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6Unicast()
    :
    	ipv6_unicast_percent{YType::uint32, "ipv6-unicast-percent"}
    	,
    ipv6_unicast_prefix_lengths(std::make_unique<HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths>())
{
    ipv6_unicast_prefix_lengths->parent = this;
    children["ipv6-unicast-prefix-lengths"] = ipv6_unicast_prefix_lengths.get();

    yang_name = "ipv6-unicast"; yang_parent_name = "ipv6-address";
}

HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::~Ipv6Unicast()
{
}

bool HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::has_data() const
{
    return ipv6_unicast_percent.is_set
	|| (ipv6_unicast_prefix_lengths !=  nullptr && ipv6_unicast_prefix_lengths->has_data());
}

bool HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_unicast_percent.operation)
	|| (ipv6_unicast_prefix_lengths !=  nullptr && ipv6_unicast_prefix_lengths->has_operation());
}

std::string HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-unicast";

    return path_buffer.str();

}

EntityPath HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/profile/tcam-table/fib-table/ipv6-address/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_unicast_percent.is_set || is_set(ipv6_unicast_percent.operation)) leaf_name_data.push_back(ipv6_unicast_percent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv6-unicast-prefix-lengths")
    {
        if(ipv6_unicast_prefix_lengths != nullptr)
        {
            children["ipv6-unicast-prefix-lengths"] = ipv6_unicast_prefix_lengths.get();
        }
        else
        {
            ipv6_unicast_prefix_lengths = std::make_unique<HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths>();
            ipv6_unicast_prefix_lengths->parent = this;
            children["ipv6-unicast-prefix-lengths"] = ipv6_unicast_prefix_lengths.get();
        }
        return children.at("ipv6-unicast-prefix-lengths");
    }

    return nullptr;
}

std::map<std::string, Entity*> & HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::get_children()
{
    if(children.find("ipv6-unicast-prefix-lengths") == children.end())
    {
        if(ipv6_unicast_prefix_lengths != nullptr)
        {
            children["ipv6-unicast-prefix-lengths"] = ipv6_unicast_prefix_lengths.get();
        }
    }

    return children;
}

void HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-unicast-percent")
    {
        ipv6_unicast_percent = value;
    }
}

HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Address()
    :
    ipv6_unicast(std::make_unique<HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast>())
{
    ipv6_unicast->parent = this;
    children["ipv6-unicast"] = ipv6_unicast.get();

    yang_name = "ipv6-address"; yang_parent_name = "fib-table";
}

HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::~Ipv6Address()
{
}

bool HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::has_data() const
{
    return (ipv6_unicast !=  nullptr && ipv6_unicast->has_data());
}

bool HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::has_operation() const
{
    return is_set(operation)
	|| (ipv6_unicast !=  nullptr && ipv6_unicast->has_operation());
}

std::string HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-address";

    return path_buffer.str();

}

EntityPath HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/profile/tcam-table/fib-table/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv6-unicast")
    {
        if(ipv6_unicast != nullptr)
        {
            children["ipv6-unicast"] = ipv6_unicast.get();
        }
        else
        {
            ipv6_unicast = std::make_unique<HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast>();
            ipv6_unicast->parent = this;
            children["ipv6-unicast"] = ipv6_unicast.get();
        }
        return children.at("ipv6-unicast");
    }

    return nullptr;
}

std::map<std::string, Entity*> & HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::get_children()
{
    if(children.find("ipv6-unicast") == children.end())
    {
        if(ipv6_unicast != nullptr)
        {
            children["ipv6-unicast"] = ipv6_unicast.get();
        }
    }

    return children;
}

void HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::set_value(const std::string & value_path, std::string value)
{
}

HwModuleProfileConfig::Profile::TcamTable::FibTable::FibTable()
    :
    ipv4_address(std::make_unique<HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address>())
	,ipv6_address(std::make_unique<HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address>())
{
    ipv4_address->parent = this;
    children["ipv4-address"] = ipv4_address.get();

    ipv6_address->parent = this;
    children["ipv6-address"] = ipv6_address.get();

    yang_name = "fib-table"; yang_parent_name = "tcam-table";
}

HwModuleProfileConfig::Profile::TcamTable::FibTable::~FibTable()
{
}

bool HwModuleProfileConfig::Profile::TcamTable::FibTable::has_data() const
{
    return (ipv4_address !=  nullptr && ipv4_address->has_data())
	|| (ipv6_address !=  nullptr && ipv6_address->has_data());
}

bool HwModuleProfileConfig::Profile::TcamTable::FibTable::has_operation() const
{
    return is_set(operation)
	|| (ipv4_address !=  nullptr && ipv4_address->has_operation())
	|| (ipv6_address !=  nullptr && ipv6_address->has_operation());
}

std::string HwModuleProfileConfig::Profile::TcamTable::FibTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fib-table";

    return path_buffer.str();

}

EntityPath HwModuleProfileConfig::Profile::TcamTable::FibTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/profile/tcam-table/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HwModuleProfileConfig::Profile::TcamTable::FibTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4-address")
    {
        if(ipv4_address != nullptr)
        {
            children["ipv4-address"] = ipv4_address.get();
        }
        else
        {
            ipv4_address = std::make_unique<HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address>();
            ipv4_address->parent = this;
            children["ipv4-address"] = ipv4_address.get();
        }
        return children.at("ipv4-address");
    }

    if(child_yang_name == "ipv6-address")
    {
        if(ipv6_address != nullptr)
        {
            children["ipv6-address"] = ipv6_address.get();
        }
        else
        {
            ipv6_address = std::make_unique<HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address>();
            ipv6_address->parent = this;
            children["ipv6-address"] = ipv6_address.get();
        }
        return children.at("ipv6-address");
    }

    return nullptr;
}

std::map<std::string, Entity*> & HwModuleProfileConfig::Profile::TcamTable::FibTable::get_children()
{
    if(children.find("ipv4-address") == children.end())
    {
        if(ipv4_address != nullptr)
        {
            children["ipv4-address"] = ipv4_address.get();
        }
    }

    if(children.find("ipv6-address") == children.end())
    {
        if(ipv6_address != nullptr)
        {
            children["ipv6-address"] = ipv6_address.get();
        }
    }

    return children;
}

void HwModuleProfileConfig::Profile::TcamTable::FibTable::set_value(const std::string & value_path, std::string value)
{
}

HwModuleProfileConfig::Profile::TcamTable::TcamTable()
    :
    fib_table(std::make_unique<HwModuleProfileConfig::Profile::TcamTable::FibTable>())
{
    fib_table->parent = this;
    children["fib-table"] = fib_table.get();

    yang_name = "tcam-table"; yang_parent_name = "profile";
}

HwModuleProfileConfig::Profile::TcamTable::~TcamTable()
{
}

bool HwModuleProfileConfig::Profile::TcamTable::has_data() const
{
    return (fib_table !=  nullptr && fib_table->has_data());
}

bool HwModuleProfileConfig::Profile::TcamTable::has_operation() const
{
    return is_set(operation)
	|| (fib_table !=  nullptr && fib_table->has_operation());
}

std::string HwModuleProfileConfig::Profile::TcamTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcam-table";

    return path_buffer.str();

}

EntityPath HwModuleProfileConfig::Profile::TcamTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/profile/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HwModuleProfileConfig::Profile::TcamTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "fib-table")
    {
        if(fib_table != nullptr)
        {
            children["fib-table"] = fib_table.get();
        }
        else
        {
            fib_table = std::make_unique<HwModuleProfileConfig::Profile::TcamTable::FibTable>();
            fib_table->parent = this;
            children["fib-table"] = fib_table.get();
        }
        return children.at("fib-table");
    }

    return nullptr;
}

std::map<std::string, Entity*> & HwModuleProfileConfig::Profile::TcamTable::get_children()
{
    if(children.find("fib-table") == children.end())
    {
        if(fib_table != nullptr)
        {
            children["fib-table"] = fib_table.get();
        }
    }

    return children;
}

void HwModuleProfileConfig::Profile::TcamTable::set_value(const std::string & value_path, std::string value)
{
}

HwModuleProfileConfig::Profile::Profile()
    :
    tcam_table(std::make_unique<HwModuleProfileConfig::Profile::TcamTable>())
{
    tcam_table->parent = this;
    children["tcam-table"] = tcam_table.get();

    yang_name = "profile"; yang_parent_name = "hw-module-profile-config";
}

HwModuleProfileConfig::Profile::~Profile()
{
}

bool HwModuleProfileConfig::Profile::has_data() const
{
    return (tcam_table !=  nullptr && tcam_table->has_data());
}

bool HwModuleProfileConfig::Profile::has_operation() const
{
    return is_set(operation)
	|| (tcam_table !=  nullptr && tcam_table->has_operation());
}

std::string HwModuleProfileConfig::Profile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profile";

    return path_buffer.str();

}

EntityPath HwModuleProfileConfig::Profile::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HwModuleProfileConfig::Profile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tcam-table")
    {
        if(tcam_table != nullptr)
        {
            children["tcam-table"] = tcam_table.get();
        }
        else
        {
            tcam_table = std::make_unique<HwModuleProfileConfig::Profile::TcamTable>();
            tcam_table->parent = this;
            children["tcam-table"] = tcam_table.get();
        }
        return children.at("tcam-table");
    }

    return nullptr;
}

std::map<std::string, Entity*> & HwModuleProfileConfig::Profile::get_children()
{
    if(children.find("tcam-table") == children.end())
    {
        if(tcam_table != nullptr)
        {
            children["tcam-table"] = tcam_table.get();
        }
    }

    return children;
}

void HwModuleProfileConfig::Profile::set_value(const std::string & value_path, std::string value)
{
}

HwModuleProfileConfig::HwModuleProfileConfig()
    :
    profile(std::make_unique<HwModuleProfileConfig::Profile>())
{
    profile->parent = this;
    children["profile"] = profile.get();

    yang_name = "hw-module-profile-config"; yang_parent_name = "Cisco-IOS-XR-fia-hw-profile-cfg";
}

HwModuleProfileConfig::~HwModuleProfileConfig()
{
}

bool HwModuleProfileConfig::has_data() const
{
    return (profile !=  nullptr && profile->has_data());
}

bool HwModuleProfileConfig::has_operation() const
{
    return is_set(operation)
	|| (profile !=  nullptr && profile->has_operation());
}

std::string HwModuleProfileConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config";

    return path_buffer.str();

}

EntityPath HwModuleProfileConfig::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* HwModuleProfileConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "profile")
    {
        if(profile != nullptr)
        {
            children["profile"] = profile.get();
        }
        else
        {
            profile = std::make_unique<HwModuleProfileConfig::Profile>();
            profile->parent = this;
            children["profile"] = profile.get();
        }
        return children.at("profile");
    }

    return nullptr;
}

std::map<std::string, Entity*> & HwModuleProfileConfig::get_children()
{
    if(children.find("profile") == children.end())
    {
        if(profile != nullptr)
        {
            children["profile"] = profile.get();
        }
    }

    return children;
}

void HwModuleProfileConfig::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> HwModuleProfileConfig::clone_ptr()
{
    return std::make_unique<HwModuleProfileConfig>();
}


}
}

