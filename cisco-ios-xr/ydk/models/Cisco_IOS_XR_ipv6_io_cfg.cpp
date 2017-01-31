
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_ipv6_io_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv6_io_cfg {

Ipv6Configuration::Ipv6Assembler::Ipv6Assembler()
    :
    	max_packets{YType::uint32, "max-packets"},
	 timeout{YType::uint32, "timeout"}
{
    yang_name = "ipv6-assembler"; yang_parent_name = "ipv6-configuration";
}

Ipv6Configuration::Ipv6Assembler::~Ipv6Assembler()
{
}

bool Ipv6Configuration::Ipv6Assembler::has_data() const
{
    return max_packets.is_set
	|| timeout.is_set;
}

bool Ipv6Configuration::Ipv6Assembler::has_operation() const
{
    return is_set(operation)
	|| is_set(max_packets.operation)
	|| is_set(timeout.operation);
}

std::string Ipv6Configuration::Ipv6Assembler::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-assembler";

    return path_buffer.str();

}

EntityPath Ipv6Configuration::Ipv6Assembler::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv6-io-cfg:ipv6-configuration/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_packets.is_set || is_set(max_packets.operation)) leaf_name_data.push_back(max_packets.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6Configuration::Ipv6Assembler::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv6Configuration::Ipv6Assembler::get_children()
{
    return children;
}

void Ipv6Configuration::Ipv6Assembler::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-packets")
    {
        max_packets = value;
    }
    if(value_path == "timeout")
    {
        timeout = value;
    }
}

Ipv6Configuration::Ipv6Icmp::Ipv6Icmp()
    :
    	bucket_size{YType::uint32, "bucket-size"},
	 error_interval{YType::uint32, "error-interval"}
{
    yang_name = "ipv6icmp"; yang_parent_name = "ipv6-configuration";
}

Ipv6Configuration::Ipv6Icmp::~Ipv6Icmp()
{
}

bool Ipv6Configuration::Ipv6Icmp::has_data() const
{
    return bucket_size.is_set
	|| error_interval.is_set;
}

bool Ipv6Configuration::Ipv6Icmp::has_operation() const
{
    return is_set(operation)
	|| is_set(bucket_size.operation)
	|| is_set(error_interval.operation);
}

std::string Ipv6Configuration::Ipv6Icmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6icmp";

    return path_buffer.str();

}

EntityPath Ipv6Configuration::Ipv6Icmp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv6-io-cfg:ipv6-configuration/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bucket_size.is_set || is_set(bucket_size.operation)) leaf_name_data.push_back(bucket_size.get_name_leafdata());
    if (error_interval.is_set || is_set(error_interval.operation)) leaf_name_data.push_back(error_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6Configuration::Ipv6Icmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv6Configuration::Ipv6Icmp::get_children()
{
    return children;
}

void Ipv6Configuration::Ipv6Icmp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bucket-size")
    {
        bucket_size = value;
    }
    if(value_path == "error-interval")
    {
        error_interval = value;
    }
}

Ipv6Configuration::Ipv6Configuration()
    :
    	ipv6_hop_limit{YType::uint32, "ipv6-hop-limit"},
	 ipv6_pmtu_enable{YType::boolean, "ipv6-pmtu-enable"},
	 ipv6_pmtu_time_out{YType::uint32, "ipv6-pmtu-time-out"},
	 ipv6_source_route{YType::boolean, "ipv6-source-route"}
    	,
    ipv6_assembler(std::make_unique<Ipv6Configuration::Ipv6Assembler>())
	,ipv6icmp(nullptr) // presence node
{
    ipv6_assembler->parent = this;
    children["ipv6-assembler"] = ipv6_assembler.get();

    yang_name = "ipv6-configuration"; yang_parent_name = "Cisco-IOS-XR-ipv6-io-cfg";
}

Ipv6Configuration::~Ipv6Configuration()
{
}

bool Ipv6Configuration::has_data() const
{
    return ipv6_hop_limit.is_set
	|| ipv6_pmtu_enable.is_set
	|| ipv6_pmtu_time_out.is_set
	|| ipv6_source_route.is_set
	|| (ipv6_assembler !=  nullptr && ipv6_assembler->has_data())
	|| (ipv6icmp !=  nullptr && ipv6icmp->has_data());
}

bool Ipv6Configuration::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_hop_limit.operation)
	|| is_set(ipv6_pmtu_enable.operation)
	|| is_set(ipv6_pmtu_time_out.operation)
	|| is_set(ipv6_source_route.operation)
	|| (ipv6_assembler !=  nullptr && ipv6_assembler->has_operation())
	|| (ipv6icmp !=  nullptr && ipv6icmp->has_operation());
}

std::string Ipv6Configuration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-io-cfg:ipv6-configuration";

    return path_buffer.str();

}

EntityPath Ipv6Configuration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_hop_limit.is_set || is_set(ipv6_hop_limit.operation)) leaf_name_data.push_back(ipv6_hop_limit.get_name_leafdata());
    if (ipv6_pmtu_enable.is_set || is_set(ipv6_pmtu_enable.operation)) leaf_name_data.push_back(ipv6_pmtu_enable.get_name_leafdata());
    if (ipv6_pmtu_time_out.is_set || is_set(ipv6_pmtu_time_out.operation)) leaf_name_data.push_back(ipv6_pmtu_time_out.get_name_leafdata());
    if (ipv6_source_route.is_set || is_set(ipv6_source_route.operation)) leaf_name_data.push_back(ipv6_source_route.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6Configuration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv6-assembler")
    {
        if(ipv6_assembler != nullptr)
        {
            children["ipv6-assembler"] = ipv6_assembler.get();
        }
        else
        {
            ipv6_assembler = std::make_unique<Ipv6Configuration::Ipv6Assembler>();
            ipv6_assembler->parent = this;
            children["ipv6-assembler"] = ipv6_assembler.get();
        }
        return children.at("ipv6-assembler");
    }

    if(child_yang_name == "ipv6icmp")
    {
        if(ipv6icmp != nullptr)
        {
            children["ipv6icmp"] = ipv6icmp.get();
        }
        else
        {
            ipv6icmp = std::make_unique<Ipv6Configuration::Ipv6Icmp>();
            ipv6icmp->parent = this;
            children["ipv6icmp"] = ipv6icmp.get();
        }
        return children.at("ipv6icmp");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv6Configuration::get_children()
{
    if(children.find("ipv6-assembler") == children.end())
    {
        if(ipv6_assembler != nullptr)
        {
            children["ipv6-assembler"] = ipv6_assembler.get();
        }
    }

    if(children.find("ipv6icmp") == children.end())
    {
        if(ipv6icmp != nullptr)
        {
            children["ipv6icmp"] = ipv6icmp.get();
        }
    }

    return children;
}

void Ipv6Configuration::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-hop-limit")
    {
        ipv6_hop_limit = value;
    }
    if(value_path == "ipv6-pmtu-enable")
    {
        ipv6_pmtu_enable = value;
    }
    if(value_path == "ipv6-pmtu-time-out")
    {
        ipv6_pmtu_time_out = value;
    }
    if(value_path == "ipv6-source-route")
    {
        ipv6_source_route = value;
    }
}

std::unique_ptr<Entity> Ipv6Configuration::clone_ptr()
{
    return std::make_unique<Ipv6Configuration>();
}


}
}

