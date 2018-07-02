
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv6_io_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv6_io_cfg {

Ipv6Configuration::Ipv6Configuration()
    :
    ipv6_pmtu_time_out{YType::uint32, "ipv6-pmtu-time-out"},
    ipv6_source_route{YType::boolean, "ipv6-source-route"},
    ipv6_pmtu_enable{YType::boolean, "ipv6-pmtu-enable"},
    ipv6_hop_limit{YType::uint32, "ipv6-hop-limit"}
        ,
    ipv6_assembler(std::make_shared<Ipv6Configuration::Ipv6Assembler>())
    , ipv6icmp(nullptr) // presence node
{
    ipv6_assembler->parent = this;

    yang_name = "ipv6-configuration"; yang_parent_name = "Cisco-IOS-XR-ipv6-io-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

Ipv6Configuration::~Ipv6Configuration()
{
}

bool Ipv6Configuration::has_data() const
{
    if (is_presence_container) return true;
    return ipv6_pmtu_time_out.is_set
	|| ipv6_source_route.is_set
	|| ipv6_pmtu_enable.is_set
	|| ipv6_hop_limit.is_set
	|| (ipv6_assembler !=  nullptr && ipv6_assembler->has_data())
	|| (ipv6icmp !=  nullptr && ipv6icmp->has_data());
}

bool Ipv6Configuration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_pmtu_time_out.yfilter)
	|| ydk::is_set(ipv6_source_route.yfilter)
	|| ydk::is_set(ipv6_pmtu_enable.yfilter)
	|| ydk::is_set(ipv6_hop_limit.yfilter)
	|| (ipv6_assembler !=  nullptr && ipv6_assembler->has_operation())
	|| (ipv6icmp !=  nullptr && ipv6icmp->has_operation());
}

std::string Ipv6Configuration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-io-cfg:ipv6-configuration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Configuration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_pmtu_time_out.is_set || is_set(ipv6_pmtu_time_out.yfilter)) leaf_name_data.push_back(ipv6_pmtu_time_out.get_name_leafdata());
    if (ipv6_source_route.is_set || is_set(ipv6_source_route.yfilter)) leaf_name_data.push_back(ipv6_source_route.get_name_leafdata());
    if (ipv6_pmtu_enable.is_set || is_set(ipv6_pmtu_enable.yfilter)) leaf_name_data.push_back(ipv6_pmtu_enable.get_name_leafdata());
    if (ipv6_hop_limit.is_set || is_set(ipv6_hop_limit.yfilter)) leaf_name_data.push_back(ipv6_hop_limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Configuration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-assembler")
    {
        if(ipv6_assembler == nullptr)
        {
            ipv6_assembler = std::make_shared<Ipv6Configuration::Ipv6Assembler>();
        }
        return ipv6_assembler;
    }

    if(child_yang_name == "ipv6icmp")
    {
        if(ipv6icmp == nullptr)
        {
            ipv6icmp = std::make_shared<Ipv6Configuration::Ipv6icmp>();
        }
        return ipv6icmp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Configuration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ipv6_assembler != nullptr)
    {
        children["ipv6-assembler"] = ipv6_assembler;
    }

    if(ipv6icmp != nullptr)
    {
        children["ipv6icmp"] = ipv6icmp;
    }

    return children;
}

void Ipv6Configuration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-pmtu-time-out")
    {
        ipv6_pmtu_time_out = value;
        ipv6_pmtu_time_out.value_namespace = name_space;
        ipv6_pmtu_time_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-source-route")
    {
        ipv6_source_route = value;
        ipv6_source_route.value_namespace = name_space;
        ipv6_source_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-pmtu-enable")
    {
        ipv6_pmtu_enable = value;
        ipv6_pmtu_enable.value_namespace = name_space;
        ipv6_pmtu_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-hop-limit")
    {
        ipv6_hop_limit = value;
        ipv6_hop_limit.value_namespace = name_space;
        ipv6_hop_limit.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Configuration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-pmtu-time-out")
    {
        ipv6_pmtu_time_out.yfilter = yfilter;
    }
    if(value_path == "ipv6-source-route")
    {
        ipv6_source_route.yfilter = yfilter;
    }
    if(value_path == "ipv6-pmtu-enable")
    {
        ipv6_pmtu_enable.yfilter = yfilter;
    }
    if(value_path == "ipv6-hop-limit")
    {
        ipv6_hop_limit.yfilter = yfilter;
    }
}

std::shared_ptr<Entity> Ipv6Configuration::clone_ptr() const
{
    return std::make_shared<Ipv6Configuration>();
}

std::string Ipv6Configuration::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Ipv6Configuration::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Ipv6Configuration::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Ipv6Configuration::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Ipv6Configuration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-assembler" || name == "ipv6icmp" || name == "ipv6-pmtu-time-out" || name == "ipv6-source-route" || name == "ipv6-pmtu-enable" || name == "ipv6-hop-limit")
        return true;
    return false;
}

Ipv6Configuration::Ipv6Assembler::Ipv6Assembler()
    :
    timeout{YType::uint32, "timeout"},
    max_packets{YType::uint32, "max-packets"}
{

    yang_name = "ipv6-assembler"; yang_parent_name = "ipv6-configuration"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipv6Configuration::Ipv6Assembler::~Ipv6Assembler()
{
}

bool Ipv6Configuration::Ipv6Assembler::has_data() const
{
    if (is_presence_container) return true;
    return timeout.is_set
	|| max_packets.is_set;
}

bool Ipv6Configuration::Ipv6Assembler::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(max_packets.yfilter);
}

std::string Ipv6Configuration::Ipv6Assembler::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-io-cfg:ipv6-configuration/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipv6Configuration::Ipv6Assembler::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-assembler";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Configuration::Ipv6Assembler::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (max_packets.is_set || is_set(max_packets.yfilter)) leaf_name_data.push_back(max_packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Configuration::Ipv6Assembler::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Configuration::Ipv6Assembler::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6Configuration::Ipv6Assembler::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-packets")
    {
        max_packets = value;
        max_packets.value_namespace = name_space;
        max_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Configuration::Ipv6Assembler::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "max-packets")
    {
        max_packets.yfilter = yfilter;
    }
}

bool Ipv6Configuration::Ipv6Assembler::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout" || name == "max-packets")
        return true;
    return false;
}

Ipv6Configuration::Ipv6icmp::Ipv6icmp()
    :
    error_interval{YType::uint32, "error-interval"},
    bucket_size{YType::uint32, "bucket-size"}
{

    yang_name = "ipv6icmp"; yang_parent_name = "ipv6-configuration"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Ipv6Configuration::Ipv6icmp::~Ipv6icmp()
{
}

bool Ipv6Configuration::Ipv6icmp::has_data() const
{
    if (is_presence_container) return true;
    return error_interval.is_set
	|| bucket_size.is_set;
}

bool Ipv6Configuration::Ipv6icmp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error_interval.yfilter)
	|| ydk::is_set(bucket_size.yfilter);
}

std::string Ipv6Configuration::Ipv6icmp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-io-cfg:ipv6-configuration/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipv6Configuration::Ipv6icmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6icmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Configuration::Ipv6icmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error_interval.is_set || is_set(error_interval.yfilter)) leaf_name_data.push_back(error_interval.get_name_leafdata());
    if (bucket_size.is_set || is_set(bucket_size.yfilter)) leaf_name_data.push_back(bucket_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Configuration::Ipv6icmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Configuration::Ipv6icmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6Configuration::Ipv6icmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error-interval")
    {
        error_interval = value;
        error_interval.value_namespace = name_space;
        error_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bucket-size")
    {
        bucket_size = value;
        bucket_size.value_namespace = name_space;
        bucket_size.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Configuration::Ipv6icmp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error-interval")
    {
        error_interval.yfilter = yfilter;
    }
    if(value_path == "bucket-size")
    {
        bucket_size.yfilter = yfilter;
    }
}

bool Ipv6Configuration::Ipv6icmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error-interval" || name == "bucket-size")
        return true;
    return false;
}


}
}

